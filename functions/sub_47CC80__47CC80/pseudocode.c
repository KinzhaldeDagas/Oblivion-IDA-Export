void __thiscall sub_47CC80(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  NiRTTI *v3; // eax
  char v4; // al
  _WORD *v5; // eax

  v2 = (_DWORD *)*(this + 3); /*0x47cc81*/
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2); /*0x47cc8f*/
      if ( v3 ) /*0x47cc93*/
      {
        while ( v3 != &stru_B3CD7C ) /*0x47cc9a*/
        {
          v3 = v3->parent; /*0x47cc9c*/
          if ( !v3 ) /*0x47cca1*/
            goto LABEL_5; /*0x47cca1*/
        }
        v4 = 1; /*0x47ccb8*/
      }
      else
      {
LABEL_5:
        v4 = 0; /*0x47cca3*/
      }
      v5 = v4 != 0 ? (_WORD *)v2 : 0;
      if ( v5 ) /*0x47ccab*/
        break; /*0x47ccab*/
      v2 = (_DWORD *)v2[0xD]; /*0x47ccad*/
      if ( !v2 ) /*0x47ccb2*/
        return; /*0x47ccb2*/
    }
    sub_47CBD0(v5, a2); /*0x47ccbf*/
  }
}
