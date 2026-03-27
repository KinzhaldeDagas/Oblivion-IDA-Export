_DWORD *__userpurge sub_78BAA0@<eax>(int this@<ecx>, int a2@<edi>, int a3)
{
  bool v4; // zf
  _DWORD *result; // eax
  rsize_t v6; // [esp-4h] [ebp-60h] BYREF
  char *v7; // [esp+4Ch] [ebp-10h]
  int v8; // [esp+58h] [ebp-4h]

  v7 = (char *)&v6 + 4;
  v4 = *(_BYTE *)(this + 0x45) == 0;
  v8 = 0;
  if ( v4 )
  {
    if ( a3 == 2 && *(_DWORD *)(*(_DWORD *)(this + 0x10) + 0xC) == 1 )
    {
      *(_BYTE *)(*(_DWORD *)(this + 0x60) + 0x12) = 0;
      sub_794AE0(*(_DWORD *)(this + 0x60), 0);
    }
    *(_DWORD *)(*(_DWORD *)(this + 0x10) + 0xC) = a3;
    result = *(_DWORD **)(this + 0x60);
    *((_BYTE *)result + 8) = a3 != 2;
    *(_DWORD *)(*(_DWORD *)(this + 0x60) + 0x14) = a3;
  }
  else
  {
    LODWORD(v6) = 0x42;
    return sub_414500(&dword_B2B614, a2, "SetFrondWindMethod() has no effect after Compute() has been called", v6);
  }
  return result;
}
