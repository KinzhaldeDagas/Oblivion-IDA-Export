unsigned int __thiscall sub_700B60(char *this, int a2)
{
  char v3; // di
  unsigned int v4; // eax
  char *i; // ecx
  unsigned int result; // eax
  char v7; // cl
  int v8; // edx
  unsigned __int8 v9; // al
  int v10; // ecx
  int v11; // ebx
  unsigned int v12; // [esp+10h] [ebp+4h]

  v3 = 0;
  v4 = 0;
  for ( i = this + 0x1C; *((_DWORD *)i + 0xFFFFFFFE) != a2; i += 0xC )
  {
    ++v4;
    v3 += *i;
    if ( v4 >= 4 )
      return 0;
  }
  v7 = *(this + 0xC * v4 + 0x1C);
  v8 = 0;
  v9 = v7 - 1;
  if ( !v7 )
    return 0;
  if ( v7 != 1 )
  {
    v10 = v9;
    do
    {
      v11 = 1 << v10;
      --v9;
      --v10;
      v8 += v11;
    }
    while ( v9 );
  }
  result = (v8 + 1) << v3;
  if ( (*this & 1) == 0 )
  {
    BYTE2(v12) = BYTE1(result);
    HIBYTE(v12) = result;
    LOBYTE(v12) = HIBYTE(result);
    BYTE1(v12) = BYTE2(result);
    return v12 >> (0x20 - *(this + 1));
  }
  return result;
}
