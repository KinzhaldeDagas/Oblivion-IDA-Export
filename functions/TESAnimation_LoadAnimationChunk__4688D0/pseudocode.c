// CustomAnimSupport decode: loads only chunk type 0x5A46464B ('KFFZ') as packed nul-terminated animation path strings.
void __thiscall TESAnimation_LoadAnimationChunk(char **this, int a2, Data *a1)
{
  char *v4; // ebx
  char *v5; // esi
  unsigned int v6; // eax
  bool v7; // zf

  if ( a1 ) /*0x4688da*/
  {
    if ( a2 ) /*0x4688e1*/
    {
      if ( TESFile_GetChunkType(a1) == 0x5A46464B ) /*0x4688ef*/
      {
        v4 = (char *)FormHeapAlloc(a1->currentChunk.length);// MEF v37 verified KFFZ buffer fix: allocate chunkLength+1, zero sentinel at [buffer+chunkLength], and on overflow/OOM remove pending size arg then enter cleanup epilogue 0x468940. Prevents null Dst and unterminated packed-string overread. /*0x468902*/
        v5 = v4; /*0x468909*/
        TESFile_GetChunkData(a1, v4, 0); /*0x46890b*/
        if ( *v4 )                              // MEF v37 proof: vanilla packed KFFZ parser uses byte tests/strlen-like scans without bounding them by chunk length; allocator sentinel guarantees termination after the copied chunk. /*0x468910*/
        {
          do /*0x468935*/
          {
            TESAnimation_AddAnimation(this, v5); /*0x468918*/
            v6 = strlen(v5); /*0x46891f*/
            v7 = v5[v6 + 1] == 0; /*0x46892d*/
            v5 += v6 + 1; /*0x468931*/
          }
          while ( !v7 ); /*0x468935*/
        }
        FormHeapFree((unsigned int)v4); /*0x468938*/
        TESAnimation_LoadAnimationChunk_::Done(a2, (int)a1);// MEF v37 allocation-failure continuation: buffer does not exist, so enter after FormHeapFree and restore ESI/EBX/EDI/EBP normally. /*0x468941*/
      }
      else
      {
        TESAnimation_LoadAnimationChunk_::Done(a2, (int)a1); /*0x4688ef*/
      }
    }
    else
    {
      TESAnimation_LoadAnimationChunk_::Done(0, (int)a1); /*0x4688e1*/
    }
  }
  else
  {
    TESAnimation_LoadAnimationChunk_::Done(a2, 0); /*0x4688da*/
  }
}
