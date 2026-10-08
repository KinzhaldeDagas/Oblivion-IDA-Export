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

  v4 = 0; /*0x954c1d*/
  v5 = this + 3; /*0x954c1f*/
  v14 = 0; /*0x954c24*/
  v6 = (float *)(a2 + 0x10); /*0x954c28*/
  v15 = (char *)this - a2; /*0x954c2b*/
  do /*0x954c93*/
  {
    *(float *)&v10 = (v6[0xFFFFFFFF] - *(float *)(a3 + 4 * v4)) * *(float *)(a3 + 0xC); /*0x954c3c*/
    *(float *)&v11 = sub_8ECA90(v10); /*0x954c46*/
    *v5 = sub_8ECB30(v11); /*0x954c4e*/
    *(float *)&v12 = (*v6 - *(float *)(a3 + 4 * v4)) * *(float *)(a3 + 0xC); /*0x954c5b*/
    *(float *)&v13 = sub_8ECA90(v12); /*0x954c65*/
    v7 = sub_8ECB30(v13); /*0x954c68*/
    v8 = *v5; /*0x954c71*/
    *(_DWORD *)((char *)v6 + (_DWORD)v15) = ++v7; /*0x954c78*/
    result = v7 - v8; /*0x954c7f*/
    if ( v14 <= result ) /*0x954c83*/
      v14 = result; /*0x954c85*/
    ++v4; /*0x954c89*/
    v6 += 2; /*0x954c8a*/
    v5 += 2; /*0x954c8d*/
  }
  while ( v4 < 3 ); /*0x954c93*/
  return result; /*0x954c95*/
}
