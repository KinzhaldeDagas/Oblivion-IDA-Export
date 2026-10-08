void __thiscall sub_8912A0(_DWORD *this, float a2)
{
  int v2; // esi
  NiRTTI *v3; // eax
  char v4; // al
  int v5; // eax
  int v6; // edx
  hkVector4 *v7; // eax
  double w; // st7
  hkVector4 *v9; // ecx
  hkVector4 *v10; // ecx
  double v11; // st6
  hkVector4 *v12; // eax
  double v13; // st6
  int v14; // eax
  float v15; // [esp+Ch] [ebp-34h]
  float v16; // [esp+Ch] [ebp-34h]
  hkVector4 v17; // [esp+10h] [ebp-30h]
  hkVector4 v18; // [esp+20h] [ebp-20h]

  v2 = *(this + 0xDD); /*0x8912b5*/
  if ( v2 )
  {
    v3 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 4))(*(this + 0xDD)); /*0x8912ca*/
    if ( v3 ) /*0x8912ce*/
    {
      while ( v3 != &stru_BA7FD8 ) /*0x8912d5*/
      {
        v3 = v3->parent; /*0x8912d7*/
        if ( !v3 ) /*0x8912dc*/
          goto LABEL_5; /*0x8912dc*/
      }
      v4 = 1; /*0x8912fa*/
    }
    else
    {
LABEL_5:
      v4 = 0; /*0x8912de*/
    }
    v5 = v4 != 0 ? v2 : 0;
    v6 = v5; /*0x8912e6*/
    if ( v5 ) /*0x8912e8*/
    {
      v7 = *(hkVector4 **)(v5 + 8); /*0x8912ee*/
      if ( v7 ) /*0x8912f3*/
        w = v7->w; /*0x8912f5*/
      else
        w = flt_B2EFC4; /*0x8912fe*/
      v15 = w; /*0x891306*/
      v9 = v7 + 1; /*0x89130e*/
      v16 = v15 - a2; /*0x89131a*/
      if ( !v7 ) /*0x89131e*/
        v9 = &unk_BA7A40; /*0x891320*/
      v17 = *v9; /*0x89132a*/
      v10 = v7 + 2; /*0x89132f*/
      if ( !v7 ) /*0x891332*/
        v10 = &unk_BA7A40; /*0x891334*/
      v18 = *v10; /*0x891348*/
      v17.z = v17.z + v16; /*0x891351*/
      v18.z = v10->z - v16; /*0x891359*/
      if ( v7 ) /*0x89135d*/
      {
        v11 = v7->w; /*0x891364*/
        v7[1] = v17; /*0x891367*/
        v7[1].w = v11; /*0x89136b*/
      }
      v12 = *(hkVector4 **)(v6 + 8); /*0x89136e*/
      if ( v12 ) /*0x891373*/
      {
        v13 = v12->w; /*0x89137a*/
        v12[2] = v18; /*0x89137d*/
        v12[2].w = v13; /*0x891381*/
      }
      v14 = *(_DWORD *)(v6 + 8); /*0x891384*/
      if ( v14 ) /*0x891389*/
        *(float *)(v14 + 0xC) = a2; /*0x89138b*/
    }
  }
}
