unsigned int __thiscall sub_782700(_DWORD *this, unsigned int a2)
{
  int v2; // edx
  unsigned int v3; // ebx
  _DWORD *v4; // esi
  unsigned int result; // eax
  unsigned int v6; // edi
  bool v7; // zf
  int v8; // edi
  unsigned int v9; // ebp
  unsigned int v10; // eax
  int v11; // edx

  v2 = *(this + 0xC);
  v3 = a2;
  v4 = *(_DWORD **)(v2 + 4 * a2);
  result = 0;
  if ( v4 )
  {
    v6 = v4[5];
    v7 = *(this + 8) - v6 == v4[3];
    a2 = v6;
    if ( v7 )
    {
      *(this + 8) = 0;
      if ( v3 )
      {
        v8 = v2;
        v9 = v3;
        do
        {
          if ( *(_DWORD *)v8 )
          {
            v10 = *(_DWORD *)(*(_DWORD *)v8 + 0xC) + *(_DWORD *)(*(_DWORD *)v8 + 0x14);
            if ( v10 > *(this + 8) )
              *(this + 8) = v10;
          }
          v8 += 4;
          --v9;
        }
        while ( v9 );
        v6 = a2;
      }
    }
    v11 = *(this + 3) - *(this + 8);
    *(this + 0xA) += v6;
    *(this + 9) = v11;
    a2 = 0;
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0xB), v3, &a2);
    v4[7] = 0;
    v4[6] = dword_B428D4;
    if ( dword_B428D4 )
      *(_DWORD *)(dword_B428D4 + 0x1C) = v4;
    dword_B428D4 = (int)v4;
    return v6;
  }
  return result;
}
