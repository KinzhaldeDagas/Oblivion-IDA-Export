void __thiscall sub_5374F0(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // ecx

  if ( a2 ) /*0x5374fc*/
  {
    v2 = (_DWORD *)*(this + 6); /*0x5374ff*/
    if ( v2 ) /*0x537504*/
    {
      do /*0x537572*/
      {
        v3 = v2[4]; /*0x537508*/
        v4 = (_DWORD *)v2[1]; /*0x53750b*/
        v5 = v3; /*0x53750e*/
        if ( v3 ) /*0x537512*/
        {
          while ( *(_DWORD *)(v5 + 0xC) != a2 ) /*0x537517*/
          {
            v5 = *(_DWORD *)(v5 + 4); /*0x537519*/
            if ( !v5 ) /*0x53751e*/
              goto LABEL_15; /*0x53751e*/
          }
          if ( v5 == v3 ) /*0x537524*/
          {
            v3 = *(_DWORD *)(v5 + 4); /*0x537526*/
          }
          else
          {
            v6 = v2[4]; /*0x53752d*/
            while ( 1 ) /*0x537531*/
            {
              v7 = *(_DWORD *)(v6 + 4); /*0x537531*/
              if ( v5 == v7 ) /*0x537536*/
                break; /*0x537536*/
              v6 = *(_DWORD *)(v6 + 4); /*0x53753a*/
              if ( !v7 ) /*0x53753c*/
                goto LABEL_14; /*0x53753c*/
            }
            *(_DWORD *)(v6 + 4) = *(_DWORD *)(v7 + 4); /*0x537543*/
          }
LABEL_14:
          v2[4] = v3; /*0x537546*/
          MemoryHeap_Free_checked((void *)(v5 - *(unsigned __int8 *)(v5 - 1))); /*0x537559*/
        }
LABEL_15:
        if ( !v2[4] ) /*0x53755e*/
          sub_536D30(this, v2); /*0x537569*/
        v2 = v4; /*0x537570*/
      }
      while ( v4 ); /*0x537572*/
    }
  }
}
