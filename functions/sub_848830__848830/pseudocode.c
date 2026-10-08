void __thiscall sub_848830(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  unsigned int v8; // [esp-8h] [ebp-28h]
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v6 = (NiD3DPass *)unk_B45B38; /*0x848856*/
  value = (NiD3DPass *)unk_B45B38; /*0x84885e*/
  if ( value ) /*0x848867*/
    ++v6->RefCount; /*0x848869*/
  v8 = *((_DWORD *)this + 0xE); /*0x848874*/
  v10 = 0; /*0x848878*/
  NiTArray_NiD3DPass_SetAt(this + 4, v8, &value); /*0x848880*/
  v10 = 0xFFFFFFFF; /*0x84888a*/
  if ( v6 ) /*0x84888e*/
  {
    if ( v6->RefCount-- == 1 ) /*0x848890*/
      NiD3DPass_ReleaseToPool(v6); /*0x848897*/
  }
  ++*((_DWORD *)this + 0xE); /*0x84889c*/
}
