// TESAnimGroup movement-vector getter. Copies the three float movement components stored at TESAnimGroup +0x14/+0x18/+0x1C.
_DWORD *__thiscall TESAnimGroup_GetMovementVector(_DWORD *this, _DWORD *a2)
{
  int v3; // edx
  int v4; // ecx

  *a2 = *(this + 5); /*0x51aab7*/
  v3 = *(this + 6); /*0x51aab9*/
  v4 = *(this + 7); /*0x51aabc*/
  a2[1] = v3; /*0x51aabf*/
  a2[2] = v4; /*0x51aac2*/
  return a2; /*0x51aac5*/
}
