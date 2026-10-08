struct TESSaveLoadGame_SerializationView
{
ChangesMap *currentChangesMap; ///< Verified: pre-load/current ChangeData map. Existing entries are consulted and reconciled during loading; sub464440 replaces this pointer with the incoming map after finalization.
ChangesMap *incomingChangesMap; ///< Verified: incoming/staged ChangeData map. LoadGame allocates at 465B19, writes loaded flags/buffers at 46665C/466829; sub464440 promotes it into currentChangesMap and clears this slot.
InteriorCellNewReferencesMap *interiorNewReferencesMap;
ExteriorCellNewReferencesMap *exteriorNewReferencesMap;
ExteriorCellNewReferencesMap *exteriorCellChangesMap;
unsigned __int8 *bufferCursor;
unsigned int flags;
unsigned __int8 unknown1C[20];
SaveLoadDeferredFormNode deferredDeleteList;
unsigned __int8 unknown38[12];
unsigned int resetSelector;
unsigned __int8 unknown48[44];
NiTLargeArrayUInt32 *irefTable;
NiTLargeArrayUInt32 *worldspaceIDArray;
unsigned __int8 currentVersion;
unsigned __int8 useIrefEncoding;
unsigned __int8 unknown7E[2];
void *currentlyLoadingFormHeader;
void *currentlySavingFormHeader;
};
