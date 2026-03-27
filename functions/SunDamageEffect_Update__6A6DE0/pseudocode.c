void __userpurge SunDamageEffect_Update(int a1@<ecx>, double a2@<st2>, double a3@<st1>, int a4)
{
  int v5; // ecx
  TESObjectREFR *v6; // edi
  TESObjectCELL *ParentCell; // ebx
  double v13; // st7
  char v15; // al
  int *v18; // ecx
  unsigned __int8 *firstWeather; // ecx
  unsigned __int8 *secondWeather; // ecx
  float v34; // [esp+0h] [ebp-34h]
  float v35; // [esp+4h] [ebp-30h]
  float v36; // [esp+8h] [ebp-2Ch]
  float v37; // [esp+8h] [ebp-2Ch]
  float v38; // [esp+8h] [ebp-2Ch]
  float v39; // [esp+8h] [ebp-2Ch]
  float v40; // [esp+8h] [ebp-2Ch]
  float v41; // [esp+8h] [ebp-2Ch]
  float v42; // [esp+8h] [ebp-2Ch]
  float v43; // [esp+Ch] [ebp-28h]
  float v44; // [esp+Ch] [ebp-28h]
  float v45; // [esp+Ch] [ebp-28h]
  float v46; // [esp+Ch] [ebp-28h]
  float v47; // [esp+Ch] [ebp-28h]
  int v48; // [esp+Ch] [ebp-28h]
  float v49; // [esp+Ch] [ebp-28h]
  float v50; // [esp+Ch] [ebp-28h]
  float v51; // [esp+10h] [ebp-24h]
  float v52; // [esp+10h] [ebp-24h]
  float v53; // [esp+14h] [ebp-20h]
  float v54; // [esp+14h] [ebp-20h]
  float v55; // [esp+14h] [ebp-20h]
  float v56; // [esp+14h] [ebp-20h]
  float v57; // [esp+18h] [ebp-1Ch]
  float v58; // [esp+18h] [ebp-1Ch]

  _ESI = a1;
  if ( *(_BYTE *)(a1 + 0x3D) )
  {
    *(_BYTE *)(a1 + 0x3D) = 0;
    return;
  }
  v5 = *(_DWORD *)(a1 + 0x20);
  if ( !v5 || !(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) )
  {
    SunDamageEffect_Update_::Done(a4);
    return;
  }
  v6 = (TESObjectREFR *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(_ESI + 0x20) + 4))(*(_DWORD *)(_ESI + 0x20));
  ParentCell = TESObjectREFR_GetParentCell(v6);
  if ( !sub_4D8B90(v6) || ParentCell && sub_4C9820(ParentCell) )
  {
    v13 = sub_6A6AF0((float *)_ESI);
    __asm
    {
      fstp    [esp+18h+var_C]
      fld     dword ptr ds:0A34BA0h
      fcomp   [esp+18h+var_C]
      fnstsw  ax
    }
    v15 = !__SETP__(HIBYTE(_AX) & 5, 0);
    sub_6A6920((unsigned int *)_ESI, v15);
    if ( v6 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      goto LABEL_40;
    __asm
    {
      fld     dword ptr ds:0A34BA0h
      fld     [esp+18h+var_C]
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    __asm { fldz }
    if ( (_AX & 0x4100) != 0 )
    {
      __asm { fstp    st(1) }
LABEL_25:
      _EDI = TES->sky;
      firstWeather = (unsigned __int8 *)_EDI->firstWeather;
      if ( firstWeather )
      {
        __asm
        {
          fstp    [esp+2Ch+var_28]; float
          fld1
          fstp    [esp+2Ch+var_2C]; float
        }
        sub_499100(firstWeather, 5, v36, v44);
      }
      secondWeather = (unsigned __int8 *)_EDI->secondWeather;
      __asm { fstp    [esp+24h+var_18] }
      __asm { fld1 }
      if ( secondWeather )
      {
        __asm { fstp    st }
        __asm
        {
          fld     dword ptr [edi+0D8h]
          fstp    dword ptr [esp+2Ch+var_14]
          fldz
          fstp    [esp+2Ch+var_28]; float
          fld1
          fstp    [esp+2Ch+var_2C]; float
        }
        sub_499100(secondWeather, 5, v37, v45);
        __asm
        {
          fld     dword ptr [esp+24h+var_14]
          fld     st
          fld1
          fld     st
          fsubrp  st(2), st
          fxch    st(3)
          fmulp   st(1), st
          fld     [esp+24h+var_18]
          fmulp   st(2), st
          fxch    st(1)
          fstp    dword ptr [esp+24h+var_14]
          fadd    dword ptr [esp+24h+var_14]
          fstp    [esp+24h+var_18]
        }
      }
      __asm
      {
        fld     dword ptr ds:0B37FB8h
        fsub    st, st(1)
        fmul    [esp+24h+var_18]
        faddp   st(1), st
        fstp    [esp+24h+var_18]
        fld     dword ptr [esi+38h]
        fld     [esp+24h+var_18]
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
      }
      if ( (_AX & 0x4100) != 0 )
      {
        __asm
        {
          fld     dword ptr [esi+38h]
          fcompp
          fnstsw  ax
        }
        if ( (_AX & 0x4100) != 0 )
        {
          SunDamageEffect_Update_::Done_(a4);
          return;
        }
        __asm { fld     dword ptr [esi+38h] }
        __asm { fstp    [esp+24h+var_14] }
        _EAX = GameSetting_GetSafeFloatPointer((int *)&fMagicSunDamageScreenGlowRateDown);
        __asm { fld     dword ptr [eax] }
        __asm
        {
          fmul    dword ptr [esp+2Ch+var_8]
          fsubr   [esp+2Ch+var_14]
          fstp    dword ptr [esp+2Ch+var_8]
          fld     dword ptr [esp+2Ch+var_8]
          fstp    [esp+2Ch+var_28]; float
          fld     [esp+2Ch+var_18]
          fstp    [esp+2Ch+var_2C]; float
        }
        Min_Float(v41, v49);
        __asm { fstp    dword ptr [esp+2Ch+var_8] }
        __asm
        {
          fld     dword ptr [esp+24h+var_8]
          fst     dword ptr [esi+38h]
        }
        *(float *)(_ESI + 0x38) = _ET1;
        if ( UseHDR )
        {
          __asm { fdiv    qword ptr ds:0A563D0h }
          __asm
          {
            fstp    dword ptr [esp+2Ch+var_8]
            fld     dword ptr [esp+2Ch+var_8]
            fstp    [esp+2Ch+var_28]; float
            fld1
            fstp    [esp+2Ch+var_2C]; float
          }
          Min_Float(v42, v50);
          __asm { fstp    dword ptr ds:0B2C7A4h }
          flt_B2C7A4 = _ET1;
          return;
        }
        __asm
        {
          fld     st
          fmul    dword ptr ds:0B06D64h
        }
        v48 = dword_B06D54;
        __asm
        {
          fstp    dword ptr [esp+34h+var_8]
          fld     dword ptr [esp+34h+var_8]
          fstp    [esp+34h+var_2C]; float
          fmul    dword ptr ds:0B06D5Ch
          fstp    dword ptr [esp+34h+var_8]
          fld     dword ptr [esp+34h+var_8]
        }
      }
      else
      {
        __asm { fstp    st }
        _EAX = GameSetting_GetSafeFloatPointer((int *)&fMagicSunDamageScreenGlowRateUp);
        __asm
        {
          fld     dword ptr [esp+24h+var_8]
          fmul    dword ptr [eax]
        }
        __asm
        {
          fadd    dword ptr [esi+38h]
          fstp    dword ptr [esp+2Ch+var_8]
          fld     dword ptr [esp+2Ch+var_8]
          fstp    [esp+2Ch+var_28]; float
          fld     [esp+2Ch+var_18]
          fstp    [esp+2Ch+var_2C]; float
        }
        sub_4AC760(v38, v46);
        __asm { fstp    dword ptr [esp+2Ch+var_8] }
        __asm
        {
          fld     dword ptr [esp+24h+var_8]
          fst     dword ptr [esi+38h]
        }
        *(float *)(_ESI + 0x38) = _ET1;
        if ( UseHDR )
        {
          __asm { fdiv    qword ptr ds:0A563D0h }
          __asm
          {
            fstp    dword ptr [esp+2Ch+var_8]
            fld     dword ptr [esp+2Ch+var_8]
            fstp    [esp+2Ch+var_28]; float
            fld1
            fstp    [esp+2Ch+var_2C]; float
          }
          Min_Float(v39, v47);
          __asm { fstp    dword ptr ds:0B2C7A4h }
          flt_B2C7A4 = _ET1;
          return;
        }
        __asm
        {
          fld     st
          fmul    dword ptr ds:0B06D64h
        }
        v48 = dword_B06D54;
        __asm
        {
          fstp    dword ptr [esp+34h+var_8]
          fld     dword ptr [esp+34h+var_8]
          fstp    [esp+34h+var_2C]
          fmul    dword ptr ds:0B06D5Ch
          fstp    dword ptr [esp+34h+var_8]
          fld     dword ptr [esp+34h+var_8]
        }
      }
      __asm
      {
        fstp    [esp+34h+var_30]; float
        fld     dword ptr ds:0B06D4Ch
      }
      __asm { fstp    [esp+34h+var_34]; float }
      sub_7B4830(dword_B06D3C, dword_B06D44, v34, v35, v40, v48);
      SunDamageEffect_Update_::Done_(a4);
      return;
    }
    __asm
    {
      fstp    [esp+24h+var_20]
      fmul    [esp+24h+arg_0]
      fstp    [esp+24h+var_C]
      fld     [esp+24h+var_C]
      fstp    [esp+24h+var_24]
    }
    ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.ApplyDamage)(
      TESDataHandler_g_PlayerRef,
      LODWORD(v52),
      LODWORD(v56),
      0);
    __asm
    {
      fldz
      fld     dword ptr ds:0B15EB0h
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm
      {
        fcomp   qword ptr ds:0A3A5B0h
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
      {
LABEL_23:
        __asm
        {
          fld     dword ptr ds:0B15EB0h
          fsub    dword ptr [esp+24h+var_8]
          fstp    dword ptr ds:0B15EB0h
        }
        flt_B15EB0 = _ET1;
        __asm { fldz }
        goto LABEL_25;
      }
      v18 = (int *)&fMagicSunDamagePainInitialDelay;
    }
    else
    {
      __asm { fstp    st }
      Actor_PlayPainFX((TESObjectREFR *)TESDataHandler_g_PlayerRef, a2, v13, a3, (int *)1, 1);
      v18 = (int *)&fMagicSunDamagePainTimer;
    }
    _EAX = GameSetting_GetSafeFloatPointer(v18);
    __asm
    {
      fld     dword ptr [eax]
      fstp    dword ptr ds:0B15EB0h
    }
    flt_B15EB0 = _ET1;
    goto LABEL_23;
  }
  sub_6A6920((unsigned int *)_ESI, 0);
  if ( v6 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    goto LABEL_40;
  _EAX = GameSetting_GetSafeFloatPointer((int *)&fMagicSunDamagePainInitialDelay);
  __asm
  {
    fld     dword ptr [eax]
    fstp    dword ptr ds:0B15EB0h
  }
  flt_B15EB0 = _ET1;
  __asm
  {
    fld1
    fcomp   dword ptr [esi+38h]
    fnstsw  ax
  }
  if ( __SETP__(BYTE1(_EAX) & 5, 0) )
  {
LABEL_40:
    SunDamageEffect_Update_::Done_(a4);
    return;
  }
  __asm { fld     dword ptr [esi+38h] }
  __asm { fstp    [esp+18h+var_8] }
  _EAX = GameSetting_GetSafeFloatPointer((int *)&fMagicSunDamageScreenGlowRateDown);
  __asm { fld     dword ptr [eax] }
  __asm
  {
    fmul    [esp+20h+arg_0]
    fsubr   [esp+20h+var_8]
    fstp    [esp+20h+arg_0]
    fld     [esp+20h+arg_0]
    fstp    [esp+20h+var_1C]; float
    fld1
    fstp    [esp+20h+var_20]; float
  }
  Min_Float(v53, v57);
  __asm
  {
    fstp    [esp+20h+arg_0]
    fld     [esp+20h+arg_0]
  }
  __asm { fst     dword ptr [esi+38h] }
  *(float *)(_ESI + 0x38) = _ET1;
  if ( UseHDR )
  {
    __asm { fdiv    qword ptr ds:0A563D0h }
    __asm
    {
      fstp    [esp+20h+arg_0]
      fld     [esp+20h+arg_0]
      fstp    [esp+20h+var_1C]; float
      fld1
      fstp    [esp+20h+var_20]; float
    }
    Min_Float(v54, v58);
    __asm { fstp    dword ptr ds:0B2C7A4h }
    flt_B2C7A4 = _ET1;
  }
  else
  {
    __asm
    {
      fld     st
      fmul    dword ptr ds:0B06D64h
    }
    __asm { fstp    [esp+1Ch+arg_0] }
    __asm
    {
      fld     [esp+28h+arg_0]
      fstp    [esp+28h+var_20]; float
      fmul    dword ptr ds:0B06D5Ch
      fstp    [esp+28h+arg_0]
      fld     [esp+28h+arg_0]
      fstp    [esp+28h+var_24]; float
      fld     dword ptr ds:0B06D4Ch
      fstp    [esp+28h+var_28]; float
    }
    sub_7B4830(dword_B06D3C, dword_B06D44, v43, v51, v55, dword_B06D54);
  }
}
