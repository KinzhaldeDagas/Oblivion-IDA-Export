char __thiscall TESObjectREFR_LessThan(TESChildCELL *this, TESForm *a2)
{
  int (__thiscall ***v3)(_DWORD); // eax
  int v4; // ebx
  char result; // al
  TESObjectREFR *v6; // esi
  int v7; // eax
  int v9; // eax
  char v10; // [esp+13h] [ebp-1h]

  v10 = 0;
  if ( sub_4CA010(a2->member.type) )
  {
    v3 = (int (__thiscall ***)(_DWORD))OblivionDynamicCast(
                                         a2,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESChildCell `RTTI Type Descriptor',
                                         0);
    v4 = (**v3)(v3);
    if ( v4 == (**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6) )
    {
      switch ( a2->member.type )
      {
        case kFormType_REFR:
        case kFormType_ACHR:
        case kFormType_ACRE:
          v6 = (TESObjectREFR *)OblivionDynamicCast(
                                  a2,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                  0);
          if ( TESObjectREFR_IsPersistent_((TESObjectREFR *)this) )
          {
            if ( v6 && !TESObjectREFR_IsPersistent_(v6) )
              return 1;
            return v10;
          }
          if ( (*(_DWORD *)(this + 2) & 0x8000) == 0 )
            goto LABEL_14;
          if ( !v6 )
            return v10;
          if ( TESObjectREFR_IsPersistent_(v6) )
          {
LABEL_14:
            result = 0;
          }
          else
          {
            if ( (v6->member.super.flags & 0x8000) != 0 )
              return v10;
            result = 1;
          }
          break;
        case kFormType_PathGrid:
        case kFormType_Land:
          return TESObjectREFR_IsPersistent_((TESObjectREFR *)this);
        default:
          return v10;
      }
      return result;
    }
    v7 = (**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x34))(v7, v4);
  }
  else
  {
    v9 = (**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6);
    return (*(int (__thiscall **)(int, TESForm *))(*(_DWORD *)v9 + 0x34))(v9, a2);
  }
}
