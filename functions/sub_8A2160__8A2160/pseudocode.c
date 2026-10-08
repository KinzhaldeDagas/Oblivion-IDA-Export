// 2026-05-18 73000 consumer decode: bhkTransformShape setup consumes cinfo +0x04 child shape and cinfo +0x10 4x4 transform. This proves a rotation sidecar can be applied by building a non-identity transform cinfo instead of extending stock collision records.
void __thiscall sub_8A2160(_DWORD *this, int a2)
{
  int v3; // esi
  float *v4; // eax
  char *v5; // esi
  void (__thiscall *v6)(_DWORD *, char *); // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float v10[19]; // [esp+14h] [ebp-60h] BYREF
  unsigned int v11; // [esp+70h] [ebp-4h]

  if ( a2 ) /*0x8a219e*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 0x24); /*0x8a21b5*/
    *(_WORD *)(v3 + 4) = 0x60; /*0x8a21b7*/
    v11 = 0; /*0x8a21c9*/
    v4 = sub_8A2050((float *)(a2 + 0x10), v10); /*0x8a21d1*/
    v5 = sub_8E8B50((char *)v3, *(_DWORD *)(a2 + 4), v4); /*0x8a21e4*/
    v6 = *(void (__thiscall **)(_DWORD *, char *))(*this + 0x4C); /*0x8a21e6*/
    v11 = 0xFFFFFFFF; /*0x8a21ec*/
    v6(this, v5); /*0x8a21f4*/
    if ( *((_WORD *)v5 + 2) ) /*0x8a21f6*/
    {
      if ( !--*((_WORD *)v5 + 3) ) /*0x8a2202*/
        (**(void (__thiscall ***)(char *, int))v5)(v5, 1); /*0x8a2213*/
    }
    (*(void (__thiscall **)(_DWORD *, int))(*this + 0x7C))(this, a2); /*0x8a221d*/
    v7 = *(this + 2); /*0x8a221f*/
    if ( v7 && (v8 = *(_DWORD *)(v7 + 0xC)) != 0 ) /*0x8a222b*/
      v9 = *(_DWORD *)(v8 + 8); /*0x8a222d*/
    else
      v9 = 0; /*0x8a2232*/
    if ( v9 ) /*0x8a2236*/
      *(this + 4) = *(_DWORD *)(v9 + 0x10); /*0x8a223b*/
  }
}
