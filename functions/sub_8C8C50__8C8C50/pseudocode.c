_OWORD *__thiscall sub_8C8C50(char **this, int a2)
{
  _OWORD *result; // eax
  int *v4; // edi
  char *v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edx

  result = (_OWORD *)sub_8AEA60(this, a2); /*0x8c8c60*/
  if ( this ) /*0x8c8c67*/
  {
    v4 = (int *)*(this + 2); /*0x8c8c6d*/
    if ( v4 ) /*0x8c8c72*/
    {
      sub_917200(v4, a2 + 8); /*0x8c8c7e*/
      v5 = sub_916BC0((char *)v4); /*0x8c8c8d*/
      if ( (*(_DWORD *)(a2 + 0x1C) & 0x3FFFFFFF) < *((_DWORD *)v5 + 1) ) /*0x8c8c99*/
      {
        v6 = MEMORY[0xBA9DE4]; /*0x8c8c9d*/
        if ( *(int *)(a2 + 0x1C) >= 0 ) /*0x8c8ca3*/
        {
          v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6) + 0x19C); /*0x8c8caf*/
          if ( !v7 ) /*0x8c8cb7*/
            v7 = unk_BA7D9C; /*0x8c8cb9*/
          sub_8A75D0(v7, *(_DWORD **)(a2 + 0x14), 0x10 * *(_DWORD *)(a2 + 0x1C), 0x14); /*0x8c8cc9*/
        }
        v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6) + 0x19C); /*0x8c8cd8*/
        if ( !v8 ) /*0x8c8ce0*/
          v8 = unk_BA7D9C; /*0x8c8ce2*/
        v9 = sub_8A7560(v8, 0x10 * *((_DWORD *)v5 + 1), 0x14); /*0x8c8cf2*/
        v10 = *(_DWORD *)(a2 + 0x1C) & 0x40000000; /*0x8c8cfa*/
        *(_DWORD *)(a2 + 0x14) = v9; /*0x8c8d00*/
        *(_DWORD *)(a2 + 0x1C) = *((_DWORD *)v5 + 1) | v10; /*0x8c8d06*/
      }
      v11 = *((_DWORD *)v5 + 1); /*0x8c8d09*/
      result = *(_OWORD **)(a2 + 0x14); /*0x8c8d0e*/
      *(_DWORD *)(a2 + 0x18) = v11; /*0x8c8d11*/
      if ( v11 > 0 ) /*0x8c8d16*/
      {
        v12 = *(_DWORD *)v5 - (_DWORD)result; /*0x8c8d18*/
        do /*0x8c8d2d*/
        {
          *result = *(_OWORD *)((char *)result + v12); /*0x8c8d24*/
          ++result; /*0x8c8d27*/
          --v11; /*0x8c8d2a*/
        }
        while ( v11 ); /*0x8c8d2d*/
      }
    }
  }
  return result; /*0x8c8d2f*/
}
