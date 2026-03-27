void __thiscall sub_8912A0(_DWORD *this, float a2)
{
  int v2; // esi
  int v3; // eax
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

  v2 = *(this + 0xDD);
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 4))(*(this + 0xDD));
    if ( v3 )
    {
      while ( (char *)v3 != dword_BA7FD8 )
      {
        v3 = *(_DWORD *)(v3 + 4);
        if ( !v3 )
          goto LABEL_5;
      }
      v4 = 1;
    }
    else
    {
LABEL_5:
      v4 = 0;
    }
    v5 = v4 != 0 ? v2 : 0;
    v6 = v5;
    if ( v5 )
    {
      v7 = *(hkVector4 **)(v5 + 8);
      if ( v7 )
        w = v7->w;
      else
        w = flt_B2EFC4;
      v15 = w;
      v9 = v7 + 1;
      v16 = v15 - a2;
      if ( !v7 )
        v9 = &stru_BA7A40;
      v17 = *v9;
      v10 = v7 + 2;
      if ( !v7 )
        v10 = &stru_BA7A40;
      v18 = *v10;
      v17.z = v17.z + v16;
      v18.z = v10->z - v16;
      if ( v7 )
      {
        v11 = v7->w;
        v7[1] = v17;
        v7[1].w = v11;
      }
      v12 = *(hkVector4 **)(v6 + 8);
      if ( v12 )
      {
        v13 = v12->w;
        v12[2] = v18;
        v12[2].w = v13;
      }
      v14 = *(_DWORD *)(v6 + 8);
      if ( v14 )
        *(float *)(v14 + 0xC) = a2;
    }
  }
}
