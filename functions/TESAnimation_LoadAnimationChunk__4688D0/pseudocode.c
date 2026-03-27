int __thiscall TESAnimation_LoadAnimationChunk(char **this, int a2, Data *a1)
{
  char *v4; // ebx
  char *v5; // esi
  unsigned int v6; // eax
  bool v7; // zf

  if ( !a1 )
    return TESAnimation_LoadAnimationChunk_::Done(a2, 0);
  if ( !a2 )
    return TESAnimation_LoadAnimationChunk_::Done(0, a1);
  if ( TESFile_GetChunkType(a1) != 0x5A46464B )
    return TESAnimation_LoadAnimationChunk_::Done(a2, a1);
  v4 = (char *)FormHeapAlloc(a1->currentChunk.length);
  v5 = v4;
  TESFile_GetChunkData(a1, v4, 0);
  if ( *v4 )
  {
    do
    {
      TESAnimation_AddAnimation(this, v5);
      v6 = strlen(v5);
      v7 = v5[v6 + 1] == 0;
      v5 += v6 + 1;
    }
    while ( !v7 );
  }
  FormHeapFree((unsigned int)v4);
  return TESAnimation_LoadAnimationChunk_::Done(a2, a1);
}
