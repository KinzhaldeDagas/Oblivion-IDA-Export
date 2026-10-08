void __thiscall sub_6E3100(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  NiRTTI *v5; // eax
  char v6; // al

  if ( a2 )
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x6e3117*/
    if ( v5 ) /*0x6e311b*/
    {
      while ( v5 != &stru_B3CFBC ) /*0x6e3125*/
      {
        v5 = v5->parent; /*0x6e3127*/
        if ( !v5 ) /*0x6e312c*/
          goto LABEL_6; /*0x6e312c*/
      }
      v6 = 1; /*0x6e314c*/
    }
    else
    {
LABEL_6:
      v6 = 0; /*0x6e312e*/
    }
    v4 = v6 != 0 ? (float *)a2 : 0;
  }
  else
  {
    v4 = 0; /*0x6e310c*/
  }
  sub_6D2B70(v4, *(float *)(*(this + 0x11) + 0xC)); /*0x6e3142*/
}
