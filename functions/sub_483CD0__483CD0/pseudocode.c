int __thiscall sub_483CD0(_DWORD *this, char a2)
{
  int result; // eax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  unsigned int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // edx
  int v9; // [esp+10h] [ebp-4h]

  result = uGridsToLoad;
  v3 = GridDistantCount;
  v4 = GridDistantCount;
  v6 = uGridsToLoad + GridDistantCount;
  v9 = GridDistantCount;
  v7 = GridDistantCount;
  if ( GridDistantCount < v6 )
  {
    while ( 1 )
    {
      do
      {
        result = *(this + 4) + 0x10 * (v4 + v7 * *(this + 3));
        if ( result )
        {
          result = *(_DWORD *)(result + 4);
          if ( result )
          {
            if ( v7 >= v3 )
            {
              v8 = v3 + uGridsToLoad;
              if ( v7 < v8 && v4 >= v3 && v4 < v8 )
              {
                if ( a2 )
                  *(_WORD *)(result + 0x18) |= 1u;
                else
                  *(_WORD *)(result + 0x18) &= ~1u;
                v3 = GridDistantCount;
              }
            }
          }
        }
        ++v4;
      }
      while ( v4 < v6 );
      if ( ++v7 >= v6 )
        break;
      v4 = v9;
    }
  }
  return result;
}
