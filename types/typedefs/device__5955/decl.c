struct device
{
DeviceInfoSet *set;
HKEY key;
BOOL phantom;
WCHAR_0 *instanceId;
list interfaces;
GUID class;
DEVINST devnode;
list entry;
BOOL removed;
SP_DEVINSTALL_PARAMS_W params;
driver *drivers;
unsigned int driver_count;
driver *selected_driver;
};
