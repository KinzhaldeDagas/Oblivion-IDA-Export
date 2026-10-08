enum _PNP_VETO_TYPE : __int32
{
PNP_VetoTypeUnknown = 0x0,
PNP_VetoLegacyDevice = 0x1,
PNP_VetoPendingClose = 0x2,
PNP_VetoWindowsApp = 0x3,
PNP_VetoWindowsService = 0x4,
PNP_VetoOutstandingOpen = 0x5,
PNP_VetoDevice = 0x6,
PNP_VetoDriver = 0x7,
PNP_VetoIllegalDeviceRequest = 0x8,
PNP_VetoInsufficientPower = 0x9,
PNP_VetoNonDisableable = 0xA,
PNP_VetoLegacyDriver = 0xB,
PNP_VetoInsufficientRights = 0xC,
};
