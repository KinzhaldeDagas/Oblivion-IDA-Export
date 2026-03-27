int __thiscall sub_956DD0(_DWORD **this, unsigned int **a2, _DWORD *a3)
{
  unsigned int **v3; // ecx
  unsigned int *v4; // ebx
  unsigned int v5; // ebp
  int result; // eax
  int v8; // eax
  int v9; // esi
  unsigned int *v10; // ecx
  unsigned int v11; // edx
  unsigned int *v12; // ecx
  unsigned int v13; // [esp+Ch] [ebp-Ch]
  int v15; // [esp+14h] [ebp-4h] BYREF
  unsigned int *v16; // [esp+20h] [ebp+8h]

  v3 = a2;
  v4 = *a2;
  v5 = **a2;
  a3[0xB] = 0;
  a3[0xD] = 0;
  a3[0xC] = 0xFFFFFFFF;
  result = (int)a2[1] + 0xFFFFFFFF;
  v13 = v5;
  if ( result >= 0 )
  {
    v16 = a2[1];
    do
    {
      if ( *v4 > v13 )
        v13 = *v4;
      if ( *v4 < v5 )
        v5 = *v4;
      v8 = (*(int (__thiscall **)(_DWORD, unsigned int *, int *))(**(this + 0xA) + 0x1C))(*(this + 0xA), v4, &v15);
      if ( v8 > a3[0xB] )
        a3[0xB] = v8;
      v9 = 0;
      if ( v8 > 0 )
      {
        v10 = a3 + 0xD;
        do
        {
          v11 = *(&v15 + v9);
          if ( v11 < v10[0xFFFFFFFF] )
            v10[0xFFFFFFFF] = v11;
          if ( v11 > *v10 )
            *v10 = v11;
          ++v9;
          ++v10;
        }
        while ( v9 < v8 );
      }
      v4 += 4;
      result = (int)v16 + 0xFFFFFFFF;
      v16 = (unsigned int *)((char *)v16 + 0xFFFFFFFF);
    }
    while ( v16 );
    v3 = a2;
  }
  v12 = v3[1];
  a3[9] = v5;
  a3[2] = v12;
  a3[0xA] = v13;
  return result;
}
