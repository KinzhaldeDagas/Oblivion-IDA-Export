int __thiscall sub_8C84F0(__m128 **this, int a2)
{
  _WORD *v3; // eax
  _DWORD *v4; // esi
  int (__thiscall *v5)(_DWORD *); // edx
  int result; // eax
  int v7; // esi
  float v8[4]; // [esp+28h] [ebp-90h] BYREF
  float v9; // [esp+38h] [ebp-80h]
  float v10; // [esp+3Ch] [ebp-7Ch]
  float v11; // [esp+40h] [ebp-78h]
  float v12; // [esp+44h] [ebp-74h]
  float v13; // [esp+48h] [ebp-70h]
  float v14; // [esp+4Ch] [ebp-6Ch]
  float v15; // [esp+50h] [ebp-68h]
  float v16; // [esp+54h] [ebp-64h]
  int v17; // [esp+58h] [ebp-60h]
  _WORD *v18; // [esp+74h] [ebp-44h]
  __int128 v19; // [esp+78h] [ebp-40h] BYREF
  __int128 v20; // [esp+88h] [ebp-30h] BYREF
  unsigned int v21; // [esp+B4h] [ebp-4h]

  v8[1] = flt_B2EFC4; /*0x8c8539*/
  *(float *)&v17 = 0.0; /*0x8c8545*/
  v9 = 0.0; /*0x8c854a*/
  v10 = 0.0; /*0x8c8550*/
  v8[0] = 0.0; /*0x8c8554*/
  v11 = 0.0; /*0x8c8558*/
  v12 = 0.0; /*0x8c855c*/
  v13 = 1.0; /*0x8c8562*/
  v14 = 0.0; /*0x8c8566*/
  v15 = 0.0; /*0x8c856a*/
  v16 = 0.0; /*0x8c856e*/
  sub_8C8080(this, v8); /*0x8c8572*/
  v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x90, 8); /*0x8c8589*/
  v3[2] = 0x90; /*0x8c858b*/
  v18 = v3; /*0x8c8591*/
  *(float *)&v19 = v13; /*0x8c8599*/
  *((float *)&v19 + 1) = v14; /*0x8c85a5*/
  *((float *)&v19 + 2) = v15; /*0x8c85b2*/
  v21 = 0; /*0x8c85c1*/
  *((float *)&v19 + 3) = v16; /*0x8c85c8*/
  *(float *)&v20 = v9; /*0x8c85d0*/
  *((float *)&v20 + 1) = v10; /*0x8c85db*/
  *((float *)&v20 + 2) = v11; /*0x8c85e6*/
  *((float *)&v20 + 3) = v12; /*0x8c85f1*/
  v4 = sub_916380(v3, &v20, &v19, v17, 9, 1); /*0x8c8608*/
  v5 = *(int (__thiscall **)(_DWORD *))(*v4 + 0xC); /*0x8c860c*/
  v21 = 0xFFFFFFFF; /*0x8c8611*/
  result = v5(v4); /*0x8c861c*/
  v7 = v4[0x14]; /*0x8c861e*/
  if ( v7 ) /*0x8c8623*/
    return ((int (__thiscall *)(__m128 **, int, int, const char *))(*this)[9].m128_i32[1])( /*0x8c8636*/
             this,
             a2,
             v7,
             "bhkCylinderShape");
  return result; /*0x8c8638*/
}
