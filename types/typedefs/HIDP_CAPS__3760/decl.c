struct _HIDP_CAPS
{
USAGE Usage;
USAGE UsagePage;
USHORT InputReportByteLength;
USHORT OutputReportByteLength;
USHORT FeatureReportByteLength;
USHORT Reserved[17];
USHORT NumberLinkCollectionNodes;
USHORT NumberInputButtonCaps;
USHORT NumberInputValueCaps;
USHORT NumberInputDataIndices;
USHORT NumberOutputButtonCaps;
USHORT NumberOutputValueCaps;
USHORT NumberOutputDataIndices;
USHORT NumberFeatureButtonCaps;
USHORT NumberFeatureValueCaps;
USHORT NumberFeatureDataIndices;
};
