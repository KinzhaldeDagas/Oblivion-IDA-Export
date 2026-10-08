char __thiscall sub_74A2D0(Ni2DBuffer **this, int a2)
{
  int v2; // edi
  NiTPointerMap<unsigned int,float> *v3; // esi
  int v4; // eax
  unsigned int v5; // ebx
  NiSkinPartition *v6; // eax

  if ( !a2 || !(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2) ) /*0x74a2ea*/
    return 0; /*0x74a37a*/
  v2 = *(_DWORD *)(a2 + 0xB8); /*0x74a2f5*/
  if ( !v2 ) /*0x74a2fd*/
    return 0; /*0x74a373*/
  v3 = *(NiTPointerMap<unsigned int,float> **)(v2 + 0xC); /*0x74a300*/
  if ( !v3 )
  {
    v4 = *(_DWORD *)(v2 + 8); /*0x74a307*/
    if ( !v4 ) /*0x74a30c*/
      return 0; /*0x74a30c*/
    v5 = *(_DWORD *)(v4 + 0x40); /*0x74a30f*/
    if ( v5 < 4 ) /*0x74a315*/
      LOBYTE(v5) = 4; /*0x74a317*/
    v6 = (NiSkinPartition *)FormHeapAlloc(0x10u); /*0x74a31e*/
    v3 = v6 ? NiSkinPartition::NiSkinPartition(v6) : 0;
    if ( !sub_72ED50(v3, *(unsigned __int16 **)(a2 + 0xB4), *(_DWORD *)(v2 + 8), v5, 4u, 0) ) /*0x74a349*/
      return 0; /*0x74a355*/
  }
  NiSmartPointer_Set__(this + 2, (Ni2DBuffer *)v3); /*0x74a364*/
  return 1; /*0x74a357*/
}
