char __userpurge sub_644050@<al>(TESPackage **this@<ecx>, double a2@<st1>, Actor *a3)
{
  TESPackage *v4; // ecx
  char v5; // al

  v4 = *(this + 2);
  if ( !v4 || (sub_566DC0(v4, flt_A30634, a2, a3, 0, flt_A30634), v5) )
  {
    if ( ((*(this + 2))->members.packageFlags & 4) != 0 )
      (*(void (__thiscall **)(TESPackage **, Actor *, int))&(*this)[6].members.type)(this, a3, 1);
    return 0;
  }
  else
  {
    (*(void (__thiscall **)(TESPackage **, Actor *, unsigned int))&(*this)[6].members.type)(this, a3, 0xFFFFFFFF);
    return 0;
  }
}
