void __thiscall sub_5374F0(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // ecx

  if ( a2 )
  {
    v2 = (_DWORD *)*(this + 6);
    if ( v2 )
    {
      do
      {
        v3 = v2[4];
        v4 = (_DWORD *)v2[1];
        v5 = v3;
        if ( v3 )
        {
          while ( *(_DWORD *)(v5 + 0xC) != a2 )
          {
            v5 = *(_DWORD *)(v5 + 4);
            if ( !v5 )
              goto LABEL_15;
          }
          if ( v5 == v3 )
          {
            v3 = *(_DWORD *)(v5 + 4);
          }
          else
          {
            v6 = v2[4];
            while ( 1 )
            {
              v7 = *(_DWORD *)(v6 + 4);
              if ( v5 == v7 )
                break;
              v6 = *(_DWORD *)(v6 + 4);
              if ( !v7 )
                goto LABEL_14;
            }
            *(_DWORD *)(v6 + 4) = *(_DWORD *)(v7 + 4);
          }
LABEL_14:
          v2[4] = v3;
          MemoryHeap_Free_checked((void *)(v5 - *(unsigned __int8 *)(v5 - 1)));
        }
LABEL_15:
        if ( !v2[4] )
          sub_536D30(this, v2);
        v2 = v4;
      }
      while ( v4 );
    }
  }
}
