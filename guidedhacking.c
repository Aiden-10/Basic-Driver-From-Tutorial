#pragma warning (disable : 4100)


#include "guidedhacking.h"
#include "messages.h"

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegisrtyPath)
{
	pDriverObject->DriverUnload = UnloadDriver;

	DebugMessage("Driver Loaded");

	return STATUS_SUCCESS;
}

NTSTATUS UnloadDriver(PDRIVER_OBJECT pDriverObject) 
{
	DebugMessage("Driver Unloaded");
	return STATUS_SUCCESS;
}