void __thiscall sub_848680(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  unsigned int v8; // [esp-8h] [ebp-28h]
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v6 = (NiD3DPass *)unk_B45B2C; /*0x8486a6*/
  value = (NiD3DPass *)unk_B45B2C; /*0x8486ae*/
  if ( value ) /*0x8486b7*/
    ++v6->RefCount; /*0x8486b9*/
  v8 = *((_DWORD *)this + 0xE); /*0x8486c4*/
  v10 = 0; /*0x8486c8*/
  NiTArray_NiD3DPass_SetAt(this + 4, v8, &value); /*0x8486d0*/
  v10 = 0xFFFFFFFF; /*0x8486da*/
  if ( v6 ) /*0x8486de*/
  {
    if ( v6->RefCount-- == 1 ) /*0x8486e0*/
      NiD3DPass_ReleaseToPool(v6); /*0x8486e7*/
  }
  ++*((_DWORD *)this + 0xE); /*0x8486ec*/
}
