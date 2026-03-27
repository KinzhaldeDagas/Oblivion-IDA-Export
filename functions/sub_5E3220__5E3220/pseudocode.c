bool __thiscall sub_5E3220(_DWORD *this)
{
  TESPackage *v1; // eax
  TESPackage *v2; // esi

  if ( !*(this + 0x16) )
    return 0;
  v1 = (TESPackage *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x184))(*(this + 0x16));
  v2 = v1;
  return v1 && (v1->members.type == 1 && !sub_5660A0(v1) || v2->members.type == 0x1F);
}
