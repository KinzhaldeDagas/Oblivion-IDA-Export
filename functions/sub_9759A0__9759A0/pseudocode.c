void __usercall sub_9759A0(float *a1@<edx>, float *a2@<ecx>, float *a3@<esi>)
{
  double v3; // st7
  double v4; // st7
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]
  float v7; // [esp+0h] [ebp-4h]
  float v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+0h] [ebp-4h]
  float v10; // [esp+0h] [ebp-4h]

  if ( -a1[0xC] <= *a2 ) /*0x9759af*/
  {
    if ( a1[0xC] >= (double)*a2 ) /*0x9759d5*/
      goto LABEL_6; /*0x9759d5*/
    v6 = *a2 - a1[0xC]; /*0x9759dc*/
    *a3 = v6 * v6 + *a3; /*0x9759e6*/
    v3 = a1[0xC]; /*0x9759e8*/
  }
  else
  {
    v5 = a1[0xC] + *a2; /*0x9759b6*/
    *a3 = v5 * v5 + *a3; /*0x9759c0*/
    v3 = -a1[0xC]; /*0x9759c5*/
  }
  *a2 = v3; /*0x9759eb*/
LABEL_6:
  if ( -a1[0xD] <= a2[1] ) /*0x9759fc*/
  {
    if ( a1[0xD] >= (double)a2[1] ) /*0x975a24*/
      goto LABEL_11; /*0x975a24*/
    v8 = a2[1] - a1[0xD]; /*0x975a2c*/
    *a3 = v8 * v8 + *a3; /*0x975a36*/
    v4 = a1[0xD]; /*0x975a38*/
  }
  else
  {
    v7 = a1[0xD] + a2[1]; /*0x975a04*/
    *a3 = v7 * v7 + *a3; /*0x975a0e*/
    v4 = -a1[0xD]; /*0x975a13*/
  }
  a2[1] = v4; /*0x975a3b*/
LABEL_11:
  if ( -a1[0xE] <= a2[2] ) /*0x975a4d*/
  {
    if ( a1[0xE] < (double)a2[2] ) /*0x975a78*/
    {
      v10 = a2[2] - a1[0xE]; /*0x975a80*/
      *a3 = v10 * v10 + *a3; /*0x975a8a*/
      a2[2] = a1[0xE]; /*0x975a8f*/
    }
  }
  else
  {
    v9 = a1[0xE] + a2[2]; /*0x975a55*/
    *a3 = v9 * v9 + *a3; /*0x975a5f*/
    a2[2] = -a1[0xE]; /*0x975a66*/
  }
}
