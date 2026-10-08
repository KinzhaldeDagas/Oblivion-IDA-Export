void __thiscall sub_6D1070(int this, float *a2, float a3)
{
  unsigned int v3; // eax
  int v4; // eax
  char v5; // al
  float v6; // [esp+10h] [ebp+8h]

  v3 = LOWORD(a3); /*0x6d1070*/
  v6 = 0.0; /*0x6d107b*/
  if ( v3 < *(unsigned __int16 *)(this + 0x4A) ) /*0x6d1081*/
    v6 = *(float *)(*(_DWORD *)(this + 0x44) + 4 * v3); /*0x6d1089*/
  if ( a2 )
  {
    v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 4))(a2); /*0x6d10b2*/
    if ( v4 ) /*0x6d10b6*/
    {
      while ( (char *)v4 != stru_B3CFBC ) /*0x6d10bd*/
      {
        v4 = *(_DWORD *)(v4 + 4); /*0x6d10bf*/
        if ( !v4 ) /*0x6d10c4*/
          goto LABEL_8; /*0x6d10c4*/
      }
      v5 = 1; /*0x6d10e1*/
    }
    else
    {
LABEL_8:
      v5 = 0; /*0x6d10c6*/
    }
    sub_6D2B70(v5 != 0 ? a2 : 0, v6);
  }
  else
  {
    sub_6D2B70(0, v6); /*0x6d10a2*/
  }
}
