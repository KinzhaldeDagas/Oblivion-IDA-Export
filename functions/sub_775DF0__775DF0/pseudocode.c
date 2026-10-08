int __thiscall sub_775DF0(int this, int a2, int a3)
{
  *(_WORD *)(this + 0xC) = 0; /*0x775df9*/
  *(_WORD *)(this + 0xE) = 0; /*0x775dfd*/
  *(_WORD *)(this + 0x10) = 0; /*0x775e01*/
  *(_DWORD *)(this + 8) = 0; /*0x775e05*/
  *(_DWORD *)(this + 4) = &NiTArray<NiDX9AdapterDesc *>::`vftable'; /*0x775e08*/
  *(_WORD *)(this + 0x12) = 1; /*0x775e0f*/
  *(_DWORD *)this = 0; /*0x775e15*/
  NiDX9AdapterDescArray_Populate((unsigned __int16 *)this, a2, a3); /*0x775e1f*/
  return this; /*0x775e26*/
}
