bool *__cdecl sub_9512F0(bool *a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, float a7)
{
  bool v7; // cl
  int v8; // ebp
  bool v9; // dl
  int v10; // ecx
  int v11; // ebx
  int v12; // edi
  int v13; // esi
  bool v14; // al
  char v16[5]; // [esp+7h] [ebp-15h] BYREF
  char v17[4]; // [esp+Ch] [ebp-10h] BYREF
  char v18[4]; // [esp+10h] [ebp-Ch] BYREF
  char v19[4]; // [esp+14h] [ebp-8h] BYREF
  int v20; // [esp+18h] [ebp-4h]

  v7 = *sub_9511B0((bool *)v16, a2, a4, a5, a7);
  v8 = a6[1];
  v9 = v7;
  v10 = 0;
  v16[1] = v9;
  v20 = 0;
  if ( v8 <= 0 )
  {
    *a1 = v9;
    return a1;
  }
  else
  {
    v11 = 0;
    do
    {
      v12 = 0;
      v17[0] = 0;
      v18[0] = 0;
      v19[0] = 0;
      v13 = 0;
      do
      {
        if ( v12 != v10 )
        {
          sub_9510E0(v16, (unsigned __int16 **)(v11 + *a6), (unsigned __int16 **)(v13 + *a6), v17, v18, v19);
          v10 = v20;
        }
        ++v12;
        v13 += 0x20;
      }
      while ( v12 < v8 );
      v14 = v16[1] && v17[0] && v18[0] && v19[0];
      ++v10;
      v11 += 0x20;
      v16[1] = v14;
      v20 = v10;
    }
    while ( v10 < v8 );
    *a1 = v16[1];
    return a1;
  }
}
