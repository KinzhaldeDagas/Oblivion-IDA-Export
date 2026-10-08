_DWORD *__thiscall sub_754810(float *this, float a2, _DWORD *a3, int a4)
{
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  float v10; // [esp+14h] [ebp-18h]
  float v11; // [esp+14h] [ebp-18h]
  float v12; // [esp+18h] [ebp-14h]
  float v13; // [esp+18h] [ebp-14h]
  float v14; // [esp+1Ch] [ebp-10h]
  float v15; // [esp+1Ch] [ebp-10h]
  float v16; // [esp+20h] [ebp-Ch]
  float v17; // [esp+20h] [ebp-Ch]
  float v18; // [esp+24h] [ebp-8h]
  float v19; // [esp+24h] [ebp-8h]
  float v20; // [esp+28h] [ebp-4h]
  float v21; // [esp+28h] [ebp-4h]
  float v22; // [esp+38h] [ebp+Ch]
  float v23; // [esp+38h] [ebp+Ch]
  float v24; // [esp+38h] [ebp+Ch]
  float v25; // [esp+38h] [ebp+Ch]
  float v26; // [esp+38h] [ebp+Ch]
  float v27; // [esp+38h] [ebp+Ch]

  v10 = *(this + 5) - *(this + 0xF); /*0x754825*/
  v5 = (float *)(a3[0x17] + 0x1C * (unsigned __int16)a4); /*0x75483c*/
  v12 = *(this + 6) - *(this + 0x10); /*0x75483f*/
  v14 = *(this + 7) - *(this + 0x11); /*0x754849*/
  v22 = 1.0 / *(this + 0xD); /*0x754854*/
  v16 = v22 * v10; /*0x754862*/
  v18 = v12 * v22; /*0x75486c*/
  v20 = v22 * v14; /*0x754874*/
  v23 = v5[2] * v20 + v5[1] * v18 + *v5 * v16; /*0x7548a0*/
  v17 = v16 * v23; /*0x7548ae*/
  v19 = v18 * v23; /*0x7548b8*/
  v21 = v20 * v23; /*0x7548be*/
  v11 = v17 + v17; /*0x7548c8*/
  v13 = v19 + v19; /*0x7548d2*/
  v15 = v21 + v21; /*0x7548dc*/
  v24 = *v5 - v11; /*0x7548e6*/
  v6 = v24; /*0x7548ea*/
  *v5 = v24; /*0x7548ee*/
  v25 = v5[1] - v13; /*0x7548f7*/
  v7 = v25; /*0x7548fb*/
  v5[1] = v25; /*0x7548ff*/
  v26 = v5[2] - v15; /*0x754909*/
  v8 = v26; /*0x75490d*/
  v5[2] = v26; /*0x754912*/
  v27 = *(this + 2); /*0x75491a*/
  *v5 = v6 * v27; /*0x754928*/
  v5[1] = v7 * v27; /*0x754930*/
  v5[2] = v27 * v8; /*0x754935*/
  return sub_75EC40((int)this, a2, a3, a4); /*0x754945*/
}
