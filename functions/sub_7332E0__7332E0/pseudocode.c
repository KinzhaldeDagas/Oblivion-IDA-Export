void __thiscall sub_7332E0(int **this)
{
  NiDX9Renderer *v1; // edi
  int *v3; // eax
  int v4; // ecx
  int *v5; // eax
  int i; // ecx
  int v7; // eax
  int v8; // ecx
  int *v9; // eax
  int **v10; // ecx
  int *v11; // eax
  bool v12; // zf

  v1 = renderer; /*0x7332e3*/
  if ( renderer ) /*0x7332e3*/
  {
    ((void (__thiscall *)(int **))(*this)[0x17])(this); /*0x7332fa*/
    v3 = *(this + 8); /*0x7332fc*/
    *(this + 0xC) = v3; /*0x733301*/
    if ( v3 ) /*0x733304*/
    {
      v4 = (int)*(this + 0xA); /*0x733306*/
      v5 = (int *)((char *)v3 + 0xFFFFFFFF); /*0x733309*/
      *(this + 0xC) = v5; /*0x73330c*/
      for ( i = *(_DWORD *)(v4 + 4 * (_DWORD)v5); i; i = *(_DWORD *)(v8 + 4 * (_DWORD)v9) ) /*0x733314*/
      {
        (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)i + 0x84))(i, v1); /*0x73331f*/
        v7 = (int)*(this + 0xC); /*0x733321*/
        if ( !v7 ) /*0x733326*/
          break; /*0x733326*/
        v8 = (int)*(this + 0xA); /*0x733328*/
        v9 = (int *)(v7 - 1); /*0x73332b*/
        *(this + 0xC) = v9; /*0x73332e*/
      }
    }
    for ( ; *(this + 6); *(this + 6) = (int *)((char *)*(this + 6) + 0xFFFFFFFF) ) /*0x733338*/
    {
      v10 = (int **)*(this + 4); /*0x733340*/
      v11 = *v10; /*0x733343*/
      v12 = *v10 == 0; /*0x733345*/
      *(this + 4) = *v10; /*0x733347*/
      if ( v12 ) /*0x73334a*/
        *(this + 5) = 0; /*0x733351*/
      else
        v11[1] = 0; /*0x73334c*/
      ((void (__thiscall *)(int **, int **))(*(this + 3))[2])(this + 3, v10); /*0x73335c*/
    }
    sub_733830(this); /*0x73336c*/
  }
}
