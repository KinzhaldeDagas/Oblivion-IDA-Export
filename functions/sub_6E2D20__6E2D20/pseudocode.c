void __thiscall sub_6E2D20(unsigned int *this, float *a2, int a3)
{
  float *v3; // esi
  NiRTTI *v5; // eax
  char v6; // al
  float v7; // [esp+0h] [ebp-Ch]

  v3 = a2; /*0x6e2d21*/
  if ( a2 )
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 4))(a2); /*0x6e2d33*/
    if ( v5 ) /*0x6e2d37*/
    {
      while ( v5 != &stru_B3CFBC ) /*0x6e2d45*/
      {
        v5 = v5->parent; /*0x6e2d47*/
        if ( !v5 ) /*0x6e2d4c*/
          goto LABEL_5; /*0x6e2d4c*/
      }
      v6 = 1; /*0x6e2d74*/
    }
    else
    {
LABEL_5:
      v6 = 0; /*0x6e2d4e*/
    }
    v3 = v6 != 0 ? a2 : 0;
  }
  v7 = sub_7300B0((_DWORD *)*(this + 0x11), *(this + 0x12)); /*0x6e2d67*/
  sub_6D2B70(v3, v7); /*0x6e2d6a*/
}
