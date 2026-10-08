int __cdecl sub_905E50(int *a1)
{
  _DWORD *(__cdecl *v2)(_DWORD *, int *, int *, int); // [esp+4h] [ebp-18h] BYREF
  int (__cdecl *v3)(int *, int *, int, int); // [esp+8h] [ebp-14h]
  int (__cdecl *v4)(int *, int *, int, int); // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_905E10; /*0x905e63*/
  v3 = sub_901DC0; /*0x905e6b*/
  v4 = sub_901E00; /*0x905e73*/
  v5 = sub_901E40; /*0x905e7b*/
  v6 = 1; /*0x905e83*/
  v7 = 1; /*0x905e88*/
  sub_8DADD0(a1, (int)&v2, 0xFFFFFFFF, 2); /*0x905e8d*/
  v2 = sub_905C90; /*0x905e9d*/
  v3 = sub_905630; /*0x905ea5*/
  v4 = sub_9050F0; /*0x905ead*/
  v5 = sub_905370; /*0x905eb5*/
  v6 = 0; /*0x905ebd*/
  v7 = 1; /*0x905ec2*/
  return sub_8DADD0(a1, (int)&v2, 2, 0xFFFFFFFF); /*0x905ecc*/
}
