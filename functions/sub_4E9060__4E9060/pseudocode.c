// Verified: inserts a non-null TESConnectedPoint only if no existing node at that position is found. Buckets the point by packed exterior-cell coordinates (signed X and Y each arithmetic-shifted by 12), creates a BSSimpleList header when absent, pushes the node, and increments the Road node count.
void __thiscall TESRoad_AddConnectedPointIfMissing(TESRoad *this, TESConnectedPoint *point)
{
  TESConnectedPoint *v2; // ebp
  NiPoint3 *Position; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  _DWORD *v8; // ebx
  TESConnectedPoint *v9; // ecx
  int v10; // eax
  int v11; // eax
  TESConnectedPoint *v12; // [esp+8h] [ebp-8h]

  v2 = point; /*0x4e9065*/
  if ( point ) /*0x4e9071*/
  {
    Position = TESConnectedPoint_GetPosition(point); /*0x4e9079*/
    if ( !TESRoad_FindConnectedPointByPosition(this, Position) ) /*0x4e9081*/
    {
      point = (TESConnectedPoint *)(int)TESConnectedPoint_GetPosition(v2)->x; /*0x4e90a1*/
      v5 = (int)point >> 0xC; /*0x4e90ab*/
      v6 = (int)TESConnectedPoint_GetPosition(v2)->y >> 0xC; /*0x4e90c6*/
      v7 = TESObjectCELL_PackExteriorGroupLabel(v5, v6); /*0x4e90cb*/
      v8 = (_DWORD *)((char *)this + 0x1C); /*0x4e90d8*/
      point = 0; /*0x4e90de*/
      NiTMap_GetAt(v8, v7, &point); /*0x4e90e6*/
      v9 = point; /*0x4e90f1*/
      if ( !point ) /*0x4e90f3*/
      {
        v10 = FormHeapAlloc(8u); /*0x4e90f7*/
        if ( v10 ) /*0x4e9103*/
        {
          *(_DWORD *)v10 = 0; /*0x4e9105*/
          *(_DWORD *)(v10 + 4) = 0; /*0x4e9107*/
          point = (TESConnectedPoint *)v10; /*0x4e910a*/
        }
        else
        {
          point = 0; /*0x4e9110*/
        }
        v12 = point; /*0x4e911a*/
        v11 = TESObjectCELL_PackExteriorGroupLabel(v5, v6); /*0x4e911e*/
        NiTMap_SetAt(v8, v11, (int)point); /*0x4e912e*/
        v9 = v12; /*0x4e9133*/
      }
      BSSimpleList_PushFront(v9, (int)v2); /*0x4e9138*/
      ++*((_DWORD *)this + 6); /*0x4e9141*/
    }
  }
}
