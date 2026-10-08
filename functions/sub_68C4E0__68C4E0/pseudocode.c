void __thiscall sub_68C4E0(TeleportData **this, TESConnectedPoint *a2, NiDX92DBufferData *a3, _DWORD *a4)
{
  char *CastingType; // edi
  NiDX92DBufferData *v5; // esi
  int v6; // ebp
  char v7; // bl
  _DWORD *v8; // eax
  TeleportData *v9; // esi
  NiPoint3 *Position; // eax
  char IsPreferred; // al
  char IsBelowWaterFlagSet; // al
  char IsUnderwaterCacheSet; // al

  CastingType = (char *)a2; /*0x68c509*/
  if ( a2 ) /*0x68c50f*/
  {
    v5 = a3; /*0x68c515*/
    v6 = 0; /*0x68c51c*/
    a2 = (TESConnectedPoint *)*(this + 1); /*0x68c520*/
    if ( a3 ) /*0x68c524*/
    {
      if ( sub_68BF60((NiDX92DBufferData **)this, a3, (NiDX92DBufferData **)&a2) ) /*0x68c52c*/
        v6 = (int)v5; /*0x68c535*/
    }
    v7 = (char)a4; /*0x68c537*/
    do /*0x68c5db*/
    {
      v8 = (_DWORD *)FormHeapAlloc(0x14u); /*0x68c542*/
      a4 = v8; /*0x68c54a*/
      v9 = 0; /*0x68c54e*/
      if ( v8 ) /*0x68c556*/
        v9 = (TeleportData *)sub_68CB30(v8); /*0x68c55f*/
      Position = PathGraphNode_GetPosition(CastingType); /*0x68c56b*/
      TeleportData::SetTeleportPosition(v9, Position); /*0x68c573*/
      sub_68CA30(v9, 1); /*0x68c57c*/
      if ( !v7 ) /*0x68c583*/
      {
        IsPreferred = PathGraphNode_IsPreferred(CastingType); /*0x68c587*/
        sub_68CA60(v9, IsPreferred); /*0x68c58f*/
      }
      IsBelowWaterFlagSet = GraphNode_IsBelowWaterFlagSet(CastingType); /*0x68c596*/
      sub_68CA90(v9, IsBelowWaterFlagSet); /*0x68c59e*/
      IsUnderwaterCacheSet = PathGraphNode_IsUnderwaterCacheSet(CastingType); /*0x68c5a5*/
      sub_68CAC0(v9, IsUnderwaterCacheSet); /*0x68c5ad*/
      sub_68CB10(v9, 1); /*0x68c5b6*/
      sub_6A2FD0(v9, v6); /*0x68c5be*/
      if ( !v6 ) /*0x68c5c5*/
        *(this + 1) = v9; /*0x68c5cb*/
      v6 = (int)v9; /*0x68c5d0*/
      CastingType = (char *)TESEnchantableForm_GetCastingType(CastingType); /*0x68c5d7*/
    }
    while ( CastingType ); /*0x68c5db*/
    if ( a2 ) /*0x68c5e7*/
      sub_6A2FD0(a2, (int)v9); /*0x68c5ea*/
    else
      *this = v9; /*0x68c5f5*/
  }
}
