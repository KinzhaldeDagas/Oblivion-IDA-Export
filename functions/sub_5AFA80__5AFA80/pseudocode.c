void __thiscall sub_5AFA80(char *this)
{
  InputGlobal *input; // edi
  LONG MouseAxisMovement; // ebx
  int v4; // edi
  double v5; // st7
  int *v6; // ecx
  double v7; // st7
  double v8; // st6
  double v9; // st7
  bool v10; // sf
  double v11; // st6
  double v12; // st5
  double v13; // st7
  double v14; // st6
  double v15; // st6
  float a2; // [esp+0h] [ebp-14h]
  float v17; // [esp+10h] [ebp-4h]
  float v18; // [esp+10h] [ebp-4h]
  float v19; // [esp+10h] [ebp-4h]
  float v20; // [esp+10h] [ebp-4h]
  float v21; // [esp+10h] [ebp-4h]
  float v22; // [esp+10h] [ebp-4h]
  float v23; // [esp+10h] [ebp-4h]

  input = MEMORY[0xB33398]->input; /*0x5afa89*/
  InputGlobals::GetMouseAxisMovement(input, 1); /*0x5afa92*/
  MouseAxisMovement = InputGlobals::GetMouseAxisMovement(input, 2); /*0x5afaa0*/
  v4 = 0x64; /*0x5afaa8*/
  if ( (unsigned int)(*((_DWORD *)this + 0x10) - *((_DWORD *)this + 0x11)) <= 0x64 ) /*0x5afab0*/
    v4 = *((_DWORD *)this + 0x10) - *((_DWORD *)this + 0x11); /*0x5afab2*/
  v5 = 0.0; /*0x5afab4*/
  if ( 0.0 == *((float *)this + 0x56) && 0.0 == *((float *)this + 0x53) ) /*0x5afad2*/
  {
    v6 = (int *)(this + 0x28 * *((_DWORD *)this + 0x58) + 0x98); /*0x5afaea*/
    v17 = (double)*v6 - *((float *)this + 0x52); /*0x5afaf7*/
    v18 = fabs(v17); /*0x5afb01*/
    if ( v18 <= (double)flt_A46B10 ) /*0x5afb18*/
    {
      if ( v18 <= 1.0 ) /*0x5afb9f*/
      {
        *(this + 0x170) = 1; /*0x5afc2f*/
        goto LABEL_20; /*0x5afc2f*/
      }
      v13 = *((float *)this + 0x52); /*0x5afba5*/
      *(this + 0x170) = 0; /*0x5afbab*/
      if ( (double)*v6 > v13 ) /*0x5afbbb*/
      {
        v7 = ((double)*((int *)this + 0x30) - (double)*((int *)this + 0x26)) / dbl_A6C820; /*0x5afbd1*/
        v8 = (double)v4; /*0x5afbd7*/
        if ( v4 < 0 ) /*0x5afbdb*/
        {
          *((float *)this + 0x52) = v7 * (v8 + flt_A2FC78) + *((float *)this + 0x52); /*0x5afbef*/
          goto LABEL_20; /*0x5afbf5*/
        }
LABEL_9:
        *((float *)this + 0x52) = v7 * v8 + *((float *)this + 0x52); /*0x5afb5a*/
LABEL_20:
        Tile_SetFloat(*((Tile **)this + 0x5E), 0xFB0u, *((float *)this + 0x52)); /*0x5afc36*/
        v5 = 0.0; /*0x5afc50*/
        goto LABEL_21; /*0x5afc50*/
      }
      v9 = *((float *)this + 0x52); /*0x5afbf7*/
      v10 = v4 < 0; /*0x5afc09*/
      v11 = ((double)*((int *)this + 0x30) - (double)*((int *)this + 0x26)) / dbl_A6C820; /*0x5afc11*/
      v12 = (double)v4; /*0x5afc17*/
    }
    else
    {
      *(this + 0x170) = 0; /*0x5afb1c*/
      if ( (double)*v6 > *((float *)this + 0x52) ) /*0x5afb32*/
      {
        v7 = ((double)*((int *)this + 0x30) - (double)*((int *)this + 0x26)) / dbl_A3DDE0; /*0x5afb48*/
        v8 = (double)v4; /*0x5afb4e*/
        if ( v4 < 0 ) /*0x5afb52*/
          v8 = v8 + flt_A2FC78; /*0x5afb54*/
        goto LABEL_9; /*0x5afb54*/
      }
      v9 = *((float *)this + 0x52); /*0x5afb6d*/
      v10 = v4 < 0; /*0x5afb7f*/
      v11 = ((double)*((int *)this + 0x30) - (double)*((int *)this + 0x26)) / dbl_A3DDE0; /*0x5afb87*/
      v12 = (double)v4; /*0x5afb8d*/
    }
    if ( v10 ) /*0x5afc1b*/
      v12 = v12 + flt_A2FC78; /*0x5afc1d*/
    *((float *)this + 0x52) = v9 - v11 * v12; /*0x5afc27*/
    goto LABEL_20; /*0x5afc2d*/
  }
LABEL_21:
  if ( MouseAxisMovement < (int)0xFFFFFFFD /*0x5afc97*/
    && v5 == *((float *)this + 0x56)
    && (v19 = *((float *)this + 0x52) - (double)*((int *)this + 0xA * *((_DWORD *)this + 0x58) + 0x26),
        v20 = fabs(v19),
        v20 <= (double)*(float *)&dword_A46C30) )
  {
    *((float *)this + 0x56) = *((float *)this + 0x55); /*0x5afca1*/
  }
  else
  {
    v14 = (double)v4; /*0x5afcaf*/
    if ( v4 < 0 ) /*0x5afcb3*/
      v14 = v14 + flt_A2FC78; /*0x5afcb5*/
    v21 = v14; /*0x5afcbb*/
    v15 = v21; /*0x5afccd*/
    v22 = *((float *)this + 0x56) - *((float *)this + 0x57) * v21; /*0x5afcd5*/
    *((float *)this + 0x56) = v22; /*0x5afcdd*/
    v23 = v15 * v22 + *((float *)this + 0x53); /*0x5afceb*/
    *((float *)this + 0x53) = v23; /*0x5afcf3*/
    if ( v23 < v5 ) /*0x5afd00*/
    {
      *((float *)this + 0x56) = v5; /*0x5afd02*/
      *((float *)this + 0x53) = v5; /*0x5afd08*/
    }
  }
  a2 = (float)(0x122 - Double_To_SInt32(*((float *)this + 0x53))); /*0x5afd33*/
  Tile_SetFloat(*((Tile **)this + 0x5E), 0xFB1u, a2); /*0x5afd3b*/
}
