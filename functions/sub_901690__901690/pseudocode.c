_WORD *__thiscall sub_901690(_WORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  _WORD *v6; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int i; // eax
  int v14; // [esp+8h] [ebp-8h] BYREF

  v6 = this + 6; /*0x90169d*/
  *(this + 3) = 1; /*0x9016a0*/
  *((_DWORD *)this + 2) = a5; /*0x9016a6*/
  *(_DWORD *)this = &off_A9BB10; /*0x9016a9*/
  *((_DWORD *)this + 3) = 0; /*0x9016b0*/
  *((_DWORD *)this + 4) = 0; /*0x9016b6*/
  *((_DWORD *)this + 5) = 0x80000000; /*0x9016bd*/
  if ( a5 ) /*0x9016c4*/
  {
    (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)*a2 + 0x1C))(*a2, &v14); /*0x9016d5*/
    v7 = v14; /*0x9016d8*/
    v8 = *((_DWORD *)v6 + 1); /*0x9016dc*/
    v9 = v14; /*0x9016e1*/
    if ( v14 > v8 ) /*0x9016e3*/
    {
      v10 = *((_DWORD *)v6 + 2) & 0x3FFFFFFF; /*0x9016e8*/
      if ( v10 < v14 ) /*0x9016f0*/
      {
        v11 = 2 * v10; /*0x9016f2*/
        if ( v14 < v11 ) /*0x9016f6*/
          v7 = v11; /*0x9016f8*/
        sub_8A6E40((const void **)v6, v7, 2); /*0x9016fe*/
      }
      for ( i = v8; i < v9; ++i ) /*0x90170a*/
        *(_WORD *)(*(_DWORD *)v6 + 2 * i) = 0xFFFF; /*0x901712*/
    }
    *((_DWORD *)v6 + 1) = v9; /*0x90171d*/
  }
  return this; /*0x901722*/
}
