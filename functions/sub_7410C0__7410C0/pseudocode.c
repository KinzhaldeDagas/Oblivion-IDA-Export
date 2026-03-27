int __thiscall sub_7410C0(int *this, int a2)
{
  _DWORD *v2; // edi
  unsigned int v4; // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  int v8; // [esp-14h] [ebp-1Ch]
  int v9; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_700AC0(this, (unsigned int *)a2);
  if ( v2[0x36] >= 0xA000102u )
  {
    v8 = v2[0x87];
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v8 + 4);
    a2 = 2;
    v5(v8, this + 6, 2, &a2, 1);
  }
  else
  {
    v4 = *((unsigned __int16 *)v2 + 0x12E);
    *((_WORD *)this + 0xC) = v4;
    if ( v2[0x36] >= 0x5000016u )
    {
      *((_WORD *)this + 0xC) = v4 & 7;
    }
    else
    {
      *((_WORD *)this + 0xC) = 0;
      *((_WORD *)this + 0xC) = (2 * ((v4 >> 3) & 3)) | ((v4 & 2) != 0);
    }
  }
  v9 = v2[0x87];
  v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v9 + 4);
  a2 = 4;
  v6(v9, this + 7, 4, &a2, 1);
  return sub_709430((char *)this + 0x20, (signed int)v2);
}
