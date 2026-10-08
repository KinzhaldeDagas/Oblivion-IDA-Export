unsigned int __thiscall sub_46F100(int this)
{
  unsigned int result; // eax
  unsigned int v2; // eax
  CHAR *v3; // ecx
  size_t v4; // [esp-4h] [ebp-8h]

  LOWORD(result) = *(_WORD *)(this + 8); /*0x46f100*/
  if ( (_WORD)result == 0xFFFF ) /*0x46f109*/
    result = strlen(*(const char **)(this + 4)); /*0x46f10e*/
  else
    result = (unsigned __int16)result; /*0x46f11e*/
  if ( result ) /*0x46f123*/
  {
    LOWORD(v2) = *(_WORD *)(this + 8); /*0x46f125*/
    if ( (_WORD)v2 == 0xFFFF ) /*0x46f12d*/
      v2 = strlen(*(const char **)(this + 4)); /*0x46f132*/
    else
      v2 = (unsigned __int16)v2; /*0x46f142*/
    v3 = *(CHAR **)(this + 4); /*0x46f145*/
    if ( !v3 ) /*0x46f14a*/
      v3 = EmptyString; /*0x46f14c*/
    LODWORD(v4) = v2 + 1; /*0x46f154*/
    return (unsigned int)TESForm_PutFormRecordChunkData(0x4D414E46, v3, v4); /*0x46f15b*/
  }
  return result; /*0x46f163*/
}
