_DWORD *__cdecl sub_77E0A0(unsigned int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // esi
  unsigned int v5; // eax
  int v6; // eax

  v4 = (_DWORD *)FormHeapAlloc(0x18u);
  if ( !v4 )
    return 0;
  v5 = a1;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  if ( (a1 & 0xF) != 0 )
    v5 = (a1 & 0xFFFFFFF0) + 0x20;
  v4[2] = v5;
  v6 = v4[3];
  if ( v6 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 8))(v4[3]);
  if ( a2 )
  {
    v4[3] = a2;
    (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  }
  else
  {
    v4[3] = 0;
  }
  v4[1] = a3;
  *v4 = a4;
  return v4;
}
