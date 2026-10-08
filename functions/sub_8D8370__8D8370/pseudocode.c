_BYTE *__thiscall sub_8D8370(_DWORD **this, _DWORD *a2, int a3, int (__thiscall ***a4)(_DWORD, int *, int, int))
{
  _BYTE *result; // eax
  int (__thiscall ***v7)(_DWORD, int *, int, int); // edi
  int v8; // ebp
  int v9; // ecx

  result = (_BYTE *)(a3 - 1); /*0x8d8374*/
  if ( a3 - 1 >= 0 ) /*0x8d8378*/
  {
    v7 = a4; /*0x8d8381*/
    v8 = a3; /*0x8d8385*/
    do /*0x8d83d0*/
    {
      result = (_BYTE *)(**v7)(v7, &a3, *a2 + *(char *)(*a2 + 5), a2[1] + *(char *)(a2[1] + 5)); /*0x8d83ac*/
      if ( *result ) /*0x8d83ae*/
      {
        v9 = (int)*(this + 8 * *(char *)(*a2 + 4) + *(char *)(a2[1] + 4)); /*0x8d83c3*/
        result = (_BYTE *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v9 + 8))(v9, a2); /*0x8d83c9*/
      }
      a2 += 2; /*0x8d83cc*/
      --v8; /*0x8d83cf*/
    }
    while ( v8 ); /*0x8d83d0*/
  }
  return result; /*0x8d83d5*/
}
