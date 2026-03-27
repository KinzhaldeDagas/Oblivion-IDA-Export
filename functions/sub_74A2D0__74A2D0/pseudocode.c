char __thiscall sub_74A2D0(Ni2DBuffer **this, int a2)
{
  int v2; // edi
  NiTPointerMap<unsigned int,float> *v3; // esi
  int v4; // eax
  unsigned int v5; // ebx
  NiSkinPartition *v6; // eax

  if ( !a2 || !(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2) )
    return 0;
  v2 = *(_DWORD *)(a2 + 0xB8);
  if ( !v2 )
    return 0;
  v3 = *(NiTPointerMap<unsigned int,float> **)(v2 + 0xC);
  if ( !v3 )
  {
    v4 = *(_DWORD *)(v2 + 8);
    if ( !v4 )
      return 0;
    v5 = *(_DWORD *)(v4 + 0x40);
    if ( v5 < 4 )
      LOBYTE(v5) = 4;
    v6 = (NiSkinPartition *)FormHeapAlloc(0x10u);
    v3 = v6 ? NiSkinPartition::NiSkinPartition(v6) : 0;
    if ( !sub_72ED50(v3, *(unsigned __int16 **)(a2 + 0xB4), *(_DWORD *)(v2 + 8), v5, 4u, 0) )
      return 0;
  }
  NiSmartPointer_Set__(this + 2, (Ni2DBuffer *)v3);
  return 1;
}
