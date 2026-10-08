double __userpurge sub_488E50@<st0>(void **this@<ecx>, TESObjectREFR *targetNpc, int a3, int a4, float a5)
{
  void (__thiscall ***v7)(int, _DWORD); // ebp
  _DWORD *v8; // eax
  int v9; // esi
  double result; // st7
  int v14; // esi
  float v20; // [esp+4h] [ebp-2Ch]
  float v21; // [esp+8h] [ebp-28h]
  float v22; // [esp+Ch] [ebp-24h]
  float v23; // [esp+Ch] [ebp-24h]
  float v24; // [esp+Ch] [ebp-24h]
  void *v35; // [esp+28h] [ebp-8h]
  int EnchantableFormCharge; // [esp+28h] [ebp-8h]
  int v37; // [esp+28h] [ebp-8h]
  float retaddr; // [esp+30h] [ebp+0h]

  __asm { fld     dword ptr ds:0A30634h } /*0x488e53*/
  __asm { fstp    [esp+14h+var_C] }
  _EBX = OblivionDynamicCast( /*0x488e8c*/
           *(this + 2),
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESValueForm `RTTI Type Descriptor',
           0);
  v7 = (void (__thiscall ***)(int, _DWORD))OblivionDynamicCast( /*0x488ea5*/
                                             *(this + 2),
                                             0,
                                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                             &MagicItem `RTTI Type Descriptor',
                                             0);
  v35 = OblivionDynamicCast( /*0x488eb8*/
          *(this + 2),
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESEnchantableForm `RTTI Type Descriptor',
          0);
  v8 = OblivionDynamicCast( /*0x488ec2*/
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESEnchantableForm `RTTI Type Descriptor',
         0);
  if ( v8 ) /*0x488ecc*/
    v9 = v8[1]; /*0x488ece*/
  else
    v9 = 0; /*0x488ed3*/
  if ( !_EBX ) /*0x488ed7*/
  {
    if ( !v7 ) /*0x488edf*/
    {
LABEL_13:
      __asm { fld     [esp+20h+var_10] } /*0x488f8b*/
      sub_488F8F((int)targetNpc, a3, a4); /*0x488f8c*/
      return result; /*0x488f8c*/
    }
    (*v7[3])((int)(v7 + 3), 0); /*0x488eee*/
    goto LABEL_7; /*0x488eee*/
  }
  if ( !v35 || !v9 ) /*0x488fa6*/
  {
    __asm { fild    dword ptr [ebx+4] } /*0x4890b0*/
LABEL_7:
    __asm { fstp    [esp+20h+var_10] } /*0x488ef0*/
    goto LABEL_8; /*0x488ef0*/
  }
  if ( *(_DWORD *)(v9 + 0x34) != 3 ) /*0x488fb0*/
  {
    EnchantableFormCharge = (unsigned __int16)TESForm_GetEnchantableFormCharge((TESForm *)*(this + 2)); /*0x48903d*/
    __asm { fild    [esp+20h+var_8] } /*0x489046*/
    __asm { fstp    [esp+20h+var_C] }
    (**(void (__thiscall ***)(int, _DWORD))(v9 + 0x24))(v9 + 0x24, 0); /*0x489053*/
    __asm { fstp    [esp+20h+var_C] } /*0x489058*/
    if ( *((_BYTE *)*(this + 2) + 4) == 0x15 ) /*0x489060*/
    {
      _EAX = GameSetting_GetSafeFloatPointer(&flt_B37ED0[0xEA]); /*0x489067*/
      __asm /*0x48906c*/
      {
        fld     dword ptr [eax]
        fmul    [esp+20h+var_C]
        fstp    [esp+20h+var_10]
        fild    dword ptr [ebx+4]
        fadd    [esp+20h+var_10]
      }
    }
    else
    {
      __asm { fld     [esp+20h+var_C] } /*0x489082*/
      __asm { fstp    [esp+2Ch+var_24]; float }
      v37 = _EBX[1]; /*0x489090*/
      __asm /*0x489094*/
      {
        fld     [esp+2Ch+var_10]
        fstp    [esp+2Ch+var_28]; float
        fild    [esp+2Ch+var_8]
        fstp    [esp+2Ch+var_2C]; float
      }
      result = Calc_EnchantedWeaponStaffValue(v20, v21, v23); /*0x4890a3*/
    }
    goto LABEL_7; /*0x48907d*/
  }
  __asm /*0x488fb2*/
  {
    fild    dword ptr [ebx+4]
    fstp    [esp+1Ch+var_C]
    fldz
    fcomp   [esp+1Ch+var_C]
    fnstsw  ax
  }
  if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x488fc1*/
  {
    v14 = v9 + 0x24; /*0x488fca*/
    if ( v14 ) /*0x488fcd*/
    {
      sub_488FD3(v14, (int)targetNpc, a3, a4, a5); /*0x488fce*/
      return result; /*0x488fce*/
    }
  }
LABEL_8:
  __asm /*0x488ef9*/
  {
    fld     [esp+20h+var_10]
    fst     [esp+20h+var_C]
  }
  if ( LOBYTE(retaddr) ) /*0x488f01*/
  {
    __asm { fstp    st } /*0x488f0c*/
    if ( (_BYTE)a3 ) /*0x488f0e*/
    {
      Player_GetActorBarterFactor_(targetNpc); /*0x488f1f*/
      __asm /*0x488f24*/
      {
        fstp    dword ptr [esp+20h]
        fld     dword ptr [esp+20h]
      }
      _ESI = (Actor *)reference; /*0x488f2c*/
      __asm { fild    dword ptr [esi+11Ch] } /*0x488f32*/
      __asm
      {
        fmul    qword ptr ds:0A3D8E8h
        fsubp   st(1), st
        fstp    dword ptr [esp+24h]
        fld     dword ptr [esp+24h]
        fmul    [esp+24h+var_10]
        fstp    dword ptr [esp+24h]
        fld     dword ptr [esp+24h]
        fstp    [esp+24h+var_24]; float
      }
      result = sub_484370(v22); /*0x488f58*/
      __asm { fstp    [esp+24h+var_10] } /*0x488f5d*/
      __asm
      {
        fld     [esp+20h+var_10]
        fld     [esp+20h+var_C]
        fcompp
        fnstsw  ax
      }
      if ( (_AX & 0x4100) == 0 || Actor_GetSkillMasteryLevel(_ESI, kSkillAV_Mercantile) >= kSkillMastery_Master ) /*0x488f81*/
      {
        __asm /*0x488f83*/
        {
          fld     [esp+20h+var_C]
          fstp    [esp+20h+var_10]
        }
      }
      goto LABEL_13; /*0x488f87*/
    }
    calculateItemMultiplicationFromDisposition((TESObjectREFR *)reference, (Actor *)targetNpc); /*0x4890c3*/
    __asm { fstp    dword ptr [esp+20h] } /*0x4890c8*/
    _ECX = reference; /*0x4890cc*/
    __asm { fild    dword ptr [ecx+11Ch] } /*0x4890d2*/
    __asm
    {
      fmul    qword ptr ds:0A3D8E8h
      fadd    dword ptr [esp+24h]
      fstp    dword ptr [esp+24h]
      fld     dword ptr [esp+24h]
      fmul    [esp+24h+var_10]
      fstp    [esp+24h+var_10]
    }
    if ( Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Mercantile) < kSkillMastery_Apprentice ) /*0x4890fc*/
    {
      ContainerEntryExtraData_GetHealth(this, 1); /*0x489102*/
      __asm /*0x489107*/
      {
        fstp    dword ptr [esp+20h]
        fldz
        fld     dword ptr [esp+20h]
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
      }
      if ( (_AX & 0x100) != 0 ) /*0x48911a*/
      {
        __asm { fstp    st } /*0x48912c*/
      }
      else
      {
        __asm /*0x48911c*/
        {
          fmul    qword ptr ds:0A3B150h
          fmul    [esp+20h+var_10]
          fstp    [esp+20h+var_10]
        }
      }
    }
    __asm { fld     [esp+20h+var_10] } /*0x48912e*/
    __asm { fstp    [esp+24h+var_24]; float }
    result = sub_484370(v24); /*0x489136*/
    __asm { fstp    [esp+24h+var_10] } /*0x48913b*/
    __asm
    {
      fld     [esp+20h+var_10]
      fld     [esp+20h+var_C]
      fcompp
      fnstsw  ax
    }
    if ( !__SETP__(HIBYTE(_AX) & 5, 0) /*0x489163*/
      || Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Mercantile) >= kSkillMastery_Master )
    {
      __asm /*0x489165*/
      {
        fld     [esp+20h+var_C]
        fstp    [esp+20h+var_10]
      }
    }
    retaddr = COERCE_FLOAT(sub_5FAA70(targetNpc)); /*0x489176*/
    __asm { fild    dword ptr [esp+20h] } /*0x48917a*/
    if ( retaddr < 0.0 ) /*0x48917e*/
      __asm { fadd    dword ptr ds:0A2FC78h } /*0x489180*/
    __asm /*0x489186*/
    {
      fstp    dword ptr [esp+20h]
      fld     [esp+20h+var_10]
      fld     dword ptr [esp+20h]
      fcom    st(1)
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x489199*/
    {
      __asm { fstp    st } /*0x4891b0*/
    }
    else
    {
      __asm { fstp    st(1) } /*0x48919c*/
      __asm
      {
        fstp    [esp+18h+var_10]
        fld     [esp+18h+var_10]
      }
    }
  }
  else
  {
    sub_488F8F((int)targetNpc, a3, a4); /*0x488f01*/
  }
  return result; /*0x4891a7*/
}
