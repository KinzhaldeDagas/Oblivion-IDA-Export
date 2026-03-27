int __thiscall sub_954C10(int *this, int a2, int a3)
{
  int v4; // edi
  int *v5; // ebp
  float *v6; // esi
  int v7; // eax
  int v8; // edx
  int result; // eax
  unsigned int v10; // [esp+0h] [ebp-18h]
  unsigned int v11; // [esp+0h] [ebp-18h]
  unsigned int v12; // [esp+0h] [ebp-18h]
  unsigned int v13; // [esp+0h] [ebp-18h]
  int v14; // [esp+14h] [ebp-4h]
  char *v15; // [esp+20h] [ebp+8h]

  v4 = 0;
  v5 = this + 3;
  v14 = 0;
  v6 = (float *)(a2 + 0x10);
  v15 = (char *)this - a2;
  do
  {
    *(float *)&v10 = (v6[0xFFFFFFFF] - *(float *)(a3 + 4 * v4)) * *(float *)(a3 + 0xC);
    *(float *)&v11 = sub_8ECA90(v10);
    *v5 = sub_8ECB30(v11);
    *(float *)&v12 = (*v6 - *(float *)(a3 + 4 * v4)) * *(float *)(a3 + 0xC);
    *(float *)&v13 = sub_8ECA90(v12);
    v7 = sub_8ECB30(v13);
    v8 = *v5;
    *(_DWORD *)((char *)v6 + (_DWORD)v15) = ++v7;
    result = v7 - v8;
    if ( v14 <= result )
      v14 = result;
    ++v4;
    v6 += 2;
    v5 += 2;
  }
  while ( v4 < 3 );
  return result;
}
