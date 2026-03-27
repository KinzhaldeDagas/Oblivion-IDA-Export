int __usercall sub_6B0C70@<eax>(double a1@<st2>, double a2@<st0>, float arg0)
{
  int result; // eax
  bool v6; // zf
  _DWORD *v8; // ecx
  _DWORD *v9; // ecx
  char v10; // al
  char v11; // al
  int v12; // eax
  int v13; // ebp
  unsigned int v14; // ecx
  TESObjectCELL *v15; // eax
  int v16; // eax
  int *v17; // ebx
  int *v18; // edi
  int v23; // eax
  int *v24; // ecx
  int v29; // eax
  int *v30; // ecx
  int v31; // edi
  unsigned int v32; // edi
  float v33; // eax
  unsigned int v34; // ebx
  unsigned int v35; // esi
  int v36; // eax
  int v37; // edx
  float v38; // eax
  float v39; // [esp+Ch] [ebp-48h]
  float v40; // [esp+Ch] [ebp-48h]
  float v41; // [esp+10h] [ebp-44h]
  float v42; // [esp+10h] [ebp-44h]
  float v43; // [esp+10h] [ebp-44h]
  float v44; // [esp+10h] [ebp-44h]
  float v45; // [esp+14h] [ebp-40h]
  float v46; // [esp+14h] [ebp-40h]
  float v47; // [esp+14h] [ebp-40h]
  float v48; // [esp+14h] [ebp-40h]
  float v49; // [esp+14h] [ebp-40h]
  float v50; // [esp+14h] [ebp-40h]
  float v51; // [esp+14h] [ebp-40h]
  float v52; // [esp+14h] [ebp-40h]
  float v53; // [esp+14h] [ebp-40h]
  float v54; // [esp+14h] [ebp-40h]
  int a3a; // [esp+30h] [ebp-24h]
  int v58; // [esp+34h] [ebp-20h] BYREF
  TESObjectCELL *v59; // [esp+38h] [ebp-1Ch] BYREF
  unsigned int v63; // [esp+50h] [ebp-4h]

  _ESI = arg0;
  result = *(_DWORD *)(LODWORD(arg0) + 0x1C);
  if ( result != *(_DWORD *)(LODWORD(arg0) + 0x20) || !result )
  {
    result = dword_B3C20C;
    if ( dword_B3C20C < (unsigned int)dword_B16304 )
    {
      if ( (dword_B3C180 & 1) == 0 )
      {
        dword_B3C180 |= 1u;
        NiInitalizeCriticalSection(&stru_B3C100);
        atexit(sub_A26270);
        v63 = 0xFFFFFFFF;
      }
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B3C100, (int)&aImpactmixerPla);
      _EAX = (void *)dword_B3C0F0;
      if ( !dword_B3C0F0 )
      {
        _EAX = OSGlobals->sound;
        dword_B3C0F0 = (int)_EAX;
      }
      v6 = *(_BYTE *)(LODWORD(_ESI) + 0x14) == 0x1F;
      __asm
      {
        fld     dword ptr [esi+0Ch]
        fmul    qword ptr ds:0A77808h
        fstp    [esp+3Ch+var_20]
        fld     dword ptr [esi+0Ch]
        fdiv    qword ptr ds:0A37478h
        fstp    [esp+3Ch+var_28]
      }
      if ( v6 && *(_BYTE *)(LODWORD(_ESI) + 0x15) == 6 )
      {
        __asm
        {
          fld     [esp+3Ch+var_28]
          fmul    qword ptr ds:0A3C800h
          fstp    [esp+3Ch+var_28]
        }
      }
      if ( byte_B333B8 )
      {
        __asm
        {
          fld     dword ptr [eax+80h]
          fstp    [esp+3Ch+var_18]
          fld     dword ptr [eax+84h]
          fstp    [esp+3Ch+var_14]
          fld     dword ptr [eax+88h]
          fstp    [esp+3Ch+var_10]
          fld     [esp+3Ch+var_18]
          fsub    dword ptr [esi]
          fstp    [esp+3Ch+var_18]
          fld     [esp+3Ch+var_14]
          fsub    dword ptr [esi+4]
          fstp    [esp+3Ch+var_14]
          fld     [esp+3Ch+var_10]
          fsub    dword ptr [esi+8]
          fstp    [esp+3Ch+var_10]
          fld     [esp+3Ch+var_14]
          fld     [esp+3Ch+var_18]
          fld     [esp+3Ch+var_10]
          fld     st(2)
          fmulp   st(3), st
          fld     st(1)
          fmulp   st(2), st
          fxch    st(2)
          faddp   st(1), st
          fld     st(1)
          fmulp   st(2), st
          faddp   st(1), st
          fstp    [esp+3Ch+arg_0]
          fld     [esp+3Ch+arg_0]
        }
        _CIsqrt(a2);
        __asm
        {
          fstp    [esp+3Ch+arg_0]
          fld     [esp+3Ch+arg_0]
          fld     dword ptr ds:0B162FCh
          fmul    qword ptr ds:0A2FAA0h
          fstp    [esp+3Ch+arg_0]
          fld     [esp+3Ch+arg_0]
          fcompp
          fnstsw  ax
        }
        if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
          return NiLeaveCriticalSection_0(&stru_B3C100);
      }
      v8 = *(_DWORD **)(LODWORD(_ESI) + 0x1C);
      if ( v8 )
        sub_535AC0(v8);
      else
        __asm { fld     dword ptr ds:0A31E2Ch }
      v9 = *(_DWORD **)(LODWORD(_ESI) + 0x20);
      __asm { fstp    [esp+3Ch+arg_0] }
      if ( v9 )
        sub_535AC0(v9);
      else
        __asm { fld     dword ptr ds:0A31E2Ch }
      v10 = *(_BYTE *)(LODWORD(_ESI) + 0x14);
      __asm { fstp    [esp+3Ch+a3] }
      if ( v10 >= 0xF )
        *(_BYTE *)(LODWORD(_ESI) + 0x14) = v10 - 0xF;
      v11 = *(_BYTE *)(LODWORD(_ESI) + 0x15);
      if ( v11 >= 0xF )
        *(_BYTE *)(LODWORD(_ESI) + 0x15) = v11 - 0xF;
      __asm { fld     [esp+3Ch+arg_0] }
      __asm { fstp    [esp+40h+var_40]; float }
      sub_6B0350(*(char *)(LODWORD(_ESI) + 0x14), v45);
      __asm { fld     [esp+44h+a3] }
      v13 = v12;
      __asm { fstp    [esp+44h+var_40]; float }
      sub_6B0350(*(char *)(LODWORD(_ESI) + 0x15), v46);
      v14 = Seed;
      v59 = v15;
      v16 = *(_DWORD *)(LODWORD(_ESI) + 0x18);
      a3a = v14;
      v17 = 0;
      v18 = 0;
      arg0 = 0.0;
      if ( NiTMap_GetAt(&off_B1630C, v16, &arg0) )
      {
        if ( a3a - LODWORD(arg0) < (unsigned int)dword_B16244 )
          return NiLeaveCriticalSection_0(&stru_B3C100);
      }
      NiTMap_SetAt(&off_B1630C, *(_DWORD *)(LODWORD(_ESI) + 0x18), a3a);
      if ( v13 )
      {
        if ( *(_BYTE *)(LODWORD(_ESI) + 0x14) != 7 || *(_BYTE *)(LODWORD(_ESI) + 0x15) != 7 )
          v18 = OSGLobals_PlaySound((int *)dword_B3C0F0, *(void **)(v13 + 0xC), 0x4102, 0);
      }
      if ( v59 )
      {
        if ( *(_BYTE *)(LODWORD(_ESI) + 0x14) != 7 || *(_BYTE *)(LODWORD(_ESI) + 0x15) != 7 )
          v17 = OSGLobals_PlaySound((int *)dword_B3C0F0, (void *)v59->members.super.refID, 0x4102, 0);
      }
      if ( !v18 )
      {
LABEL_45:
        if ( !v17 )
          goto LABEL_57;
        __asm { fld     dword ptr [esi+8] }
        __asm { fstp    [esp+48h+var_40]; float }
        __asm
        {
          fld     dword ptr [esi+4]
          fstp    [esp+48h+var_44]; float
          fld     dword ptr [esi]
          fstp    [esp+48h+var_48]; float
        }
        sub_6B7360(v17, v40, v43, v51);
        __asm
        {
          fld     [esp+3Ch+var_20]
          fdiv    qword ptr ds:0A46E48h
          fld1
          fcom    st(1)
          fnstsw  ax
        }
        if ( __SETP__(HIBYTE(_AX) & 5, 0) )
          __asm { fstp    st }
        else
          __asm { fstp    st(1) }
        __asm { fmul    qword ptr ds:0A38538h }
        __asm
        {
          fadd    qword ptr ds:0A6E700h
          fstp    [esp+40h+arg_0]
          fld     [esp+40h+arg_0]
          fstp    [esp+40h+var_40]; float
        }
        sub_6B7310(v17, v52);
        __asm
        {
          fld     [esp+3Ch+var_28]
          fmul    qword ptr ds:0A2FAA0h
          fld1
          fcom    st(1)
          fnstsw  ax
        }
        if ( (_AX & 0x4100) == 0 )
        {
          __asm
          {
            fld     st(1)
            fldz
            fcom    st(1)
            fnstsw  ax
            fstp    st(1)
          }
          if ( __SETP__(HIBYTE(_AX) & 5, 0) )
          {
            __asm { fstp    st(2) }
            goto LABEL_55;
          }
          __asm { fstp    st }
        }
        __asm
        {
          fcom    st(1)
          fnstsw  ax
        }
        if ( (_AX & 0x4100) != 0 )
        {
          __asm { fstp    st(1) }
LABEL_56:
          __asm { fstp    [esp+3Ch+arg_0] }
          __asm { fld     [esp+40h+arg_0] }
          __asm { fstp    [esp+40h+var_40]; float }
          sub_6B7280(v17, v53);
          __asm { fld     dword ptr ds:0A379CCh }
          __asm { fnstcw  word ptr [esp+44h+arg_0] }
          __asm { fstp    [esp+44h+var_40]; float }
          __asm { fld     [esp+44h+var_28] }
          v59 = (TESObjectCELL *)(LOWORD(arg0) | 0xC00);
          __asm { fldcw   word ptr [esp+44h+var_1C] }
          v29 = *v17;
          __asm { fistp   [esp+44h+var_1C] }
          v30 = (int *)dword_B3C0F0;
          __asm { fldcw   word ptr [esp+44h+arg_0] }
          LODWORD(arg0) = (unsigned __int8)v59;
          __asm
          {
            fild    [esp+44h+arg_0]
            fstp    [esp+44h+var_44]; float
          }
          sub_6ACC50(v30, v29, v44, v54);
          sub_6B7190(v17, 0);
          sub_6B73E0(v17);
          FormHeapFree((unsigned int)v17);
LABEL_57:
          v31 = dword_B16244;
          dword_B3C0F4 = *(_DWORD *)LODWORD(_ESI);
          dword_B3C0F8 = *(_DWORD *)(LODWORD(_ESI) + 4);
          dword_B3C0FC = *(_DWORD *)(LODWORD(_ESI) + 8);
          v32 = 4 * v31;
          v33 = COERCE_FLOAT(sub_6A9030(&off_B1630C));
          v34 = Seed;
          v35 = 0;
          arg0 = v33;
          if ( v33 != 0.0 )
          {
            while ( 1 )
            {
              ++v35;
              sub_452600((NiTMap_TESCELL *)&off_B1630C, (NiTMap_Entry_TESCELL **)&arg0, (void **)&v58, &v59);
              if ( v34 - (unsigned int)v59 > v32 )
              {
                NiTMap_RemoveAt(&off_B1630C, v58);
                v36 = 0;
                if ( dword_B16310 )
                {
                  v37 = dword_B16314;
                  while ( !*(_DWORD *)(v37 + 4 * v36) )
                  {
                    if ( ++v36 >= (unsigned int)dword_B16310 )
                      goto LABEL_63;
                  }
                  v38 = *(float *)(v37 + 4 * v36);
                }
                else
                {
LABEL_63:
                  v38 = 0.0;
                }
                arg0 = v38;
              }
              if ( v35 > 0x100 )
                break;
              if ( arg0 == 0.0 )
                return NiLeaveCriticalSection_0(&stru_B3C100);
            }
            NiTMap_Clear(&off_B1630C);
          }
          return NiLeaveCriticalSection_0(&stru_B3C100);
        }
LABEL_55:
        __asm { fstp    st }
        goto LABEL_56;
      }
      __asm { fld     dword ptr [esi+8] }
      __asm { fstp    [esp+48h+var_40]; float }
      __asm
      {
        fld     dword ptr [esi+4]
        fstp    [esp+48h+var_44]; float
        fld     dword ptr [esi]
        fstp    [esp+48h+var_48]; float
      }
      sub_6B7360(v18, v39, v41, v47);
      __asm
      {
        fld     [esp+3Ch+var_20]
        fdiv    qword ptr ds:0A46E48h
        fld1
        fcom    st(1)
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 5, 0) )
        __asm { fstp    st }
      else
        __asm { fstp    st(1) }
      __asm { fmul    qword ptr ds:0A38538h }
      __asm
      {
        fadd    qword ptr ds:0A6E700h
        fstp    [esp+40h+arg_0]
        fld     [esp+40h+arg_0]
        fstp    [esp+40h+var_40]; float
      }
      sub_6B7310(v18, v48);
      __asm
      {
        fld     [esp+3Ch+var_28]
        fmul    qword ptr ds:0A2FAA0h
        fld1
        fcom    st(1)
        fnstsw  ax
      }
      if ( (_AX & 0x4100) == 0 )
      {
        __asm
        {
          fld     st(1)
          fldz
          fcom    st(1)
          fnstsw  ax
          fstp    st(1)
        }
        if ( __SETP__(HIBYTE(_AX) & 5, 0) )
        {
          __asm { fstp    st(2) }
          goto LABEL_43;
        }
        __asm { fstp    st }
      }
      __asm
      {
        fcom    st(1)
        fnstsw  ax
      }
      if ( (_AX & 0x4100) != 0 )
      {
        __asm { fstp    st(1) }
LABEL_44:
        __asm { fstp    [esp+3Ch+arg_0] }
        __asm { fld     [esp+40h+arg_0] }
        __asm { fstp    [esp+40h+var_40]; float }
        sub_6B7280(v18, v49);
        __asm { fld     dword ptr ds:0A379CCh }
        __asm { fnstcw  word ptr [esp+44h+arg_0] }
        __asm { fstp    [esp+44h+var_40]; float }
        __asm { fld     [esp+44h+var_28] }
        v59 = (TESObjectCELL *)(LOWORD(arg0) | 0xC00);
        __asm { fldcw   word ptr [esp+44h+var_1C] }
        v23 = *v18;
        __asm { fistp   [esp+44h+var_1C] }
        v24 = (int *)dword_B3C0F0;
        __asm { fldcw   word ptr [esp+44h+arg_0] }
        LODWORD(arg0) = (unsigned __int8)v59;
        __asm
        {
          fild    [esp+44h+arg_0]
          fstp    [esp+44h+var_44]; float
        }
        sub_6ACC50(v24, v23, v42, v50);
        sub_6B7190(v18, 0);
        sub_6B73E0(v18);
        FormHeapFree((unsigned int)v18);
        goto LABEL_45;
      }
LABEL_43:
      __asm { fstp    st }
      goto LABEL_44;
    }
  }
  return result;
}
