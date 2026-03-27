void __thiscall sub_482670(_DWORD *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebx
  NiRenderedTexture *v3; // esi
  int v4; // esi

  if ( *(this + 9) )
  {
    v2 = InterlockedDecrement;
    if ( CanopySadowMap )
    {
      v3 = CanopySadowMap;
      if ( !v2((volatile LONG *)&CanopySadowMap->member) )
      {
        if ( v3 )
          v3->__vftable->super.super.super.Destructor((NiRefObject *)v3, 1);
      }
      CanopySadowMap = 0;
    }
    sub_7C1EE0(g_textureManager, (BSRenderedTexture *)*(this + 9));
    v4 = *(this + 9);
    if ( v4 )
    {
      if ( !v2((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      *(this + 9) = 0;
    }
    byte_B06A28 = 1;
  }
}
