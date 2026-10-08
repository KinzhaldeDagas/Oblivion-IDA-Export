__int16 __thiscall sub_7D8B40(void *this, int a2)
{
  bool v2; // zf
  bool v3; // al
  void *v5; // [esp+10h] [ebp-4h] BYREF

  v5 = this; /*0x7d8b40*/
  v2 = OB_RendererGlobalState_010201A0[0x1DB] == 0; /*0x7d8b41*/
  v5 = 0; /*0x7d8b48*/
  v3 = v2 /*0x7d8b6c*/
    && unk_B43108
    && (OB_RendererGlobalState_010201A0[0xA7] & 0x20) != 0
    && *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2;
  (*(void (__thiscall **)(void *, int, int, void **, _DWORD))(*(_DWORD *)this + 0x5C))(
    this,
    a2,
    v3 ? 0x2F : 0xF,
    &v5,
    0);
  return (__int16)v5; /*0x7d8b9b*/
}
