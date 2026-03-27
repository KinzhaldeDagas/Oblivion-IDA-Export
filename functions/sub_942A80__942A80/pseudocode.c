int __thiscall sub_942A80(int *this, char *a2)
{
  char v3; // cl
  int v4; // eax
  const char *v5; // edx
  int v6; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // edx

  v3 = *a2;
  v4 = 0;
  if ( *a2 )
  {
    v5 = a2;
    do
    {
      v4 = v3 + 0x1F * v4;
      v3 = *++v5;
    }
    while ( v3 );
  }
  v6 = *this;
  v7 = v4 & 0x7FFFFFFF;
  v8 = *(this + 2);
  v9 = v7 & v8;
  v10 = *(_DWORD *)(*this + 4 * (v7 & v8));
  if ( v10 == 0xFFFFFFFF )
    return *(this + 2) + 1;
  while ( v10 != v7 || sub_8B1770(a2, *(const char **)(v6 + 4 * (v9 + v8) + 4)) )
  {
    v8 = *(this + 2);
    v6 = *this;
    v9 = v8 & (v9 + 1);
    v10 = *(_DWORD *)(*this + 4 * v9);
    if ( v10 == 0xFFFFFFFF )
      return *(this + 2) + 1;
  }
  return v9;
}
