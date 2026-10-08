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

  v7 = *sub_9511B0((bool *)v16, a2, a4, a5, a7); /*0x951312*/
  v8 = a6[1]; /*0x951318*/
  v9 = v7; /*0x951320*/
  v10 = 0; /*0x951323*/
  v16[1] = v9; /*0x951327*/
  v20 = 0; /*0x95132b*/
  if ( v8 <= 0 ) /*0x95132f*/
  {
    *a1 = v9; /*0x9513e1*/
    return a1; /*0x9513dd*/
  }
  else
  {
    v11 = 0; /*0x951338*/
    do /*0x9513c5*/
    {
      v12 = 0; /*0x951340*/
      v17[0] = 0; /*0x951344*/
      v18[0] = 0; /*0x951349*/
      v19[0] = 0; /*0x95134e*/
      v13 = 0; /*0x951355*/
      do /*0x95138f*/
      {
        if ( v12 != v10 ) /*0x951359*/
        {
          sub_9510E0(v16, (unsigned __int16 **)(v11 + *a6), (unsigned __int16 **)(v13 + *a6), v17, v18, v19); /*0x95137d*/
          v10 = v20; /*0x951382*/
        }
        ++v12; /*0x951389*/
        v13 += 0x20; /*0x95138a*/
      }
      while ( v12 < v8 ); /*0x95138f*/
      v14 = v16[1] && v17[0] && v18[0] && v19[0]; /*0x9513b1*/
      ++v10; /*0x9513b7*/
      v11 += 0x20; /*0x9513b8*/
      v16[1] = v14; /*0x9513bd*/
      v20 = v10; /*0x9513c1*/
    }
    while ( v10 < v8 ); /*0x9513c5*/
    *a1 = v16[1]; /*0x9513d6*/
    return a1; /*0x9513cb*/
  }
}
