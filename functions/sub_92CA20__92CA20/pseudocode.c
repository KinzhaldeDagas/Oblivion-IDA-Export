float *__usercall sub_92CA20@<eax>(float *result@<eax>, float *a2@<ecx>, float *a3)
{
  *result = *a3 - *a2;
  result[1] = a3[1] - a2[1];
  result[2] = a3[2] - a2[2];
  result[3] = a3[3] - a2[3];
  return result;
}
