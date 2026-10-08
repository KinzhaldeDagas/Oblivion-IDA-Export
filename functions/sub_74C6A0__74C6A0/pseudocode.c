unsigned int __thiscall sub_74C6A0(int this, LONG *a2)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // ax
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  LONG v9; // eax
  bool v10; // zf

  if ( !*a2 ) /*0x74c6a5*/
    return 0xFFFFFFFF; /*0x74c6b4*/
  v4 = *(_WORD *)(this + 0xA); /*0x74c6bd*/
  v5 = 0; /*0x74c6c1*/
  if ( v4 ) /*0x74c6c6*/
  {
    v6 = *(_DWORD *)(this + 4); /*0x74c6c8*/
    while ( *(_DWORD *)(v6 + 4 * v5) ) /*0x74c6dd*/
    {
      if ( ++v5 >= *(_WORD *)(this + 0xA) ) /*0x74c6e6*/
        goto LABEL_7; /*0x74c6e6*/
    }
    v7 = v5; /*0x74c713*/
    v8 = *(_DWORD *)(v6 + 4 * v5); /*0x74c716*/
    if ( v8 != *a2 ) /*0x74c71c*/
    {
      if ( v8 ) /*0x74c720*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x74c726*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x74c73c*/
      }
      v9 = *a2; /*0x74c742*/
      v10 = *a2 == 0; /*0x74c744*/
      *(_DWORD *)(v6 + 4 * v7) = *a2; /*0x74c746*/
      if ( !v10 ) /*0x74c74a*/
        InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x74c750*/
    }
    ++*(_WORD *)(this + 0xC); /*0x74c756*/
    return v7; /*0x74c75e*/
  }
  else
  {
LABEL_7:
    if ( v4 >= (unsigned int)*(unsigned __int16 *)(this + 8) ) /*0x74c6f1*/
      sub_74A8C0((unsigned __int16 *)this, v4 + *(unsigned __int16 *)(this + 0xE)); /*0x74c6fc*/
    sub_74ABF0((_DWORD *)this, v4, a2); /*0x74c705*/
    return v4; /*0x74c70a*/
  }
}
