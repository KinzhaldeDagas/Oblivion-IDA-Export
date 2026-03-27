void __thiscall sub_76B380(_DWORD *this)
{
  NiD3DShaderInterface *v2; // esi
  NiTPointerList_Node_void *v3; // eax
  bool v4; // zf
  NiTPointerList_Node_void *v5; // edx
  NiTPointerList_Node_void *v6; // [esp+4h] [ebp-4h] BYREF

  while ( *(this + 0x244) )
  {
    v2 = *(NiD3DShaderInterface **)(*(this + 0x242) + 8);
    v2->__vftable->Unk60(v2);
    NiD3DShaderInterface::SetDX9Renderer(v2, 0);
    v3 = (NiTPointerList_Node_void *)*(this + 0x242);
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = v2 == v3->data;
        v5 = v3;
        v3 = v3->next;
        if ( v4 )
          break;
        if ( !v3 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      v5 = 0;
    }
    v6 = v5;
    if ( v5 )
      sub_7AA860((BSTextureManager *)(this + 0x241), &v6);
  }
}
