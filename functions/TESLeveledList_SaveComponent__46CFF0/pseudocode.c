_DWORD *__thiscall TESLeveledList_SaveComponent(int this)
{
  _DWORD *result; // eax
  int i; // esi
  int v4; // ecx
  __int16 v5; // dx
  __int16 v6; // ax
  size_t v7; // [esp-10h] [ebp-20h]
  size_t v8; // [esp-4h] [ebp-14h]
  size_t v9; // [esp-4h] [ebp-14h]
  __int16 Src; // [esp+4h] [ebp-Ch] BYREF
  int v11; // [esp+8h] [ebp-8h]
  __int16 v12; // [esp+Ch] [ebp-4h]

  LODWORD(v8) = 1; /*0x46cff6*/
  TESForm_PutFormRecordChunkData(0x444C564C, (void *)(this + 0xC), v8); /*0x46d001*/
  LODWORD(v7) = 1; /*0x46d006*/
  result = TESForm_PutFormRecordChunkData(0x464C564C, (void *)(this + 0xD), v7); /*0x46d011*/
  for ( i = this + 4; i; i = *(_DWORD *)(i + 4) ) /*0x46d01c*/
  {
    result = *(_DWORD **)i; /*0x46d020*/
    if ( !*(_DWORD *)i ) /*0x46d020*/
      break; /*0x46d024*/
    v4 = *(_DWORD *)(result[1] + 0xC); /*0x46d029*/
    v5 = *(_WORD *)result; /*0x46d02c*/
    v6 = *((_WORD *)result + 4); /*0x46d02f*/
    v11 = v4; /*0x46d033*/
    LODWORD(v9) = 0xC; /*0x46d037*/
    Src = v5; /*0x46d043*/
    v12 = v6; /*0x46d048*/
    result = TESForm_PutFormRecordChunkData(0x4F4C564C, &Src, v9); /*0x46d04d*/
  }
  return result; /*0x46d05c*/
}
