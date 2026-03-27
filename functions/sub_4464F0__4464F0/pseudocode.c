void __thiscall sub_4464F0(char *this)
{
  char *v1; // esi
  int **v2; // edi
  _DWORD *v3; // eax

  v1 = this + 0xA0;
  if ( this != (char *)0xFFFFFF60 )
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v1) )
    {
      v2 = *(int ***)v1;
      if ( *(_DWORD *)v1 )
      {
        sub_4440E0(*(int ***)v1);
        FormHeapFree((unsigned int)v2);
      }
      v3 = *((_DWORD **)v1 + 1);
      if ( v3 )
      {
        *((_DWORD *)v1 + 1) = v3[1];
        *(_DWORD *)v1 = *v3;
        FormHeapFree((unsigned int)v3);
      }
      else
      {
        *(_DWORD *)v1 = 0;
      }
    }
  }
  if ( *(_BYTE *)dword_B37150 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B37150, 1, 1);
  if ( *(_BYTE *)dword_B37158 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B37158, 1, 1);
  if ( *(_BYTE *)dword_B37160 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B37160, 1, 1);
  if ( *(_BYTE *)dword_B37168 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B37168, 1, 1);
  if ( *(_BYTE *)dword_B37170 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B37170, 1, 1);
  if ( *(_BYTE *)dword_B37178 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B37178, 1, 1);
  if ( *(_BYTE *)dword_B37180 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B37180, 1, 1);
  if ( *(_BYTE *)dword_B37188 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B37188, 1, 1);
  if ( *(_BYTE *)dword_B37190 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B37190, 1, 1);
  if ( *(_BYTE *)dword_B37198 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B37198, 1, 1);
  if ( *(_BYTE *)dword_B371A0 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B371A0, 1, 1);
  if ( *(_BYTE *)dword_B371A8 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B371A8, 1, 1);
  if ( *(_BYTE *)sBloodParticleDefault )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, sBloodParticleDefault, 1, 1);
  if ( *(_BYTE *)dword_B371B8 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B371B8, 1, 1);
  if ( *(_BYTE *)dword_B371C0 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, dword_B371C0, 1, 1);
  if ( *(_BYTE *)LODWORD(dword_B37B38) )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, LODWORD(dword_B37B38), 1, 1);
}
