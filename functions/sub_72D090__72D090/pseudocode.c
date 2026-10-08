unsigned int __thiscall sub_72D090(unsigned __int16 *this, _DWORD *a2, int a3, int a4)
{
  unsigned int result; // eax
  unsigned int v6; // edi
  bool v7; // zf
  _WORD *v8; // eax
  int v9; // [esp+10h] [ebp-14h]
  unsigned __int16 v10; // [esp+18h] [ebp-Ch] BYREF
  unsigned __int16 v11; // [esp+1Ah] [ebp-Ah] BYREF
  unsigned __int16 v12[2]; // [esp+1Ch] [ebp-8h] BYREF

  result = FormHeapAlloc((unsigned __int64)(3 * (unsigned int)*(this + 0xF)) >> 0x1F != 0 ? 0xFFFFFFFF : 6 * *(this + 0xF));
  v6 = 0; /*0x72d0cc*/
  v7 = *(this + 0xF) == 0; /*0x72d0d1*/
  *((_DWORD *)this + 5) = result; /*0x72d0d5*/
  if ( !v7 ) /*0x72d0d8*/
  {
    v9 = 0; /*0x72d0df*/
    do /*0x72d146*/
    {
      (*(void (__thiscall **)(int, _DWORD, unsigned __int16 *, unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)a3 + 0x60))( /*0x72d105*/
        a3,
        *(unsigned __int16 *)(*a2 + 2 * v6),
        &v10,
        &v11,
        v12);
      v8 = (_WORD *)(v9 + *((_DWORD *)this + 5)); /*0x72d117*/
      *v8 = *(_WORD *)(a4 + 2 * v10); /*0x72d119*/
      v8[1] = *(_WORD *)(a4 + 2 * v11); /*0x72d125*/
      v8[2] = *(_WORD *)(a4 + 2 * v12[0]); /*0x72d132*/
      result = *(this + 0xF); /*0x72d136*/
      ++v6; /*0x72d13a*/
      v9 += 6; /*0x72d142*/
    }
    while ( v6 < result ); /*0x72d146*/
  }
  return result; /*0x72d149*/
}
