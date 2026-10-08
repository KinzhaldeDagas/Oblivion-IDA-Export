void __thiscall sub_76B380(_DWORD *this)
{
  NiD3DShaderInterface *v2; // esi
  _DWORD *v3; // eax
  bool v4; // zf
  void *v5; // edx
  void *node; // [esp+4h] [ebp-4h] BYREF

  while ( *(this + 0x244) ) /*0x76b384*/
  {
    v2 = *(NiD3DShaderInterface **)(*(this + 0x242) + 8); /*0x76b39b*/
    v2->__vftable->Unk60(v2); /*0x76b3a5*/
    NiD3DShaderInterface::SetDX9Renderer(v2, 0); /*0x76b3ab*/
    v3 = (_DWORD *)*(this + 0x242); /*0x76b3b0*/
    if ( v3 ) /*0x76b3b5*/
    {
      while ( 1 ) /*0x76b3b7*/
      {
        v4 = v2 == (NiD3DShaderInterface *)v3[2]; /*0x76b3b7*/
        v5 = v3; /*0x76b3bd*/
        v3 = (_DWORD *)*v3; /*0x76b3bf*/
        if ( v4 ) /*0x76b3c1*/
          break; /*0x76b3c1*/
        if ( !v3 ) /*0x76b3c5*/
          goto LABEL_5; /*0x76b3c5*/
      }
    }
    else
    {
LABEL_5:
      v5 = 0; /*0x76b3c7*/
    }
    node = v5; /*0x76b3cb*/
    if ( v5 ) /*0x76b3cf*/
      NiTPointerList_RemoveNode(this + 0x241, &node); /*0x76b3d8*/
  }
}
