void __thiscall sub_850B50(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  unsigned int v8; // [esp-8h] [ebp-28h]
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v6 = (NiD3DPass *)unk_B455C8; /*0x850b76*/
  value = (NiD3DPass *)unk_B455C8; /*0x850b7e*/
  if ( value ) /*0x850b87*/
    ++v6->RefCount; /*0x850b89*/
  v8 = *((_DWORD *)this + 0xE); /*0x850b94*/
  v10 = 0; /*0x850b98*/
  NiTArray_NiD3DPass_SetAt(this + 4, v8, &value); /*0x850ba0*/
  v10 = 0xFFFFFFFF; /*0x850baa*/
  if ( v6 ) /*0x850bae*/
  {
    if ( v6->RefCount-- == 1 ) /*0x850bb0*/
      NiD3DPass_ReleaseToPool(v6); /*0x850bb7*/
  }
  ++*((_DWORD *)this + 0xE); /*0x850bbc*/
}
