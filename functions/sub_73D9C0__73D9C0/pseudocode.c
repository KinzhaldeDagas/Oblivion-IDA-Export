int __thiscall sub_73D9C0(int *this, int a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, int *, int, int *, int); // eax
  int result; // eax
  bool v6; // cc
  unsigned int v7; // [esp-14h] [ebp-20h]
  int v8; // [esp+8h] [ebp-4h] BYREF

  v2 = (unsigned int *)a2;
  sub_709EE0(this, (_DWORD *)a2);
  v7 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v7 + 4);
  a2 = 4;
  v4(v7, &v8, 4, &a2, 1);
  result = v8;
  v6 = v8 < 2;
  *(this + 0x37) = v8;
  if ( !v6 )
    *(this + 0x37) = 0;
  if ( v2[0x36] < 0x14000004 )
    return sub_712A20(v2);
  return result;
}
