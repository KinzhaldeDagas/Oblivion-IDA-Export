void __stdcall sub_77D3F0(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // ecx
  int v4; // eax

  if ( a1 ) /*0x77d3f7*/
  {
    v1 = a1[2]; /*0x77d3f9*/
    if ( v1 ) /*0x77d3fe*/
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v1 + 8))(a1[2]); /*0x77d406*/
      a1[2] = 0; /*0x77d408*/
    }
    sub_77D390(a1); /*0x77d411*/
    v2 = a1[0xF]; /*0x77d416*/
    v3 = a1[0x10]; /*0x77d41b*/
    if ( v2 ) /*0x77d41e*/
      *(_DWORD *)(v2 + 0x40) = v3; /*0x77d420*/
    if ( v3 ) /*0x77d425*/
      *(_DWORD *)(v3 + 0x3C) = v2; /*0x77d427*/
    v4 = unk_B4289C; /*0x77d42a*/
    if ( unk_B4289C ) /*0x77d42a*/
    {
      *(_DWORD *)(v4 + 0x40) = a1; /*0x77d433*/
      v4 = unk_B4289C; /*0x77d436*/
    }
    a1[0xF] = v4; /*0x77d43b*/
    a1[0x10] = 0; /*0x77d43e*/
    unk_B4289C = (int)a1; /*0x77d445*/
  }
}
