void __thiscall sub_6D0370(int *this, signed int a2)
{
  _DWORD *v2; // ebp
  void (__cdecl *v4)(int, int *, int, signed int *, int); // edx
  int i; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2;
  sub_6D0550(this, a2);
  v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v2[0x87] + 4);
  v8 = v2[0x87];
  a2 = 2;
  v4(v8, this + 0x11, 2, &a2, 1);
  sub_6D0010(this, *((_WORD *)this + 0x22));
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x22); *(_DWORD *)(*(this + 0x10) + 4 * v7) = v6 )
  {
    v6 = sub_712A90(v2);
    v7 = (unsigned __int16)i++;
  }
}
