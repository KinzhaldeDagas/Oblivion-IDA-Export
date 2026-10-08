int __thiscall sub_8992B0(_DWORD *this)
{
  int result; // eax
  int v2; // edx
  int v3; // esi
  int v4; // edi
  int v5; // ebx

  result = 0; /*0x8992b3*/
  v2 = *(this + 0xF) - 1; /*0x8992b5*/
  if ( v2 >= 0 ) /*0x8992b6*/
  {
    v3 = *(this + 0xE) + 4 * v2; /*0x8992be*/
    v4 = *(this + 0xF); /*0x8992c1*/
    do /*0x8992e3*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)v3 + 0x14); /*0x8992c6*/
      if ( result <= *(_DWORD *)(*(_DWORD *)v3 + 0xC) /*0x8992db*/
                   + *(_DWORD *)(*(_DWORD *)v3 + 0x10)
                   + v5
                   + 4 * *(_DWORD *)(*(_DWORD *)v3 + 0x18)
                   + 0x9C )
        result = *(_DWORD *)(*(_DWORD *)v3 + 0xC) /*0x8992dd*/
               + *(_DWORD *)(*(_DWORD *)v3 + 0x10)
               + v5
               + 4 * *(_DWORD *)(*(_DWORD *)v3 + 0x18)
               + 0x9C;
      v3 -= 4; /*0x8992df*/
      --v4; /*0x8992e2*/
    }
    while ( v4 ); /*0x8992e3*/
  }
  return result; /*0x8992e8*/
}
