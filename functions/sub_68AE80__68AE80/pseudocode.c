void __userpurge sub_68AE80(int *a1@<ecx>, float ***a2@<ebp>, double a3@<st2>, double a4@<st1>, TESChildCELL *a5)
{
  double v9; // st7
  char v10; // bl
  float v13; // [esp+0h] [ebp-18h]

  if ( a5 && IsWeaponReady(a5) )
  {
    _EBX = TESForm_LookupByFormID(0x3Au);
    TimeGlobals_GetGameHour(&TimeGlobals);
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     [esp+14h+arg_0]
    }
    __asm { fstp    [esp+14h+var_8] }
    sub_6599B0(a5);
    __asm
    {
      fcomp   [esp+14h+var_8]
      fnstsw  ax
    }
    if ( (_AX & 0x4100) == 0 )
    {
      __asm
      {
        fld     [esp+14h+arg_0]
        fadd    qword ptr ds:0A2F920h
        fstp    [esp+14h+arg_0]
      }
    }
    __asm { fld     [esp+14h+arg_0] }
    __asm { fstp    [esp+14h+var_8] }
    v9 = sub_6599B0(a5);
    __asm
    {
      fsubr   [esp+14h+var_8]
      fstp    [esp+14h+arg_0]
      fld     dword ptr [ebx+24h]
    }
    v10 = 1;
    __asm
    {
      fdivr   qword ptr ds:0A2F938h
      fmul    [esp+14h+arg_0]
      fstp    [esp+14h+arg_0]
    }
    while ( 1 )
    {
      __asm
      {
        fldz
        fld     [esp+14h+arg_0]
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
      }
      if ( (_AX & 0x4100) != 0 || !v10 )
        break;
      __asm { fstp    [esp+18h+var_18] }
      (*(void (__thiscall **)(int *, TESChildCELL *, _DWORD))(*a1 + 0x1C))(a1, a5, LODWORD(v13));
      __asm { fstp    [esp+14h+arg_0] }
      if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a5->vtbl + 0x21))(a5) )
        goto LABEL_14;
      __asm
      {
        fldz
        fcomp   [esp+14h+arg_0]
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 5, 0) || !sub_68ABA0(a1, a3, a4, v9, (TESObjectREFR *)a5) )
        return;
      if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a5->vtbl + 0x21))(a5) )
      {
LABEL_14:
        v10 = 0;
      }
      else if ( sub_6899E0(a1) )
      {
        (*((void (__thiscall **)(TESChildCELL *, int))a5->vtbl + 0x60))(a5, 1);
        return;
      }
    }
    __asm { fstp    st }
  }
}
