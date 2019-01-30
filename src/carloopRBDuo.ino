/*
 * Project carloopRBDuo
 * Description:
 * Author:
 * Date:
 */

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  ble.init()
  ble.onConnectedCallback(deviceConnectedCallback);
  ble.onDisconnectedCallback(deviceDisconnectedCallback);
  ble.onDataWriteCallback(gattWriteCallback);
}

void deviceConnectedCallback(BLEStatus_t status, uint16_t handle) {
  switch (status) {
    case BLE_STATUS_OK:
      Serial.println("Device connected!");
      break;
    default: break;
  }
}

void deviceDisconnectedCallback(uint16_t handle) {
  Serial.println("Disconnected.");
}

int gattWriteCallback(uint16_t value_handle, uint8_t *buf, uint16_t size) {
  Serial.println("GATT written.")
}
// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

}