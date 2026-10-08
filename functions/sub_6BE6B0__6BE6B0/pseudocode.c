int __cdecl sub_6BE6B0(int a1, int a2)
{
  int v3; // ecx
  int *v4; // edi
  int v5; // edx
  unsigned __int8 *v6; // ebp
  int result; // eax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  int v10; // [esp+10h] [ebp-Ch]
  int v11; // [esp+14h] [ebp-8h]
  int (__cdecl *v12)(unsigned int, unsigned int); // [esp+18h] [ebp-4h]
  _DWORD *v13; // [esp+20h] [ebp+4h]
  int v14; // [esp+24h] [ebp+8h]

  v13 = (_DWORD *)(a1 + 0x30); /*0x6be6c0*/
  v3 = a1 - a2; /*0x6be6c8*/
  v4 = (int *)(a2 + 0x20); /*0x6be6ca*/
  v5 = a2 - a1; /*0x6be6cd*/
  v6 = (unsigned __int8 *)(a1 + 0x2C); /*0x6be6cf*/
  v14 = a1 - a2; /*0x6be6d2*/
  v11 = v5; /*0x6be6d6*/
  v10 = 3; /*0x6be6da*/
  do /*0x6be75f*/
  {
    *(int *)((char *)v4 + v3 - 0xC) = v4[0xFFFFFFFD]; /*0x6be6e5*/
    result = *v4; /*0x6be6e9*/
    *(int *)((char *)v4 + v3) = *v4; /*0x6be6eb*/
    v8 = v4[0xFFFFFFFD]; /*0x6be6ee*/
    if ( v8 ) /*0x6be6f3*/
    {
      *v13 = (*(int (__cdecl **)(int))(4 * *v4 + 0xB3D358))(v4[0xFFFFFFFD]); /*0x6be705*/
      v9 = 0; /*0x6be713*/
      v12 = *(int (__cdecl **)(unsigned int, unsigned int))(4 * *v4 + 0xB3D530); /*0x6be717*/
      do /*0x6be749*/
      {
        result = v12(*v13 + v9 * *v6, v4[4] + v9 * v6[v11]); /*0x6be73d*/
        ++v9; /*0x6be741*/
      }
      while ( v9 < v8 ); /*0x6be749*/
      v3 = v14; /*0x6be74b*/
    }
    ++v13; /*0x6be74f*/
    ++v4; /*0x6be754*/
    ++v6; /*0x6be757*/
    --v10; /*0x6be75a*/
  }
  while ( v10 ); /*0x6be75f*/
  return result; /*0x6be761*/
}
