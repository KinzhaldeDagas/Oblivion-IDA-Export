void __thiscall ImageSpaceShaderList::Destroy(NiTPointerList__BSImageSpaceShader *this)
{
  UInt32 renderTarget; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiGeometry *unk10; // edi
  UInt32 v5; // edi
  NiGeometry *v6; // edi

  NiTPointerList::FreeAllNodes(this);
  renderTarget = this->renderTarget;
  v3 = InterlockedDecrement;
  if ( renderTarget )
  {
    if ( !v3((volatile LONG *)(renderTarget + 4)) )
      (**(void (__thiscall ***)(UInt32, int))renderTarget)(renderTarget, 1);
    this->renderTarget = 0;
  }
  this->unk18 = 0;
  unk10 = this->unk10;
  if ( unk10 )
  {
    if ( !v3((volatile LONG *)&unk10->member) )
      unk10->__vftable->super.super.super.Destructor((NiRefObject *)unk10, 1);
    this->unk10 = 0;
  }
  v5 = this->renderTarget;
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v5)(v5, 1);
  }
  v6 = this->unk10;
  if ( v6 )
  {
    if ( !v3((volatile LONG *)&v6->member) )
      v6->__vftable->super.super.super.Destructor((NiRefObject *)v6, 1);
  }
  NiTPointerList<BSImageSpaceShader *>::~NiTPointerList<BSImageSpaceShader *>(this);
}
