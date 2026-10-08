char __thiscall sub_4A6860(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  void *v7; // eax

  if ( !a2 ) /*0x4a6867*/
    return 0; /*0x4a6869*/
  v5 = this + 1; /*0x4a6870*/
  v6 = this + 1; /*0x4a6873*/
  if ( this == (_DWORD *)0xFFFFFFFC ) /*0x4a6877*/
  {
LABEL_6:
    if ( ((_BYTE)a3 || (_BYTE)a4) && this && this != (_DWORD *)0xFFFFFFFC ) /*0x4a68a4*/
    {
      while ( *v5 ) /*0x4a68aa*/
      {
        if ( (_BYTE)a3 /*0x4a68d9*/
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
          if ( sub_4A6860(*(_DWORD **)(*v5 + 0x34), a2, a3, a4) ) /*0x4a68f6*/
            return 1; /*0x4a6917*/
        }
        v5 = (_DWORD *)v5[1]; /*0x4a68ff*/
        if ( !v5 ) /*0x4a6904*/
          return 0; /*0x4a6904*/
      }
    }
    return 0; /*0x4a6906*/
  }
  else
  {
    while ( *v6 != a2 ) /*0x4a6882*/
    {
      v6 = (_DWORD *)v6[1]; /*0x4a6888*/
      if ( !v6 ) /*0x4a688d*/
        goto LABEL_6; /*0x4a688d*/
    }
    return 1; /*0x4a690f*/
  }
}
