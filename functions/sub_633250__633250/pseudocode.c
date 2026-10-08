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

  _ESI = ecx0; /*0x633252*/
  v7 = *(_DWORD *)(ecx0 + 0x2BC); /*0x633254*/
  if ( v7 ) /*0x63325e*/
  {
    __asm { fld     dword ptr ds:0B33E9Ch } /*0x63328e*/
    if ( a1 == (Actor *)reference ) /*0x63329f*/
      __asm { fdiv    dword ptr ds:0B367B0h } /*0x6332a1*/
    else
      __asm { fdiv    dword ptr ds:0B367A8h } /*0x6332a9*/
    __asm { fstp    [esp+0Ch+a1] } /*0x6332b2*/
    switch ( v7 ) /*0x6332bf*/
    {
      case 1: /*0x6332bf*/
      case 3: /*0x6332bf*/
        __asm /*0x633405*/
        {
          fld     [esp+0Ch+a1]
          fadd    dword ptr [esi+2C0h]
          fstp    [esp+0Ch+a1]
          fld     [esp+0Ch+a1]
          fst     dword ptr [esi+2C0h]
        }
        *(float *)(ecx0 + 0x2C0) = _ET1; /*0x633417*/
        __asm /*0x63341d*/
        {
          fld1
          fcom    st(1)
          fnstsw  ax
          fstp    st(1)
        }
        if ( !__SETP__(HIBYTE(_AX) & 5, 0) ) /*0x633428*/
        {
          __asm { fstp    dword ptr [esi+2C0h] } /*0x63342a*/
          *(float *)(ecx0 + 0x2C0) = _ET1; /*0x63342a*/
          *(_DWORD *)(ecx0 + 0x2BC) = 0; /*0x633430*/
          goto LABEL_30; /*0x633436*/
        }
        break;
      case 2: /*0x6332bf*/
        __asm /*0x6332ca*/
        {
          fld     dword ptr [esi+2C0h]
          fsub    [esp+0Ch+a1]
          fstp    [esp+0Ch+a1]
          fld     [esp+0Ch+a1]
          fst     dword ptr [esi+2C0h]
        }
        *(float *)(ecx0 + 0x2C0) = _ET1; /*0x6332dc*/
        __asm /*0x6332e2*/
        {
          fldz
          fcom    st(1)
          fnstsw  ax
          fstp    st(1)
        }
        if ( (_AX & 0x4100) == 0 ) /*0x6332ed*/
        {
          __asm { fstp    dword ptr [esi+2C0h] } /*0x6332f3*/
          *(float *)(ecx0 + 0x2C0) = _ET1; /*0x6332f3*/
          *(_DWORD *)(ecx0 + 0x2C4) = 0; /*0x6332f9*/
          *(_DWORD *)(ecx0 + 0x2BC) = 0; /*0x6332ff*/
LABEL_30:
          sub_5EE1B0(a1, result); /*0x63343a*/
          return result; /*0x63343c*/
        }
        break;
      case 4: /*0x6332bf*/
        __asm /*0x63330f*/
        {
          fld     dword ptr [esi+2C0h]
          fsub    [esp+0Ch+a1]
          fstp    [esp+0Ch+a1]
          fld     [esp+0Ch+a1]
          fst     dword ptr [esi+2C0h]
        }
        *(float *)(ecx0 + 0x2C0) = _ET1; /*0x633321*/
        __asm /*0x633327*/
        {
          fldz
          fcom    st(1)
          fnstsw  ax
          fstp    st(1)
        }
        if ( (_AX & 0x4100) == 0 ) /*0x633332*/
        {
          v16 = *(TESObjectREFR **)(ecx0 + 0x2C4); /*0x633338*/
          __asm { fstp    dword ptr [esi+2C0h] } /*0x63333e*/
          *(float *)(_ESI + 0x2C0) = _ET1; /*0x63333e*/
          *(_DWORD *)(_ESI + 0x2C4) = 0; /*0x633346*/
          if ( v16 ) /*0x63334c*/
            ActivateRef(v16, st5_0, a5, result, (TESObjectREFR *)a1, 0, 0, 1); /*0x633353*/
          if ( a1 != (Actor *)reference && MobileObject_GetProcessLevel((MobileObject *)a1) ) /*0x633362*/
          {
            *(_DWORD *)(_ESI + 0x2BC) = 0; /*0x63336c*/
            return result; /*0x633376*/
          }
          sub_628630((#239 *)_ESI, a1, 1); /*0x63337e*/
          goto LABEL_30; /*0x633383*/
        }
        break;
      case 6: /*0x6332bf*/
        __asm /*0x63338d*/
        {
          fld     dword ptr [esi+2C0h]
          fsub    [esp+0Ch+a1]
          fstp    [esp+0Ch+a1]
          fld     [esp+0Ch+a1]
          fst     dword ptr [esi+2C0h]
        }
        *(float *)(ecx0 + 0x2C0) = _ET1; /*0x63339f*/
        __asm /*0x6333a5*/
        {
          fldz
          fcom    st(1)
          fnstsw  ax
          fstp    st(1)
        }
        if ( (_AX & 0x4100) == 0 ) /*0x6333b0*/
        {
          __asm { fstp    dword ptr [esi+2C0h] } /*0x6333b6*/
          *(float *)(ecx0 + 0x2C0) = _ET1; /*0x6333b6*/
          ((void (__thiscall *)(Actor *, int))a1->vtbl->super.super.super.Unk_23)(a1, 1); /*0x6333c8*/
          goto LABEL_30; /*0x6333ca*/
        }
        break;
      case 5: /*0x6332bf*/
        __asm /*0x6333d1*/
        {
          fld     dword ptr [esi+2C0h]
          fsub    [esp+0Ch+a1]
          fstp    [esp+0Ch+a1]
          fld     [esp+0Ch+a1]
          fst     dword ptr [esi+2C0h]
        }
        *(float *)(ecx0 + 0x2C0) = _ET1; /*0x6333e3*/
        __asm /*0x6333e9*/
        {
          fldz
          fcom    st(1)
          fnstsw  ax
          fstp    st(1)
        }
        if ( (_AX & 0x4100) == 0 ) /*0x6333f4*/
        {
          __asm { fstp    dword ptr [esi+2C0h] } /*0x6333f8*/
          *(float *)(ecx0 + 0x2C0) = _ET1; /*0x6333f8*/
          sub_4E4690((int)a1, 0, a2, ecx0, st5_0, a5); /*0x6333fe*/
          goto LABEL_30; /*0x633403*/
        }
        break;
      default:
        goto LABEL_30; /*0x6333cf*/
    }
    __asm { fstp    st } /*0x633438*/
    goto LABEL_30; /*0x633438*/
  }
  __asm /*0x633260*/
  {
    fld1
    fcom    dword ptr [esi+2C0h]
    fnstsw  ax
  }
  if ( __SETP__(HIBYTE(_AX) & 0x41, 0) ) /*0x63326d*/
  {
    __asm { fstp    dword ptr [esi+2C0h] } /*0x63327c*/
    *(float *)(ecx0 + 0x2C0) = _ET1; /*0x63327c*/
    sub_5EE1B0(a1, result); /*0x633282*/
  }
  else
  {
    __asm { fstp    st } /*0x633270*/
  }
  return result; /*0x633274*/
}
