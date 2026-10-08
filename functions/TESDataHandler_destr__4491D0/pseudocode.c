void __thiscall TESDataHandler_destr(TESDataHandler *self)
{
  unsigned int v2; // edi
  unsigned int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  unsigned int v5; // edi
  unsigned int v6; // [esp-4h] [ebp-20h]

  v2 = *((_DWORD *)self + 0x337); /*0x4491f9*/
  if ( v2 ) /*0x449209*/
  {
    ContainerExtraData_destr(v2); /*0x44920d*/
    FormHeapFree(v2); /*0x449213*/
  }
  sub_451100((CHAR **)self + 0x232); /*0x449222*/
  v3 = *(_DWORD *)self; /*0x449227*/
  if ( *(_DWORD *)self ) /*0x449227*/
  {
    TESObjectListHead_destr(*(_DWORD **)self); /*0x449232*/
    FormHeapFree(v3); /*0x449238*/
  }
  v4 = *((void (__thiscall ****)(_DWORD, int))self + 0x2F); /*0x449240*/
  if ( v4 ) /*0x449248*/
    (**v4)(v4, 1); /*0x449250*/
  FormHeapFree(*((_DWORD *)self + 0x336)); /*0x449259*/
  v5 = dword_B361CC[0x3D]; /*0x449269*/
  if ( dword_B361CC[0x3D] ) /*0x44925e*/
  {
    sub_5219B0((NiTMap_TESCELL *)dword_B361CC[0x3D]); /*0x44926d*/
    FormHeapFree(v5); /*0x449273*/
  }
  dword_B361CC[0x3D] = 0; /*0x449280*/
  NiTMap_Clear(&TESForm_FormIDMap); /*0x44928a*/
  _LN21((char *)self + 0xD8, 0x60u, 0x15, (void (__thiscall *)(void *))TESSkill::~TESSkill); /*0x4492a4*/
  v6 = *((_DWORD *)self + 0x31); /*0x4492af*/
  *((_DWORD *)self + 0x30) = &NiTLargeArray<TESObjectCELL *>::`vftable'; /*0x4492b0*/
  FormHeapFree(v6); /*0x4492ba*/
}
