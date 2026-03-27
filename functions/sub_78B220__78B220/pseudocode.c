int __usercall sub_78B220@<eax>(int *this@<ecx>, int a2@<edi>)
{
  int v2; // eax
  bool v3; // zf
  rsize_t v5; // [esp-4h] [ebp-64h] BYREF
  int v6; // [esp+4Ch] [ebp-14h]
  char *v7; // [esp+50h] [ebp-10h]
  int v8; // [esp+5Ch] [ebp-4h]

  v7 = (char *)&v5 + 4;
  v2 = *this;
  v3 = *(_BYTE *)(*this + 0x21) == 0;
  v6 = 0;
  v8 = 0;
  if ( !v3 )
    return *(_DWORD *)(v2 + 0x48);
  LODWORD(v5) = 0x47;
  sub_414500(&dword_B2B614, a2, "SetTreeSize() has no effect after DeleteTransientData() has been called", v5);
  return v6;
}
