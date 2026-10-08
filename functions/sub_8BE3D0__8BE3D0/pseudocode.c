int __thiscall sub_8BE3D0(void *this, int a2, int a3)
{
  float *v4; // eax
  double v5; // st7
  char v7; // [esp+7h] [ebp-1h] BYREF

  v4 = (float *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v7); /*0x8be3e0*/
  if ( !v4 ) /*0x8be3ea*/
    return sub_89FFA0(this, a2, a3); /*0x8be3ea*/
  v5 = *(float *)(a3 + 0x10); /*0x8be3fd*/
  if ( v5 == 1.0 ) /*0x8be402*/
    return sub_89FFA0(this, a2, a3); /*0x8be45e*/
  v4[4] = v4[4] * v5; /*0x8be40f*/
  v4[5] = v4[5] * v5; /*0x8be417*/
  v4[6] = v4[6] * v5; /*0x8be41f*/
  v4[7] = v4[7] * v5; /*0x8be427*/
  v4[8] = v5 * v4[8]; /*0x8be42f*/
  v4[9] = v4[9] * v5; /*0x8be437*/
  v4[0xA] = v4[0xA] * v5; /*0x8be43f*/
  v4[0xB] = v5 * v4[0xB]; /*0x8be445*/
  return sub_89FFA0(this, a2, a3); /*0x8be44f*/
}
