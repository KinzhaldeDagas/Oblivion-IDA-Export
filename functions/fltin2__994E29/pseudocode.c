int *__cdecl _fltin2(int *a1, char *a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  signed int v7; // eax
  char *v9; // [esp+Ch] [ebp-24h] BYREF
  char *v10; // [esp+10h] [ebp-20h]
  int v11; // [esp+14h] [ebp-1Ch] BYREF
  int v12; // [esp+18h] [ebp-18h]
  int v13; // [esp+1Ch] [ebp-14h]
  unsigned __int16 v14[6]; // [esp+20h] [ebp-10h] BYREF

  v10 = a2; /*0x994e55*/
  v6 = 0; /*0x994e58*/
  v13 = __strgtold12_l((int)v14, &v9, a2, 0, 0, 0, 0, a6); /*0x994e64*/
  if ( (v13 & 4) != 0 ) /*0x994e67*/
  {
    v6 = 0x200; /*0x994e69*/
    v11 = 0; /*0x994e6e*/
    v12 = 0; /*0x994e71*/
  }
  else
  {
    v7 = sub_99F12B(v14, &v11); /*0x994e7e*/
    if ( (v13 & 2) != 0 || v7 == 1 ) /*0x994e8e*/
      v6 = 0x80; /*0x994e90*/
    if ( (v13 & 1) != 0 || v7 == 2 ) /*0x994e9e*/
      v6 |= 0x100u; /*0x994ea0*/
  }
  a1[1] = v9 - v10; /*0x994eaf*/
  a1[4] = v11; /*0x994eb5*/
  a1[5] = v12; /*0x994ebb*/
  *a1 = v6; /*0x994ebf*/
  return a1; /*0x994eac*/
}
