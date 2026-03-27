void __cdecl sub_79E9F0(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // edx
  int i; // ecx

  if ( a1 != a2 )
  {
    v2 = a1 + 0x30;
    if ( a1 + 0x30 != a2 )
    {
      v3 = a1 + 0x60;
      do
      {
        if ( *(float *)(a1 + 0x24) >= (double)*(float *)(v3 - 0xC) )
        {
          v4 = v2;
          for ( i = v2; ; v4 = i )
          {
            i -= 0x30;
            if ( *(float *)(i + 0x24) >= (double)*(float *)(v3 - 0xC) )
              break;
          }
          if ( v4 != v2 && v2 != v3 )
            sub_79BB20(v4, v2, v3);
        }
        else if ( a1 != v2 && v2 != v3 )
        {
          sub_79BB20(a1, v2, v3);
        }
        v2 += 0x30;
        v3 += 0x30;
      }
      while ( v2 != a2 );
    }
  }
}
