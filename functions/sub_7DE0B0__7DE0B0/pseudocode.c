void __thiscall sub_7DE0B0(BSRenderedTexture **this)
{
  BSRenderedTexture *v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  void (__thiscall ***v11)(_DWORD, int); // ecx

  v2 = *(this + 0x43);
  if ( v2 )
    sub_7C1EE0(g_textureManager, v2);
  if ( *(this + 0x40) )
    sub_7C1EE0(g_textureManager, *(this + 0x40));
  if ( *(this + 0x41) )
    sub_7C1EE0(g_textureManager, *(this + 0x41));
  v3 = InterlockedDecrement;
  v4 = (int)*(this + 0x43);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 0x43) = 0;
  }
  v5 = (int)*(this + 0x40);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(this + 0x40) = 0;
  }
  v6 = (int)*(this + 0x41);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *(this + 0x41) = 0;
  }
  v7 = (int)*(this + 0x3F);
  if ( v7 )
  {
    if ( !v3((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *(this + 0x3F) = 0;
  }
  v8 = (int)*(this + 0x42);
  if ( v8 )
  {
    if ( !v3((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    *(this + 0x42) = 0;
  }
  v9 = dword_B45FA8;
  if ( dword_B45FA8 )
  {
    if ( !v3((volatile LONG *)(v9 + 4)) )
    {
      if ( v9 )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    dword_B45FA8 = 0;
  }
  v10 = dword_B45FB4;
  if ( dword_B45FB4 )
  {
    if ( !v3((volatile LONG *)(v10 + 4)) )
    {
      if ( v10 )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    dword_B45FB4 = 0;
  }
  v11 = (void (__thiscall ***)(_DWORD, int))*(this + 0x24);
  if ( v11 )
    (**v11)(v11, 1);
  *(this + 0x24) = 0;
}
