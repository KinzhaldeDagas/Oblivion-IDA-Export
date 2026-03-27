void __cdecl sub_790930(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ebx
  _DWORD *v4; // edx
  _DWORD *i; // ecx
  double v6; // st6

  if ( a1 != a2 )
  {
    v2 = a1 + 1;
    if ( a1 + 1 != a2 )
    {
      v3 = a1 + 2;
      do
      {
        if ( *(float *)(*a1 + 0x2C) >= (double)*(float *)(*v2 + 0x2C) )
        {
          v4 = v2;
          for ( i = v2; ; v4 = i )
          {
            v6 = *(float *)(i[0xFFFFFFFF] + 0x2C);
            i += 0xFFFFFFFF;
            if ( v6 >= *(float *)(*v2 + 0x2C) )
              break;
          }
          if ( v4 != v2 && v2 != v3 )
            sub_78FC20(v4, (int)v2, v3);
        }
        else if ( a1 != v2 && v2 != v3 )
        {
          sub_78FC20(a1, (int)v2, v3);
        }
        ++v2;
        ++v3;
      }
      while ( v2 != a2 );
    }
  }
}
