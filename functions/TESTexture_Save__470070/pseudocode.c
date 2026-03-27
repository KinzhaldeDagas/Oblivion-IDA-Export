unsigned int __thiscall TESTexture_Save(int this, int a2)
{
  unsigned int result; // eax
  unsigned int v3; // eax
  CHAR *v4; // ecx
  size_t v5; // [esp-4h] [ebp-8h]

  LOWORD(result) = *(_WORD *)(this + 8);
  if ( (_WORD)result == 0xFFFF )
    result = strlen(*(const char **)(this + 4));
  else
    result = (unsigned __int16)result;
  if ( result )
  {
    LOWORD(v3) = *(_WORD *)(this + 8);
    if ( (_WORD)v3 == 0xFFFF )
      v3 = strlen(*(const char **)(this + 4));
    else
      v3 = (unsigned __int16)v3;
    v4 = *(CHAR **)(this + 4);
    if ( !v4 )
      v4 = EmptyString;
    LODWORD(v5) = v3 + 1;
    return (unsigned int)j_TESForm_PutCurrentChunkData(a2, v4, v5);
  }
  return result;
}
