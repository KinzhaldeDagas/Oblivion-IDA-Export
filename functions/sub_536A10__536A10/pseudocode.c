void __thiscall sub_536A10(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  _DWORD *v4; // eax

  if ( a2 ) /*0x536a16*/
  {
    v2 = (_DWORD *)*(this + 4); /*0x536a19*/
    if ( a2 == v2 ) /*0x536a1e*/
    {
      v2 = (_DWORD *)a2[1]; /*0x536a20*/
    }
    else
    {
      v3 = *(this + 4); /*0x536a28*/
      if ( v2 ) /*0x536a2a*/
      {
        while ( 1 ) /*0x536a30*/
        {
          v4 = *(_DWORD **)(v3 + 4); /*0x536a30*/
          if ( a2 == v4 ) /*0x536a35*/
            break; /*0x536a35*/
          v3 = *(_DWORD *)(v3 + 4); /*0x536a39*/
          if ( !v4 ) /*0x536a3b*/
            goto LABEL_9; /*0x536a3b*/
        }
        *(_DWORD *)(v3 + 4) = v4[1]; /*0x536a42*/
      }
    }
LABEL_9:
    *(this + 4) = v2; /*0x536a46*/
    MemoryHeap_Free_checked((char *)a2 - *((unsigned __int8 *)a2 + 0xFFFFFFFF)); /*0x536a59*/
  }
}
