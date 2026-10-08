char __thiscall TESObjectREFR_LessThan(TESChildCELL *this, TESForm *a2)
{
  int (__thiscall ***v3)(_DWORD); // eax
  int v4; // ebx
  char result; // al
  TESObjectREFR *v6; // esi
  int v7; // eax
  int v9; // eax
  char v10; // [esp+13h] [ebp-1h]

  v10 = 0; /*0x4dfd20*/
  if ( sub_4CA010(a2->member.type) ) /*0x4dfd25*/
  {
    v3 = (int (__thiscall ***)(_DWORD))OblivionDynamicCast( /*0x4dfd44*/
                                         a2,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESChildCell `RTTI Type Descriptor',
                                         0);
    v4 = (**v3)(v3); /*0x4dfd5a*/
    if ( v4 == (**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6) ) /*0x4dfd64*/
    {
      switch ( a2->member.type ) /*0x4dfd7a*/
      {
        case kFormType_REFR: /*0x4dfd7a*/
        case kFormType_ACHR: /*0x4dfd7a*/
        case kFormType_ACRE: /*0x4dfd7a*/
          v6 = (TESObjectREFR *)OblivionDynamicCast( /*0x4dfdb4*/
                                  a2,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                  0);
          if ( TESObjectREFR_IsPersistent((TESObjectREFR *)this) ) /*0x4dfdb6*/
          {
            if ( v6 && !TESObjectREFR_IsPersistent(v6) ) /*0x4dfdc5*/
              return 1; /*0x4dfddc*/
            return v10; /*0x4dfdcc*/
          }
          if ( (*(_DWORD *)(this + 2) & 0x8000) == 0 ) /*0x4dfde7*/
            goto LABEL_14; /*0x4dfde7*/
          if ( !v6 ) /*0x4dfdeb*/
            return v10; /*0x4dfdeb*/
          if ( TESObjectREFR_IsPersistent(v6) ) /*0x4dfdef*/
          {
LABEL_14:
            result = 0; /*0x4dfe15*/
          }
          else
          {
            if ( (v6->member.super.flags & 0x8000) != 0 ) /*0x4dfdfb*/
              return v10; /*0x4dfdfb*/
            result = 1; /*0x4dfe04*/
          }
          break; /*0x4dfe0b*/
        case kFormType_PathGrid: /*0x4dfd7a*/
        case kFormType_Land: /*0x4dfd7a*/
          return TESObjectREFR_IsPersistent((TESObjectREFR *)this); /*0x4dfd98*/
        default:
          return v10;
      }
      return result; /*0x4dfe0b*/
    }
    v7 = (**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6); /*0x4dfe25*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x34))(v7, v4); /*0x4dfe28*/
  }
  else
  {
    v9 = (**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6); /*0x4dfe32*/
    return (*(int (__thiscall **)(int, TESForm *))(*(_DWORD *)v9 + 0x34))(v9, a2); /*0x4dfe3c*/
  }
}
