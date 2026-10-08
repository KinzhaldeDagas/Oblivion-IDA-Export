int __usercall sub_40F760@<eax>(int *a1@<esi>, float a2, float a3, float a4, float a5, int a6, int a7)
{
  int v7; // edx
  void (__stdcall *v8)(int *, _DWORD); // eax
  float v10[7]; // [esp+18h] [ebp-60h] BYREF
  float v11; // [esp+34h] [ebp-44h]
  float v12; // [esp+38h] [ebp-40h]
  float v13; // [esp+3Ch] [ebp-3Ch]
  float v14; // [esp+40h] [ebp-38h]
  float v15; // [esp+44h] [ebp-34h]
  float v16; // [esp+48h] [ebp-30h]
  float v17; // [esp+4Ch] [ebp-2Ch]
  float v18; // [esp+50h] [ebp-28h]
  float v19; // [esp+54h] [ebp-24h]
  float v20; // [esp+58h] [ebp-20h]
  float v21; // [esp+5Ch] [ebp-1Ch]
  float v22; // [esp+60h] [ebp-18h]
  float v23; // [esp+64h] [ebp-14h]
  float v24; // [esp+68h] [ebp-10h]
  float v25; // [esp+6Ch] [ebp-Ch]
  float v26; // [esp+70h] [ebp-8h]
  float v27; // [esp+74h] [ebp-4h]

  v10[0] = a2; /*0x40f768*/
  v10[1] = a3; /*0x40f775*/
  v11 = a3; /*0x40f77f*/
  v10[2] = 0.0; /*0x40f783*/
  v16 = a2; /*0x40f787*/
  v10[3] = 1.0; /*0x40f791*/
  v10[6] = a2; /*0x40f798*/
  v10[4] = 0.0; /*0x40f79c*/
  v10[5] = 0.0; /*0x40f7a4*/
  v23 = a3; /*0x40f7a8*/
  v15 = 0.0; /*0x40f7bb*/
  v20 = 0.0; /*0x40f7bf*/
  v12 = 0.0; /*0x40f7c3*/
  v18 = 0.0; /*0x40f7cb*/
  v24 = 0.0; /*0x40f7cf*/
  v7 = *a1; /*0x40f7d3*/
  v17 = a3; /*0x40f7d7*/
  v27 = 0.0; /*0x40f7df*/
  v11 = a3 + (double)a7 * a5; /*0x40f7e3*/
  v13 = 1.0; /*0x40f7e8*/
  v15 = 1.0; /*0x40f7ec*/
  v14 = 0.0; /*0x40f7f0*/
  v19 = 1.0; /*0x40f7fb*/
  v21 = 0.0; /*0x40f7ff*/
  v25 = 1.0; /*0x40f803*/
  v16 = a2 + (double)a6 * a4; /*0x40f812*/
  v22 = v16; /*0x40f81a*/
  v8 = *(void (__stdcall **)(int *, _DWORD))(v7 + 0x170); /*0x40f81e*/
  v20 = 1.0; /*0x40f824*/
  v23 = v11; /*0x40f830*/
  v26 = 1.0; /*0x40f834*/
  v27 = 1.0; /*0x40f838*/
  v8(a1, 0); /*0x40f83c*/
  (*(void (__stdcall **)(int *, _DWORD))(*a1 + 0x1AC))(a1, 0); /*0x40f849*/
  (*(void (__stdcall **)(int *, int))(*a1 + 0x164))(a1, 0x104); /*0x40f859*/
  return (*(int (__stdcall **)(int *, int, int, float *, int))(*a1 + 0x14C))(a1, 5, 2, v10, 0x18); /*0x40f874*/
}
