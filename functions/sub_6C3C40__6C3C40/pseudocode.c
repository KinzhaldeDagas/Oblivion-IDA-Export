// NiTransformController virtual Update (+0x54). Manager-controlled flag 0x20 consumes the sample time already placed at controller +0x28; otherwise uses NiTimeController_IsUpdateUnchanged and interpolator validity. Calls interpolator virtual +0x4C with time, target +0x30, and a transform result. Valid translation writes target local +0x54/+0x58/+0x5C, valid quaternion is converted into local rotation matrix +0x30, and valid scale writes abs(value) to +0x60.
void __thiscall NiTransformController_Update(int this, float a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  double v7; // st7
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // esi
  float v12; // [esp+0h] [ebp-30h]
  float v13; // [esp+10h] [ebp-20h] BYREF
  int v14; // [esp+14h] [ebp-1Ch]
  int v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+1Ch] [ebp-14h] BYREF
  float v17; // [esp+20h] [ebp-10h]
  int v18; // [esp+24h] [ebp-Ch]
  int v19; // [esp+28h] [ebp-8h]
  float v20; // [esp+2Ch] [ebp-4h]
  float v21; // [esp+34h] [ebp+4h]

  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6c3c4e*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6c3c56*/
LABEL_6:
    v4 = *(_DWORD *)(this + 0x3C); /*0x6c3c89*/
    if ( v4 ) /*0x6c3c8e*/
    {
      v5 = dword_B24260; /*0x6c3c94*/
      v6 = dword_B24264; /*0x6c3ca0*/
      v20 = flt_A79E10; /*0x6c3ca5*/
      v7 = *(float *)(this + 0x28); /*0x6c3ca9*/
      v13 = *(float *)&v5; /*0x6c3cac*/
      v15 = dword_B24268; /*0x6c3cb6*/
      v17 = flt_B3CBA8; /*0x6c3cc0*/
      v8 = flt_B3CBB0; /*0x6c3cc4*/
      v14 = v6; /*0x6c3cca*/
      v9 = flt_B3CBA4; /*0x6c3cce*/
      v19 = v8; /*0x6c3cd3*/
      v16 = v9; /*0x6c3cd7*/
      v10 = *(_DWORD *)(this + 0x30); /*0x6c3ce5*/
      v18 = flt_B3CBAC; /*0x6c3ce8*/
      v12 = v7; /*0x6c3cf3*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, float *))(*(_DWORD *)v4 + 0x4C))(LODWORD(v12), v10, &v13) ) /*0x6c3cf6*/
      {
        v11 = *(_DWORD *)(this + 0x30); /*0x6c3d00*/
        if ( -flt_A7DEB4 != v13 ) /*0x6c3d12*/
        {
          *(float *)(v11 + 0x54) = v13; /*0x6c3d18*/
          *(_DWORD *)(v11 + 0x58) = v14; /*0x6c3d1f*/
          *(_DWORD *)(v11 + 0x5C) = v15; /*0x6c3d26*/
        }
        if ( -flt_A7DEB4 != v17 ) /*0x6c3d3c*/
          sub_47C600((NiTransform *)&v16, (NiTransform *)(v11 + 0x30)); /*0x6c3d46*/
        if ( -flt_A7DEB4 != v20 ) /*0x6c3d60*/
        {
          v21 = fabs(v20); /*0x6c3d64*/
          *(float *)(v11 + 0x60) = v21; /*0x6c3d6c*/
        }
      }
    }
    return; /*0x6c3d6c*/
  }
  if ( !NiTimeController_IsUpdateUnchanged((float *)this, a2) ) /*0x6c3c63*/
    goto LABEL_6; /*0x6c3c63*/
  v3 = *(_DWORD *)(this + 0x3C); /*0x6c3c6c*/
  if ( v3 ) /*0x6c3c71*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x94))(v3) ) /*0x6c3c7f*/
      goto LABEL_6; /*0x6c3c83*/
  }
}
