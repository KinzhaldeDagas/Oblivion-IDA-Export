double *__userpurge sub_4F3620@<eax>(
        _DWORD *this@<ecx>,
        double a2@<st0>,
        void *Src,
        TESObjectREFR *a4,
        int a5,
        Script *a6,
        void *a7,
        size_t Size,
        char a9)
{
  TESObjectREFR *v9; // ebx
  _DWORD *v10; // edi
  double *result; // eax
  bool v12; // zf
  void *v13; // esi
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
  size_t v38; // [esp-4h] [ebp-2DCh]
  int v39; // [esp+10h] [ebp-2C8h]
  double v40; // [esp+18h] [ebp-2C0h] BYREF
  int v41; // [esp+24h] [ebp-2B4h]
  double v42; // [esp+28h] [ebp-2B0h]
  int v43; // [esp+34h] [ebp-2A4h]
  double v44; // [esp+38h] [ebp-2A0h]
  int v45; // [esp+40h] [ebp-298h] BYREF
  _DWORD *v46; // [esp+44h] [ebp-294h]
  int v47; // [esp+48h] [ebp-290h] BYREF
  int v48; // [esp+4Ch] [ebp-28Ch] BYREF
  int v49; // [esp+50h] [ebp-288h]
  int v50; // [esp+54h] [ebp-284h] BYREF
  void *v51; // [esp+58h] [ebp-280h]
  void *v52; // [esp+5Ch] [ebp-27Ch]
  Script *v53; // [esp+60h] [ebp-278h]
  TESObjectREFR *v54; // [esp+64h] [ebp-274h]
  int v55; // [esp+74h] [ebp-264h]
  _DWORD v56[4]; // [esp+78h] [ebp-260h] BYREF
  char Str[64]; // [esp+88h] [ebp-250h] BYREF
  char Dst[524]; // [esp+C8h] [ebp-210h] BYREF
  int savedregs; // [esp+2D8h] [ebp+0h] BYREF

  v9 = a4;
  v52 = (void *)a5;
  v10 = this;
  v51 = a7;
  result = 0;
  v46 = this;
  v54 = a4;
  v53 = a6;
  v48 = (int)Src;
  v47 = 0x10;
  v39 = 0;
  v40 = 0.0;
  if ( (_DWORD)Size && !*this )
  {
    LODWORD(v38) = Size;
    *(this + 0x1C2) = 0xFFFFFFFF;
    memcpy(Dst, Src, v38);
    v50 = (int)Dst;
    Dst[Size] = 0;
    v49 = sub_4F3320(v10, (int)&savedregs, (char **)&v50, Str, (unsigned int *)&v47, SBYTE4(Size), &v48);
    if ( v49 )
    {
      while ( 1 )
      {
        v13 = v52;
        if ( (unsigned int)(v47 - 2) > 0xD )
        {
          if ( sub_47D550(Str) )
          {
            LOBYTE(v39) = 0;
            LODWORD(v40) = atol(Str);
          }
          else
          {
            LOBYTE(v39) = 1;
            if ( sub_47D5B0(Str) )
            {
              v40 = atof(Str);
            }
            else
            {
              v45 = 0;
              if ( BYTE4(Size) )
              {
                ExecuteScriptInstruction_((int)&v40, (UInt8 *)v48, (UInt32 *)&v45, v9, v13, v53, v51, SBYTE4(Size));
              }
              else if ( !ExecuteScriptInstruction_((int)&v40, (UInt8 *)Str, (UInt32 *)&v45, v9, v13, v53, v51, 0) )
              {
                return (double *)sub_4F3300(v10, 5);
              }
            }
          }
          v33 = HIDWORD(v40);
          v34 = ++v10[0x1C2];
          v35 = LODWORD(v40);
          v55 = v33;
          v36 = &v10[4 * v34 + 0x142];
          *v36 = v39;
          v37 = v55;
          v36[1] = 0;
          v36[2] = v35;
          v36[3] = v37;
        }
        else
        {
          if ( v10[0x1C2] == 0xFFFFFFFF )
            return (double *)sub_4F3300(v10, 3);
          v14 = v10[0x1C2];
          v15 = v10 + 0x142;
          v16 = v10[4 * v14 + 0x142];
          v17 = (int)&v10[4 * v14 + 0x142];
          v43 = *(_DWORD *)(v17 + 4);
          v18 = *(_DWORD *)(v17 + 8);
          v12 = v47 == 0xF;
          v44 = *(double *)(v17 + 8);
          v10[0x1C2] = v14 - 1;
          if ( v12 )
          {
            if ( (_BYTE)v16 )
              v40 = -v44;
            else
              LODWORD(v40) = -v18;
            v19 = ++v10[0x1C2];
            v20 = LODWORD(v40);
            LOBYTE(v39) = v16;
            v21 = HIDWORD(v40);
            v22 = &v15[4 * v19];
            *v22 = v39;
            v22[1] = 0;
            v22[2] = v20;
            v22[3] = v21;
          }
          else
          {
            if ( v10[0x1C2] == 0xFFFFFFFF )
              return (double *)sub_4F3300(v10, 3);
            v23 = sub_4F32A0(v46 + 0x142, v56);
            v24 = v23[1];
            v25 = v23[2];
            v26 = *v23;
            HIDWORD(v42) = v23[3];
            v41 = v24;
            LODWORD(v42) = v25;
            if ( (unsigned int)(v47 - 2) > 0xC )
            {
              PrintError("Unhandled operator '%s' in Expression::Eval()", Str);
              LOBYTE(v39) = 0;
LABEL_147:
              LODWORD(v40) = 0;
            }
            else
            {
              switch ( v47 )
              {
                case 2:
                  LOBYTE(v39) = 0;
                  if ( (_BYTE)v26 )
                  {
                    v27 = 0.0;
                    if ( !(_BYTE)v16 )
                    {
                      if ( 0.0 != v42 && v18 )
                      {
                        LODWORD(v40) = 1;
                        break;
                      }
                      goto LABEL_147;
                    }
                    if ( 0.0 == v42 )
                      goto LABEL_147;
                  }
                  else
                  {
                    if ( !(_BYTE)v16 )
                    {
                      if ( v25 && v18 )
                      {
                        LODWORD(v40) = 1;
                        break;
                      }
                      goto LABEL_147;
                    }
                    if ( !v25 )
                      goto LABEL_147;
                    v27 = 0.0;
                  }
                  goto LABEL_30;
                case 3:
                  LOBYTE(v39) = 0;
                  if ( (_BYTE)v26 )
                  {
                    if ( (_BYTE)v16 )
                    {
                      if ( 0.0 != v42 || 0.0 != v44 )
                      {
                        LODWORD(v40) = 1;
                        break;
                      }
                    }
                    else
                    {
                      if ( 0.0 != v42 )
                        goto LABEL_32;
                      if ( v18 )
                      {
                        LODWORD(v40) = 1;
                        break;
                      }
                    }
                    goto LABEL_147;
                  }
                  if ( !(_BYTE)v16 )
                  {
                    if ( v25 )
                      goto LABEL_32;
                    if ( v18 )
                    {
                      LODWORD(v40) = 1;
                      break;
                    }
                    goto LABEL_147;
                  }
                  if ( v25 )
                    goto LABEL_32;
                  v27 = 0.0;
                  goto LABEL_30;
                case 4:
                  LOBYTE(v39) = 0;
                  if ( !(_BYTE)v26 )
                  {
                    if ( !(_BYTE)v16 )
                    {
                      LODWORD(v40) = v25 <= v18;
                      break;
                    }
                    if ( (double)SLODWORD(v42) <= v44 )
                    {
                      LODWORD(v40) = 1;
                      break;
                    }
                    goto LABEL_147;
                  }
                  if ( (_BYTE)v16 )
                  {
                    if ( v44 < v42 )
                      goto LABEL_147;
                    LODWORD(v40) = 1;
                  }
                  else
                  {
                    if ( (double)SLODWORD(v44) < v42 )
                      goto LABEL_147;
                    LODWORD(v40) = 1;
                  }
                  break;
                case 5:
                  LOBYTE(v39) = 0;
                  if ( !(_BYTE)v26 )
                  {
                    if ( !(_BYTE)v16 )
                    {
                      LODWORD(v40) = v25 < v18;
                      break;
                    }
                    if ( (double)SLODWORD(v42) < v44 )
                    {
                      LODWORD(v40) = 1;
                      break;
                    }
                    goto LABEL_147;
                  }
                  if ( (_BYTE)v16 )
                  {
                    if ( v44 <= v42 )
                      goto LABEL_147;
                    LODWORD(v40) = 1;
                  }
                  else
                  {
                    if ( (double)SLODWORD(v44) <= v42 )
                      goto LABEL_147;
                    LODWORD(v40) = 1;
                  }
                  break;
                case 6:
                  LOBYTE(v39) = 0;
                  if ( !(_BYTE)v26 )
                  {
                    if ( !(_BYTE)v16 )
                    {
                      LODWORD(v40) = v25 >= v18;
                      break;
                    }
                    if ( (double)SLODWORD(v42) >= v44 )
                    {
                      LODWORD(v40) = 1;
                      break;
                    }
                    goto LABEL_147;
                  }
                  if ( (_BYTE)v16 )
                  {
                    if ( v44 > v42 )
                      goto LABEL_147;
                    LODWORD(v40) = 1;
                  }
                  else
                  {
                    if ( (double)SLODWORD(v44) > v42 )
                      goto LABEL_147;
                    LODWORD(v40) = 1;
                  }
                  break;
                case 7:
                  LOBYTE(v39) = 0;
                  if ( !(_BYTE)v26 )
                  {
                    if ( !(_BYTE)v16 )
                    {
                      LODWORD(v40) = v25 > v18;
                      break;
                    }
                    if ( (double)SLODWORD(v42) > v44 )
                    {
                      LODWORD(v40) = 1;
                      break;
                    }
                    goto LABEL_147;
                  }
                  if ( (_BYTE)v16 )
                  {
                    if ( v44 >= v42 )
                      goto LABEL_147;
                    LODWORD(v40) = 1;
                  }
                  else
                  {
                    if ( (double)SLODWORD(v44) >= v42 )
                      goto LABEL_147;
                    LODWORD(v40) = 1;
                  }
                  break;
                case 8:
                  LOBYTE(v39) = 0;
                  if ( !(_BYTE)v26 )
                  {
                    if ( !(_BYTE)v16 )
                    {
                      LODWORD(v40) = v25 == v18;
                      break;
                    }
                    if ( (double)SLODWORD(v42) == v44 )
                    {
                      LODWORD(v40) = 1;
                      break;
                    }
                    goto LABEL_147;
                  }
                  if ( (_BYTE)v16 )
                  {
                    if ( v44 != v42 )
                      goto LABEL_147;
                    LODWORD(v40) = 1;
                  }
                  else
                  {
                    if ( (double)SLODWORD(v44) != v42 )
                      goto LABEL_147;
                    LODWORD(v40) = 1;
                  }
                  break;
                case 9:
                  LOBYTE(v39) = 0;
                  if ( (_BYTE)v26 )
                  {
                    if ( (_BYTE)v16 )
                      v28 = v44 == v42;
                    else
                      v28 = (double)SLODWORD(v44) == v42;
                  }
                  else
                  {
                    if ( !(_BYTE)v16 )
                    {
                      LODWORD(v40) = v25 != v18;
                      break;
                    }
                    v27 = (double)SLODWORD(v42);
LABEL_30:
                    v28 = v27 == v44;
                  }
                  if ( v28 )
                    goto LABEL_147;
LABEL_32:
                  LODWORD(v40) = 1;
                  break;
                case 0xA:
                  if ( (_BYTE)v26 )
                  {
                    LOBYTE(v39) = 1;
                    if ( (_BYTE)v16 )
                      v40 = v42 - v44;
                    else
                      v40 = v42 - (double)SLODWORD(v44);
                  }
                  else if ( (_BYTE)v16 )
                  {
                    LOBYTE(v39) = 1;
                    v40 = (double)SLODWORD(v42) - v44;
                  }
                  else
                  {
                    LOBYTE(v39) = 0;
                    LODWORD(v40) = v25 - v18;
                  }
                  break;
                case 0xB:
                  if ( (_BYTE)v26 )
                  {
                    LOBYTE(v39) = 1;
                    if ( (_BYTE)v16 )
                      v40 = v44 + v42;
                    else
                      v40 = (double)SLODWORD(v44) + v42;
                  }
                  else if ( (_BYTE)v16 )
                  {
                    LOBYTE(v39) = 1;
                    v40 = (double)SLODWORD(v42) + v44;
                  }
                  else
                  {
                    LOBYTE(v39) = 0;
                    LODWORD(v40) = v25 + v18;
                  }
                  break;
                case 0xC:
                  if ( (_BYTE)v26 )
                  {
                    LOBYTE(v39) = 1;
                    if ( (_BYTE)v16 )
                      v40 = v44 * v42;
                    else
                      v40 = (double)SLODWORD(v44) * v42;
                  }
                  else if ( (_BYTE)v16 )
                  {
                    LOBYTE(v39) = 1;
                    v40 = (double)SLODWORD(v42) * v44;
                  }
                  else
                  {
                    LOBYTE(v39) = 0;
                    LODWORD(v40) = v25 * v18;
                  }
                  break;
                case 0xD:
                case 0xE:
                  if ( BYTE4(Size) )
                    break;
                  if ( (_BYTE)v26 )
                  {
                    if ( (_BYTE)v16 )
                    {
                      if ( v44 == 0.0 )
                        return (double *)sub_4F3300(v46, 4);
                      LOBYTE(v39) = 1;
                      if ( v47 == 0xD )
                      {
                        v40 = v42 / v44;
                      }
                      else
                      {
                        v29 = Double_To_SInt32(a2);
                        v45 = Double_To_SInt32(a2) % v29;
                        v40 = (double)v45;
                      }
                    }
                    else
                    {
                      if ( !v18 )
                        return (double *)sub_4F3300(v46, 4);
                      LOBYTE(v39) = 1;
                      if ( v47 == 0xD )
                      {
                        v40 = v42 / (double)SLODWORD(v44);
                      }
                      else
                      {
                        v45 = Double_To_SInt32(a2) % v18;
                        v40 = (double)v45;
                      }
                    }
                  }
                  else if ( (_BYTE)v16 )
                  {
                    if ( v44 == 0.0 )
                      return (double *)sub_4F3300(v46, 4);
                    LOBYTE(v39) = 1;
                    if ( v47 == 0xD )
                    {
                      v40 = (double)SLODWORD(v42) / v44;
                    }
                    else
                    {
                      v45 = v25 % Double_To_SInt32(a2);
                      v40 = (double)v45;
                    }
                  }
                  else
                  {
                    if ( !v18 )
                      return (double *)sub_4F3300(v46, 4);
                    LOBYTE(v39) = 0;
                    if ( v47 == 0xD )
                      LODWORD(v40) = v25 / v18;
                    else
                      LODWORD(v40) = v25 % v18;
                  }
                  break;
              }
            }
            v30 = v46;
            ++v46[0x1C2];
            v31 = v40;
            v32 = (int)&v30[4 * v30[0x1C2] + 0x142];
            *(_DWORD *)v32 = v39;
            *(_DWORD *)(v32 + 4) = 0;
            *(double *)(v32 + 8) = v31;
          }
        }
        v10 = v46;
        if ( !v49 )
          break;
        v48 += v49;
        v49 = sub_4F3320(v46, (int)&savedregs, (char **)&v50, Str, (unsigned int *)&v47, SBYTE4(Size), &v48);
        if ( !v49 )
          break;
        v9 = v54;
      }
    }
    if ( v10[0x1C2] == 0xFFFFFFFF )
      return (double *)sub_4F3300(v10, 5);
    result = (double *)sub_4F32A0(v10 + 0x142, v56);
    v12 = v10[0x1C2] == 0xFFFFFFFF;
    v40 = result[1];
    if ( !v12 )
      return (double *)sub_4F3300(v10, 5);
  }
  return result;
}
