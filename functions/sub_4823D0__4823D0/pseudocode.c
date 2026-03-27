char __thiscall sub_4823D0(unsigned int *this, float a2)
{
  char result; // al
  unsigned int v4; // ebp
  unsigned int i; // edi
  unsigned int j; // esi
  int v7; // eax
  unsigned int v8; // edx
  _BYTE *v9; // ecx

  result = sub_4CCCE0();
  v4 = *(this + 3);
  byte_B3440C = byte_B3440C == 0;
  for ( i = 0; i < v4; ++i )
  {
    for ( j = 0; j < v4; ++j )
    {
      result = 1;
      if ( i && j && i != v4 - 1 && j != v4 - 1 )
        goto LABEL_12;
      if ( (((unsigned __int8)i ^ (unsigned __int8)j) & 1) != 0 )
        result = 0;
      if ( byte_B3440C )
        result = result == 0;
      if ( result )
      {
LABEL_12:
        v7 = *(this + 4);
        v8 = j + i * *(this + 3);
        v9 = *(_BYTE **)(v7 + 8 * v8);
        result = v7 + 8 * v8;
        if ( v9 )
          result = sub_4D4970(v9, a2);
      }
    }
  }
  return result;
}
