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
  int *v10; // ecx
  int v11; // eax
  bool v12; // zf

  v1 = g_Renderer;
  if ( g_Renderer )
  {
    ((void (__thiscall *)(int **))(*this)[0x17])(this);
    v3 = *(this + 8);
    *(this + 0xC) = v3;
    if ( v3 )
    {
      v4 = (int)*(this + 0xA);
      v5 = (int *)((char *)v3 + 0xFFFFFFFF);
      *(this + 0xC) = v5;
      for ( i = *(_DWORD *)(v4 + 4 * (_DWORD)v5); i; i = *(_DWORD *)(v8 + 4 * (_DWORD)v9) )
      {
        (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)i + 0x84))(i, v1);
        v7 = (int)*(this + 0xC);
        if ( !v7 )
          break;
        v8 = (int)*(this + 0xA);
        v9 = (int *)(v7 - 1);
        *(this + 0xC) = v9;
      }
    }
    for ( ; *(this + 6); *(this + 6) = (int *)((char *)*(this + 6) + 0xFFFFFFFF) )
    {
      v10 = *(this + 4);
      v11 = *v10;
      v12 = *v10 == 0;
      *(this + 4) = (int *)*v10;
      if ( v12 )
        *(this + 5) = 0;
      else
        *(_DWORD *)(v11 + 4) = 0;
      ((void (__thiscall *)(int **, int *))(*(this + 3))[2])(this + 3, v10);
    }
    sub_733830(this);
  }
}
