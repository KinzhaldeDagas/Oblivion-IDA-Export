// MoonSugarEffect decode: ImageSpaceShaderList::Destroy frees list nodes and owned renderTarget/screen quad, clears fallback pointer; it does not release shader objects stored as raw list data.
void __thiscall ImageSpaceShaderList::Destroy(NiTPointerList__BSImageSpaceShader *this)
{
  UInt32 renderTarget; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiGeometry *unk10; // edi
  UInt32 v5; // edi
  NiGeometry *v6; // edi

  NiTPointerList::FreeAllNodes(this); /*0x8036c3*/
  renderTarget = this->renderTarget; /*0x8036c8*/
  v3 = InterlockedDecrement; /*0x8036cb*/
  if ( renderTarget ) /*0x8036d5*/
  {
    if ( !v3((volatile LONG *)(renderTarget + 4)) ) /*0x8036db*/
      (**(void (__thiscall ***)(UInt32, int))renderTarget)(renderTarget, 1); /*0x8036ed*/
    this->renderTarget = 0; /*0x8036ef*/
  }
  this->unk18 = 0; /*0x8036f2*/
  unk10 = this->unk10; /*0x8036f5*/
  if ( unk10 ) /*0x8036fa*/
  {
    if ( !v3((volatile LONG *)&unk10->member) ) /*0x803700*/
      unk10->__vftable->super.super.super.Destructor((NiRefObject *)unk10, 1); /*0x803712*/
    this->unk10 = 0; /*0x803714*/
  }
  v5 = this->renderTarget; /*0x803717*/
  if ( v5 ) /*0x803721*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x803727*/
      (**(void (__thiscall ***)(UInt32, int))v5)(v5, 1); /*0x803739*/
  }
  v6 = this->unk10; /*0x80373b*/
  if ( v6 ) /*0x803744*/
  {
    if ( !v3((volatile LONG *)&v6->member) ) /*0x80374a*/
      v6->__vftable->super.super.super.Destructor((NiRefObject *)v6, 1); /*0x80375c*/
  }
  NiTPointerList<BSImageSpaceShader *>::~NiTPointerList<BSImageSpaceShader *>(this); /*0x803768*/
}
