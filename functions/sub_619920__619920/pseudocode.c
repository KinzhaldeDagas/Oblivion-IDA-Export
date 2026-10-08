char __thiscall sub_619920(int this, int a2)
{
  int v3; // eax
  double v5; // st7
  int v6; // eax
  float v8; // [esp+Ch] [ebp+4h]

  v3 = *(_DWORD *)(this + 0x6C); /*0x619923*/
  if ( v3 == a2 ) /*0x61992d*/
    goto LABEL_18; /*0x61992d*/
  if ( a2 ) /*0x619935*/
  {
    if ( a2 == 4 ) /*0x6199c9*/
    {
      *(float *)(this + 0xCC) = kTerrainLODQuadRayDirectionZ; /*0x6199d5*/
      v5 = sub_6141B0((float *)this); /*0x6199db*/
      goto LABEL_7; /*0x6199e0*/
    }
LABEL_5:
    if ( *(_DWORD *)(this + 0x6C) != 4 ) /*0x61994d*/
    {
LABEL_8:
      v6 = *(_DWORD *)(this + 0x6C); /*0x61995b*/
      if ( v6 == 6 ) /*0x619961*/
        *(_DWORD *)(this + 0x12C) = 0; /*0x619963*/
      if ( v6 == 4 ) /*0x619970*/
      {
        v8 = g_GameSettingStringPointers_B36CD8[0xA6]; /*0x619978*/
        *(float *)(this + 0xEC) = *(float *)(this + 0x44); /*0x61997f*/
        *(float *)(this + 0xF0) = v8; /*0x619989*/
        *(float *)(this + 0xF4) = kTerrainLODQuadRayDirectionZ; /*0x619995*/
      }
      v3 = *(_DWORD *)(this + 0x6C); /*0x61999b*/
      if ( v3 != 4 && v3 != 7 && v3 != 9 && v3 != 8 && v3 != 0xC ) /*0x6199b5*/
        *(_BYTE *)(this + 0x191) = 1; /*0x6199b7*/
LABEL_18:
      *(_DWORD *)(this + 0x6C) = a2; /*0x6199be*/
      return v3; /*0x6199be*/
    }
    v5 = kTerrainLODQuadRayDirectionZ; /*0x61994f*/
LABEL_7:
    *(float *)(this + 0xCC) = v5; /*0x619955*/
    goto LABEL_8; /*0x619955*/
  }
  if ( v3 != 4 ) /*0x61993e*/
    goto LABEL_5; /*0x61993e*/
  LOBYTE(v3) = sub_6163A0(this); /*0x619940*/
  if ( !(_BYTE)v3 ) /*0x619947*/
    goto LABEL_5; /*0x619947*/
  return v3; /*0x6199c1*/
}
