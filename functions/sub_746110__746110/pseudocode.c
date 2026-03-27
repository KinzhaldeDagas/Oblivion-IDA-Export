unsigned int __usercall sub_746110@<eax>(unsigned int result@<eax>, int a2@<ecx>, _WORD *a3)
{
  unsigned int v3; // edi
  int v4; // edx
  int v6; // ecx
  int v7; // esi
  unsigned __int16 *v8; // [esp+10h] [ebp-Ch]
  unsigned int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v3 = *(unsigned __int16 *)(result + 2);
  v4 = 0;
  v9 = 0xFFFFFFFF;
  v6 = 7;
  v7 = 4;
  if ( !*(_WORD *)(result + 2) )
  {
    v6 = 0x8A;
    v7 = 3;
  }
  *(_WORD *)(result + 4 * a2 + 6) = 0xFFFF;
  if ( a2 >= 0 )
  {
    v10 = a2 + 1;
    v8 = (unsigned __int16 *)(result + 6);
    do
    {
      result = v3;
      v3 = *v8;
      if ( ++v4 >= v6 || result != v3 )
      {
        if ( v4 >= v7 )
        {
          if ( result )
          {
            if ( result != v9 )
              ++a3[2 * result + 0x53A];
            ++a3[0x55A];
          }
          else if ( v4 > 0xA )
          {
            ++a3[0x55E];
          }
          else
          {
            ++a3[0x55C];
          }
        }
        else
        {
          a3[2 * result + 0x53A] += v4;
        }
        v4 = 0;
        v9 = result;
        if ( v3 )
        {
          if ( result == v3 )
          {
            v6 = 6;
            v7 = 3;
          }
          else
          {
            v6 = 7;
            v7 = 4;
          }
        }
        else
        {
          v6 = 0x8A;
          v7 = 3;
        }
      }
      v8 += 2;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
