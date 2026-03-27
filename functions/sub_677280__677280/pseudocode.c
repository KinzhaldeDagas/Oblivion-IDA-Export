void __thiscall sub_677280(int *this)
{
  int *v1; // ebx
  int v2; // ebp
  int v3; // esi
  unsigned int *v4; // edi
  _DWORD *v5; // eax

  v1 = this + 0xA;
  v2 = 6;
  do
  {
    v3 = *v1;
    if ( *v1 )
    {
      while ( 1 )
      {
        v4 = *(unsigned int **)v3;
        if ( !*(_DWORD *)v3 )
          break;
        sub_605E80(*(unsigned int **)v3);
        FormHeapFree((unsigned int)v4);
        v5 = *(_DWORD **)(v3 + 4);
        if ( v5 )
        {
          *(_DWORD *)(v3 + 4) = v5[1];
          *(_DWORD *)v3 = *v5;
          FormHeapFree((unsigned int)v5);
        }
        else
        {
          *(_DWORD *)v3 = 0;
        }
      }
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
