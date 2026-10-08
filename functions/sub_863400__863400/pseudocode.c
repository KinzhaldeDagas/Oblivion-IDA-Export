// Requests the Lighting30 render-pass variant keyed by selector 0x2F through the property's pass-building virtual and returns the resulting depth-pass handle/value. Fallout provides the conventional GetRenderDepthPass label after this Oblivion call shape was established.
__int16 __thiscall sub_863400(void *this, int a2)
{
  void (__thiscall *v2)(void *, int, int, void **, _DWORD); // eax
  void *v4; // [esp+10h] [ebp-4h] BYREF

  v4 = this; /*0x863400*/
  v2 = *(void (__thiscall **)(void *, int, int, void **, _DWORD))(*(_DWORD *)this + 0x5C); /*0x863403*/
  v4 = 0; /*0x863414*/
  v2(this, a2, 0x2F, &v4, 0); /*0x86341c*/
  return (__int16)v4; /*0x863423*/
}
