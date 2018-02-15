/**
* !Created By Taha HICHRI
* @project    Bluetooth Support for UNREAL engine.
* @author     Taha HICHRI <hishri.taha@gmail.com>
* @see        https://github.com/hishriTaha
* hishri.com - 2018
*/

#pragma once


#include "Core.h"
#include "EngineMinimal.h"
#include "../Blueprint/BluetoothDevice.h"


class IBluetoothOperationsInterface
{ 
public:
	virtual bool IsEnabled() = 0;
	virtual bool EnableBluetoothAdapter() = 0;
	virtual bool DisableBluetoothAdapter() = 0;
	virtual bool IsBLESupported() =	0;
	virtual bool IsScanning() = 0;

	virtual bool ScanBLEdevices(int32 scanTimeout) = 0;
	virtual bool ScanByCharacteristic(int32 scanTimeout, FString characteristicUUID) = 0;
	virtual void StopScan() = 0;
	virtual TArray<UBluetoothDevice*> GetDiscoveredDevices() = 0;
	virtual void ClearDiscoveredDevicesList() = 0;
};

