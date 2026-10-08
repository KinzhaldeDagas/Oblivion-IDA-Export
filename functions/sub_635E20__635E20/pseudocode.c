void __thiscall sub_635E20(int *this, int a2)
{
  float *v3; // esi
  float *v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // esi
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]
  float v12; // [esp+18h] [ebp+4h]
  float v13; // [esp+18h] [ebp+4h]
  float v14; // [esp+18h] [ebp+4h]
  float v15; // [esp+18h] [ebp+4h]

  if ( *((_WORD *)g_WorldSceneReceiverRoot + 0x5B) ) /*0x635e28*/
    v3 = **((float ***)g_WorldSceneReceiverRoot + 0x2C); /*0x635e40*/
  else
    v3 = 0; /*0x635e36*/
  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2); /*0x635e4e*/
  v9 = *v4 - v3[0x15]; /*0x635e55*/
  v10 = v4[1] - v3[0x16]; /*0x635e5f*/
  v11 = v4[2] - v3[0x17]; /*0x635e69*/
  v12 = v10 * v10 + v9 * v9 + v11 * v11; /*0x635e89*/
  v13 = sqrt(v12); /*0x635e96*/
  v14 = fabs(v13); /*0x635eac*/
  v5 = v14 * dbl_A2F910 * *(float *)(*((_DWORD *)g_WorldSceneReceiverRoot + 0x37) + 0x120); /*0x635eba*/
  v15 = SettingLODFadeOutMultActors * flt_B075F0; /*0x635ecc*/
  v6 = Double_To_SInt32(v5 / (v15 * (double)SLODWORD(flt_B36778[0xA]))); /*0x635edc*/
  v7 = *(this + 0x7B); /*0x635ee1*/
  v8 = v6; /*0x635ee7*/
  if ( v6 >= *(_DWORD *)(v7 + 0x40) ) /*0x635eec*/
    v8 = 0xFFFFFFFF; /*0x635eee*/
  if ( v8 != *(this + 0x7C) ) /*0x635ef7*/
  {
    sub_6FD5D0(v7, v8); /*0x635efa*/
    *(this + 0x7C) = v8; /*0x635eff*/
  }
}
