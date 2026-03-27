_DWORD *__userpurge sub_78BE70@<eax>(int this@<ecx>, int a2@<edi>, int a3, int a4)
{
  bool v4; // zf
  unsigned int v5; // edi
  rsize_t v7; // [esp-4h] [ebp-60h] BYREF
  char *v8; // [esp+4Ch] [ebp-10h]
  int v9; // [esp+58h] [ebp-4h]

  v8 = (char *)&v7 + 4;
  v4 = *(_BYTE *)(this + 0x45) == 0;
  v9 = 0;
  if ( v4 )
  {
    v5 = (unsigned __int16)word_B42A10;
    if ( a3 + a4 - 1 >= v5 )
    {
      LODWORD(v7) = 0x3C;
      return sub_414500(&dword_B2B614, v5, "SetLocalMatrices() parameters exceed available wind matrices", v7);
    }
    else
    {
      return (_DWORD *)sub_793C40(*(_DWORD **)(this + 0x10), a3, a4);
    }
  }
  else
  {
    LODWORD(v7) = 0x40;
    return sub_414500(&dword_B2B614, a2, "SetLocalMatrices() has no effect after Compute() has been called", v7);
  }
}
