void __thiscall SceneGraph::~SceneGraph(SceneGraph *this)
{
  NiCamera *camera; // edi
  NiCullingProcess *cullingProcess; // ecx
  unsigned int *unk0E0; // edi
  NiCamera *v5; // edi

  this->vftable = &SceneGraph::`vftable'; /*0x41101a*/
  sub_40FEC0("SceneGraph '%s' Released.", this->super.super.super.m_pcName); /*0x411031*/
  camera = this->camera; /*0x411036*/
  if ( camera ) /*0x411047*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&camera->members) ) /*0x41104d*/
      camera->vtbl->super.super.Destructor((NiRefObject *)camera, 1); /*0x41105f*/
    this->camera = 0; /*0x411061*/
  }
  cullingProcess = this->cullingProcess; /*0x41106b*/
  if ( cullingProcess ) /*0x411073*/
    cullingProcess->vtbl->Destructor(cullingProcess, 1); /*0x41107b*/
  unk0E0 = (unsigned int *)this->unk0E0; /*0x41107d*/
  if ( unk0E0 ) /*0x411085*/
  {
    FormHeapFree(*unk0E0); /*0x41108a*/
    FormHeapFree((unsigned int)unk0E0); /*0x411090*/
  }
  v5 = this->camera; /*0x411098*/
  if ( v5 ) /*0x4110a5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x4110ab*/
      v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1); /*0x4110bd*/
  }
  NiBSPNode::~NiBSPNode((NiBSPNode *)this); /*0x4110c9*/
}
