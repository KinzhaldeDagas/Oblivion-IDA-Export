unsigned __int8 __userpurge sub_78B440@<al>(int this@<ecx>, int a2@<edi>, int a3)
{
  bool v3; // zf
  rsize_t v5; // [esp-4h] [ebp-60h] BYREF
  char *v6; // [esp+4Ch] [ebp-10h]
  int v7; // [esp+58h] [ebp-4h]

  v6 = (char *)&v5 + 4;
  v3 = *(_BYTE *)(this + 0x45) == 0;
  v7 = 0;
  if ( v3 )
  {
    *(_DWORD *)(*(_DWORD *)(this + 0xC) + 0x38) = a3;
    **(_BYTE **)(this + 8) = a3 == 1;
    return a3 == 1;
  }
  else
  {
    LODWORD(v5) = 0x45;
    return (unsigned __int8)sub_414500(
                              &dword_B2B614,
                              a2,
                              "SetLeafLightingMethod() has no effect after Compute() has been called",
                              v5);
  }
}
