void __thiscall sub_443C70(_DWORD *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // edi
  int v4; // esi
  int v5; // esi
  int i; // esi
  TESForm *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax

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
  v2 = *(this + 0x25);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 0x25) = 0;
  }
  v4 = *(this + 0x26);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 0x26) = 0;
  }
  v5 = *(this + 0x27);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(this + 0x27) = 0;
  }
  for ( i = 0; i < 0x15; ++i )
  {
    v7 = TESForm_LookupByFormID(dword_B067C0[i]);
    if ( v7 )
    {
      LOWORD(v8) = v7[1].member.modlist.next;
      if ( (_WORD)v8 == 0xFFFF )
        v8 = strlen((const char *)v7[1].member.modlist.data);
      else
        v8 = (unsigned __int16)v8;
      if ( v8 )
      {
        v9 = (*(int (__thiscall **)(UInt32 *))(v7[1].member.refID + 0x14))(&v7[1].member.refID);
        QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v9, 1, 1);
      }
    }
    dword_B35E50[i] = 0;
  }
}
