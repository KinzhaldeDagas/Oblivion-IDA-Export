//
// DX11 production binding audit 2026-10-01: this data mutation/destruction site uses NativeBindPositionObserver in the installed routing, NOT NativeActorWriteObservers generic prelude. Its cache invalidation fanout must therefore notify GPU-world GeometryData dependencies directly. The renderer now does this through ActorBindInvalidated before Original, followed by a short poseMetadataGate barrier outside observer/store/ledger locks. That barrier protects an in-progress CPU capture/commit from mutation/free. SetData/destructor adapters still tail-jump after the prelude: a zero ActiveEntries count is NOT proof of native completion or independent lifetime acquisition. Unknown foreign tails remain subject to the existing conservative lifetime policy.
// Verified 2026-10-01: ECX data object; seven raw DWORD stack slots; RET1C at 7289FB; raw AX result. Vertex count+8; vertex/normal/color/UV pointers +1C/+20/+24/+28. Old differing arrays are released through virtual+44 ownership blocks or FormHeapFree. Virtual+50 gives bound-computation vertex count. Final word+2C = input dataFlags | (textureSetCount & 3F) | (old word & FC0), returned in AX. Fallout PPC 82BEBE80 is a corresponding setter family but differs materially: no old-array free path here, pointer/layout offsets and bound virtual slot differ, and packed word uses a different mask. Oblivion behavior governs.
// DX11 observer update 2026-10-01, superseding the earlier PRE-only/tail-jump implementation note: the plugin bind SetData and data-destructor adapters now invoke Original exactly once on a copied argument frame, retain activity through native completion and SEH unwind, and restore all captured GPR/EFLAGS/FX outputs with verified RET1C/RET0. The source-proof Invocation retains the real entering caller return address; Original sees an adapter continuation. No completion callback dereferences the possibly destroyed object. This closes an activity-count gap, not general scene/resource lifetime, pool or reference-writer authority; a zero count still does not authorize quiescent hook replacement or object access.
unsigned __int16 __thiscall NiGeometryData_SetData(
        NiGeometryData *this,
        unsigned __int16 vertexCount,
        NiPoint3 *vertices,
        NiPoint3 *normals,
        void *colors,
        void *texcoords,
        unsigned __int8 textureSetCount,
        unsigned __int16 dataFlags)
{
  unsigned int *v9; // eax
  unsigned int v10; // edi
  bool v11; // zf
  unsigned int *v12; // eax
  unsigned int v13; // edi
  unsigned int *v14; // eax
  unsigned int v15; // edi
  void *v16; // ebp
  unsigned int *v17; // eax
  unsigned int v18; // edi
  NiGeometryDataVtbl *vftable; // edx
  UInt16 v20; // ax
  unsigned __int16 result; // ax

  if ( ((int (__thiscall *)(NiGeometryData *))this->__vftable->super.Unk_11)(this) ) /*0x72889b*/
  {
    if ( vertices != this->member.m_pkVertex ) /*0x7288af*/
    {
      v9 = (unsigned int *)((int (__thiscall *)(NiGeometryData *))this->__vftable->super.Unk_11)(this); /*0x7288b8*/
      v10 = (unsigned int)v9; /*0x7288ba*/
      v11 = v9[3]-- == 1; /*0x7288bc*/
      if ( v11 ) /*0x7288bf*/
      {
        sub_732A20(v9); /*0x7288c3*/
        FormHeapFree(v10); /*0x7288c9*/
      }
    }
    if ( normals != this->member.m_pkNormal ) /*0x7288d8*/
    {
      v12 = (unsigned int *)((int (__thiscall *)(NiGeometryData *))this->__vftable->super.Unk_11)(this); /*0x7288e1*/
      v13 = (unsigned int)v12; /*0x7288e3*/
      v11 = v12[3]-- == 1; /*0x7288e5*/
      if ( v11 ) /*0x7288e8*/
      {
        sub_732A20(v12); /*0x7288ec*/
        FormHeapFree(v13); /*0x7288f2*/
      }
    }
    if ( colors != this->member.m_pkColor ) /*0x728901*/
    {
      v14 = (unsigned int *)((int (__thiscall *)(NiGeometryData *))this->__vftable->super.Unk_11)(this); /*0x72890a*/
      v15 = (unsigned int)v14; /*0x72890c*/
      v11 = v14[3]-- == 1; /*0x72890e*/
      if ( v11 ) /*0x728911*/
      {
        sub_732A20(v14); /*0x728915*/
        FormHeapFree(v15); /*0x72891b*/
      }
    }
    v16 = texcoords; /*0x728923*/
    if ( texcoords != this->member.m_pkTexture ) /*0x72892a*/
    {
      v17 = (unsigned int *)((int (__thiscall *)(NiGeometryData *))this->__vftable->super.Unk_11)(this); /*0x728933*/
      v18 = (unsigned int)v17; /*0x728935*/
      v11 = v17[3]-- == 1; /*0x728937*/
      if ( v11 ) /*0x72893a*/
      {
        sub_732A20(v17); /*0x72893e*/
        FormHeapFree(v18); /*0x728944*/
      }
    }
  }
  else
  {
    if ( vertices != this->member.m_pkVertex ) /*0x728952*/
      FormHeapFree((unsigned int)this->member.m_pkVertex); /*0x728955*/
    if ( normals != this->member.m_pkNormal ) /*0x728964*/
      FormHeapFree((unsigned int)this->member.m_pkNormal); /*0x728967*/
    if ( colors != this->member.m_pkColor ) /*0x728976*/
      FormHeapFree((unsigned int)this->member.m_pkColor); /*0x728979*/
    v16 = texcoords; /*0x728984*/
    if ( texcoords != this->member.m_pkTexture ) /*0x72898a*/
      FormHeapFree((unsigned int)this->member.m_pkTexture); /*0x72898d*/
  }
  this->member.m_pkVertex = vertices; /*0x7289a2*/
  vftable = this->__vftable; /*0x7289a5*/
  this->member.m_usVertices = vertexCount; /*0x7289a7*/
  this->member.m_pkNormal = normals; /*0x7289ab*/
  v20 = vftable->GetNumVertices(this); /*0x7289b3*/
  if ( v20 ) /*0x7289bb*/
  {
    if ( this->member.m_pkVertex ) /*0x7289bd*/
      NiSphere_ComputeFromVertices((NiSphere *)&this->member.m_kBound, v20, this->member.m_pkVertex); /*0x7289cc*/
  }
  result = dataFlags | textureSetCount & 0x3F | this->member.format & 0xFC0; /*0x7289e8*/
  this->member.m_pkTexture = v16; /*0x7289ee*/
  this->member.m_pkColor = (NiColorAlpha *)colors; /*0x7289f1*/
  this->member.format = result; /*0x7289f4*/
  return result; /*0x7289ed*/
}
