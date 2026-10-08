unsigned int __thiscall TESTexture_Save(int this, int a2)
{
  unsigned int result; // eax
  unsigned int v3; // eax
  CHAR *v4; // ecx
  size_t v5; // [esp-4h] [ebp-8h]

  LOWORD(result) = *(_WORD *)(this + 8); /*0x470070*/
  if ( (_WORD)result == 0xFFFF ) /*0x470079*/
    result = strlen(*(const char **)(this + 4)); /*0x47007e*/
  else
    result = (unsigned __int16)result; /*0x47008e*/
  if ( result ) /*0x470093*/
  {
    LOWORD(v3) = *(_WORD *)(this + 8); /*0x470095*/
    if ( (_WORD)v3 == 0xFFFF ) /*0x47009d*/
      v3 = strlen(*(const char **)(this + 4)); /*0x4700a2*/
    else
      v3 = (unsigned __int16)v3; /*0x4700b2*/
    v4 = *(CHAR **)(this + 4); /*0x4700b5*/
    if ( !v4 ) /*0x4700ba*/
      v4 = EmptyString; /*0x4700bc*/
    LODWORD(v5) = v3 + 1; /*0x4700c4*/
    return (unsigned int)j_TESForm_PutCurrentChunkData(a2, v4, v5); /*0x4700cb*/
  }
  return result; /*0x4700d3*/
}
