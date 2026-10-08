void __thiscall sub_767810(_DWORD ***this, int a2)
{
  NiRTTI *v3; // eax
  char v4; // al
  int v5; // eax

  if ( a2 )
  {
    v3 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x767823*/
    if ( v3 ) /*0x767827*/
    {
      while ( v3 != &stru_B3FD14 ) /*0x767835*/
      {
        v3 = v3->parent; /*0x767837*/
        if ( !v3 ) /*0x76783c*/
          goto LABEL_5; /*0x76783c*/
      }
      v4 = 1; /*0x767859*/
    }
    else
    {
LABEL_5:
      v4 = 0; /*0x76783e*/
    }
    v5 = v4 != 0 ? a2 : 0;
    if ( v5 ) /*0x767846*/
      sub_776A30(*(this + 0x22F), v5); /*0x76784f*/
  }
}
