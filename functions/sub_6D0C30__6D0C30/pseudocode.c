// Builds the output vertex buffer from current morphWeights. Clears the target buffer unless leaveTargetBaseIntact (+0x59) is set, then accumulates each enabled morph target's vertex deltas.
void __thiscall NiGeomMorpherController_ApplyMorphWeights(NiGeomMorpherController *this)
{
  int v2; // eax
  unsigned int v3; // ebp
  unsigned int v4; // edi
  int v5; // ebx
  float v6; // [esp+1Ch] [ebp-Ch]
  unsigned int v7; // [esp+20h] [ebp-8h]
  int v8; // [esp+24h] [ebp-4h]

  v2 = ((int (__thiscall *)(NiGeomMorpherController *))this->super.vtbl[1].super.DumpAttributes)(this); /*0x6d0c40*/
  v3 = *((_DWORD *)this->morphData + 2); /*0x6d0c49*/
  v8 = v2; /*0x6d0c59*/
  v7 = *(unsigned __int16 *)(*(_DWORD *)&this->super.members.m_pTarget->members.children.capacity + 8); /*0x6d0c5d*/
  if ( !this->leaveTargetBaseIntact ) /*0x6d0c42*/
    _memset( /*0x6d0c6e*/
      v2,
      0,
      0xC * *(unsigned __int16 *)(*(_DWORD *)&this->super.members.m_pTarget->members.children.capacity + 8));
  v4 = 0; /*0x6d0c76*/
  if ( v3 ) /*0x6d0c7a*/
  {
    v5 = 0; /*0x6d0c7d*/
    do /*0x6d0ce2*/
    {
      if ( v4 < this->morphWeights.size ) /*0x6d0c86*/
      {
        v6 = this->morphWeights.data[v4]; /*0x6d0c8e*/
        if ( v6 >= (double)flt_A37080 || flt_A57CB0 >= (double)v6 ) /*0x6d0cb4*/
          sub_725BD0(v8, v6, *(_DWORD *)(*((_DWORD *)this->morphData + 4) + v5), v7); /*0x6d0cce*/
      }
      ++v4; /*0x6d0cda*/
      v5 += 0xC; /*0x6d0cdd*/
    }
    while ( v4 < v3 ); /*0x6d0ce2*/
  }
}
