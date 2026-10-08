// Clones a loaded NiObject with a temporary pointer map and runs clone post-processing; the returned scene object is distinct from its source.
NiObject *__thiscall NiObject_CloneWithPointerMap(NiObject *this)
{
  NiObject *(__thiscall *Copy)(NiObject *); // edx
  NiObject *v3; // edi
  NiTPointerMap<NiObject *,NiObject *> *v5; // [esp+Ch] [ebp-1Ch] BYREF
  void (__thiscall ***v6)(_DWORD, int); // [esp+10h] [ebp-18h]
  unsigned int v7; // [esp+24h] [ebp-4h]

  OB_NiCloningProcess_ctor(&v5); /*0x70092b*/
  Copy = this->__vftable->Copy; /*0x700932*/
  v7 = 0; /*0x70093c*/
  v3 = (NiObject *)((int (__thiscall *)(NiObject *, NiTPointerMap<NiObject *,NiObject *> **))Copy)(this, &v5); /*0x700946*/
  ((void (__thiscall *)(NiObject *, NiTPointerMap<NiObject *,NiObject *> **))this->__vftable->Unk_0E)(this, &v5); /*0x700954*/
  v7 = 0xFFFFFFFF; /*0x70095c*/
  if ( v5 ) /*0x700964*/
    (**(void (__thiscall ***)(NiTPointerMap<NiObject *,NiObject *> *, int))v5)(v5, 1); /*0x70096c*/
  if ( v6 ) /*0x700974*/
    (**v6)(v6, 1); /*0x70097c*/
  return v3; /*0x700980*/
}
