__int16 __thiscall sub_722510(int *this, int a2)
{
  _DWORD *v2; // edi
  __int16 v4; // ax
  __int16 result; // ax
  int (__cdecl *v6)(int, int *, int, int *, int); // edx
  int *v7; // esi
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_709EE0(this, (_DWORD *)a2);
  if ( v2[0x36] >= 0xA000102u )
  {
    v6 = *(int (__cdecl **)(int, int *, int, int *, int))(v2[0x87] + 4);
    v7 = this + 0x37;
    v8 = v2[0x87];
    a2 = 2;
    result = v6(v8, v7, 2, &a2, 1);
    *(_WORD *)v7 |= 8u;
  }
  else
  {
    v4 = *((_WORD *)v2 + 0x12C);
    *((_WORD *)this + 0x6E) = v4;
    if ( v2[0x36] < 0x4020003u )
      *((_WORD *)this + 0x6E) = v4 & 0x1FFF | (2 * (v4 & 0xE000));
    result = *((unsigned __int8 *)this + 0xDD);
    *((_WORD *)this + 0x6E) = result;
    *((_WORD *)this + 0x6E) |= 8u;
  }
  return result;
}
