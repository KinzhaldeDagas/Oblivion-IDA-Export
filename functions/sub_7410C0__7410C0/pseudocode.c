int __thiscall sub_7410C0(int *this, int a2)
{
  signed int v2; // edi
  unsigned int v4; // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  int v8; // [esp-14h] [ebp-1Ch]
  int v9; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x7410c2*/
  sub_700AC0((NiRenderer *)this, (unsigned int *)a2); /*0x7410c9*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u ) /*0x7410d8*/
  {
    v8 = *(_DWORD *)(v2 + 0x21C); /*0x74113b*/
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v8 + 4); /*0x74113c*/
    a2 = 2; /*0x74113f*/
    v5(v8, this + 6, 2, &a2, 1); /*0x741147*/
  }
  else
  {
    v4 = *(unsigned __int16 *)(v2 + 0x25C); /*0x7410da*/
    *((_WORD *)this + 0xC) = v4; /*0x7410e1*/
    if ( *(_DWORD *)(v2 + 0xD8) >= 0x5000016u ) /*0x7410ef*/
    {
      *((_WORD *)this + 0xC) = v4 & 7; /*0x741122*/
    }
    else
    {
      *((_WORD *)this + 0xC) = 0; /*0x741105*/
      *((_WORD *)this + 0xC) = (2 * ((v4 >> 3) & 3)) | ((v4 & 2) != 0); /*0x741119*/
    }
  }
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x74115f*/
  v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v9 + 4); /*0x741160*/
  a2 = 4; /*0x741163*/
  v6(v9, this + 7, 4, &a2, 1); /*0x74116b*/
  return sub_709430((char *)this + 0x20, v2); /*0x741179*/
}
