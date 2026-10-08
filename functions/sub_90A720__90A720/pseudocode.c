int __cdecl sub_90A720(int *a1)
{
  _DWORD *(__cdecl *v2)(_DWORD *, int *, int *, int); // [esp+4h] [ebp-18h] BYREF
  void *v3; // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_90A6E0; /*0x90a733*/
  v3 = sub_90A0F0; /*0x90a73b*/
  v4 = sub_90A130; /*0x90a743*/
  v5 = sub_90A170; /*0x90a74b*/
  v6 = 1; /*0x90a753*/
  v7 = 1; /*0x90a758*/
  sub_8DADD0(a1, (int)&v2, 0xFFFFFFFF, 0xB); /*0x90a75d*/
  v2 = sub_90A5A0; /*0x90a76d*/
  v3 = sub_909F50; /*0x90a775*/
  v4 = sub_909940; /*0x90a77d*/
  v5 = sub_909C40; /*0x90a785*/
  v6 = 0; /*0x90a78d*/
  v7 = 1; /*0x90a792*/
  return sub_8DADD0(a1, (int)&v2, 0xB, 0xFFFFFFFF); /*0x90a79c*/
}
