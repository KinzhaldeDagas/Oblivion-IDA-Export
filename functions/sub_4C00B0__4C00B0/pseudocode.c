char __thiscall sub_4C00B0(int (__thiscall ***this)(int), unsigned __int8 *a2)
{
  int (__thiscall ***v3)(_DWORD); // eax
  int v4; // eax
  int (__thiscall **v5)(_DWORD); // edx
  int (__thiscall ***v6)(int); // esi
  int v7; // ebp
  TESObjectREFR *v9; // eax
  int v10; // eax
  int v11; // eax

  if ( !sub_4CA010(a2[4]) )
  {
    v11 = (**(this + 6))((int)(this + 6));
    return (*(char (__thiscall **)(int, unsigned __int8 *))(*(_DWORD *)v11 + 0x34))(v11, a2);
  }
  v3 = (int (__thiscall ***)(_DWORD))OblivionDynamicCast(
                                       a2,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESChildCell `RTTI Type Descriptor',
                                       0);
  v4 = (**v3)(v3);
  v5 = *(this + 6);
  v6 = this + 6;
  v7 = v4;
  if ( v4 != (*v5)(v6) )
  {
    v10 = (**v6)((int)v6);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x34))(v10, v7);
  }
  if ( a2[4] < 0x31u )
    return 0;
  if ( a2[4] > 0x33u )
    return a2[4] == 0x34;
  v9 = (TESObjectREFR *)OblivionDynamicCast(
                          a2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  return v9 && !TESObjectREFR_IsPersistent_(v9);
}
