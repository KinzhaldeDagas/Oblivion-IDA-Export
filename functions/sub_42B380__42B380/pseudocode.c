void *__thiscall sub_42B380(int this)
{
  unsigned int v2; // eax
  CHAR *v3; // ecx
  size_t v5; // [esp-10h] [ebp-14h]
  size_t v6; // [esp-4h] [ebp-8h]

  LODWORD(v6) = 1;
  TESForm_PutFormRecordChunkData(0x4D414E46, (void *)(this + 0xC), v6);
  LOWORD(v2) = *(_WORD *)(this + 8);
  if ( (_WORD)v2 == 0xFFFF )
    v2 = strlen(*(const char **)(this + 4));
  else
    v2 = (unsigned __int16)v2;
  v3 = *(CHAR **)(this + 4);
  if ( !v3 )
    v3 = EmptyString;
  j_TESForm_PutCurrentChunkData(0x4C4C5546, v3, v2 + 1);
  LODWORD(v5) = 2;
  return TESForm_PutFormRecordChunkData(0x4D414E54, (void *)(this + 0xE), v5);
}
