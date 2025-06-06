/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleH.js
 */

#pragma once

#include <ReactCommon/TurboModule.h>
#include <react/bridging/Bridging.h>

namespace facebook::react {


  class JSI_EXPORT NativeTenxMdkBleCxxSpecJSI : public TurboModule {
protected:
  NativeTenxMdkBleCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

public:
  virtual jsi::Value scanLeDevice(jsi::Runtime &rt, std::optional<double> scanInterval) = 0;
  virtual jsi::Value connect(jsi::Runtime &rt, jsi::String deviceIdentifier) = 0;
  virtual jsi::Value disconnect(jsi::Runtime &rt) = 0;
  virtual jsi::Value discoverServicesAndCharacteristics(jsi::Runtime &rt) = 0;
  virtual jsi::Value readCharacteristic(jsi::Runtime &rt, jsi::String characteristicUUID) = 0;
  virtual jsi::Value writeCharacteristic(jsi::Runtime &rt, jsi::String characteristicUUID, jsi::Object value) = 0;
  virtual jsi::Value setCharacteristicNotification(jsi::Runtime &rt, jsi::String serviceUUID, jsi::String characteristicUUID, bool enabled) = 0;
  virtual jsi::Value bondDevice(jsi::Runtime &rt, jsi::String device) = 0;
  virtual void addListener(jsi::Runtime &rt, jsi::String eventName) = 0;
  virtual void removeListener(jsi::Runtime &rt, jsi::String eventName) = 0;

};

template <typename T>
class JSI_EXPORT NativeTenxMdkBleCxxSpec : public TurboModule {
public:
  jsi::Value get(jsi::Runtime &rt, const jsi::PropNameID &propName) override {
    return delegate_.get(rt, propName);
  }

  static constexpr std::string_view kModuleName = "TenxMdkBle";

protected:
  NativeTenxMdkBleCxxSpec(std::shared_ptr<CallInvoker> jsInvoker)
    : TurboModule(std::string{NativeTenxMdkBleCxxSpec::kModuleName}, jsInvoker),
      delegate_(reinterpret_cast<T*>(this), jsInvoker) {}


private:
  class Delegate : public NativeTenxMdkBleCxxSpecJSI {
  public:
    Delegate(T *instance, std::shared_ptr<CallInvoker> jsInvoker) :
      NativeTenxMdkBleCxxSpecJSI(std::move(jsInvoker)), instance_(instance) {

    }

    jsi::Value scanLeDevice(jsi::Runtime &rt, std::optional<double> scanInterval) override {
      static_assert(
          bridging::getParameterCount(&T::scanLeDevice) == 2,
          "Expected scanLeDevice(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::scanLeDevice, jsInvoker_, instance_, std::move(scanInterval));
    }
    jsi::Value connect(jsi::Runtime &rt, jsi::String deviceIdentifier) override {
      static_assert(
          bridging::getParameterCount(&T::connect) == 2,
          "Expected connect(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::connect, jsInvoker_, instance_, std::move(deviceIdentifier));
    }
    jsi::Value disconnect(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::disconnect) == 1,
          "Expected disconnect(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::disconnect, jsInvoker_, instance_);
    }
    jsi::Value discoverServicesAndCharacteristics(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::discoverServicesAndCharacteristics) == 1,
          "Expected discoverServicesAndCharacteristics(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::discoverServicesAndCharacteristics, jsInvoker_, instance_);
    }
    jsi::Value readCharacteristic(jsi::Runtime &rt, jsi::String characteristicUUID) override {
      static_assert(
          bridging::getParameterCount(&T::readCharacteristic) == 2,
          "Expected readCharacteristic(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::readCharacteristic, jsInvoker_, instance_, std::move(characteristicUUID));
    }
    jsi::Value writeCharacteristic(jsi::Runtime &rt, jsi::String characteristicUUID, jsi::Object value) override {
      static_assert(
          bridging::getParameterCount(&T::writeCharacteristic) == 3,
          "Expected writeCharacteristic(...) to have 3 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::writeCharacteristic, jsInvoker_, instance_, std::move(characteristicUUID), std::move(value));
    }
    jsi::Value setCharacteristicNotification(jsi::Runtime &rt, jsi::String serviceUUID, jsi::String characteristicUUID, bool enabled) override {
      static_assert(
          bridging::getParameterCount(&T::setCharacteristicNotification) == 4,
          "Expected setCharacteristicNotification(...) to have 4 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::setCharacteristicNotification, jsInvoker_, instance_, std::move(serviceUUID), std::move(characteristicUUID), std::move(enabled));
    }
    jsi::Value bondDevice(jsi::Runtime &rt, jsi::String device) override {
      static_assert(
          bridging::getParameterCount(&T::bondDevice) == 2,
          "Expected bondDevice(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::bondDevice, jsInvoker_, instance_, std::move(device));
    }
    void addListener(jsi::Runtime &rt, jsi::String eventName) override {
      static_assert(
          bridging::getParameterCount(&T::addListener) == 2,
          "Expected addListener(...) to have 2 parameters");

      return bridging::callFromJs<void>(
          rt, &T::addListener, jsInvoker_, instance_, std::move(eventName));
    }
    void removeListener(jsi::Runtime &rt, jsi::String eventName) override {
      static_assert(
          bridging::getParameterCount(&T::removeListener) == 2,
          "Expected removeListener(...) to have 2 parameters");

      return bridging::callFromJs<void>(
          rt, &T::removeListener, jsInvoker_, instance_, std::move(eventName));
    }

  private:
    friend class NativeTenxMdkBleCxxSpec;
    T *instance_;
  };

  Delegate delegate_;
};

} // namespace facebook::react
