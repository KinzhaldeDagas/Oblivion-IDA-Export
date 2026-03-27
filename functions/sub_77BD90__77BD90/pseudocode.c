void sub_77BD90()
{
  unsigned int v0; // esi
  HMODULE v1; // eax
  int v2; // eax
  bool v3; // zf
  int v4; // eax
  int v5; // eax

  if ( byte_B4288C )
  {
    v2 = dword_B428C8;
    v3 = dword_B428C8 == 0;
    byte_B4288C = 0;
    if ( !v3 )
    {
      sub_77EE20(v2);
      if ( dword_B428C8 )
        (**(void (__thiscall ***)(int, int))dword_B428C8)(dword_B428C8, 1);
    }
    v4 = dword_B428D0;
    v3 = dword_B428D0 == 0;
    dword_B428C8 = 0;
    if ( !v3 )
    {
      sub_77EE20(v4);
      if ( dword_B428D0 )
        (**(void (__thiscall ***)(int, int))dword_B428D0)(dword_B428D0, 1);
    }
    v5 = dword_B428CC;
    v3 = dword_B428CC == 0;
    dword_B428D0 = 0;
    if ( !v3 )
    {
      sub_77EE20(v5);
      if ( dword_B428CC )
        (**(void (__thiscall ***)(int, int))dword_B428CC)(dword_B428CC, 1);
    }
    dword_B428CC = 0;
    sub_77F7E0(0);
    sub_77EEB0();
    sub_77C270();
    sub_76F900();
    sub_7797C0();
    sub_772B20();
    sub_773580();
    if ( dword_B42154 )
    {
      (*(void (__cdecl **)(int))(*(_DWORD *)dword_B42154 + 8))(dword_B42154);
      dword_B42154 = 0;
    }
    v0 = dword_B42160;
    if ( dword_B42160 )
    {
      sub_775F10((_WORD *)dword_B42160);
      FormHeapFree(v0);
    }
    v1 = hLibModule;
    v3 = hLibModule == 0;
    dword_B42160 = 0;
    if ( !v3 )
      FreeLibrary(v1);
    dword_B42158 = 0;
    NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&off_B28E00);
  }
}
