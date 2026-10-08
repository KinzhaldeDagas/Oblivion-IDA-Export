struct tagDDDEVICEIDENTIFIER2
{
char szDriver[512];
char szDescription[512];
LARGE_INTEGER liDriverVersion;
DWORD dwVendorId;
DWORD dwDeviceId;
DWORD dwSubSysId;
DWORD dwRevision;
GUID guidDeviceIdentifier;
DWORD dwWHQLLevel;
};
