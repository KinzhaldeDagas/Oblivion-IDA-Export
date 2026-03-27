char __userpurge sub_628520@<al>(int *this@<ecx>, double a2@<st1>, Actor *a3, int a4)
{
  TESPackage *v5; // edi
  char v6; // al
  bool v7; // zf
  int v8; // eax

  v5 = (TESPackage *)(*(int (__thiscall **)(int *))(*this + 0x184))(this);
  if ( !v5 )
    return 0;
  (*(void (__thiscall **)(int *, Actor *))(*this + 0x194))(this, a3);
  sub_566DC0(v5, flt_A30634, a2, a3, 0, flt_A30634);
  v7 = v6 == 0;
  v8 = *this;
  if ( !v7 )
  {
    (*(void (__thiscall **)(int *, int))(v8 + 0xBC))(this, 1);
    return 0;
  }
  (*(void (__thiscall **)(int *, _DWORD))(v8 + 0x17C))(this, 0);
  return 1;
}
