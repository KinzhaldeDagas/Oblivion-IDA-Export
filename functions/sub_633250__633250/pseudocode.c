double __userpurge sub_633250@<st0>(
        int ecx0@<ecx>,
        char a2@<bpl>,
        double st5_0@<st2>,
        double result@<st0>,
        double a5@<st1>,
        Actor *a1)
{
  int v7; // eax
  TESObjectREFR *v16; // ecx

  _ESI = ecx0;
  v7 = *(_DWORD *)(ecx0 + 0x2BC);
  if ( v7 )
  {
    __asm { fld     dword ptr ds:0B33E9Ch }
    if ( a1 == (Actor *)TESDataHandler_g_PlayerRef )
      __asm { fdiv    dword ptr ds:0B367B0h }
    else
      __asm { fdiv    dword ptr ds:0B367A8h }
    __asm { fstp    [esp+0Ch+a1] }
    switch ( v7 )
    {
      case 1:
      case 3:
        __asm
        {
          fld     [esp+0Ch+a1]
          fadd    dword ptr [esi+2C0h]
          fstp    [esp+0Ch+a1]
          fld     [esp+0Ch+a1]
          fst     dword ptr [esi+2C0h]
        }
        *(float *)(ecx0 + 0x2C0) = _ET1;
        __asm
        {
          fld1
          fcom    st(1)
          fnstsw  ax
          fstp    st(1)
        }
        if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
        {
          __asm { fstp    dword ptr [esi+2C0h] }
          *(float *)(ecx0 + 0x2C0) = _ET1;
          *(_DWORD *)(ecx0 + 0x2BC) = 0;
          goto LABEL_30;
        }
        break;
      case 2:
        __asm
        {
          fld     dword ptr [esi+2C0h]
          fsub    [esp+0Ch+a1]
          fstp    [esp+0Ch+a1]
          fld     [esp+0Ch+a1]
          fst     dword ptr [esi+2C0h]
        }
        *(float *)(ecx0 + 0x2C0) = _ET1;
        __asm
        {
          fldz
          fcom    st(1)
          fnstsw  ax
          fstp    st(1)
        }
        if ( (_AX & 0x4100) == 0 )
        {
          __asm { fstp    dword ptr [esi+2C0h] }
          *(float *)(ecx0 + 0x2C0) = _ET1;
          *(_DWORD *)(ecx0 + 0x2C4) = 0;
          *(_DWORD *)(ecx0 + 0x2BC) = 0;
LABEL_30:
          sub_5EE1B0(a1, result);
          return result;
        }
        break;
      case 4:
        __asm
        {
          fld     dword ptr [esi+2C0h]
          fsub    [esp+0Ch+a1]
          fstp    [esp+0Ch+a1]
          fld     [esp+0Ch+a1]
          fst     dword ptr [esi+2C0h]
        }
        *(float *)(ecx0 + 0x2C0) = _ET1;
        __asm
        {
          fldz
          fcom    st(1)
          fnstsw  ax
          fstp    st(1)
        }
        if ( (_AX & 0x4100) == 0 )
        {
          v16 = *(TESObjectREFR **)(ecx0 + 0x2C4);
          __asm { fstp    dword ptr [esi+2C0h] }
          *(float *)(_ESI + 0x2C0) = _ET1;
          *(_DWORD *)(_ESI + 0x2C4) = 0;
          if ( v16 )
            ActivateRef(v16, st5_0, a5, result, (TESObjectREFR *)a1, 0, 0, 1);
          if ( a1 != (Actor *)TESDataHandler_g_PlayerRef && MobileObject_GetProcessLevel((MobileObject *)a1) )
          {
            *(_DWORD *)(_ESI + 0x2BC) = 0;
            return result;
          }
          sub_628630((#239 *)_ESI, a1, 1);
          goto LABEL_30;
        }
        break;
      case 6:
        __asm
        {
          fld     dword ptr [esi+2C0h]
          fsub    [esp+0Ch+a1]
          fstp    [esp+0Ch+a1]
          fld     [esp+0Ch+a1]
          fst     dword ptr [esi+2C0h]
        }
        *(float *)(ecx0 + 0x2C0) = _ET1;
        __asm
        {
          fldz
          fcom    st(1)
          fnstsw  ax
          fstp    st(1)
        }
        if ( (_AX & 0x4100) == 0 )
        {
          __asm { fstp    dword ptr [esi+2C0h] }
          *(float *)(ecx0 + 0x2C0) = _ET1;
          ((void (__thiscall *)(Actor *, int))a1->vtbl->super.super.super.Unk_23)(a1, 1);
          goto LABEL_30;
        }
        break;
      case 5:
        __asm
        {
          fld     dword ptr [esi+2C0h]
          fsub    [esp+0Ch+a1]
          fstp    [esp+0Ch+a1]
          fld     [esp+0Ch+a1]
          fst     dword ptr [esi+2C0h]
        }
        *(float *)(ecx0 + 0x2C0) = _ET1;
        __asm
        {
          fldz
          fcom    st(1)
          fnstsw  ax
          fstp    st(1)
        }
        if ( (_AX & 0x4100) == 0 )
        {
          __asm { fstp    dword ptr [esi+2C0h] }
          *(float *)(ecx0 + 0x2C0) = _ET1;
          sub_4E4690((int)a1, 0, a2, ecx0, st5_0, a5, result);
          goto LABEL_30;
        }
        break;
      default:
        goto LABEL_30;
    }
    __asm { fstp    st }
    goto LABEL_30;
  }
  __asm
  {
    fld1
    fcom    dword ptr [esi+2C0h]
    fnstsw  ax
  }
  if ( __SETP__(HIBYTE(_AX) & 0x41, 0) )
  {
    __asm { fstp    dword ptr [esi+2C0h] }
    *(float *)(ecx0 + 0x2C0) = _ET1;
    sub_5EE1B0(a1, result);
  }
  else
  {
    __asm { fstp    st }
  }
  return result;
}
