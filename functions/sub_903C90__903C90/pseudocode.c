int __cdecl sub_903C90(int *a1)
{
  void *v2; // [esp+4h] [ebp-18h] BYREF
  int (__cdecl *v3)(int *, int *, int, int); // [esp+8h] [ebp-14h]
  int (__cdecl *v4)(int *, int *, int, int); // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_903C50; /*0x903ca3*/
  v3 = sub_901DC0; /*0x903cab*/
  v4 = sub_901E00; /*0x903cb3*/
  v5 = sub_901E40; /*0x903cbb*/
  v6 = 1; /*0x903cc3*/
  v7 = 1; /*0x903cc8*/
  sub_8DADD0(a1, (int)&v2, 0xFFFFFFFF, 0xC); /*0x903ccd*/
  v2 = sub_903AA0; /*0x903cdd*/
  v3 = sub_905630; /*0x903ce5*/
  v4 = sub_9050F0; /*0x903ced*/
  v5 = sub_905370; /*0x903cf5*/
  v6 = 0; /*0x903cfd*/
  v7 = 1; /*0x903d02*/
  return sub_8DADD0(a1, (int)&v2, 0xC, 0xFFFFFFFF); /*0x903d0c*/
}
