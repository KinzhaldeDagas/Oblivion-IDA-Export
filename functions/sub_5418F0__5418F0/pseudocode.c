// Oblivion Sky color synthesis. Interior mode reads TESObjectCELL lighting colors; exterior modes blend current/next TESWeather colors, update Sky color vectors, and publish the active fog color. Fallout was consulted afterward and corroborates the conventional Sky::UpdateColors label.
void __thiscall Sky__UpdateColors(Sky *this)
{
  UInt32 unk0DC; // eax
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  UInt32 v7; // edx
  UInt32 z_low; // edx
  UInt32 unk0B4_low; // eax
  UInt32 unk0B8_low; // ecx
  TESObjectCELL *currentInteriorCell; // ecx
  UInt32 v12; // ecx
  UInt32 v13; // edx
  UInt32 v14; // eax
  double v15; // st7
  double unk0D0; // st6
  bool v17; // c0
  bool v18; // c3
  double v19; // st6
  double v20; // st4
  int v21; // ebp
  double v22; // st4
  double v23; // st7
  double v24; // st4
  bool v25; // c0
  bool v26; // c3
  double v27; // st4
  double v28; // st4
  double v29; // st4
  int v30; // ebx
  double v31; // st5
  double v32; // st7
  bool v33; // c0
  double v34; // st4
  double v35; // st3
  bool v36; // c0
  bool v37; // c3
  double v38; // st3
  double v39; // st4
  bool v40; // c0
  bool v41; // c3
  double v42; // st4
  double v43; // st5
  double v44; // st4
  bool v45; // c0
  bool v46; // c3
  int v47; // edi
  double v48; // st7
  double v49; // rtt
  double v50; // st6
  double v51; // st7
  TESWeather *firstWeather; // eax
  bool v53; // c0
  bool v54; // c3
  int v55; // ecx
  int v56; // edx
  TESWeather *secondWeather; // eax
  int v58; // edx
  double unk0E4; // st7
  float v60; // eax
  float v61; // [esp+14h] [ebp-3Ch]
  float v62; // [esp+14h] [ebp-3Ch]
  float v63; // [esp+18h] [ebp-38h]
  float v64; // [esp+18h] [ebp-38h]
  float v65; // [esp+18h] [ebp-38h]
  float v66; // [esp+1Ch] [ebp-34h]
  float v67; // [esp+20h] [ebp-30h]
  float v68; // [esp+20h] [ebp-30h]
  float v69; // [esp+20h] [ebp-30h]
  UInt32 v70; // [esp+24h] [ebp-2Ch]
  UInt32 v71; // [esp+24h] [ebp-2Ch]
  UInt32 v72; // [esp+28h] [ebp-28h]
  UInt32 v73; // [esp+28h] [ebp-28h]
  UInt32 v74; // [esp+28h] [ebp-28h]
  UInt32 v75; // [esp+2Ch] [ebp-24h]
  UInt32 v76; // [esp+2Ch] [ebp-24h]
  UInt32 v77; // [esp+2Ch] [ebp-24h]
  int v78[2]; // [esp+30h] [ebp-20h] BYREF
  int v79; // [esp+38h] [ebp-18h]
  int v80; // [esp+3Ch] [ebp-14h]
  float v81; // [esp+40h] [ebp-10h]
  float v82; // [esp+44h] [ebp-Ch]
  float v83; // [esp+48h] [ebp-8h]
  float v84; // [esp+4Ch] [ebp-4h]

  unk0DC = this->unk0DC;                        // Fog default decode: read Sky::unk0DC to choose default, interior, or weather color source branch. /*0x5418f6*/
  if ( !unk0DC )                                // Fog default decode: enter mode-0 color initialization branch when Sky::unk0DC == 0. /*0x5418fe*/
  {
    v3 = flt_A5247C; /*0x541912*/
    *(float *)&this->unk03C[0xC] = flt_A3D658;  // Fog default decode: initialize Sky color/tint slot group from static defaults for mode 0. /*0x541918*/
    *(float *)&v72 = v3; /*0x54191b*/
    *(float *)&v75 = v3; /*0x541923*/
    v4 = flt_A56E98; /*0x54192b*/
    this->unk03C[0xD] = v72; /*0x541931*/
    *(float *)&v70 = v4; /*0x541934*/
    *(float *)&v73 = v4; /*0x54193c*/
    v5 = flt_A56E94; /*0x541944*/
    this->unk03C[9] = v70;                      // Fog default decode: initialize another Sky color slot group from static defaults for mode 0. /*0x54194a*/
    this->unk03C[0xE] = v75; /*0x54194d*/
    *(float *)&v76 = v5; /*0x541950*/
    v6 = kFaceEarNormalMatchRadius; /*0x541954*/
    v7 = v76; /*0x54195a*/
    this->unk03C[0xA] = v73; /*0x54195e*/
    *(float *)&v71 = v6; /*0x541961*/
    *(float *)&v74 = v6; /*0x541969*/
    *(float *)&v77 = v6; /*0x541971*/
    this->unk03C[0x1B] = v71;                   // Fog default decode: fan default scalar/color constants into additional Sky color mirror slots. /*0x541975*/
    this->unk03C[6] = v71; /*0x54197b*/
    this->unk03C[0xB] = v7; /*0x54197e*/
    this->unk03C[0x1C] = v74; /*0x541985*/
    this->unk03C[7] = v74; /*0x54198b*/
    this->unk03C[0x1D] = v77; /*0x54198e*/
    this->unk03C[8] = v77; /*0x541994*/
    this->unk0B4 = stru_B3FA90.x;               // Fog default decode: load default fog/color red from B3FA90 into Sky active color source. /*0x54199c*/
    this->unk0B8 = stru_B3FA90.y;               // Fog default decode: load default fog/color green from B3FA94 into Sky active color source. /*0x5419a8*/
    z_low = LODWORD(stru_B3FA90.z); /*0x5419ae*/
    this->unk0BC = stru_B3FA90.z;               // Fog default decode: load default fog/color blue from B3FA98 into Sky active color source. /*0x5419b4*/
    unk0B4_low = LODWORD(this->unk0B4); /*0x5419ba*/
    unk0B8_low = LODWORD(this->unk0B8); /*0x5419c0*/
    this->unk03C[0x18] = unk0B4_low; /*0x5419c6*/
    this->unk03C[0xF] = unk0B4_low; /*0x5419cc*/
    this->unk03C[0] = unk0B4_low; /*0x5419cf*/
    this->unk03C[3] = unk0B4_low;               // Fog default decode: mode-0 default fogColor.r write to Sky+0x48. /*0x5419d2*/
    this->unk03C[0x15] = unk0B4_low; /*0x5419d5*/
    this->unk03C[0x19] = unk0B8_low; /*0x5419db*/
    this->unk03C[0x10] = unk0B8_low; /*0x5419e1*/
    this->unk03C[1] = unk0B8_low; /*0x5419e4*/
    this->unk03C[4] = unk0B8_low;               // Fog default decode: mode-0 default fogColor.g write to Sky+0x4C. /*0x5419e7*/
    this->unk03C[0x16] = unk0B8_low; /*0x5419ea*/
    this->unk03C[0x1A] = z_low; /*0x5419f0*/
    this->unk03C[0x11] = z_low; /*0x5419f6*/
    this->unk03C[2] = z_low; /*0x5419fc*/
    this->unk03C[5] = z_low;                    // Fog default decode: mode-0 default fogColor.b write to Sky+0x50. /*0x5419ff*/
    this->unk03C[0x17] = z_low; /*0x541a02*/
    return; /*0x541a0c*/
  }
  if ( unk0DC == 1 )                            // Fog interior decode: enters cell-lighting color branch when Sky::unk0DC == 1. /*0x541a11*/
  {
    if ( MEMORY[0xB333A0] ) /*0x541a17*/
    {
      currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell;// Fog interior decode: reads currentInteriorCell from TES for cell lighting colors. /*0x541a24*/
      if ( currentInteriorCell ) /*0x541a29*/
      {
        sub_4C9920((int)currentInteriorCell, (float *)&this->unk03C[0xC]);// Fog interior decode: reads LightingData directional color (+0x04 packed RGB) into Sky+0x6C/+0x70/+0x74. /*0x541a33*/
        sub_4C98C0((int)MEMORY[0xB333A0]->currentInteriorCell, (float *)&this->unk03C[9]);// Fog interior decode: reads LightingData ambient color (+0x00 packed RGB) into Sky+0x60/+0x64/+0x68. /*0x541a45*/
        sub_4C99C0((int)MEMORY[0xB333A0]->currentInteriorCell, (float *)&this->unk03C[3]);// Fog interior decode: reads LightingData fog color (+0x08 packed RGB) into Sky+0x48/+0x4C/+0x50. /*0x541a56*/
        v12 = this->unk03C[3]; /*0x541a5b*/
        v13 = this->unk03C[4]; /*0x541a5d*/
        v14 = this->unk03C[5]; /*0x541a60*/
        LODWORD(this->unk0B4) = v12;            // Fog interior decode: caches interior fog color red from Sky+0x48 into Sky active color mirrors. /*0x541a63*/
        this->unk03C[0x18] = v12; /*0x541a69*/
        this->unk03C[0xF] = v12; /*0x541a6f*/
        this->unk03C[0x1B] = v12; /*0x541a72*/
        this->unk03C[6] = v12; /*0x541a78*/
        this->unk03C[0] = v12; /*0x541a7b*/
        this->unk03C[0x15] = v12; /*0x541a7e*/
        LODWORD(this->unk0B8) = v13;            // Fog interior decode: caches interior fog color green from Sky+0x4C into Sky active color mirrors. /*0x541a84*/
        this->unk03C[0x19] = v13; /*0x541a8a*/
        this->unk03C[0x10] = v13; /*0x541a90*/
        this->unk03C[0x1C] = v13; /*0x541a93*/
        this->unk03C[7] = v13; /*0x541a99*/
        this->unk03C[1] = v13; /*0x541a9c*/
        this->unk03C[0x16] = v13; /*0x541a9f*/
        LODWORD(this->unk0BC) = v14;            // Fog interior decode: caches interior fog color blue from Sky+0x50 into Sky active color mirrors. /*0x541aa6*/
        this->unk03C[0x1A] = v14; /*0x541aac*/
        this->unk03C[0x11] = v14; /*0x541ab2*/
        this->unk03C[0x1D] = v14; /*0x541ab8*/
        this->unk03C[8] = v14; /*0x541abe*/
        this->unk03C[2] = v14; /*0x541ac1*/
        this->unk03C[0x17] = v14; /*0x541ac4*/
        return; /*0x541ace*/
      }
    }
  }
  if ( this->firstWeather )                     // Exterior fog-color decode: enters weather color update when Sky::firstWeather exists; builds time-of-day and weather-transition color blends. /*0x541acf*/
  {
    v61 = sub_53FC10(this);                     // Fog time-boundary decode: exterior color update consumes adjusted sunrise blend-start from 0x53FC10. /*0x541ae2*/
    v63 = sub_499180(this);                     // Fog time-boundary decode: exterior color update consumes normalized climate day boundary from 0x499180. /*0x541aed*/
    v66 = sub_4991C0(this);                     // Fog time-boundary decode: exterior color update consumes normalized climate sunset boundary from 0x4991C0. /*0x541af8*/
    v67 = sub_53FC90(this);                     // Fog time-boundary decode: exterior color update consumes adjusted sunset/night blend-end from 0x53FC90. /*0x541b03*/
    v15 = v61; /*0x541b07*/
    unk0D0 = this->unk0D0; /*0x541b0b*/
    v17 = unk0D0 < v61; /*0x541b11*/
    v18 = unk0D0 == v61; /*0x541b11*/
    v19 = 1.0; /*0x541b15*/
    v20 = v63; /*0x541b1c*/
    if ( v17 || v18 || this->unk0D0 >= v20 ) /*0x541b2f*/
    {
      v33 = this->unk0D0 < v20; /*0x541b8f*/
      v34 = v66; /*0x541b93*/
      if ( !v33 && this->unk0D0 <= v34 ) /*0x541ba9*/
      {
        v30 = 1; /*0x541bad*/
        v32 = 1.0; /*0x541bb2*/
        v21 = 1; /*0x541bb4*/
        v81 = 1.0; /*0x541bb6*/
        goto LABEL_26; /*0x541bba*/
      }
      v35 = this->unk0D0; /*0x541bbf*/
      v36 = v35 < v34; /*0x541bc5*/
      v37 = v35 == v34; /*0x541bc5*/
      v38 = v67; /*0x541bc9*/
      if ( v36 || v37 || this->unk0D0 >= v38 ) /*0x541bdf*/
      {
        if ( this->unk0D0 >= (double)v67 ) /*0x541c4e*/
        {
          v32 = 1.0; /*0x541cd9*/
        }
        else
        {
          v44 = this->unk0D0; /*0x541c54*/
          v45 = v44 < v15; /*0x541c5a*/
          v46 = v44 == v15; /*0x541c5a*/
          v32 = 1.0; /*0x541c5e*/
          if ( !v45 && !v46 ) /*0x541c60*/
          {
            PrintError("Data error detected--Transition times stored in climate data are invalid."); /*0x541c6e*/
            v30 = 1; /*0x541c75*/
            v81 = 1.0; /*0x541c7a*/
            v21 = 1; /*0x541c83*/
            v19 = 1.0; /*0x541c85*/
            v32 = 1.0; /*0x541c85*/
            goto LABEL_26; /*0x541c85*/
          }
        }
        v30 = 3; /*0x541cdb*/
        v81 = 1.0; /*0x541ce0*/
        v21 = 3; /*0x541ce4*/
        goto LABEL_26; /*0x541ce6*/
      }
      v21 = 2; /*0x541be3*/
      v68 = (v38 - v34) * dbl_A2FAA0; /*0x541bf4*/
      v23 = v68; /*0x541c00*/
      v69 = v34 + v68; /*0x541c02*/
      v39 = this->unk0D0; /*0x541c06*/
      v40 = v69 < v39; /*0x541c10*/
      v41 = v69 == v39; /*0x541c10*/
      v42 = v69; /*0x541c14*/
      if ( v40 || v41 ) /*0x541c16*/
      {
        v28 = this->unk0D0 - v42; /*0x541c26*/
        goto LABEL_22; /*0x541c26*/
      }
      v29 = v42 - this->unk0D0; /*0x541c1b*/
    }
    else
    {
      v21 = 0; /*0x541b33*/
      v64 = (v20 - v15) * dbl_A2FAA0; /*0x541b3b*/
      v22 = v15 + v64; /*0x541b47*/
      v23 = v64; /*0x541b47*/
      v65 = v22; /*0x541b49*/
      v24 = this->unk0D0; /*0x541b4d*/
      v25 = v65 < v24; /*0x541b57*/
      v26 = v65 == v24; /*0x541b57*/
      v27 = v65; /*0x541b5b*/
      if ( !v25 && !v26 ) /*0x541b5d*/
      {
        v28 = v27 - this->unk0D0; /*0x541b62*/
LABEL_22:
        v30 = 3; /*0x541c2c*/
        v43 = 1.0 - v28 / v23; /*0x541c37*/
        v32 = 1.0; /*0x541c37*/
        v81 = v43; /*0x541c39*/
        goto LABEL_26; /*0x541c3d*/
      }
      v29 = this->unk0D0 - v27; /*0x541b6d*/
    }
    v30 = 1; /*0x541b75*/
    v31 = 1.0 - v29 / v23; /*0x541b7e*/
    v32 = 1.0; /*0x541b7e*/
    v81 = v31; /*0x541b80*/
LABEL_26:
    v47 = 0; /*0x541c87*/
    v82 = v32 - v81; /*0x541c91*/
    v83 = v81; /*0x541c95*/
    v84 = v82; /*0x541c9d*/
    v81 = v81 * this->weatherPercent;           // Fog weather-field decode: firstWeather current-phase color weight = timeWeight * weatherPercent. /*0x541cab*/
    v82 = v82 * this->weatherPercent;           // Fog weather-field decode: firstWeather adjacent-phase color weight = adjacentTimeWeight * weatherPercent. /*0x541cb5*/
    v48 = v32 - this->weatherPercent;           // Fog weather-field decode: second-weather contribution weight base = 1 - weatherPercent. /*0x541cbf*/
    v83 = v83 * v48;                            // Fog weather-field decode: secondWeather current-phase color weight = timeWeight * (1 - weatherPercent). /*0x541cc7*/
    v49 = v19;                                  // Fog weather-field decode: secondWeather adjacent-phase color weight = adjacentTimeWeight * (1 - weatherPercent). /*0x541cd1*/
    v50 = v48 * v84; /*0x541cd1*/
    v51 = v49; /*0x541cd1*/
    v84 = v50; /*0x541cd3*/
    while ( 1 ) /*0x541cf2*/
    {
      firstWeather = this->firstWeather; /*0x541cf2*/
      v53 = v51 < this->weatherPercent; /*0x541cf5*/
      v54 = v51 == this->weatherPercent; /*0x541cf5*/
      v55 = 4 * (v21 + 4 * v47) + 0x68;         // Exterior fog-color decode: computes firstWeather color-table offset = 0x68 + 4*(timePhase + 4*colorSlot). colorSlot 1 targets Sky+0x48 fog RGB. /*0x541cff*/
      v78[0] = *(_DWORD *)((char *)firstWeather + v55);// Exterior fog-color decode: loads firstWeather packed RGB for current time phase/color slot; slot 1 is exterior fog color. /*0x541d09*/
      v56 = 4 * (v30 + 4 * v47) + 0x68; /*0x541d10*/
      v78[1] = *(_DWORD *)((char *)firstWeather + v56);// Exterior fog-color decode: loads firstWeather packed RGB for adjacent time phase/color slot before interpolation. /*0x541d1a*/
      if ( v53 || v54 ) /*0x541d20*/
      {
        v80 = 0; /*0x541d3a*/
        v79 = 0; /*0x541d3e*/
      }
      else
      {
        secondWeather = this->secondWeather;    // Exterior fog-color decode: secondWeather branch for weather transition color blending. /*0x541d25*/
        v58 = *(_DWORD *)((char *)secondWeather + v56);// Exterior fog-color decode: loads secondWeather adjacent phase packed RGB for transition blend. /*0x541d2b*/
        v79 = *(_DWORD *)((char *)secondWeather + v55);// Exterior fog-color decode: loads secondWeather current phase packed RGB for transition blend. /*0x541d2e*/
        v80 = v58; /*0x541d32*/
      }
      v62 = 0.0; /*0x541d48*/
      if ( !this->secondWeather ) /*0x541d42*/
      {
        switch ( v47 ) /*0x541d51*/
        {
          case 4: /*0x541d51*/
            unk0E4 = this->unk0E4 * unk_B36648; /*0x541d59*/
            break;
          case 3: /*0x541d51*/
            unk0E4 = this->unk0E4 * unk_B36650; /*0x541d6c*/
            break;
          case 2: /*0x541d51*/
            unk0E4 = this->unk0E4; /*0x541d79*/
            break;
          default:
            goto LABEL_41; /*0x541d77*/
        }
        v62 = unk0E4; /*0x541d7f*/
      }
LABEL_41:
      sub_5400E0(this, (float *)&this->unk03C[3 * v47++], (float *)v78, v62);// Exterior fog-color decode: blends packed weather RGB into Sky color vector. When colorSlot == 1, target is Sky+0x48/+0x4C/+0x50 active fog color. /*0x541d83*/
      if ( v47 >= 0xA ) /*0x541da5*/
      {
        LODWORD(this->unk0B4) = this->unk03C[0xC]; /*0x541db7*/
        v60 = *(float *)&this->unk03C[0xE]; /*0x541dbc*/
        LODWORD(this->unk0B8) = this->unk03C[0xD]; /*0x541dc0*/
        this->unk0BC = v60; /*0x541dc3*/
        return; /*0x541dc3*/
      }
      v51 = 1.0; /*0x541cf0*/
    }
  }
}
