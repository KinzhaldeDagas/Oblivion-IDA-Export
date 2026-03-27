char __thiscall sub_69C620(int *this, int a2, int a3)
{
  int v5; // eax
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // eax
  int *v9; // eax
  int v10; // ecx

  if ( !a2 || !a3 )
    return 0;
  if ( *(_DWORD *)(a3 + 8) != *(this + 0x1B) )
    return 1;
  v5 = (*(int (**)(void))(*(_DWORD *)a2 + 4))();
  v6 = *(_DWORD *)(a3 + 0xC);
  v7 = v5;
  v8 = (_DWORD *)*(this + 0x25);
  if ( v8 )
  {
    while ( *v8 != v7 || v8[1] != v6 )
    {
      v8 = (_DWORD *)v8[2];
      if ( !v8 )
        goto LABEL_9;
    }
    return 0;
  }
  else
  {
LABEL_9:
    v9 = (int *)FormHeapAlloc(0xCu);
    if ( v9 )
    {
      v10 = *(this + 0x25);
      *v9 = v7;
      v9[1] = v6;
      v9[2] = v10;
      *(this + 0x25) = (int)v9;
      return 1;
    }
    else
    {
      *(this + 0x25) = 0;
      return 1;
    }
  }
}
