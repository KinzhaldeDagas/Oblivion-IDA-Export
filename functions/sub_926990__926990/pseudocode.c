int __thiscall sub_926990(_DWORD *this, int a2, int *a3)
{
  int *v3; // esi
  int result; // eax
  _DWORD v6[43]; // [esp+10h] [ebp-B0h] BYREF

  v3 = a3;
  memset(v6, 0, 0xC);
  if ( !a3 )
  {
    v3 = v6;
    (*(void (__cdecl **)(_DWORD, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))(
      *(_DWORD *)(a2 + 0x21C),
      v6,
      0xA0,
      0,
      0);
  }
  sub_8A01F0(this, a2, (int)v3);
  result = *(this + 1);
  *(float *)(result + 0x10) = *((float *)v3 + 5);
  *(_BYTE *)(result + 0x14) = *((_BYTE *)v3 + 0xC);
  *(_OWORD *)(result + 0x20) = *((_OWORD *)v3 + 2);
  *(_OWORD *)(result + 0x30) = *((_OWORD *)v3 + 3);
  *(_OWORD *)(result + 0x40) = *((_OWORD *)v3 + 4);
  *(_OWORD *)(result + 0x50) = *((_OWORD *)v3 + 5);
  *(_OWORD *)(result + 0x60) = *((_OWORD *)v3 + 6);
  *(_OWORD *)(result + 0x70) = *((_OWORD *)v3 + 7);
  *(_OWORD *)(result + 0x80) = *((_OWORD *)v3 + 8);
  *(_OWORD *)(result + 0x90) = *((_OWORD *)v3 + 9);
  return result;
}
