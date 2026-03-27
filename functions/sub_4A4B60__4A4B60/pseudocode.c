unsigned int __thiscall sub_4A4B60(_BYTE *this)
{
  unsigned int result; // eax
  char *v3; // esi
  size_t v4; // [esp-4h] [ebp-8h]

  sub_4A3560(this);
  LOWORD(result) = *((_WORD *)this + 6);
  if ( (_WORD)result == 0xFFFF )
    result = strlen(*((const char **)this + 2));
  else
    result = (unsigned __int16)result;
  if ( result )
  {
    v3 = *((char **)this + 2);
    LODWORD(v4) = strlen(v3) + 1;
    return (unsigned int)j_TESForm_PutCurrentChunkData(0x504D4452, v3, v4);
  }
  return result;
}
