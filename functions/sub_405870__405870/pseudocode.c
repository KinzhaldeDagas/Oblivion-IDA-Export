// NiTexturingProperty map flag helper: ensures map slot 0 exists and writes arg-derived bits into map Unk04 bits 0xC000. 0x560AC0 calls it with 0 for billboard texture property state.
void __thiscall OB_NiTexturingProperty_SetMapFlagBitsC000_010201A0(void *this, int value)
{
  _WORD *v3; // esi
  _WORD *v4; // eax
  _WORD *v5; // eax
  _DWORD v6[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = **((_WORD ***)this + 8); /*0x405898*/
  if ( !v3 ) /*0x40589c*/
  {
    v4 = (_WORD *)FormHeapAlloc(0x10u); /*0x4058a0*/
    v6[0] = v4; /*0x4058a8*/
    v6[3] = 0; /*0x4058ae*/
    if ( v4 ) /*0x4058b2*/
      v5 = sub_704100(v4); /*0x4058b6*/
    else
      v5 = 0; /*0x4058bd*/
    v3 = v5; /*0x4058c4*/
    v6[0] = v5; /*0x4058cb*/
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 0, v6); /*0x4058cf*/
  }
  v3[2] = ((_WORD)value << 0xC) | v3[2] & 0xCFFF; /*0x4058e7*/
}
