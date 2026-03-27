void __thiscall sub_77C550(unsigned int **this)
{
  unsigned int *v2; // ecx
  NiD3DShaderInterface *v3; // esi
  NiD3DShaderInterface *v4; // [esp+4h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v5; // [esp+8h] [ebp-8h] BYREF
  void *v6; // [esp+Ch] [ebp-4h] BYREF

  if ( *(this + 5) )
  {
    v2 = *(this + 6);
    if ( v2 )
    {
      v4 = 0;
      v5 = (NiTMap_Entry_TESCELL *)sub_6A9030(v2);
      while ( v5 )
      {
        sub_452600((NiTMap_TESCELL *)*(this + 6), &v5, &v6, (TESObjectCELL **)&v4);
        v3 = v4;
        if ( v4 )
        {
          if ( !v4->__vftable->IsRenderSet(v4) )
          {
            NiD3DShaderInterface::SetDX9Renderer(v3, (NiDX9Renderer *)*(this + 5));
            v3->__vftable->Unk64(v3);
            sub_769B10(*(this + 5), (int)v3);
          }
        }
      }
    }
  }
}
