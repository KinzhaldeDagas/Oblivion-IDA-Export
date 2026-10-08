unsigned int __thiscall sub_9A9A00(int this, NiD3DShaderConstantMapEntry **value)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // ax
  int v6; // ebp
  int v7; // ebx
  NiD3DShaderConstantMapEntry *v8; // edi
  NiD3DShaderConstantMapEntry *v9; // eax
  bool v10; // zf

  if ( !*value ) /*0x9a9a05*/
    return 0xFFFFFFFF; /*0x9a9a14*/
  v4 = *(_WORD *)(this + 0xA); /*0x9a9a1d*/
  v5 = 0; /*0x9a9a21*/
  if ( v4 ) /*0x9a9a26*/
  {
    v6 = *(_DWORD *)(this + 4); /*0x9a9a28*/
    while ( *(_DWORD *)(v6 + 4 * v5) ) /*0x9a9a3d*/
    {
      if ( ++v5 >= *(_WORD *)(this + 0xA) ) /*0x9a9a46*/
        goto LABEL_7; /*0x9a9a46*/
    }
    v7 = v5; /*0x9a9a73*/
    v8 = *(NiD3DShaderConstantMapEntry **)(v6 + 4 * v5); /*0x9a9a76*/
    if ( v8 != *value ) /*0x9a9a7c*/
    {
      if ( v8 ) /*0x9a9a80*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v8->RefCount) ) /*0x9a9a86*/
          (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v8->_vtbl)(v8, 1); /*0x9a9a9c*/
      }
      v9 = *value; /*0x9a9aa2*/
      v10 = *value == 0; /*0x9a9aa4*/
      *(_DWORD *)(v6 + 4 * v7) = *value; /*0x9a9aa6*/
      if ( !v10 ) /*0x9a9aaa*/
        InterlockedIncrement((volatile LONG *)&v9->RefCount); /*0x9a9ab0*/
    }
    ++*(_WORD *)(this + 0xC); /*0x9a9ab6*/
    return v7; /*0x9a9abe*/
  }
  else
  {
LABEL_7:
    if ( v4 >= (unsigned int)*(unsigned __int16 *)(this + 8) ) /*0x9a9a51*/
      sub_74A8C0((unsigned __int16 *)this, v4 + *(unsigned __int16 *)(this + 0xE)); /*0x9a9a5c*/
    NiTArray_ConstantMapEntry_SetAt((void *)this, v4, value); /*0x9a9a65*/
    return v4; /*0x9a9a6a*/
  }
}
