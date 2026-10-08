//
// DX11 production binding audit 2026-10-01: this data mutation/destruction site uses NativeBindPositionObserver in the installed routing, NOT NativeActorWriteObservers generic prelude. Its cache invalidation fanout must therefore notify GPU-world GeometryData dependencies directly. The renderer now does this through ActorBindInvalidated before Original, followed by a short poseMetadataGate barrier outside observer/store/ledger locks. That barrier protects an in-progress CPU capture/commit from mutation/free. SetData/destructor adapters still tail-jump after the prelude: a zero ActiveEntries count is NOT proof of native completion or independent lifetime acquisition. Unknown foreign tails remain subject to the existing conservative lifetime policy.
// DX11 observer update 2026-10-01, superseding the earlier PRE-only/tail-jump implementation note: the plugin bind SetData and data-destructor adapters now invoke Original exactly once on a copied argument frame, retain activity through native completion and SEH unwind, and restore all captured GPR/EFLAGS/FX outputs with verified RET1C/RET0. The source-proof Invocation retains the real entering caller return address; Original sees an adapter continuation. No completion callback dereferences the possibly destroyed object. This closes an activity-count gap, not general scene/resource lifetime, pool or reference-writer authority; a zero count still does not authorize quiescent hook replacement or object access.
void __thiscall NiGeometryData::~NiGeometryData(NiGeometryData *this)
{
  NiAdditionalGeometryData *m_spAdditionalGeomData; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  unsigned int *v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // edi
  NiAdditionalGeometryData *v9; // edi

  this->__vftable = (NiGeometryDataVtbl *)&NiGeometryData::`vftable'; /*0x72920a*/
  NiRenderer_PurgeGeometryDataFromCurrent(this); /*0x729219*/
  m_spAdditionalGeomData = this->member.m_spAdditionalGeomData; /*0x72921e*/
  v3 = InterlockedDecrement; /*0x729221*/
  if ( m_spAdditionalGeomData ) /*0x72922c*/
  {
    if ( !v3((volatile LONG *)m_spAdditionalGeomData + 1) ) /*0x729232*/
      (**(void (__thiscall ***)(NiAdditionalGeometryData *, int))m_spAdditionalGeomData)(m_spAdditionalGeomData, 1); /*0x729244*/
    this->member.m_spAdditionalGeomData = 0; /*0x729246*/
  }
  v4 = (unsigned int *)unk_B3FE00; /*0x72924d*/
  if ( unk_B3FE00 ) /*0x72924d*/
  {
    if ( this->member.m_pkVertex ) /*0x72925a*/
    {
      --v4[3]; /*0x729260*/
      v5 = (unsigned int)v4; /*0x729264*/
      if ( !v4[3] ) /*0x729269*/
      {
        sub_732A20(v4); /*0x729270*/
        FormHeapFree(v5); /*0x729276*/
      }
      v4 = (unsigned int *)unk_B3FE00; /*0x72927e*/
    }
    if ( this->member.m_pkNormal ) /*0x729283*/
    {
      --v4[3]; /*0x729289*/
      v6 = (unsigned int)v4; /*0x72928d*/
      if ( !v4[3] ) /*0x729292*/
      {
        sub_732A20(v4); /*0x729299*/
        FormHeapFree(v6); /*0x72929f*/
      }
      v4 = (unsigned int *)unk_B3FE00; /*0x7292a7*/
    }
    if ( this->member.m_pkColor ) /*0x7292ac*/
    {
      --v4[3]; /*0x7292b2*/
      v7 = (unsigned int)v4; /*0x7292b6*/
      if ( !v4[3] ) /*0x7292bb*/
      {
        sub_732A20(v4); /*0x7292c2*/
        FormHeapFree(v7); /*0x7292c8*/
      }
      v4 = (unsigned int *)unk_B3FE00; /*0x7292d0*/
    }
    if ( this->member.m_pkTexture ) /*0x7292d5*/
    {
      --v4[3]; /*0x7292db*/
      v8 = (unsigned int)v4; /*0x7292df*/
      if ( !v4[3] ) /*0x7292e4*/
      {
        sub_732A20(v4); /*0x7292eb*/
        FormHeapFree(v8); /*0x7292f1*/
      }
    }
  }
  else
  {
    FormHeapFree((unsigned int)this->member.m_pkVertex); /*0x7292ff*/
    FormHeapFree((unsigned int)this->member.m_pkNormal); /*0x729308*/
    FormHeapFree((unsigned int)this->member.m_pkColor); /*0x729311*/
    FormHeapFree((unsigned int)this->member.m_pkTexture); /*0x72931a*/
  }
  v9 = this->member.m_spAdditionalGeomData; /*0x729322*/
  if ( v9 ) /*0x72932c*/
  {
    if ( !v3((volatile LONG *)v9 + 1) ) /*0x729332*/
      (**(void (__thiscall ***)(NiAdditionalGeometryData *, int))v9)(v9, 1); /*0x729344*/
  }
  NiRefObject_destr(this); /*0x729350*/
}
