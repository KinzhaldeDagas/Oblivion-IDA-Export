int __userpurge sub_78B700@<eax>(_BYTE *this@<ecx>, int a2@<edi>, _DWORD *a3)
{
  bool v3; // zf
  int result; // eax
  rsize_t v5; // [esp-4h] [ebp-60h] BYREF
  char *v6; // [esp+4Ch] [ebp-10h]
  int v7; // [esp+58h] [ebp-4h]

  v6 = (char *)&v5 + 4;
  v3 = *(this + 0x45) == 0;
  v7 = 0;
  if ( v3 )
  {
    result = (int)a3;
    if ( !a3 )
      result = 1;
    *(_DWORD *)(*(_DWORD *)this + 0xBC) = result;
  }
  else
  {
    LODWORD(v5) = 0x47;
    return (int)sub_414500(
                  &dword_B2B614,
                  a2,
                  "SetNumLeafRockingGroups() has no effect after Compute() has been called",
                  v5);
  }
  return result;
}
