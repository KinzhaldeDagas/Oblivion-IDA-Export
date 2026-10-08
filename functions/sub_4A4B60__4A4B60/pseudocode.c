unsigned int __thiscall sub_4A4B60(_BYTE *this)
{
  unsigned int result; // eax
  char *v3; // esi
  size_t v4; // [esp-4h] [ebp-8h]

  sub_4A3560(this); /*0x4a4b63*/
  LOWORD(result) = *((_WORD *)this + 6); /*0x4a4b68*/
  if ( (_WORD)result == 0xFFFF ) /*0x4a4b70*/
    result = strlen(*((const char **)this + 2)); /*0x4a4b75*/
  else
    result = (unsigned __int16)result; /*0x4a4b85*/
  if ( result ) /*0x4a4b8a*/
  {
    v3 = *((char **)this + 2); /*0x4a4b8c*/
    LODWORD(v4) = strlen(v3) + 1; /*0x4a4ba2*/
    return (unsigned int)j_TESForm_PutCurrentChunkData(0x504D4452, v3, v4); /*0x4a4ba9*/
  }
  return result; /*0x4a4bb1*/
}
