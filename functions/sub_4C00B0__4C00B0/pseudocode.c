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

  if ( !sub_4CA010(a2[4]) ) /*0x4c00ca*/
  {
    v11 = (**(this + 6))((int)(this + 6)); /*0x4c016e*/
    return (*(char (__thiscall **)(int, unsigned __int8 *))(*(_DWORD *)v11 + 0x34))(v11, a2); /*0x4c017d*/
  }
  v3 = (int (__thiscall ***)(_DWORD))OblivionDynamicCast( /*0x4c00e0*/
                                       a2,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESChildCell `RTTI Type Descriptor',
                                       0);
  v4 = (**v3)(v3); /*0x4c00ee*/
  v5 = *(this + 6); /*0x4c00f0*/
  v6 = this + 6; /*0x4c00f3*/
  v7 = v4; /*0x4c00f6*/
  if ( v4 != (*v5)(v6) ) /*0x4c0100*/
  {
    v10 = (**v6)((int)v6); /*0x4c0153*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x34))(v10, v7); /*0x4c0163*/
  }
  if ( a2[4] < 0x31u ) /*0x4c0109*/
    return 0; /*0x4c0109*/
  if ( a2[4] > 0x33u ) /*0x4c010e*/
    return a2[4] == 0x34; /*0x4c0183*/
  v9 = (TESObjectREFR *)OblivionDynamicCast( /*0x4c012d*/
                          a2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  return v9 && !TESObjectREFR_IsPersistent(v9); /*0x4c0116*/
}
