void __thiscall sub_7C5EF0(_DWORD *this)
{
  BSTextureManager *v1; // edi
  volatile LONG *unk44; // esi
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // esi

  v3 = (_DWORD *)*(this + 0x3E);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_DWORD *)*v3;
    if ( v4 )
    {
      BSTextureManager_DiscardShadowMap(g_textureManager, *(_DWORD *)(v4 + 0x114));
      v5 = *(_DWORD *)(v4 + 0x114);
      if ( v5 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
        *(_DWORD *)(v4 + 0x114) = 0;
      }
    }
  }
  v1 = g_textureManager;
  unk44 = (volatile LONG *)g_textureManager->unk44;
  if ( unk44 )
  {
    if ( !InterlockedDecrement(unk44 + 1) )
      (**(void (__thiscall ***)(void *, int))unk44)((void *)unk44, 1);
    v1->unk44 = 0;
  }
}
