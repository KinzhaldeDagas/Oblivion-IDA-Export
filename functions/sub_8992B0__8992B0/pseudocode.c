int __thiscall sub_8992B0(_DWORD *this)
{
  int result; // eax
  int v2; // edx
  int v3; // esi
  int v4; // edi
  int v5; // ebx

  result = 0;
  v2 = *(this + 0xF) - 1;
  if ( v2 >= 0 )
  {
    v3 = *(this + 0xE) + 4 * v2;
    v4 = *(this + 0xF);
    do
    {
      v5 = *(_DWORD *)(*(_DWORD *)v3 + 0x14);
      if ( result <= *(_DWORD *)(*(_DWORD *)v3 + 0xC)
                   + *(_DWORD *)(*(_DWORD *)v3 + 0x10)
                   + v5
                   + 4 * *(_DWORD *)(*(_DWORD *)v3 + 0x18)
                   + 0x9C )
        result = *(_DWORD *)(*(_DWORD *)v3 + 0xC)
               + *(_DWORD *)(*(_DWORD *)v3 + 0x10)
               + v5
               + 4 * *(_DWORD *)(*(_DWORD *)v3 + 0x18)
               + 0x9C;
      v3 -= 4;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
