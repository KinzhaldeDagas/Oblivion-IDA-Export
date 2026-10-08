struct TESRegionList
{
TESRegionListVtable *vtable; ///< Verified RTTI-identified TESRegionList object vtable.
OblivionRegionListNode regions; ///< Verified inline BSSimpleList head of TESRegion* entries at +0x4.
unsigned __int8 ownsRegionMemory; ///< Verified constructor flag: when set, Clear/dtor destroys region objects; default DataHandler-owned list is constructed with ownership=1.
unsigned __int8 padding0D[3]; ///< Padding.
};
