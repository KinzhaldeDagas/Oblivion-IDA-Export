void __thiscall sub_7E0CB0(_DWORD *this)
{
  BSRenderedTexture *v2; // eax
  int v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi

  v2 = (BSRenderedTexture *)*(this + 0x38);
  if ( v2 )
    sub_7C1EE0(g_textureManager, v2);
  if ( *(this + 0x39) )
    sub_7C1EE0(g_textureManager, (BSRenderedTexture *)*(this + 0x39));
  if ( *(this + 0x3A) )
    sub_7C1EE0(g_textureManager, (BSRenderedTexture *)*(this + 0x3A));
  if ( *(this + 0x36) )
    sub_7C1EE0(g_textureManager, (BSRenderedTexture *)*(this + 0x36));
  if ( *(this + 0x37) )
    sub_7C1EE0(g_textureManager, (BSRenderedTexture *)*(this + 0x37));
  if ( *(this + 0x3C) )
    sub_7C1EE0(g_textureManager, (BSRenderedTexture *)*(this + 0x3C));
  if ( *(this + 0x3D) )
    sub_7C1EE0(g_textureManager, (BSRenderedTexture *)*(this + 0x3D));
  v3 = *(this + 0x38);
  v4 = InterlockedDecrement;
  if ( v3 )
  {
    if ( !v4((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *(this + 0x38) = 0;
  }
  v5 = *(this + 0x39);
  if ( v5 )
  {
    if ( !v4((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(this + 0x39) = 0;
  }
  v6 = *(this + 0x3A);
  if ( v6 )
  {
    if ( !v4((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *(this + 0x3A) = 0;
  }
  v7 = *(this + 0x36);
  if ( v7 )
  {
    if ( !v4((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *(this + 0x36) = 0;
  }
  v8 = *(this + 0x37);
  if ( v8 )
  {
    if ( !v4((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    *(this + 0x37) = 0;
  }
  v9 = *(this + 0x3C);
  if ( v9 )
  {
    if ( !v4((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    *(this + 0x3C) = 0;
  }
  v10 = *(this + 0x3D);
  if ( v10 )
  {
    if ( !v4((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    *(this + 0x3D) = 0;
  }
  v11 = *(this + 0x3B);
  if ( v11 )
  {
    if ( !v4((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    *(this + 0x3B) = 0;
  }
  *((_BYTE *)this + 0x108) = 0;
}
