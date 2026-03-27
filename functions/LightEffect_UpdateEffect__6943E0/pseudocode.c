void __thiscall LightEffect_UpdateEffect(int *this, int a2)
{
  _DWORD *ShadowSceneNode; // esi

  if ( *(this + 0xE) )
  {
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    if ( ShadowSceneNode )
    {
      if ( !sub_7C6230(ShadowSceneNode, *(this + 0xE)) )
        sub_7C6AE0(ShadowSceneNode, *(this + 0xE), (ShadowSceneLight *)1);
    }
  }
}
