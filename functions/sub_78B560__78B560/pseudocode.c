_DWORD *__userpurge sub_78B560@<eax>(int this@<ecx>, int a2@<edi>, _DWORD *a3)
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
    *(_BYTE *)(*(_DWORD *)(this + 0x60) + 9) = a3 == (_DWORD *)1;
    *(_DWORD *)(*(_DWORD *)(this + 0xC) + 0x78) = a3;
    return a3;
  }
  else
  {
    LODWORD(v5) = 0x46;
    return sub_414500(&dword_B2B614, a2, "SetFrondLightingMethod() has no effect after Compute() has been called", v5);
  }
}
