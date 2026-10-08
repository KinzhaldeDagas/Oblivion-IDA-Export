void __thiscall sub_75F5E0(void *this, float a2, int a3)
{
  float *v3; // esi
  NiRTTI *v5; // eax
  char v6; // al

  v3 = (float *)LODWORD(a2); /*0x75f5e1*/
  if ( a2 != 0.0 )
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(a2) + 4))(LODWORD(a2)); /*0x75f5f3*/
    if ( v5 ) /*0x75f5f7*/
    {
      while ( v5 != &stru_B3CFBC ) /*0x75f605*/
      {
        v5 = v5->parent; /*0x75f607*/
        if ( !v5 ) /*0x75f60c*/
          goto LABEL_5; /*0x75f60c*/
      }
      v6 = 1; /*0x75f63d*/
    }
    else
    {
LABEL_5:
      v6 = 0; /*0x75f60e*/
    }
    v3 = v6 != 0 ? v3 : 0;
  }
  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0xAC))(this, &a2); /*0x75f627*/
  sub_6D2B70(v3, a2); /*0x75f633*/
}
