void __thiscall SceneGraph::~SceneGraph(SceneGraph *this)
{
  NiCamera *camera; // edi
  NiCullingProcess *cullingProcess; // ecx
  unsigned int *unk0E0; // edi
  NiCamera *v5; // edi

  this->vftable = &SceneGraph::`vftable';
  sub_40FEC0("SceneGraph '%s' Released.", this->super.super.super.m_pcName);
  camera = this->camera;
  if ( camera )
  {
    if ( !InterlockedDecrement((volatile LONG *)&camera->members) )
      camera->vtbl->super.super.Destructor((NiRefObject *)camera, 1);
    this->camera = 0;
  }
  cullingProcess = this->cullingProcess;
  if ( cullingProcess )
    cullingProcess->vtbl->Destructor(cullingProcess, 1);
  unk0E0 = (unsigned int *)this->unk0E0;
  if ( unk0E0 )
  {
    FormHeapFree(*unk0E0);
    FormHeapFree((unsigned int)unk0E0);
  }
  v5 = this->camera;
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v5->members) )
      v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1);
  }
  NiBSPNode::~NiBSPNode((NiBSPNode *)this);
}
