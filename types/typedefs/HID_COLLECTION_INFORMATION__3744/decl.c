struct _HID_COLLECTION_INFORMATION
{
ULONG DescriptorSize;
BOOLEAN Polled;
UCHAR Reserved1[1];
USHORT VendorID;
USHORT ProductID;
USHORT VersionNumber;
};
