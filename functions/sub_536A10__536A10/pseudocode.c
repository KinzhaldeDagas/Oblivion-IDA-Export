void __thiscall sub_536A10(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  _DWORD *v4; // eax

  if ( a2 )
  {
    v2 = (_DWORD *)*(this + 4);
    if ( a2 == v2 )
    {
      v2 = (_DWORD *)a2[1];
    }
    else
    {
      v3 = *(this + 4);
      if ( v2 )
      {
        while ( 1 )
        {
          v4 = *(_DWORD **)(v3 + 4);
          if ( a2 == v4 )
            break;
          v3 = *(_DWORD *)(v3 + 4);
          if ( !v4 )
            goto LABEL_9;
        }
        *(_DWORD *)(v3 + 4) = v4[1];
      }
    }
LABEL_9:
    *(this + 4) = v2;
    MemoryHeap_Free_checked((char *)a2 - *((unsigned __int8 *)a2 + 0xFFFFFFFF));
  }
}
