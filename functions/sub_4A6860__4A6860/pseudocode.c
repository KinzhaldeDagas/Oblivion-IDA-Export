char __thiscall sub_4A6860(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  void *v7; // eax

  if ( !a2 )
    return 0;
  v5 = this + 1;
  v6 = this + 1;
  if ( this == (_DWORD *)0xFFFFFFFC )
  {
LABEL_6:
    if ( ((_BYTE)a3 || (_BYTE)a4) && this && this != (_DWORD *)0xFFFFFFFC )
    {
      while ( *v5 )
      {
        if ( (_BYTE)a3
          || (_BYTE)a4
          && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v5 + 4))(*v5)
          && (v7 = *(void **)(*v5 + 4)) != 0
          && OblivionDynamicCast(
               v7,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESLandTexture `RTTI Type Descriptor',
               0) )
        {
          if ( sub_4A6860(*(_DWORD **)(*v5 + 0x34), a2, a3, a4) )
            return 1;
        }
        v5 = (_DWORD *)v5[1];
        if ( !v5 )
          return 0;
      }
    }
    return 0;
  }
  else
  {
    while ( *v6 != a2 )
    {
      v6 = (_DWORD *)v6[1];
      if ( !v6 )
        goto LABEL_6;
    }
    return 1;
  }
}
