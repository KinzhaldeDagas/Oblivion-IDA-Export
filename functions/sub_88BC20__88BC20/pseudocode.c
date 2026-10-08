int __thiscall sub_88BC20(void *this)
{
  int result; // eax
  int v3; // ebp
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edx
  int i; // esi
  int v12; // ecx
  int v14; // [esp+20h] [ebp-10h]

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x58))(this); /*0x88bc52*/
  v3 = result; /*0x88bc54*/
  if ( result ) /*0x88bc5a*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x58))(this); /*0x88bc67*/
    v4 = 0; /*0x88bc69*/
    v14 = 0x80000000; /*0x88bc73*/
    v5 = *(_DWORD *)(v3 + 0x3C); /*0x88bc7b*/
    if ( v5 > 0 ) /*0x88bc84*/
    {
      v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x88bc96*/
      if ( !v6 ) /*0x88bc9e*/
        v6 = unk_BA7D9C; /*0x88bca0*/
      v4 = sub_8A7560(v6, 4 * v5, 0x14); /*0x88bcb5*/
      v5 = *(_DWORD *)(v3 + 0x3C); /*0x88bcb7*/
      v14 = v5; /*0x88bcbe*/
    }
    v7 = v5; /*0x88bcc5*/
    if ( v5 > 0 ) /*0x88bccd*/
    {
      v8 = v4; /*0x88bccf*/
      v9 = *(_DWORD *)(v3 + 0x38) - (_DWORD)v4; /*0x88bcd1*/
      v10 = v7; /*0x88bcd3*/
      do /*0x88bce0*/
      {
        *v8 = *(_DWORD *)((char *)v8 + v9); /*0x88bcd8*/
        ++v8; /*0x88bcda*/
        --v10; /*0x88bcdd*/
      }
      while ( v10 ); /*0x88bce0*/
    }
    for ( i = 0; i < v7; ++i ) /*0x88bce6*/
      sub_8CBBB0(v3, v4[i]); /*0x88bced*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x58))(this); /*0x88bd05*/
    result = v14; /*0x88bd07*/
    if ( v14 >= 0 ) /*0x88bd15*/
    {
      v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x88bd27*/
      if ( !v12 ) /*0x88bd2f*/
        v12 = unk_BA7D9C; /*0x88bd31*/
      return sub_8A75D0(v12, v4, 4 * v14, 0x14); /*0x88bd44*/
    }
  }
  return result; /*0x88bd49*/
}
