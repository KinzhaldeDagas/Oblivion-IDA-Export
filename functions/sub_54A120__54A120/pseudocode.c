float *__thiscall sub_54A120(float *this, int a2, float *a3, float *a4, float a5)
{
  double v6; // st7
  double v7; // st7
  float v9; // [esp+0h] [ebp-Ch]
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+1Ch] [ebp+10h]

  v13 = *(this + 0x72) - a5; /*0x54a12d*/
  *(this + 0x72) = v13; /*0x54a135*/
  if ( v13 > 0.0 ) /*0x54a144*/
LABEL_18:
    JUMPOUT(0x54A370); /*0x54a370*/
  switch ( a2 ) /*0x54a161*/
  {
    case 0xFFFFFFFF: /*0x54a161*/
    case 0: /*0x54a161*/
    case 5: /*0x54a161*/
    case 6: /*0x54a161*/
    case 7: /*0x54a161*/
    case 8: /*0x54a161*/
      if ( Rand8(flt_A3744C) ) /*0x54a172*/
      {
        v11 = *(float *)&dword_A46C30; /*0x54a187*/
        v6 = fConstant_2; /*0x54a18b*/
        goto LABEL_5; /*0x54a18b*/
      }
      *(this + 0x72) = Rand4(kHeadBodyNormalMatchRadius, flt_A35AA4); /*0x54a1ca*/
      *(this + 0x74) = Rand4(flt_A641BC, flt_A57F50); /*0x54a1e8*/
      v12 = kFaceEarNormalMatchRadius; /*0x54a1f4*/
      v7 = flt_A641B8; /*0x54a1f8*/
      goto LABEL_16; /*0x54a1fe*/
    case 1: /*0x54a161*/
      *(this + 0x72) = Rand4(kHeadBodyNormalMatchRadius, flt_A35AA4); /*0x54a31c*/
      *(this + 0x74) = 0.0; /*0x54a327*/
      if ( Rand8(kHeadBodyNormalMatchRadius) ) /*0x54a336*/
      {
        *(this + 0x73) = 0.0; /*0x54a344*/
        return def_54A161((int)this, a2, a3, a4, SLODWORD(v13)); /*0x54a34a*/
      }
      v12 = kHeadBodyNormalMatchRadius; /*0x54a355*/
      v7 = flt_A45E4C; /*0x54a359*/
      goto LABEL_16; /*0x54a359*/
    case 2: /*0x54a161*/
    case 4: /*0x54a161*/
    case 9: /*0x54a161*/
    case 0xA: /*0x54a161*/
    case 0xB: /*0x54a161*/
    case 0xC: /*0x54a161*/
      if ( !Rand8(flt_A3744C) ) /*0x54a21a*/
      {
        *(this + 0x72) = Rand4(kHeadBodyNormalMatchRadius, flt_A35AA4); /*0x54a249*/
        *(this + 0x74) = Rand4(flt_A641BC, flt_A57F50); /*0x54a267*/
        v12 = flt_A3D9A4; /*0x54a273*/
        v7 = flt_A5AC50; /*0x54a277*/
        goto LABEL_16; /*0x54a27d*/
      }
      v11 = flt_A46B10; /*0x54a222*/
      v6 = *(float *)&dword_A46C30; /*0x54a226*/
LABEL_5:
      v9 = v6; /*0x54a191*/
      *(this + 0x72) = Rand4(v9, v11); /*0x54a199*/
      *(this + 0x73) = 0.0; /*0x54a1a1*/
      *(this + 0x74) = 0.0; /*0x54a1a7*/
      return def_54A161((int)this, a2, a3, a4, SLODWORD(v13)); /*0x54a1ad*/
    case 3: /*0x54a161*/
      *(this + 0x72) = Rand4(fConstant_2, *(float *)&dword_A46C30); /*0x54a29d*/
      if ( Rand8(flt_A3744C) ) /*0x54a2af*/
      {
        *(this + 0x73) = 0.0; /*0x54a2bd*/
        *(this + 0x74) = 0.0; /*0x54a2c3*/
        return def_54A161((int)this, a2, a3, a4, SLODWORD(v13)); /*0x54a2c9*/
      }
      else
      {
        *(this + 0x74) = Rand4(flt_A641B4, flt_A641BC); /*0x54a2e9*/
        v12 = flt_A47E6C; /*0x54a2f5*/
        v7 = flt_A641B0; /*0x54a2f9*/
LABEL_16:
        v10 = v7; /*0x54a35f*/
        *(this + 0x73) = Rand4(v10, v12); /*0x54a367*/
        return def_54A161((int)this, a2, a3, a4, SLODWORD(v13)); /*0x54a36d*/
      }
    default:
      goto LABEL_18;
  }
}
