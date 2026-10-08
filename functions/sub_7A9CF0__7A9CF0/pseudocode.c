void __thiscall sub_7A9CF0(_WORD *this)
{
  int v2; // esi
  int v3; // eax
  bool v4; // zf
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebp
  _DWORD *v8; // ebp
  int v9; // esi
  int v10; // eax
  unsigned int v11; // [esp+14h] [ebp-18h]
  _BYTE v12[4]; // [esp+28h] [ebp-4h] BYREF

  v2 = 0; /*0x7a9cf9*/
  if ( *(this + 0x10F3) ) /*0x7a9cfb*/
  {
    do /*0x7a9d4b*/
    {
      v3 = *((_DWORD *)this + 0x87A); /*0x7a9d04*/
      v4 = *(_DWORD *)(v3 + 4 * v2) == 0; /*0x7a9d0a*/
      v5 = (_DWORD *)(v3 + 4 * v2); /*0x7a9d0d*/
      if ( !v4 ) /*0x7a9d10*/
      {
        (*(void (__stdcall **)(_DWORD, _BYTE *, int, int))(*(_DWORD *)*v5 + 0x1C))(*v5, v12, 4, 1); /*0x7a9d23*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 0x87A) + 4 * v2) + 8))(*(_DWORD *)(*((_DWORD *)this + 0x87A) + 4 * v2)); /*0x7a9d34*/
        *(_DWORD *)(*((_DWORD *)this + 0x87A) + 4 * v2) = 0; /*0x7a9d3c*/
      }
      ++v2; /*0x7a9d46*/
    }
    while ( v2 < (unsigned __int16)*(this + 0x10F3) ); /*0x7a9d4b*/
  }
  v6 = this + 0x64; /*0x7a9d4d*/
  v7 = 3; /*0x7a9d53*/
  do /*0x7a9d84*/
  {
    if ( *v6 ) /*0x7a9d58*/
    {
      (*(void (__stdcall **)(_DWORD, _BYTE *, int, int))(*(_DWORD *)*v6 + 0x1C))(*v6, v12, 4, 1); /*0x7a9d6d*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v6 + 8))(*v6); /*0x7a9d77*/
      *v6 = 0; /*0x7a9d79*/
      *((_BYTE *)v6 + 4) = 0; /*0x7a9d7b*/
    }
    v6 += 5; /*0x7a9d7e*/
    --v7; /*0x7a9d81*/
  }
  while ( v7 ); /*0x7a9d84*/
  v4 = *((_DWORD *)this + 0x88E) == 0; /*0x7a9d86*/
  v8 = *((_DWORD **)this + 0x88C); /*0x7a9d8c*/
  *((_BYTE *)this + 0xC0) = 0; /*0x7a9d92*/
  if ( !v4 ) /*0x7a9d98*/
  {
    do /*0x7a9dd3*/
    {
      v9 = v8[2]; /*0x7a9da0*/
      v8 = (_DWORD *)*v8; /*0x7a9da8*/
      if ( v9 ) /*0x7a9dab*/
      {
        v10 = *(_DWORD *)(v9 + 0x14); /*0x7a9dad*/
        if ( v10 ) /*0x7a9db2*/
        {
          (*(void (__stdcall **)(int, _BYTE *, int, int))(*(_DWORD *)v10 + 0x1C))(v10, v12, 4, 1); /*0x7a9dc3*/
          (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v9 + 0x14) + 8))(*(_DWORD *)(v9 + 0x14)); /*0x7a9dce*/
          *(_DWORD *)(v9 + 0x14) = 0; /*0x7a9dd0*/
        }
      }
    }
    while ( *((_DWORD *)this + 0x88E) ); /*0x7a9dd3*/
  }
  v11 = *((_DWORD *)this + 0x87A); /*0x7a9de1*/
  *(this + 0x10F2) = 0; /*0x7a9de2*/
  *(this + 0x10F3) = 0; /*0x7a9de9*/
  FormHeapFree(v11); /*0x7a9df0*/
  *((_DWORD *)this + 0x87A) = 0; /*0x7a9df8*/
}
