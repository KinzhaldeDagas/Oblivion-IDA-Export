// Verified Oblivion queued distant callback consumes the copied per-cell context, calls sub_4BA780 to build STBB/NiBillboardNode from the flat billboard DDS, then forwards cell key/node/positions/color values to sub_7B4010. Fallout's corresponding QueuedTreeBillboard::CreateBillboard instead calls TESObjectTREE::BuildDistant3D and DistantLODShaderProperty::AddDistantLOD.
void __thiscall QueuedTreeBillboard_ProcessDistant(QueuedTreeBillboard *this)
{
  NiObjectNET *v2; // edi
  int v3; // eax
  NiAVObject *v4; // esi
  NiAVObject *v5; // [esp+14h] [ebp-Ch] BYREF
  NiObjectNET *v6; // [esp+18h] [ebp-8h]
  int v7; // [esp+1Ch] [ebp-4h]

  v2 = sub_4BA780(**((float ***)this + 0xC), 1); /*0x437613*/
  if ( v2 ) /*0x437617*/
  {
    sub_7B20B0(&v5); /*0x43761d*/
    v3 = *((_DWORD *)this + 0xC); /*0x437622*/
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 0xC); /*0x43762a*/
    v6 = v2; /*0x43762e*/
    v5 = 0; /*0x437632*/
    sub_7B4010( /*0x437658*/
      *(_DWORD *)(v3 + 4),
      *(void **)(v3 + 8),
      *(_DWORD *)(v3 + 0xC),
      &v5,
      *(_DWORD *)(v3 + 0x14),
      *(_DWORD *)(v3 + 0x18),
      *(unsigned __int16 *)(v3 + 0x10));
    if ( v6 ) /*0x437666*/
      ((void (__thiscall *)(NiObjectNET *, int))*v6->vtbl)(v6, 1); /*0x43766e*/
    v4 = *(NiAVObject **)&MEMORY[0xB33E90][0x594]; /*0x437670*/
    NiAVObject_UpdateNiAVObject(*(NiAVObject **)&MEMORY[0xB33E90][0x594], 0.0, 1); /*0x437680*/
    NiAVObject_InitializePropertyState(v4); /*0x437687*/
  }
}
