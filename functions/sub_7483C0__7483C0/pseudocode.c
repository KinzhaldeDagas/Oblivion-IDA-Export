int __thiscall sub_7483C0(_DWORD *this, signed int a2)
{
  _BYTE *v2; // esi
  int i; // edi
  int (__cdecl *v5)(_DWORD *, _BYTE *, int, signed int *, int); // ecx
  int v6; // eax

  v2 = (_BYTE *)a2;
  for ( i = 0; *v2; ++i )
  {
    v5 = (int (__cdecl *)(_DWORD *, _BYTE *, int, signed int *, int))*(this + 2);
    a2 = 1;
    v6 = v5(this, v2++, 1, &a2, 1);
    if ( v6 != 1 )
      break;
  }
  return i;
}
