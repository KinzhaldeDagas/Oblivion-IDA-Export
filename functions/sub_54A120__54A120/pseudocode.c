int __thiscall sub_54A120(float *this, int a2, int a3, int a4, float a5)
{
  double v6; // st7
  double v7; // st7
  float v9; // [esp+0h] [ebp-Ch]
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+1Ch] [ebp+10h]

  v13 = *(this + 0x72) - a5;
  *(this + 0x72) = v13;
  if ( v13 > 0.0 )
LABEL_18:
    JUMPOUT(0x54A370);
  switch ( a2 )
  {
    case 0xFFFFFFFF:
    case 0:
    case 5:
    case 6:
    case 7:
    case 8:
      if ( Rand8(flt_A3744C) )
      {
        v11 = *(float *)&dword_A46C30;
        v6 = fConstant_2;
        goto LABEL_5;
      }
      *(this + 0x72) = Rand4(flt_A3D65C, flt_A35AA4);
      *(this + 0x74) = Rand4(flt_A641BC, flt_A57F50);
      v12 = flt_A2FAAC;
      v7 = flt_A641B8;
      goto LABEL_16;
    case 1:
      *(this + 0x72) = Rand4(flt_A3D65C, flt_A35AA4);
      *(this + 0x74) = 0.0;
      if ( Rand8(flt_A3D65C) )
      {
        *(this + 0x73) = 0.0;
        return def_54A161(a2, a3, a4, LODWORD(v13));
      }
      v12 = flt_A3D65C;
      v7 = flt_A45E4C;
      goto LABEL_16;
    case 2:
    case 4:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
      if ( !Rand8(flt_A3744C) )
      {
        *(this + 0x72) = Rand4(flt_A3D65C, flt_A35AA4);
        *(this + 0x74) = Rand4(flt_A641BC, flt_A57F50);
        v12 = flt_A3D9A4;
        v7 = flt_A5AC50;
        goto LABEL_16;
      }
      v11 = flt_A46B10;
      v6 = *(float *)&dword_A46C30;
LABEL_5:
      v9 = v6;
      *(this + 0x72) = Rand4(v9, v11);
      *(this + 0x73) = 0.0;
      *(this + 0x74) = 0.0;
      return def_54A161(a2, a3, a4, LODWORD(v13));
    case 3:
      *(this + 0x72) = Rand4(fConstant_2, *(float *)&dword_A46C30);
      if ( Rand8(flt_A3744C) )
      {
        *(this + 0x73) = 0.0;
        *(this + 0x74) = 0.0;
        return def_54A161(a2, a3, a4, LODWORD(v13));
      }
      else
      {
        *(this + 0x74) = Rand4(flt_A641B4, flt_A641BC);
        v12 = flt_A47E6C;
        v7 = flt_A641B0;
LABEL_16:
        v10 = v7;
        *(this + 0x73) = Rand4(v10, v12);
        return def_54A161(a2, a3, a4, LODWORD(v13));
      }
    default:
      goto LABEL_18;
  }
}
