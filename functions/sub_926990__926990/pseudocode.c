int __thiscall sub_926990(_DWORD *this, int a2, int *a3)
{
  int *v3; // esi
  int result; // eax
  _DWORD v6[43]; // [esp+10h] [ebp-B0h] BYREF

  v3 = a3; /*0x9269ac*/
  memset(v6, 0, 0xC); /*0x9269b9*/
  if ( !a3 ) /*0x9269c5*/
  {
    v3 = v6; /*0x9269d2*/
    (*(void (__cdecl **)(_DWORD, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))( /*0x9269df*/
      *(_DWORD *)(a2 + 0x21C),
      v6,
      0xA0,
      0,
      0);
  }
  sub_8A01F0(this, a2, (int)v3); /*0x9269e8*/
  result = *(this + 1); /*0x9269f0*/
  *(float *)(result + 0x10) = *((float *)v3 + 5); /*0x9269f3*/
  *(_BYTE *)(result + 0x14) = *((_BYTE *)v3 + 0xC); /*0x9269f9*/
  *(_OWORD *)(result + 0x20) = *((_OWORD *)v3 + 2); /*0x926a07*/
  *(_OWORD *)(result + 0x30) = *((_OWORD *)v3 + 3); /*0x926a0f*/
  *(_OWORD *)(result + 0x40) = *((_OWORD *)v3 + 4); /*0x926a17*/
  *(_OWORD *)(result + 0x50) = *((_OWORD *)v3 + 5); /*0x926a1f*/
  *(_OWORD *)(result + 0x60) = *((_OWORD *)v3 + 6); /*0x926a27*/
  *(_OWORD *)(result + 0x70) = *((_OWORD *)v3 + 7); /*0x926a2f*/
  *(_OWORD *)(result + 0x80) = *((_OWORD *)v3 + 8); /*0x926a3b*/
  *(_OWORD *)(result + 0x90) = *((_OWORD *)v3 + 9); /*0x926a4d*/
  return result; /*0x926a00*/
}
