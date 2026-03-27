int __thiscall sub_52F520(int *this, int a2)
{
  int *v2; // edi
  int result; // eax
  unsigned int v4; // esi
  int v5; // ecx

  v2 = this + 0xA;
  if ( this != (int *)0xFFFFFFD8 )
  {
    do
    {
      result = *v2;
      if ( !*v2 )
        break;
      v4 = *(_DWORD *)(result + 0x10);
      v2 = (int *)v2[1];
      if ( v4 )
      {
        v5 = 0;
        while ( *(_DWORD *)(*(_DWORD *)(result + 8) + 4 * v5) != a2 )
        {
          if ( ++v5 >= v4 )
            goto LABEL_7;
        }
        return result;
      }
LABEL_7:
      ;
    }
    while ( v2 );
  }
  return 0;
}
