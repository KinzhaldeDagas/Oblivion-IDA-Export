// positive sp value has been detected, the output may be wrong!
double __userpurge Actor_GetBaseCalcAVf_::GetBaseAV@<st0>(int a1@<edi>, int a2)
{
  float v3; // [esp-4h] [ebp-8h]
  float v4; // [esp+0h] [ebp-4h]

  return (float)(((double)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x128))(a1) + v4) * v3);
}
