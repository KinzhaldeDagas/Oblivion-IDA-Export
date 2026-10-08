double *__userpurge sub_4F3620@<eax>(
        _DWORD *this@<ecx>,
        double a2@<st0>,
        void *Src,
        TESForm *a4,
        int a5,
        Script *a6,
        ScriptEventList *a7,
        size_t Size,
        char a9)
{
  TESForm *v9; // ebx
  _DWORD *v10; // edi
  double *result; // eax
  bool v12; // zf
  TESObjectREFR *v13; // esi
  int v14; // edx
  _DWORD *v15; // ecx
  int v16; // ebx
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // edi
  int v21; // ebx
  _DWORD *v22; // eax
  int *v23; // eax
  int v24; // edx
  int v25; // edi
  int v26; // ecx
  double v27; // st6
  bool v28; // c3
  int v29; // esi
  _DWORD *v30; // ecx
  double v31; // kr00_8
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // ebx
  _DWORD *v36; // ecx
  int v37; // edx
  int v38; // [esp+10h] [ebp-2C8h]
  double v39; // [esp+18h] [ebp-2C0h] BYREF
  int v40; // [esp+24h] [ebp-2B4h]
  double v41; // [esp+28h] [ebp-2B0h]
  int v42; // [esp+34h] [ebp-2A4h]
  double v43; // [esp+38h] [ebp-2A0h]
  int v44; // [esp+40h] [ebp-298h] BYREF
  _DWORD *v45; // [esp+44h] [ebp-294h]
  int v46; // [esp+48h] [ebp-290h] BYREF
  int v47; // [esp+4Ch] [ebp-28Ch] BYREF
  int v48; // [esp+50h] [ebp-288h]
  int v49; // [esp+54h] [ebp-284h] BYREF
  ScriptEventList *v50; // [esp+58h] [ebp-280h]
  int v51; // [esp+5Ch] [ebp-27Ch]
  Script *v52; // [esp+60h] [ebp-278h]
  TESObjectREFR *v53; // [esp+64h] [ebp-274h]
  int v54; // [esp+74h] [ebp-264h]
  _DWORD v55[4]; // [esp+78h] [ebp-260h] BYREF
  char Str[64]; // [esp+88h] [ebp-250h] BYREF
  char Dst[524]; // [esp+C8h] [ebp-210h] BYREF

  v9 = a4; /*0x4f3641*/
  v51 = a5; /*0x4f3648*/
  v10 = this; /*0x4f3650*/
  v50 = a7; /*0x4f3655*/
  result = 0; /*0x4f3659*/
  v45 = this; /*0x4f365d*/
  v53 = (TESObjectREFR *)a4; /*0x4f3661*/
  v52 = a6; /*0x4f3665*/
  v47 = (int)Src; /*0x4f3669*/
  v46 = 0x10; /*0x4f366d*/
  v38 = 0; /*0x4f3675*/
  v39 = 0.0; /*0x4f367d*/
  if ( (_DWORD)Size && !*this ) /*0x4f368b*/
  {
    *(this + 0x1C2) = 0xFFFFFFFF; /*0x4f369d*/
    memcpy(Dst, Src, Size); /*0x4f36a7*/
    v49 = (int)Dst; /*0x4f36bf*/
    Dst[Size] = 0; /*0x4f36d7*/
    v48 = sub_4F3320(v10, (char **)&v49, Str, (unsigned int *)&v46, SBYTE4(Size), &v47); /*0x4f36e6*/
    if ( v48 ) /*0x4f36ea*/
    {
      while ( 1 ) /*0x4f3768*/
      {
        v13 = (TESObjectREFR *)v51; /*0x4f3768*/
        if ( (unsigned int)(v46 - 2) > 0xD ) /*0x4f3772*/
        {
          if ( sub_47D550(Str) ) /*0x4f3eb7*/
          {
            LOBYTE(v38) = 0; /*0x4f3ecb*/
            LODWORD(v39) = atol(Str); /*0x4f3ed8*/
          }
          else
          {
            LOBYTE(v38) = 1; /*0x4f3ef3*/
            if ( sub_47D5B0(Str) ) /*0x4f3ee9*/
            {
              v39 = atof(Str); /*0x4f3f07*/
            }
            else
            {
              v44 = 0; /*0x4f3f15*/
              if ( BYTE4(Size) ) /*0x4f3f1d*/
              {
                ExecuteScriptInstruction_((int)&v39, (UInt8 *)v47, (UInt32 *)&v44, v9, v13, v52, v50, SBYTE4(Size)); /*0x4f3f3b*/
              }
              else if ( !ExecuteScriptInstruction_((int)&v39, (UInt8 *)Str, (UInt32 *)&v44, v9, v13, v52, v50, 0) ) /*0x4f3f6f*/
              {
                return (double *)sub_4F3300(v10, 5); /*0x4f3f6f*/
              }
            }
          }
          v33 = HIDWORD(v39); /*0x4f3f75*/
          v34 = ++v10[0x1C2]; /*0x4f3f80*/
          v35 = LODWORD(v39); /*0x4f3f8e*/
          v54 = v33; /*0x4f3f92*/
          v36 = &v10[4 * v34 + 0x142]; /*0x4f3f9f*/
          *v36 = v38; /*0x4f3fa1*/
          v37 = v54; /*0x4f3fa3*/
          v36[1] = 0; /*0x4f3fa7*/
          v36[2] = v35; /*0x4f3faa*/
          v36[3] = v37; /*0x4f3fad*/
        }
        else
        {
          if ( v10[0x1C2] == 0xFFFFFFFF ) /*0x4f377f*/
            return (double *)sub_4F3300(v10, 3); /*0x4f377f*/
          v14 = v10[0x1C2]; /*0x4f3785*/
          v15 = v10 + 0x142; /*0x4f378b*/
          v16 = v10[4 * v14 + 0x142]; /*0x4f379a*/
          v17 = (int)&v10[4 * v14 + 0x142]; /*0x4f379d*/
          v42 = *(_DWORD *)(v17 + 4); /*0x4f379f*/
          v18 = *(_DWORD *)(v17 + 8); /*0x4f37a3*/
          v12 = v46 == 0xF; /*0x4f37ac*/
          v43 = *(double *)(v17 + 8); /*0x4f37b1*/
          v10[0x1C2] = v14 - 1; /*0x4f37b9*/
          if ( v12 ) /*0x4f37bf*/
          {
            if ( (_BYTE)v16 ) /*0x4f37c3*/
              v39 = -v43; /*0x4f37d3*/
            else
              LODWORD(v39) = -v18; /*0x4f37c7*/
            v19 = ++v10[0x1C2]; /*0x4f37de*/
            v20 = LODWORD(v39); /*0x4f37e8*/
            LOBYTE(v38) = v16; /*0x4f37ec*/
            v21 = HIDWORD(v39); /*0x4f37f4*/
            v22 = &v15[4 * v19]; /*0x4f37fb*/
            *v22 = v38; /*0x4f37fd*/
            v22[1] = 0; /*0x4f37ff*/
            v22[2] = v20; /*0x4f3802*/
            v22[3] = v21; /*0x4f3805*/
          }
          else
          {
            if ( v10[0x1C2] == 0xFFFFFFFF ) /*0x4f3814*/
              return (double *)sub_4F3300(v10, 3); /*0x4f4006*/
            v23 = sub_4F32A0(v45 + 0x142, v55); /*0x4f3829*/
            v24 = v23[1]; /*0x4f382e*/
            v25 = v23[2]; /*0x4f3831*/
            v26 = *v23; /*0x4f3834*/
            HIDWORD(v41) = v23[3]; /*0x4f3839*/
            v40 = v24; /*0x4f3847*/
            LODWORD(v41) = v25; /*0x4f384b*/
            if ( (unsigned int)(v46 - 2) > 0xC ) /*0x4f384f*/
            {
              PrintError("Unhandled operator '%s' in Expression::Eval()", Str); /*0x4f3e5e*/
              LOBYTE(v38) = 0; /*0x4f3e66*/
LABEL_147:
              LODWORD(v39) = 0; /*0x4f3e6b*/
            }
            else
            {
              switch ( v46 ) /*0x4f385c*/
              {
                case 2: /*0x4f385c*/
                  LOBYTE(v38) = 0; /*0x4f3865*/
                  if ( (_BYTE)v26 ) /*0x4f386a*/
                  {
                    v27 = 0.0; /*0x4f389b*/
                    if ( !(_BYTE)v16 ) /*0x4f389d*/
                    {
                      if ( 0.0 != v41 && v18 ) /*0x4f38b0*/
                      {
                        LODWORD(v39) = 1; /*0x4f38b6*/
                        break; /*0x4f38be*/
                      }
                      goto LABEL_147; /*0x4f38b0*/
                    }
                    if ( 0.0 == v41 ) /*0x4f38cc*/
                      goto LABEL_147; /*0x4f38cc*/
                  }
                  else
                  {
                    if ( !(_BYTE)v16 ) /*0x4f386e*/
                    {
                      if ( v25 && v18 ) /*0x4f387a*/
                      {
                        LODWORD(v39) = 1; /*0x4f3880*/
                        break; /*0x4f3888*/
                      }
                      goto LABEL_147; /*0x4f387a*/
                    }
                    if ( !v25 ) /*0x4f388f*/
                      goto LABEL_147; /*0x4f388f*/
                    v27 = 0.0; /*0x4f3895*/
                  }
                  goto LABEL_30; /*0x4f3897*/
                case 3: /*0x4f385c*/
                  LOBYTE(v38) = 0; /*0x4f38f3*/
                  if ( (_BYTE)v26 ) /*0x4f38f8*/
                  {
                    if ( (_BYTE)v16 ) /*0x4f3923*/
                    {
                      if ( 0.0 != v41 || 0.0 != v43 ) /*0x4f3959*/
                      {
                        LODWORD(v39) = 1; /*0x4f3962*/
                        break; /*0x4f396a*/
                      }
                    }
                    else
                    {
                      if ( 0.0 != v41 ) /*0x4f392e*/
                        goto LABEL_32; /*0x4f392e*/
                      if ( v18 ) /*0x4f3932*/
                      {
                        LODWORD(v39) = 1; /*0x4f3938*/
                        break; /*0x4f3940*/
                      }
                    }
                    goto LABEL_147; /*0x4f3932*/
                  }
                  if ( !(_BYTE)v16 ) /*0x4f38fc*/
                  {
                    if ( v25 ) /*0x4f3900*/
                      goto LABEL_32; /*0x4f3900*/
                    if ( v18 ) /*0x4f3904*/
                    {
                      LODWORD(v39) = 1; /*0x4f390a*/
                      break; /*0x4f3912*/
                    }
                    goto LABEL_147; /*0x4f3904*/
                  }
                  if ( v25 ) /*0x4f3919*/
                    goto LABEL_32; /*0x4f3919*/
                  v27 = 0.0; /*0x4f391b*/
                  goto LABEL_30; /*0x4f391d*/
                case 4: /*0x4f385c*/
                  LOBYTE(v38) = 0; /*0x4f3af4*/
                  if ( !(_BYTE)v26 ) /*0x4f3af9*/
                  {
                    if ( !(_BYTE)v16 ) /*0x4f3afd*/
                    {
                      LODWORD(v39) = v25 <= v18; /*0x4f3b06*/
                      break; /*0x4f3b0a*/
                    }
                    if ( (double)SLODWORD(v41) <= v43 ) /*0x4f3b1c*/
                    {
                      LODWORD(v39) = 1; /*0x4f3b22*/
                      break; /*0x4f3b2a*/
                    }
                    goto LABEL_147; /*0x4f3b1c*/
                  }
                  if ( (_BYTE)v16 ) /*0x4f3b31*/
                  {
                    if ( v43 < v41 ) /*0x4f3b60*/
                      goto LABEL_147; /*0x4f3b60*/
                    LODWORD(v39) = 1; /*0x4f3b66*/
                  }
                  else
                  {
                    if ( (double)SLODWORD(v43) < v41 ) /*0x4f3b40*/
                      goto LABEL_147; /*0x4f3b40*/
                    LODWORD(v39) = 1; /*0x4f3b46*/
                  }
                  break; /*0x4f3b4e*/
                case 5: /*0x4f385c*/
                  LOBYTE(v38) = 0; /*0x4f3a73*/
                  if ( !(_BYTE)v26 ) /*0x4f3a78*/
                  {
                    if ( !(_BYTE)v16 ) /*0x4f3a7c*/
                    {
                      LODWORD(v39) = v25 < v18; /*0x4f3a85*/
                      break; /*0x4f3a89*/
                    }
                    if ( (double)SLODWORD(v41) < v43 ) /*0x4f3a9b*/
                    {
                      LODWORD(v39) = 1; /*0x4f3aa1*/
                      break; /*0x4f3aa9*/
                    }
                    goto LABEL_147; /*0x4f3a9b*/
                  }
                  if ( (_BYTE)v16 ) /*0x4f3ab0*/
                  {
                    if ( v43 <= v41 ) /*0x4f3adf*/
                      goto LABEL_147; /*0x4f3adf*/
                    LODWORD(v39) = 1; /*0x4f3ae5*/
                  }
                  else
                  {
                    if ( (double)SLODWORD(v43) <= v41 ) /*0x4f3abf*/
                      goto LABEL_147; /*0x4f3abf*/
                    LODWORD(v39) = 1; /*0x4f3ac5*/
                  }
                  break; /*0x4f3acd*/
                case 6: /*0x4f385c*/
                  LOBYTE(v38) = 0; /*0x4f39f2*/
                  if ( !(_BYTE)v26 ) /*0x4f39f7*/
                  {
                    if ( !(_BYTE)v16 ) /*0x4f39fb*/
                    {
                      LODWORD(v39) = v25 >= v18; /*0x4f3a04*/
                      break; /*0x4f3a08*/
                    }
                    if ( (double)SLODWORD(v41) >= v43 ) /*0x4f3a1a*/
                    {
                      LODWORD(v39) = 1; /*0x4f3a20*/
                      break; /*0x4f3a28*/
                    }
                    goto LABEL_147; /*0x4f3a1a*/
                  }
                  if ( (_BYTE)v16 ) /*0x4f3a2f*/
                  {
                    if ( v43 > v41 ) /*0x4f3a5e*/
                      goto LABEL_147; /*0x4f3a5e*/
                    LODWORD(v39) = 1; /*0x4f3a64*/
                  }
                  else
                  {
                    if ( (double)SLODWORD(v43) > v41 ) /*0x4f3a3e*/
                      goto LABEL_147; /*0x4f3a3e*/
                    LODWORD(v39) = 1; /*0x4f3a44*/
                  }
                  break; /*0x4f3a4c*/
                case 7: /*0x4f385c*/
                  LOBYTE(v38) = 0; /*0x4f3971*/
                  if ( !(_BYTE)v26 ) /*0x4f3976*/
                  {
                    if ( !(_BYTE)v16 ) /*0x4f397a*/
                    {
                      LODWORD(v39) = v25 > v18; /*0x4f3983*/
                      break; /*0x4f3987*/
                    }
                    if ( (double)SLODWORD(v41) > v43 ) /*0x4f3999*/
                    {
                      LODWORD(v39) = 1; /*0x4f399f*/
                      break; /*0x4f39a7*/
                    }
                    goto LABEL_147; /*0x4f3999*/
                  }
                  if ( (_BYTE)v16 ) /*0x4f39ae*/
                  {
                    if ( v43 >= v41 ) /*0x4f39dd*/
                      goto LABEL_147; /*0x4f39dd*/
                    LODWORD(v39) = 1; /*0x4f39e3*/
                  }
                  else
                  {
                    if ( (double)SLODWORD(v43) >= v41 ) /*0x4f39bd*/
                      goto LABEL_147; /*0x4f39bd*/
                    LODWORD(v39) = 1; /*0x4f39c3*/
                  }
                  break; /*0x4f39cb*/
                case 8: /*0x4f385c*/
                  LOBYTE(v38) = 0; /*0x4f3b75*/
                  if ( !(_BYTE)v26 ) /*0x4f3b7a*/
                  {
                    if ( !(_BYTE)v16 ) /*0x4f3b7e*/
                    {
                      LODWORD(v39) = v25 == v18; /*0x4f3b87*/
                      break; /*0x4f3b8b*/
                    }
                    if ( (double)SLODWORD(v41) == v43 ) /*0x4f3b9d*/
                    {
                      LODWORD(v39) = 1; /*0x4f3ba3*/
                      break; /*0x4f3bab*/
                    }
                    goto LABEL_147; /*0x4f3b9d*/
                  }
                  if ( (_BYTE)v16 ) /*0x4f3bb2*/
                  {
                    if ( v43 != v41 ) /*0x4f3be1*/
                      goto LABEL_147; /*0x4f3be1*/
                    LODWORD(v39) = 1; /*0x4f3be7*/
                  }
                  else
                  {
                    if ( (double)SLODWORD(v43) != v41 ) /*0x4f3bc1*/
                      goto LABEL_147; /*0x4f3bc1*/
                    LODWORD(v39) = 1; /*0x4f3bc7*/
                  }
                  break; /*0x4f3bcf*/
                case 9: /*0x4f385c*/
                  LOBYTE(v38) = 0; /*0x4f3bf6*/
                  if ( (_BYTE)v26 ) /*0x4f3bfb*/
                  {
                    if ( (_BYTE)v16 ) /*0x4f3c1c*/
                      v28 = v43 == v41; /*0x4f3c2f*/
                    else
                      v28 = (double)SLODWORD(v43) == v41; /*0x4f3c22*/
                  }
                  else
                  {
                    if ( !(_BYTE)v16 ) /*0x4f3bff*/
                    {
                      LODWORD(v39) = v25 != v18; /*0x4f3c08*/
                      break; /*0x4f3c0c*/
                    }
                    v27 = (double)SLODWORD(v41); /*0x4f3c11*/
LABEL_30:
                    v28 = v27 == v43; /*0x4f38ce*/
                  }
                  if ( v28 ) /*0x4f38d7*/
                    goto LABEL_147; /*0x4f38d7*/
LABEL_32:
                  LODWORD(v39) = 1; /*0x4f38dd*/
                  break; /*0x4f38e5*/
                case 0xA: /*0x4f385c*/
                  if ( (_BYTE)v26 ) /*0x4f3c3a*/
                  {
                    LOBYTE(v38) = 1; /*0x4f3c67*/
                    if ( (_BYTE)v16 ) /*0x4f3c6c*/
                      v39 = v41 - v43; /*0x4f3c87*/
                    else
                      v39 = v41 - (double)SLODWORD(v43); /*0x4f3c76*/
                  }
                  else if ( (_BYTE)v16 ) /*0x4f3c3e*/
                  {
                    LOBYTE(v38) = 1; /*0x4f3c53*/
                    v39 = (double)SLODWORD(v41) - v43; /*0x4f3c5c*/
                  }
                  else
                  {
                    LOBYTE(v38) = 0; /*0x4f3c42*/
                    LODWORD(v39) = v25 - v18; /*0x4f3c46*/
                  }
                  break; /*0x4f3c4a*/
                case 0xB: /*0x4f385c*/
                  if ( (_BYTE)v26 ) /*0x4f3c92*/
                  {
                    LOBYTE(v38) = 1; /*0x4f3cbf*/
                    if ( (_BYTE)v16 ) /*0x4f3cc4*/
                      v39 = v43 + v41; /*0x4f3cdf*/
                    else
                      v39 = (double)SLODWORD(v43) + v41; /*0x4f3cce*/
                  }
                  else if ( (_BYTE)v16 ) /*0x4f3c96*/
                  {
                    LOBYTE(v38) = 1; /*0x4f3cab*/
                    v39 = (double)SLODWORD(v41) + v43; /*0x4f3cb4*/
                  }
                  else
                  {
                    LOBYTE(v38) = 0; /*0x4f3c9a*/
                    LODWORD(v39) = v25 + v18; /*0x4f3c9e*/
                  }
                  break; /*0x4f3ca2*/
                case 0xC: /*0x4f385c*/
                  if ( (_BYTE)v26 ) /*0x4f3cea*/
                  {
                    LOBYTE(v38) = 1; /*0x4f3d18*/
                    if ( (_BYTE)v16 ) /*0x4f3d1d*/
                      v39 = v43 * v41; /*0x4f3d38*/
                    else
                      v39 = (double)SLODWORD(v43) * v41; /*0x4f3d27*/
                  }
                  else if ( (_BYTE)v16 ) /*0x4f3cee*/
                  {
                    LOBYTE(v38) = 1; /*0x4f3d04*/
                    v39 = (double)SLODWORD(v41) * v43; /*0x4f3d0d*/
                  }
                  else
                  {
                    LOBYTE(v38) = 0; /*0x4f3cf3*/
                    LODWORD(v39) = v25 * v18; /*0x4f3cf7*/
                  }
                  break; /*0x4f3cfb*/
                case 0xD: /*0x4f385c*/
                case 0xE: /*0x4f385c*/
                  if ( BYTE4(Size) ) /*0x4f3d45*/
                    break; /*0x4f3d45*/
                  if ( (_BYTE)v26 ) /*0x4f3d4d*/
                  {
                    if ( (_BYTE)v16 ) /*0x4f3dc8*/
                    {
                      if ( v43 == 0.0 ) /*0x4f3e16*/
                        return (double *)sub_4F3300(v45, 4); /*0x4f4002*/
                      LOBYTE(v38) = 1; /*0x4f3e1f*/
                      if ( v46 == 0xD ) /*0x4f3e24*/
                      {
                        v39 = v41 / v43; /*0x4f3e2a*/
                      }
                      else
                      {
                        v29 = Double_To_SInt32(a2); /*0x4f3e39*/
                        v44 = Double_To_SInt32(a2) % v29; /*0x4f3e43*/
                        v39 = (double)v44; /*0x4f3e4b*/
                      }
                    }
                    else
                    {
                      if ( !v18 ) /*0x4f3dcc*/
                        return (double *)sub_4F3300(v45, 4); /*0x4f3dcc*/
                      LOBYTE(v38) = 1; /*0x4f3dd5*/
                      if ( v46 == 0xD ) /*0x4f3dda*/
                      {
                        v39 = v41 / (double)SLODWORD(v43); /*0x4f3de4*/
                      }
                      else
                      {
                        v44 = Double_To_SInt32(a2) % v18; /*0x4f3df9*/
                        v39 = (double)v44; /*0x4f3e01*/
                      }
                    }
                  }
                  else if ( (_BYTE)v16 ) /*0x4f3d51*/
                  {
                    if ( v43 == 0.0 ) /*0x4f3d8c*/
                      return (double *)sub_4F3300(v45, 4); /*0x4f3d8c*/
                    LOBYTE(v38) = 1; /*0x4f3d95*/
                    if ( v46 == 0xD ) /*0x4f3d9a*/
                    {
                      v39 = (double)SLODWORD(v41) / v43; /*0x4f3da0*/
                    }
                    else
                    {
                      v44 = v25 % Double_To_SInt32(a2); /*0x4f3db5*/
                      v39 = (double)v44; /*0x4f3dbd*/
                    }
                  }
                  else
                  {
                    if ( !v18 ) /*0x4f3d55*/
                      return (double *)sub_4F3300(v45, 4); /*0x4f3d55*/
                    LOBYTE(v38) = 0; /*0x4f3d60*/
                    if ( v46 == 0xD ) /*0x4f3d65*/
                      LODWORD(v39) = v25 / v18; /*0x4f3d69*/
                    else
                      LODWORD(v39) = v25 % v18; /*0x4f3d74*/
                  }
                  break; /*0x4f3d6d*/
              }
            }
            v30 = v45; /*0x4f3e73*/
            ++v45[0x1C2]; /*0x4f3e77*/
            v31 = v39; /*0x4f3e90*/
            v32 = (int)&v30[4 * v30[0x1C2] + 0x142]; /*0x4f3e9d*/
            *(_DWORD *)v32 = v38; /*0x4f3e9f*/
            *(_DWORD *)(v32 + 4) = 0; /*0x4f3ea1*/
            *(double *)(v32 + 8) = v31; /*0x4f3ea4*/
          }
        }
        v10 = v45; /*0x4f3fb5*/
        if ( !v48 ) /*0x4f3fb9*/
          break; /*0x4f3fb9*/
        v47 += v48; /*0x4f3fc6*/
        v48 = sub_4F3320(v45, (char **)&v49, Str, (unsigned int *)&v46, SBYTE4(Size), &v47); /*0x4f3feb*/
        if ( !v48 ) /*0x4f3fef*/
          break; /*0x4f3fef*/
        v9 = (TESForm *)v53; /*0x4f3760*/
      }
    }
    if ( v10[0x1C2] == 0xFFFFFFFF ) /*0x4f36f5*/
      return (double *)sub_4F3300(v10, 5); /*0x4f36f5*/
    result = (double *)sub_4F32A0(v10 + 0x142, v55); /*0x4f3706*/
    v12 = v10[0x1C2] == 0xFFFFFFFF; /*0x4f370b*/
    v39 = result[1]; /*0x4f3721*/
    if ( !v12 ) /*0x4f372c*/
      return (double *)sub_4F3300(v10, 5); /*0x4f4025*/
  }
  return result; /*0x4f3741*/
}
