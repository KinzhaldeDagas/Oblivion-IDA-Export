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

  __asm { fld     dword ptr ds:0A30634h }
  __asm { fstp    [esp+14h+var_C] }
  _EBX = OblivionDynamicCast(
           *(this + 2),
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESValueForm `RTTI Type Descriptor',
           0);
  v7 = (void (__thiscall ***)(int, _DWORD))OblivionDynamicCast(
                                             *(this + 2),
                                             0,
                                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                             &MagicItem `RTTI Type Descriptor',
                                             0);
  v35 = OblivionDynamicCast(
          *(this + 2),
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESEnchantableForm `RTTI Type Descriptor',
          0);
  v8 = OblivionDynamicCast(
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESEnchantableForm `RTTI Type Descriptor',
         0);
  if ( v8 )
    v9 = v8[1];
  else
    v9 = 0;
  if ( !_EBX )
  {
    if ( !v7 )
    {
LABEL_13:
      __asm { fld     [esp+20h+var_10] }
      return sub_488F8F(targetNpc, a3, a4);
    }
    (*v7[3])((int)(v7 + 3), 0);
    goto LABEL_7;
  }
  if ( !v35 || !v9 )
  {
    __asm { fild    dword ptr [ebx+4] }
LABEL_7:
    __asm { fstp    [esp+20h+var_10] }
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v9 + 0x34) != 3 )
  {
    EnchantableFormCharge = (unsigned __int16)TESForm_GetEnchantableFormCharge((TESForm *)*(this + 2));
    __asm { fild    [esp+20h+var_8] }
    __asm { fstp    [esp+20h+var_C] }
    (**(void (__thiscall ***)(int, _DWORD))(v9 + 0x24))(v9 + 0x24, 0);
    __asm { fstp    [esp+20h+var_C] }
    if ( *((_BYTE *)*(this + 2) + 4) == 0x15 )
    {
      _EAX = GameSetting_GetSafeFloatPointer((int *)&fScrollCostMult);
      __asm
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
      __asm { fld     [esp+20h+var_C] }
      __asm { fstp    [esp+2Ch+var_24]; float }
      v37 = _EBX[1];
      __asm
      {
        fld     [esp+2Ch+var_10]
        fstp    [esp+2Ch+var_28]; float
        fild    [esp+2Ch+var_8]
        fstp    [esp+2Ch+var_2C]; float
      }
      Calc_EnchantedWeaponStaffValue(v20, v21, v23);
    }
    goto LABEL_7;
  }
  __asm
  {
    fild    dword ptr [ebx+4]
    fstp    [esp+1Ch+var_C]
    fldz
    fcomp   [esp+1Ch+var_C]
    fnstsw  ax
  }
  if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
  {
    v14 = v9 + 0x24;
    if ( v14 )
    {
      sub_488FD3(v14, (int)targetNpc, a3, a4, a5);
      return result;
    }
  }
LABEL_8:
  __asm
  {
    fld     [esp+20h+var_10]
    fst     [esp+20h+var_C]
  }
  if ( !LOBYTE(retaddr) )
    return sub_488F8F(targetNpc, a3, a4);
  __asm { fstp    st }
  if ( (_BYTE)a3 )
  {
    Player_GetActorBarterFactor_(*(float *)&targetNpc);
    __asm
    {
      fstp    dword ptr [esp+20h]
      fld     dword ptr [esp+20h]
    }
    _ESI = TESDataHandler_g_PlayerRef;
    __asm { fild    dword ptr [esi+11Ch] }
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
    sub_484370(v22);
    __asm { fstp    [esp+24h+var_10] }
    __asm
    {
      fld     [esp+20h+var_10]
      fld     [esp+20h+var_C]
      fcompp
      fnstsw  ax
    }
    if ( (_AX & 0x4100) == 0 || (int)Actor_GetSkillMasteryLevel(0x1D) >= 4 )
    {
      __asm
      {
        fld     [esp+20h+var_C]
        fstp    [esp+20h+var_10]
      }
    }
    goto LABEL_13;
  }
  calculateItemMultiplicationFromDisposition((TESObjectREFR *)TESDataHandler_g_PlayerRef, (Actor *)targetNpc);
  __asm { fstp    dword ptr [esp+20h] }
  _ECX = TESDataHandler_g_PlayerRef;
  __asm { fild    dword ptr [ecx+11Ch] }
  __asm
  {
    fmul    qword ptr ds:0A3D8E8h
    fadd    dword ptr [esp+24h]
    fstp    dword ptr [esp+24h]
    fld     dword ptr [esp+24h]
    fmul    [esp+24h+var_10]
    fstp    [esp+24h+var_10]
  }
  if ( (int)Actor_GetSkillMasteryLevel(0x1D) < 1 )
  {
    ContainerEntryExtraData_GetHealth(this, 1);
    __asm
    {
      fstp    dword ptr [esp+20h]
      fldz
      fld     dword ptr [esp+20h]
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( (_AX & 0x100) != 0 )
    {
      __asm { fstp    st }
    }
    else
    {
      __asm
      {
        fmul    qword ptr ds:0A3B150h
        fmul    [esp+20h+var_10]
        fstp    [esp+20h+var_10]
      }
    }
  }
  __asm { fld     [esp+20h+var_10] }
  __asm { fstp    [esp+24h+var_24]; float }
  result = sub_484370(v24);
  __asm { fstp    [esp+24h+var_10] }
  __asm
  {
    fld     [esp+20h+var_10]
    fld     [esp+20h+var_C]
    fcompp
    fnstsw  ax
  }
  if ( !__SETP__(HIBYTE(_AX) & 5, 0) || (int)Actor_GetSkillMasteryLevel(0x1D) >= 4 )
  {
    __asm
    {
      fld     [esp+20h+var_C]
      fstp    [esp+20h+var_10]
    }
  }
  retaddr = COERCE_FLOAT(sub_5FAA70(targetNpc));
  __asm { fild    dword ptr [esp+20h] }
  if ( retaddr < 0.0 )
    __asm { fadd    dword ptr ds:0A2FC78h }
  __asm
  {
    fstp    dword ptr [esp+20h]
    fld     [esp+20h+var_10]
    fld     dword ptr [esp+20h]
    fcom    st(1)
    fnstsw  ax
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) )
  {
    __asm { fstp    st }
  }
  else
  {
    __asm { fstp    st(1) }
    __asm
    {
      fstp    [esp+18h+var_10]
      fld     [esp+18h+var_10]
    }
  }
  return result;
}
