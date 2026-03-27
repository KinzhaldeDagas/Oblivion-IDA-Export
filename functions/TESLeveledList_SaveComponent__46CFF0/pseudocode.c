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

  LODWORD(v8) = 1;
  TESForm_PutFormRecordChunkData(0x444C564C, (void *)(this + 0xC), v8);
  LODWORD(v7) = 1;
  result = TESForm_PutFormRecordChunkData(0x464C564C, (void *)(this + 0xD), v7);
  for ( i = this + 4; i; i = *(_DWORD *)(i + 4) )
  {
    result = *(_DWORD **)i;
    if ( !*(_DWORD *)i )
      break;
    v4 = *(_DWORD *)(result[1] + 0xC);
    v5 = *(_WORD *)result;
    v6 = *((_WORD *)result + 4);
    v11 = v4;
    LODWORD(v9) = 0xC;
    Src = v5;
    v12 = v6;
    result = TESForm_PutFormRecordChunkData(0x4F4C564C, &Src, v9);
  }
  return result;
}
