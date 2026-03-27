void __thiscall sub_8C7F50(_DWORD *this, char a2)
{
  int v3; // esi
  int *v4; // eax
  unsigned int v5; // edi

  if ( a2 )
  {
    v3 = *(this + 3);
    if ( v3 )
    {
      v4 = *(int **)(v3 + 0xC);
      *(_DWORD *)(v3 + 8) = &NiTLargeArray<hkNiTriStripsData>::`vftable';
      if ( v4 )
      {
        v5 = (unsigned int)(v4 + 0xFFFFFFFF);
        _LN21(v4, 8u, v4[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
        FormHeapFree(v5);
      }
      MemoryHeap_Free_checked((void *)(v3 - *(unsigned __int8 *)(v3 - 1)));
    }
    *(this + 3) = 0;
  }
}
