float *__thiscall sub_976A50(float *this, float *a2, float a3)
{
  float v4; // [esp+0h] [ebp-Ch]
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+8h] [ebp-4h]

  v4 = *(this + 3) * a3; /*0x976a64*/
  v5 = *(this + 4) * a3; /*0x976a6c*/
  v6 = a3 * *(this + 5); /*0x976a73*/
  *a2 = *this + v4; /*0x976a7c*/
  a2[1] = *(this + 1) + v5; /*0x976a85*/
  a2[2] = *(this + 2) + v6; /*0x976a8f*/
  return a2; /*0x976a92*/
}
