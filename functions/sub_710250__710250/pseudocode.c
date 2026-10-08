//
// Verified model-transform helper: computes three vector/matrix outputs. X uses m3*y + x*m0 + m6*z; Y uses m1*x + m4*y + m7*z; Z uses m2*x + m5*y + m8*z. The x87 operation order differs by component; preserve float input/intermediate stores and compare against original bytes.
float *__cdecl NiPoint3_MultiplyMatrix3(float *a1, float *a2, float *a3)
{
  *a1 = a3[3] * a2[1] + *a2 * *a3 + a3[6] * a2[2]; /*0x710270*/
  a1[1] = a3[1] * *a2 + a3[4] * a2[1] + a3[7] * a2[2]; /*0x710287*/
  a1[2] = a3[2] * *a2 + a3[5] * a2[1] + a3[8] * a2[2]; /*0x71029f*/
  return a1; /*0x7102a2*/
}
