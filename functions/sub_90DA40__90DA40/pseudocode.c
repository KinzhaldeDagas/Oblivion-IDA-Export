int __usercall sub_90DA40@<eax>(int a1@<ebx>, int a2@<esi>, int a3, const void *a4, int a5, int a6)
{
  _DWORD v7[13]; // [esp+10h] [ebp-74h] BYREF
  _DWORD v8[4]; // [esp+44h] [ebp-40h] BYREF
  _BYTE v9[4]; // [esp+54h] [ebp-30h] BYREF
  int v10; // [esp+58h] [ebp-2Ch]
  char v11[24]; // [esp+6Ch] [ebp-18h] BYREF

  sub_8B18C0(a1, (char *)v8, 0xFFFFFFFF, 0x40u); /*0x90da4c*/
  v8[0] = 0x57E0E057; /*0x90da67*/
  v8[1] = 0x10C0C010; /*0x90da6f*/
  v8[2] = a5; /*0x90da77*/
  v8[3] = 2; /*0x90da7b*/
  sub_8B1890(v9, a4, 4u); /*0x90da83*/
  v10 = a6; /*0x90da98*/
  sub_8B18C0(a1, v11, 0xFFFFFFFF, 0x18u); /*0x90da9c*/
  v7[2] = 0x80000000; /*0x90daab*/
  v7[5] = 0x80000000; /*0x90daaf*/
  v7[8] = 0x80000000; /*0x90dab3*/
  v7[0xB] = 0x80000000; /*0x90dab7*/
  v7[0] = 0; /*0x90dacd*/
  v7[1] = 0; /*0x90dad1*/
  v7[3] = 0; /*0x90dad5*/
  v7[4] = 0; /*0x90dad9*/
  v7[6] = 0; /*0x90dadd*/
  v7[7] = 0; /*0x90dae1*/
  v7[9] = 0; /*0x90dae5*/
  v7[0xA] = 0; /*0x90dae9*/
  v7[0xC] = 0; /*0x90daed*/
  (*(void (__thiscall **)(int, int, _DWORD *, _DWORD *, _DWORD *))(*(_DWORD *)a2 + 8))(a2, a3, v8, unk_BA9474, v7); /*0x90daf6*/
  return sub_941400(v7); /*0x90db01*/
}
