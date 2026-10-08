int __thiscall sub_6DE2F0(int *this, int a2, unsigned int a3)
{
  _DWORD *v4; // edi
  void (__cdecl *v5)(int, _BYTE *, int, int *, int); // eax
  unsigned int v6; // esi
  int v7; // eax
  int (__cdecl *v8)(int, int, unsigned int, int *, int); // eax
  int v10; // [esp-18h] [ebp-28h]
  int v11; // [esp-14h] [ebp-24h]
  int v12; // [esp-14h] [ebp-24h]
  _BYTE v13[4]; // [esp+Ch] [ebp-4h] BYREF

  v4 = (_DWORD *)a2; /*0x6de2f6*/
  sub_713620((_DWORD *)a2, (int)(this + 1)); /*0x6de300*/
  if ( v4[0x36] >= 0xA010068u && v4[1] < 0xAu ) /*0x6de315*/
  {
    v11 = v4[0x87]; /*0x6de32b*/
    v5 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(v11 + 4); /*0x6de32c*/
    a2 = 4; /*0x6de32f*/
    v5(v11, v13, 4, &a2, 1); /*0x6de337*/
  }
  v6 = a3; /*0x6de33c*/
  v7 = FormHeapAlloc((0xC * (unsigned __int64)a3) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * a3);
  *this = v7; /*0x6de367*/
  v12 = v7; /*0x6de370*/
  v8 = *(int (__cdecl **)(int, int, unsigned int, int *, int))(v4[0x87] + 4); /*0x6de371*/
  v10 = v4[0x87]; /*0x6de374*/
  a2 = 4; /*0x6de375*/
  return v8(v10, v12, 0xC * v6, &a2, 1); /*0x6de382*/
}
