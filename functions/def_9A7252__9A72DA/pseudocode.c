// positive sp value has been detected, the output may be wrong!
char __usercall def_9A7252@<al>(double a1@<st1>, float *a2)
{
  float v3; // [esp-214h] [ebp-214h]

  *a2 = v3;
  a2[1] = a1;
  a2[2] = a1;
  a2[3] = a1;
  return 1;
}
