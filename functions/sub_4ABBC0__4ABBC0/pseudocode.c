char __thiscall sub_4ABBC0(TESForm *this, Data *a1)
{
  UInt32 i; // eax
  float *v5; // eax
  float *v6; // eax
  int v7[3]; // [esp+0h] [ebp-10h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x3E )
    return 0;
  this->vtbl->Unk_06(this);
  TESFile_InitializeFormFromRecord(a1, this, v7[0], v7[1]);
  TESForm_SetIsLinked(this, 0);
  for ( i = TESFile_GetChunkType(a1); i; i = TESFile_GetChunkType(a1) )
  {
    switch ( i )
    {
      case 0x44415343u:
        if ( *((_DWORD *)this + 0x25) )
        {
          FormHeapFree(*((_DWORD *)this + 0x25));
          *((_DWORD *)this + 0x25) = 0;
        }
        v5 = (float *)FormHeapAlloc(0x54u);
        if ( v5 )
          v6 = sub_4A9BF0(v5);
        else
          v6 = 0;
        *((_DWORD *)this + 0x25) = v6;
        TESFile_GetChunkData(a1, (char *)v6, 0x54u);
        *((_BYTE *)this + 0x68) |= 1u;
        break;
      case 0x44494445u:
        _alloca_();
        TESFile_GetChunkData(a1, (char *)v7, 0x200u);
        this->vtbl->SetEditorID(this, (const char *)v7);
        break;
      case 0x44545343u:
        _memset(this + 1, 0, 0x7C);
        *((float *)this + 0x1B) = 1.0;
        *((float *)this + 0x1C) = 1.0;
        *((float *)this + 0x1D) = fAIDefaultSwitchToMeleeDistance;
        *((float *)this + 0x1E) = fAIDefaultSwitchToRangedDistance;
        *((float *)this + 0x1F) = fAIDefaultBuffStandoffDistance;
        *((float *)this + 0x20) = fAIDefaultRangedStandoffDistance;
        *((float *)this + 0x21) = fAIDefaultGroupStandoffDistance;
        *((_BYTE *)this + 0x88) = byte_B35778;
        *((float *)this + 0x23) = fAIDefaultRushingAttackDistanceMult;
        TESFile_GetChunkData(a1, (char *)this + 0x18, 0x7Cu);
        if ( *((float *)this + 0x1D) <= 0.0 )
          *((float *)this + 0x1D) = fAIDefaultSwitchToMeleeDistance;
        if ( *((float *)this + 0x1E) <= 0.0 )
          *((float *)this + 0x1E) = fAIDefaultSwitchToRangedDistance;
        if ( *((char *)this + 0x88) <= 0 )
          *((_BYTE *)this + 0x88) = byte_B35778;
        if ( *((float *)this + 0x23) <= 0.0 )
          *((float *)this + 0x23) = fAIDefaultRushingAttackDistanceMult;
        break;
    }
    if ( !TESFile_GetNextChunk(a1) )
      break;
  }
  return 1;
}
