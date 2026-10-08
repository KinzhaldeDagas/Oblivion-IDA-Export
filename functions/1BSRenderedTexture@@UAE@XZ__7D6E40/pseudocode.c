void __thiscall BSRenderedTexture::~BSRenderedTexture(BSRenderedTexture *this)
{
  NiRenderTargetGroup **p_RenderTargetGroup; // edi
  int v3; // ebx
  NiRenderTargetGroup *v4; // esi
  NiRenderedTexture *RenderedTexture; // esi
  LONG (__stdcall *v6)(volatile LONG *); // edi
  NiRenderedTexture *v7; // esi

  this->vtbl = (NiRefObjectVtbl **)&BSRenderedTexture::`vftable'; /*0x7d6e6b*/
  p_RenderTargetGroup = &this->members.RenderTargetGroup; /*0x7d6e7a*/
  v3 = 6; /*0x7d6e7d*/
  do /*0x7d6eb0*/
  {
    v4 = *p_RenderTargetGroup; /*0x7d6e82*/
    if ( *p_RenderTargetGroup ) /*0x7d6e82*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) ) /*0x7d6e8c*/
      {
        if ( v4 ) /*0x7d6e98*/
          ((void (__thiscall *)(NiRenderTargetGroup *, int))v4->vtbl->gap0[0])(v4, 1); /*0x7d6ea2*/
      }
      *p_RenderTargetGroup = 0; /*0x7d6ea4*/
    }
    ++p_RenderTargetGroup; /*0x7d6eaa*/
    --v3; /*0x7d6ead*/
  }
  while ( v3 ); /*0x7d6eb0*/
  RenderedTexture = this->members.RenderedTexture; /*0x7d6eb2*/
  v6 = InterlockedDecrement; /*0x7d6eb7*/
  if ( RenderedTexture ) /*0x7d6ebd*/
  {
    if ( !v6((volatile LONG *)&RenderedTexture->member) ) /*0x7d6ec3*/
      RenderedTexture->__vftable->super.super.super.Destructor((NiRefObject *)RenderedTexture, 1); /*0x7d6ed5*/
    this->members.RenderedTexture = 0; /*0x7d6ed7*/
  }
  v7 = this->members.RenderedTexture; /*0x7d6ede*/
  if ( v7 ) /*0x7d6ee8*/
  {
    if ( !v6((volatile LONG *)&v7->member) ) /*0x7d6eee*/
      v7->__vftable->super.super.super.Destructor((NiRefObject *)v7, 1); /*0x7d6f00*/
  }
  _LN21((char *)&this->members.RenderTargetGroup, 4u, 6, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7d6f14*/
  this->vtbl = (NiRefObjectVtbl **)&NiRefObject::`vftable'; /*0x7d6f1e*/
  v6(&MEMORY[0xB3FD64]); /*0x7d6f25*/
}
