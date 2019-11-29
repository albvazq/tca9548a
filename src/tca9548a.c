#include <tca9548a.h>

#ifdef __cplusplus
extern "C" {
#endif
void setMux(unsigned int muxAddress, unsigned int channel) {
  // Set channel on sensor mux
  i2c_start(*getBus());
  i2c_send_byte(*getBus(), muxAddress << 1 | I2C_WRITE);
  i2c_send_byte(*getBus(), 1 << channel);
  i2c_stop(*getBus());
}
#ifdef __cplusplus
}
#endif