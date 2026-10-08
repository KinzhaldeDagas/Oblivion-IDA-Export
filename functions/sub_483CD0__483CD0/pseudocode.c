int __thiscall sub_483CD0(_DWORD *this, char a2)
{
  int result; // eax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  unsigned int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // edx
  int v9; // [esp+10h] [ebp-4h]

  result = uGridsToLoad; /*0x483cd1*/
  v3 = GridDistantCount; /*0x483cd7*/
  v4 = GridDistantCount; /*0x483cdf*/
  v6 = uGridsToLoad + GridDistantCount; /*0x483ce3*/
  v9 = GridDistantCount; /*0x483ce9*/
  v7 = GridDistantCount; /*0x483ced*/
  if ( GridDistantCount < v6 ) /*0x483cef*/
  {
    while ( 1 ) /*0x483d45*/
    {
      do /*0x483d45*/
      {
        result = *(this + 4) + 0x10 * (v4 + v7 * *(this + 3)); /*0x483d02*/
        if ( result ) /*0x483d05*/
        {
          result = *(_DWORD *)(result + 4); /*0x483d07*/
          if ( result ) /*0x483d0c*/
          {
            if ( v7 >= v3 ) /*0x483d10*/
            {
              v8 = v3 + uGridsToLoad; /*0x483d18*/
              if ( v7 < v8 && v4 >= v3 && v4 < v8 ) /*0x483d24*/
              {
                if ( a2 ) /*0x483d2b*/
                  *(_WORD *)(result + 0x18) |= 1u; /*0x483d2d*/
                else
                  *(_WORD *)(result + 0x18) &= ~1u; /*0x483d34*/
                v3 = GridDistantCount; /*0x483d3a*/
              }
            }
          }
        }
        ++v4; /*0x483d40*/
      }
      while ( v4 < v6 ); /*0x483d45*/
      if ( ++v7 >= v6 ) /*0x483d4c*/
        break; /*0x483d4c*/
      v4 = v9; /*0x483cf3*/
    }
  }
  return result; /*0x483d4e*/
}
