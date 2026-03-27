int *__thiscall sub_6EBE50(unsigned int *this, unsigned int a2)
{
  int *result; // eax
  unsigned int v4; // ebx
  int *v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  int *v10; // [esp+14h] [ebp-10h]

  result = (int *)FormHeapAlloc(0xCu);
  v4 = 0;
  if ( result )
  {
    result = sub_6EBD50(result, a2);
    v5 = result;
    v10 = result;
  }
  else
  {
    v10 = 0;
    v5 = 0;
  }
  if ( a2 )
  {
    v6 = 0;
    do
    {
      if ( v4 < v5[1] )
        v7 = v6 + *v5;
      else
        v7 = 0;
      v8 = *(this + 1);
      if ( *(this + 2) == v8 )
      {
        if ( v8 )
          v9 = 2 * v8;
        else
          v9 = 1;
        sub_6E8CA0(this, v9);
        v5 = v10;
      }
      result = (int *)*this;
      *(_DWORD *)(*this + 4 * (*(this + 2))++) = v7;
      ++v4;
      v6 += 0x14;
    }
    while ( v4 < a2 );
  }
  v5[2] = *(this + 5);
  *(this + 5) = (unsigned int)v5;
  return result;
}
