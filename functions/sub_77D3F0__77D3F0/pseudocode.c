void __stdcall sub_77D3F0(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // ecx
  int v4; // eax

  if ( a1 )
  {
    v1 = a1[2];
    if ( v1 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v1 + 8))(a1[2]);
      a1[2] = 0;
    }
    sub_77D390(a1);
    v2 = a1[0xF];
    v3 = a1[0x10];
    if ( v2 )
      *(_DWORD *)(v2 + 0x40) = v3;
    if ( v3 )
      *(_DWORD *)(v3 + 0x3C) = v2;
    v4 = dword_B4289C;
    if ( dword_B4289C )
    {
      *(_DWORD *)(v4 + 0x40) = a1;
      v4 = dword_B4289C;
    }
    a1[0xF] = v4;
    a1[0x10] = 0;
    dword_B4289C = (int)a1;
  }
}
