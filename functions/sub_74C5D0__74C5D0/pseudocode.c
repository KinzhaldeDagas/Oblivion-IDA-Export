unsigned int __thiscall sub_74C5D0(int this, LONG *a2)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // ax
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  LONG v9; // eax
  bool v10; // zf

  if ( !*a2 ) /*0x74c5d5*/
    return 0xFFFFFFFF; /*0x74c5e4*/
  v4 = *(_WORD *)(this + 0xA); /*0x74c5ed*/
  v5 = 0; /*0x74c5f1*/
  if ( v4 ) /*0x74c5f6*/
  {
    v6 = *(_DWORD *)(this + 4); /*0x74c5f8*/
    while ( *(_DWORD *)(v6 + 4 * v5) ) /*0x74c60d*/
    {
      if ( ++v5 >= *(_WORD *)(this + 0xA) ) /*0x74c616*/
        goto LABEL_7; /*0x74c616*/
    }
    v7 = v5; /*0x74c643*/
    v8 = *(_DWORD *)(v6 + 4 * v5); /*0x74c646*/
    if ( v8 != *a2 ) /*0x74c64c*/
    {
      if ( v8 ) /*0x74c650*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x74c656*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x74c66c*/
      }
      v9 = *a2; /*0x74c672*/
      v10 = *a2 == 0; /*0x74c674*/
      *(_DWORD *)(v6 + 4 * v7) = *a2; /*0x74c676*/
      if ( !v10 ) /*0x74c67a*/
        InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x74c680*/
    }
    ++*(_WORD *)(this + 0xC); /*0x74c686*/
    return v7; /*0x74c68e*/
  }
  else
  {
LABEL_7:
    if ( v4 >= (unsigned int)*(unsigned __int16 *)(this + 8) ) /*0x74c621*/
      sub_74A8C0((unsigned __int16 *)this, v4 + *(unsigned __int16 *)(this + 0xE)); /*0x74c62c*/
    sub_74AB20((_DWORD *)this, v4, a2); /*0x74c635*/
    return v4; /*0x74c63a*/
  }
}
