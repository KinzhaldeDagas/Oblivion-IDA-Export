void __thiscall sub_677240(int *this)
{
  int *v1; // edi
  int v2; // ebx
  int i; // esi

  v1 = this + 0xA;
  v2 = 6;
  do
  {
    for ( i = *v1; i; i = *(_DWORD *)(i + 4) )
    {
      if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i )
        break;
      sub_6071A0(*(UInt32 **)i);
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
