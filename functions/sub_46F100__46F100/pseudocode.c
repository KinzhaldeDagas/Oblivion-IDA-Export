unsigned int __thiscall sub_46F100(int this)
{
  unsigned int result; // eax
  unsigned int v2; // eax
  CHAR *v3; // ecx
  size_t v4; // [esp-4h] [ebp-8h]

  LOWORD(result) = *(_WORD *)(this + 8);
  if ( (_WORD)result == 0xFFFF )
    result = strlen(*(const char **)(this + 4));
  else
    result = (unsigned __int16)result;
  if ( result )
  {
    LOWORD(v2) = *(_WORD *)(this + 8);
    if ( (_WORD)v2 == 0xFFFF )
      v2 = strlen(*(const char **)(this + 4));
    else
      v2 = (unsigned __int16)v2;
    v3 = *(CHAR **)(this + 4);
    if ( !v3 )
      v3 = EmptyString;
    LODWORD(v4) = v2 + 1;
    return (unsigned int)TESForm_PutFormRecordChunkData(0x4D414E46, v3, v4);
  }
  return result;
}
