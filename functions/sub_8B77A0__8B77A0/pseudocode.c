int __thiscall sub_8B77A0(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  const void **v5; // esi
  int result; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // ecx

  sub_8A2690(this, a2);
  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = *(_DWORD *)(v3 + 0xC);
  else
    v4 = 0;
  a2[2] = 0;
  v5 = (const void **)(a2 + 1);
  result = a2[3] & 0x3FFFFFFF;
  if ( result < v4 )
  {
    v7 = 2 * result;
    if ( v4 >= v7 )
      v7 = v4;
    result = sub_8A6E40(v5, v7, 0x10);
  }
  a2[2] = v4;
  if ( this && (v8 = *(this + 2)) != 0 )
    v9 = v8 + 0x10;
  else
    v9 = 0;
  if ( v4 > 0 )
  {
    result = 0;
    do
    {
      *(_OWORD *)((char *)*v5 + result) = *(_OWORD *)(result + v9);
      result += 0x10;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
