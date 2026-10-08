void __thiscall sub_6EC110(void *this, float a2, int a3)
{
  float *v3; // esi
  NiRTTI *v5; // eax
  char v6; // al

  v3 = (float *)LODWORD(a2); /*0x6ec111*/
  if ( a2 != 0.0 )
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(a2) + 4))(LODWORD(a2)); /*0x6ec123*/
    if ( v5 ) /*0x6ec127*/
    {
      while ( v5 != &stru_B3CFBC ) /*0x6ec135*/
      {
        v5 = v5->parent; /*0x6ec137*/
        if ( !v5 ) /*0x6ec13c*/
          goto LABEL_5; /*0x6ec13c*/
      }
      v6 = 1; /*0x6ec16d*/
    }
    else
    {
LABEL_5:
      v6 = 0; /*0x6ec13e*/
    }
    v3 = v6 != 0 ? v3 : 0;
  }
  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0xA8))(this, &a2); /*0x6ec157*/
  sub_6D2B70(v3, a2); /*0x6ec163*/
}
