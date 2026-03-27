int __thiscall sub_8B1250(int *this, unsigned __int64 a2)
{
  int v3; // ecx
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  int v7; // [esp+10h] [ebp-Ch]

  v7 = *(this + 2);
  v3 = *this;
  v4 = v7 & (0x9E3779B1 * (a2 >> 4));
  HIDWORD(v5) = *(_DWORD *)(*this + 8 * v4);
  LODWORD(v5) = *(_DWORD *)(v3 + 8 * v4 + 4);
  if ( v5 )
  {
    while ( __PAIR64__(v5, HIDWORD(v5)) != a2 )
    {
      v4 = v7 & (v4 + 1);
      LODWORD(v5) = *(_DWORD *)(v3 + 8 * v4 + 4);
      HIDWORD(v5) = *(_DWORD *)(v3 + 8 * v4);
      if ( !*(_QWORD *)(v3 + 8 * v4) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    LODWORD(v4) = v7 + 1;
  }
  return v4;
}
