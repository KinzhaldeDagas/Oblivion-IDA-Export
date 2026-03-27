void __thiscall BSRenderedTexture::~BSRenderedTexture(BSRenderedTexture *this)
{
  NiRenderTargetGroup **p_RenderTargetGroup; // edi
  int v3; // ebx
  NiRenderTargetGroup *v4; // esi
  NiRenderedTexture *RenderedTexture; // esi
  LONG (__stdcall *v6)(volatile LONG *); // edi
  NiRenderedTexture *v7; // esi

  this->vtbl = (NiRefObjectVtbl **)&BSRenderedTexture::`vftable';
  p_RenderTargetGroup = &this->members.RenderTargetGroup;
  v3 = 6;
  do
  {
    v4 = *p_RenderTargetGroup;
    if ( *p_RenderTargetGroup )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) )
      {
        if ( v4 )
          ((void (__thiscall *)(NiRenderTargetGroup *, int))v4->vtbl->gap0[0])(v4, 1);
      }
      *p_RenderTargetGroup = 0;
    }
    ++p_RenderTargetGroup;
    --v3;
  }
  while ( v3 );
  RenderedTexture = this->members.RenderedTexture;
  v6 = InterlockedDecrement;
  if ( RenderedTexture )
  {
    if ( !v6((volatile LONG *)&RenderedTexture->member) )
      RenderedTexture->__vftable->super.super.super.Destructor((NiRefObject *)RenderedTexture, 1);
    this->members.RenderedTexture = 0;
  }
  v7 = this->members.RenderedTexture;
  if ( v7 )
  {
    if ( !v6((volatile LONG *)&v7->member) )
      v7->__vftable->super.super.super.Destructor((NiRefObject *)v7, 1);
  }
  _LN21(&this->members.RenderTargetGroup, 4u, 6, (void (__thiscall *)(void *))sub_7016A0);
  this->vtbl = (NiRefObjectVtbl **)&NiRefObject::`vftable';
  v6(&NiRefObject_objcount);
}
