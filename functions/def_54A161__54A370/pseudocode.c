// positive sp value has been detected, the output may be wrong!
float *__userpurge def_54A161@<eax>(int a1@<esi>, int a2, float *a3, float *a4, int a5)
{
  *a3 = *(float *)(a1 + 0x1CC) + *a3;
  *a4 = *(float *)(a1 + 0x1D0) + *a4;
  return a4;
}
