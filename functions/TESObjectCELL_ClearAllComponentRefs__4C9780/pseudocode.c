void __thiscall TESObjectCELL_ClearAllComponentRefs(int this)
{
  ExtraDataList_RemoveAllNonpersistentCellData((ExtraDataList *)(this + 0x28));
  FormHeapFree(*(_DWORD *)(this + 0x3C));
  *(_DWORD *)(this + 0x3C) = 0;
}
