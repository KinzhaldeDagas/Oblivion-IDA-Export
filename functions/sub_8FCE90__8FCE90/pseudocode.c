int __cdecl sub_8FCE90(int *a1)
{
  int (__cdecl *v2)(int, int, int, int); // [esp+4h] [ebp-18h] BYREF
  void *v3; // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_8FC1F0; /*0x8fcea3*/
  v3 = sub_8FCD30; /*0x8fceab*/
  v4 = sub_8FCDB0; /*0x8fceb3*/
  v5 = sub_8F9320; /*0x8fcebb*/
  v6 = 1; /*0x8fcec3*/
  v7 = 0; /*0x8fcec8*/
  sub_8DADD0(a1, (int)&v2, 8, 4); /*0x8fcecd*/
  v2 = sub_8FC1C0; /*0x8fcedd*/
  v3 = sub_8FCB50; /*0x8fcee5*/
  v4 = sub_8FC860; /*0x8fceed*/
  v5 = sub_935CC0; /*0x8fcef5*/
  v6 = 0; /*0x8fcefd*/
  v7 = 0; /*0x8fcf02*/
  return sub_8DADD0(a1, (int)&v2, 4, 8); /*0x8fcf0c*/
}
