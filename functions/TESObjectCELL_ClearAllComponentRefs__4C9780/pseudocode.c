void __thiscall TESObjectCELL_ClearAllComponentRefs(int this)
{
  ExtraDataList_RemoveAllNonpersistentCellData((ExtraDataList *)(this + 0x28)); /*0x4c9786*/
  FormHeapFree(*(_DWORD *)(this + 0x3C)); /*0x4c978f*/
  *(_DWORD *)(this + 0x3C) = 0; /*0x4c9797*/
}
