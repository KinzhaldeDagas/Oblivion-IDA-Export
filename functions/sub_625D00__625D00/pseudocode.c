// Verified: TESPackage-derived DialoguePackage constructor via concrete vtable store and factory type12 allocation64 bytes. Unknown trailing field semantics remain opaque; no Fallout offsets imported.
DialoguePackage *__thiscall DialoguePackage_Constructor(DialoguePackage *self)
{
  TESPackage::TESPackage(&self->base); /*0x625d03*/
  *(float *)&self->unknown3C[8] = 0.0; /*0x625d0c*/
  *(_DWORD *)&self->unknown3C[0x18] = 0; /*0x625d0f*/
  *(_DWORD *)&self->unknown3C[0x1C] = 0; /*0x625d12*/
  *(_DWORD *)&self->unknown3C[0x14] = 0; /*0x625d15*/
  *(_DWORD *)self->unknown3C = 0; /*0x625d18*/
  *(_DWORD *)&self->unknown3C[4] = 0; /*0x625d1b*/
  *(_DWORD *)&self->unknown3C[0xC] = 0; /*0x625d1e*/
  self->unknown3C[0x10] = 0; /*0x625d21*/
  self->base.__vftable = &DialoguePackage::`vftable'; /*0x625d24*/
  return self; /*0x625d2c*/
}
