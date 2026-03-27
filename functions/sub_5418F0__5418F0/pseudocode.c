UInt32 __thiscall sub_5418F0(Sky *this)
{
  UInt32 result; // eax
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  UInt32 v7; // edx
  UInt32 v8; // edx
  UInt32 unk0B8_low; // ecx
  int v10; // ecx
  UInt32 v11; // ecx
  UInt32 v12; // edx
  double v13; // st7
  double unk0D0; // st6
  bool v15; // c0
  bool v16; // c3
  double v17; // st6
  double v18; // st4
  int v19; // ebp
  double v20; // st4
  double v21; // st7
  double v22; // st4
  bool v23; // c0
  bool v24; // c3
  double v25; // st4
  double v26; // st4
  double v27; // st4
  int v28; // ebx
  double v29; // st5
  double v30; // st7
  bool v31; // c0
  double v32; // st4
  double v33; // st3
  bool v34; // c0
  bool v35; // c3
  double v36; // st3
  double v37; // st4
  bool v38; // c0
  bool v39; // c3
  double v40; // st4
  double v41; // st5
  double v42; // st4
  bool v43; // c0
  bool v44; // c3
  int v45; // edi
  double v46; // st7
  double v47; // rtt
  double v48; // st6
  double v49; // st7
  TESWeather *firstWeather; // eax
  bool v51; // c0
  bool v52; // c3
  int v53; // ecx
  int v54; // edx
  TESWeather *secondWeather; // eax
  int v56; // edx
  double unk0E4; // st7
  float v58; // [esp+14h] [ebp-3Ch]
  float v59; // [esp+14h] [ebp-3Ch]
  float v60; // [esp+18h] [ebp-38h]
  float v61; // [esp+18h] [ebp-38h]
  float v62; // [esp+18h] [ebp-38h]
  float v63; // [esp+1Ch] [ebp-34h]
  float v64; // [esp+20h] [ebp-30h]
  float v65; // [esp+20h] [ebp-30h]
  float v66; // [esp+20h] [ebp-30h]
  UInt32 v67; // [esp+24h] [ebp-2Ch]
  UInt32 v68; // [esp+24h] [ebp-2Ch]
  UInt32 v69; // [esp+28h] [ebp-28h]
  UInt32 v70; // [esp+28h] [ebp-28h]
  UInt32 v71; // [esp+28h] [ebp-28h]
  UInt32 v72; // [esp+2Ch] [ebp-24h]
  UInt32 v73; // [esp+2Ch] [ebp-24h]
  UInt32 v74; // [esp+2Ch] [ebp-24h]
  int v75[2]; // [esp+30h] [ebp-20h] BYREF
  int v76; // [esp+38h] [ebp-18h]
  int v77; // [esp+3Ch] [ebp-14h]
  float v78; // [esp+40h] [ebp-10h]
  float v79; // [esp+44h] [ebp-Ch]
  float v80; // [esp+48h] [ebp-8h]
  float v81; // [esp+4Ch] [ebp-4h]

  result = this->unk0DC;
  if ( !result )
  {
    v3 = flt_A5247C;
    *(float *)&this->unk03C[0xC] = flt_A3D658;
    *(float *)&v69 = v3;
    *(float *)&v72 = v3;
    v4 = flt_A56E98;
    this->unk03C[0xD] = v69;
    *(float *)&v67 = v4;
    *(float *)&v70 = v4;
    v5 = flt_A56E94;
    this->unk03C[9] = v67;
    this->unk03C[0xE] = v72;
    *(float *)&v73 = v5;
    v6 = flt_A2FAAC;
    v7 = v73;
    this->unk03C[0xA] = v70;
    *(float *)&v68 = v6;
    *(float *)&v71 = v6;
    *(float *)&v74 = v6;
    this->unk03C[0x1B] = v68;
    this->unk03C[6] = v68;
    this->unk03C[0xB] = v7;
    this->unk03C[0x1C] = v71;
    this->unk03C[7] = v71;
    this->unk03C[0x1D] = v74;
    this->unk03C[8] = v74;
    LODWORD(this->unk0B4) = dword_B3FA90;
    LODWORD(this->unk0B8) = dword_B3FA94;
    v8 = dword_B3FA98;
    LODWORD(this->unk0BC) = dword_B3FA98;
    result = LODWORD(this->unk0B4);
    unk0B8_low = LODWORD(this->unk0B8);
    this->unk03C[0x18] = result;
    this->unk03C[0xF] = result;
    this->unk03C[0] = result;
    this->unk03C[3] = result;
    this->unk03C[0x15] = result;
    this->unk03C[0x19] = unk0B8_low;
    this->unk03C[0x10] = unk0B8_low;
    this->unk03C[1] = unk0B8_low;
    this->unk03C[4] = unk0B8_low;
    this->unk03C[0x16] = unk0B8_low;
    this->unk03C[0x1A] = v8;
    this->unk03C[0x11] = v8;
    this->unk03C[2] = v8;
    this->unk03C[5] = v8;
    this->unk03C[0x17] = v8;
    return result;
  }
  if ( result == 1 )
  {
    result = (UInt32)TES;
    if ( TES )
    {
      v10 = *(_DWORD *)(result + 0x34);
      if ( v10 )
      {
        sub_4C9920(v10, (float *)&this->unk03C[0xC]);
        sub_4C98C0((int)TES->currentInteriorCell, (float *)&this->unk03C[9]);
        sub_4C99C0((int)TES->currentInteriorCell, (float *)&this->unk03C[3]);
        v11 = this->unk03C[3];
        v12 = this->unk03C[4];
        result = this->unk03C[5];
        LODWORD(this->unk0B4) = v11;
        this->unk03C[0x18] = v11;
        this->unk03C[0xF] = v11;
        this->unk03C[0x1B] = v11;
        this->unk03C[6] = v11;
        this->unk03C[0] = v11;
        this->unk03C[0x15] = v11;
        LODWORD(this->unk0B8) = v12;
        this->unk03C[0x19] = v12;
        this->unk03C[0x10] = v12;
        this->unk03C[0x1C] = v12;
        this->unk03C[7] = v12;
        this->unk03C[1] = v12;
        this->unk03C[0x16] = v12;
        LODWORD(this->unk0BC) = result;
        this->unk03C[0x1A] = result;
        this->unk03C[0x11] = result;
        this->unk03C[0x1D] = result;
        this->unk03C[8] = result;
        this->unk03C[2] = result;
        this->unk03C[0x17] = result;
        return result;
      }
    }
  }
  if ( this->firstWeather )
  {
    v58 = sub_53FC10(this);
    v60 = sub_499180(this);
    v63 = sub_4991C0(this);
    v64 = sub_53FC90(this);
    v13 = v58;
    unk0D0 = this->unk0D0;
    v15 = unk0D0 < v58;
    v16 = unk0D0 == v58;
    v17 = 1.0;
    v18 = v60;
    if ( v15 || v16 || this->unk0D0 >= v18 )
    {
      v31 = this->unk0D0 < v18;
      v32 = v63;
      if ( !v31 && this->unk0D0 <= v32 )
      {
        v28 = 1;
        v30 = 1.0;
        v19 = 1;
        v78 = 1.0;
        goto LABEL_26;
      }
      v33 = this->unk0D0;
      v34 = v33 < v32;
      v35 = v33 == v32;
      v36 = v64;
      if ( v34 || v35 || this->unk0D0 >= v36 )
      {
        if ( this->unk0D0 >= (double)v64 )
        {
          v30 = 1.0;
        }
        else
        {
          v42 = this->unk0D0;
          v43 = v42 < v13;
          v44 = v42 == v13;
          v30 = 1.0;
          if ( !v43 && !v44 )
          {
            PrintError("Data error detected--Transition times stored in climate data are invalid.");
            v28 = 1;
            v78 = 1.0;
            v19 = 1;
            v17 = 1.0;
            v30 = 1.0;
            goto LABEL_26;
          }
        }
        v28 = 3;
        v78 = 1.0;
        v19 = 3;
        goto LABEL_26;
      }
      v19 = 2;
      v65 = (v36 - v32) * dbl_A2FAA0;
      v21 = v65;
      v66 = v32 + v65;
      v37 = this->unk0D0;
      v38 = v66 < v37;
      v39 = v66 == v37;
      v40 = v66;
      if ( v38 || v39 )
      {
        v26 = this->unk0D0 - v40;
        goto LABEL_22;
      }
      v27 = v40 - this->unk0D0;
    }
    else
    {
      v19 = 0;
      v61 = (v18 - v13) * dbl_A2FAA0;
      v20 = v13 + v61;
      v21 = v61;
      v62 = v20;
      v22 = this->unk0D0;
      v23 = v62 < v22;
      v24 = v62 == v22;
      v25 = v62;
      if ( !v23 && !v24 )
      {
        v26 = v25 - this->unk0D0;
LABEL_22:
        v28 = 3;
        v41 = 1.0 - v26 / v21;
        v30 = 1.0;
        v78 = v41;
        goto LABEL_26;
      }
      v27 = this->unk0D0 - v25;
    }
    v28 = 1;
    v29 = 1.0 - v27 / v21;
    v30 = 1.0;
    v78 = v29;
LABEL_26:
    v45 = 0;
    v79 = v30 - v78;
    v80 = v78;
    v81 = v79;
    v78 = v78 * this->weatherPercent;
    v79 = v79 * this->weatherPercent;
    v46 = v30 - this->weatherPercent;
    v80 = v80 * v46;
    v47 = v17;
    v48 = v46 * v81;
    v49 = v47;
    v81 = v48;
    while ( 1 )
    {
      firstWeather = this->firstWeather;
      v51 = v49 < this->weatherPercent;
      v52 = v49 == this->weatherPercent;
      v53 = 4 * (v19 + 4 * v45) + 0x68;
      v75[0] = *(_DWORD *)((char *)firstWeather + v53);
      v54 = 4 * (v28 + 4 * v45) + 0x68;
      v75[1] = *(_DWORD *)((char *)firstWeather + v54);
      if ( v51 || v52 )
      {
        v77 = 0;
        v76 = 0;
      }
      else
      {
        secondWeather = this->secondWeather;
        v56 = *(_DWORD *)((char *)secondWeather + v54);
        v76 = *(_DWORD *)((char *)secondWeather + v53);
        v77 = v56;
      }
      v59 = 0.0;
      if ( !this->secondWeather )
      {
        switch ( v45 )
        {
          case 4:
            unk0E4 = this->unk0E4 * flt_B36648;
            break;
          case 3:
            unk0E4 = this->unk0E4 * flt_B36650;
            break;
          case 2:
            unk0E4 = this->unk0E4;
            break;
          default:
            goto LABEL_41;
        }
        v59 = unk0E4;
      }
LABEL_41:
      sub_5400E0(this, (float *)&this->unk03C[3 * v45++], (float *)v75, v59);
      if ( v45 >= 0xA )
      {
        LODWORD(this->unk0B4) = this->unk03C[0xC];
        result = this->unk03C[0xE];
        LODWORD(this->unk0B8) = this->unk03C[0xD];
        LODWORD(this->unk0BC) = result;
        return result;
      }
      v49 = 1.0;
    }
  }
  return result;
}
