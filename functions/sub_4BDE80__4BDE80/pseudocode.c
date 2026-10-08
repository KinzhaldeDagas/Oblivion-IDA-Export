// Verified duplicate-cell check: packs exterior coordinates and performs GetAt through map vtable +0x04. Releases the temporary task smart pointer and returns whether that cell already has a DistantLODLoaderTask.
bool __thiscall DistantLODLoaderTaskMap_HasCellTask(LockFreeMap *this, __int16 groupX, unsigned int groupY)
{
  int v4; // eax
  char v5; // bl
  void (__thiscall ***v6)(_DWORD, int); // esi

  v4 = TESObjectCELL_PackExteriorGroupLabel(groupX, groupY); /*0x4bdeae*/
  groupY = 0; /*0x4bdeb6*/
  v5 = (*((int (__thiscall **)(LockFreeMap *, int, unsigned int *))this->vtbl + 1))(this, v4, &groupY); /*0x4bded5*/
  if ( groupY ) /*0x4bdee5*/
  {
    v6 = (void (__thiscall ***)(_DWORD, int))groupY; /*0x4bdee7*/
    if ( !InterlockedDecrement((volatile LONG *)(groupY + 8)) ) /*0x4bdeed*/
      (**v6)(v6, 1); /*0x4bdf03*/
  }
  return v5; /*0x4bdf07*/
}
