const void *__thiscall sub_8DB020(const void **this, int a2, int a3)
{
  int i; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int j; // ecx
  int v10; // eax
  int v11; // ebp
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // eax
  const void **v15; // esi
  const void *v16; // eax
  _DWORD *v17; // ecx
  const void *result; // eax

  for ( i = 0; i < (int)*(this + 0x702); ++i )
  {
    v5 = (int)*(this + 0x701);
    v6 = *(_DWORD *)(v5 + 8 * i);
    v7 = v5 + 8 * i;
    if ( v6 == a2 && *(_DWORD *)(v7 + 4) == a3 )
    {
      v8 = (int)*(this + 0x702) + 0xFFFFFFFF;
      *(this + 0x702) = (const void *)v8;
      for ( j = i; j < (int)*(this + 0x702); ++j )
      {
        v10 = (int)*(this + 0x701);
        v11 = *(_DWORD *)(v10 + 8 * j + 8);
        v12 = (_DWORD *)(v10 + 8 * j);
        *v12 = v11;
        v12[1] = v12[3];
      }
      --i;
    }
  }
  sub_8DA800(this, a2, a3, 0);
  v13 = (int)*(this + 0x703);
  v14 = (int)*(this + 0x702);
  v15 = this + 0x701;
  if ( v14 == (v13 & 0x3FFFFFFF) )
    sub_8A6EE0(v15, 8);
  v16 = v15[1];
  v17 = (char *)*v15 + 8 * (_DWORD)v16;
  result = (char *)v16 + 1;
  v15[1] = result;
  *v17 = a2;
  v17[1] = a3;
  return result;
}
