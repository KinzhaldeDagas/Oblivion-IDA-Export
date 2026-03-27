void __thiscall sub_521ED0(char *this, TESForm *a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // eax
  char *v6; // esi
  bool v7; // zf
  int *v8; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESNPC `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    TESSpellList_CopyFrom((_DWORD *)this + 0x15, a2);
    sub_46E480((_DWORD *)this + 0x39, a2);
    TESActorBaseData_CopyFrom((unsigned int *)this + 9, a2);
    TESHealthForm_CopyFrom((_DWORD *)this + 0x20, a2);
    TESAttributes_CopyFrom(this + 0x88, a2);
    TESFullName_CopyFrom((unsigned int *)this + 0x28, a2);
    TESModel_CopyFrom((float *)this + 0x2B, a2);
    *((_DWORD *)this + 0x3B) = v3[0x3B];
    *((_DWORD *)this + 0x3C) = v3[0x3C];
    *((_DWORD *)this + 0x3D) = v3[0x3D];
    *((_DWORD *)this + 0x3E) = v3[0x3E];
    v4 = *(_DWORD *)this;
    *((_DWORD *)this + 0x3F) = v3[0x3F];
    *(this + 0x100) = *((_BYTE *)v3 + 0x100);
    *((_DWORD *)this + 0x41) = v3[0x41];
    *((_DWORD *)this + 0x72) = v3[0x72];
    *((float *)this + 0x73) = *((float *)v3 + 0x73);
    *((_DWORD *)this + 0x74) = v3[0x74];
    *((_DWORD *)this + 0x7A) = v3[0x7A];
    v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 0x120))(v3);
    (*(void (__thiscall **)(char *, int))(v4 + 0x124))(this, v5);
    if ( (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 0x128))(this, 0x45) )
      v6 = this + 0x168;
    else
      v6 = this + 0x108;
    v7 = (*(int (__thiscall **)(_DWORD *, int))(*v3 + 0x128))(v3, 0x45) == 0;
    v8 = v3 + 0x5A;
    if ( v7 )
      v8 = v3 + 0x42;
    sub_5528F0(v8, (int)v6);
  }
}
