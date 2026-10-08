void __usercall sub_9758C0(
        int a1@<ecx>,
        float *a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7,
        float *a8)
{
  double v8; // st7
  double v9; // st7
  float v10; // [esp+Ch] [ebp+8h]
  float v11; // [esp+Ch] [ebp+8h]
  float v12; // [esp+Ch] [ebp+8h]
  float v13; // [esp+Ch] [ebp+8h]

  *a8 = (*(float *)(a5 + 4 * a6 + 0x30) - *(float *)(a1 + 4 * a6)) / *(float *)(a7 + 4 * a6); /*0x9758dc*/
  *(float *)(a1 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30); /*0x9758e3*/
  v8 = *(float *)(a1 + 4 * a4); /*0x9758e7*/
  if ( -*(float *)(a5 + 4 * a4 + 0x30) <= v8 ) /*0x9758fa*/
  {
    if ( *(float *)(a5 + 4 * a4 + 0x30) >= v8 ) /*0x975921*/
      goto LABEL_6; /*0x975921*/
    v11 = *(float *)(a1 + 4 * a4) - *(float *)(a5 + 4 * a4 + 0x30); /*0x97592a*/
    *a2 = v11 * v11 + *a2; /*0x975936*/
    v9 = *(float *)(a5 + 4 * a4 + 0x30); /*0x975938*/
  }
  else
  {
    v10 = v8 + *(float *)(a5 + 4 * a4 + 0x30); /*0x975900*/
    *a2 = v10 * v10 + *a2; /*0x97590c*/
    v9 = -*(float *)(a5 + 4 * a4 + 0x30); /*0x975912*/
  }
  *(float *)(a1 + 4 * a4) = v9; /*0x97593c*/
LABEL_6:
  if ( -*(float *)(a5 + 4 * a3 + 0x30) <= *(float *)(a1 + 4 * a3) ) /*0x97594f*/
  {
    if ( *(float *)(a5 + 4 * a3 + 0x30) < (double)*(float *)(a1 + 4 * a3) ) /*0x97597e*/
    {
      v13 = *(float *)(a1 + 4 * a3) - *(float *)(a5 + 4 * a3 + 0x30); /*0x975987*/
      *a2 = v13 * v13 + *a2; /*0x975993*/
      *(float *)(a1 + 4 * a3) = *(float *)(a5 + 4 * a3 + 0x30); /*0x975999*/
    }
  }
  else
  {
    v12 = *(float *)(a5 + 4 * a3 + 0x30) + *(float *)(a1 + 4 * a3); /*0x975958*/
    *a2 = v12 * v12 + *a2; /*0x975964*/
    *(float *)(a1 + 4 * a3) = -*(float *)(a5 + 4 * a3 + 0x30); /*0x97596c*/
  }
}
