int __usercall _raise_exc_ex@<eax>(
        __int16 a1@<fpstat>,
        ULONG_PTR Arguments,
        DWORD dwExceptionCode,
        int a4,
        float *a5,
        float *a6,
        int a7)
{
  char v7; // cl
  unsigned int *v8; // esi
  char v9; // al
  int v10; // eax
  unsigned int *v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int *v14; // eax
  unsigned int v15; // ecx
  float *v16; // edi
  __int16 v17; // fps
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  int v24; // eax
  int result; // eax

  v7 = dwExceptionCode; /*0x9929eb*/
  *(_DWORD *)(Arguments + 4) = 0; /*0x9929f3*/
  *(_DWORD *)(Arguments + 8) = 0; /*0x9929fb*/
  *(_DWORD *)(Arguments + 0xC) = 0; /*0x992a05*/
  if ( (v7 & 0x10) != 0 ) /*0x992a08*/
  {
    *(_DWORD *)(Arguments + 4) |= 1u; /*0x992a0d*/
    dwExceptionCode = 0xC000008F; /*0x992a10*/
  }
  if ( (v7 & 2) != 0 ) /*0x992a1a*/
  {
    *(_DWORD *)(Arguments + 4) |= 2u; /*0x992a1f*/
    dwExceptionCode = 0xC0000093; /*0x992a23*/
  }
  if ( (v7 & 1) != 0 ) /*0x992a2c*/
  {
    *(_DWORD *)(Arguments + 4) |= 4u; /*0x992a31*/
    dwExceptionCode = 0xC0000091; /*0x992a35*/
  }
  if ( (v7 & 4) != 0 ) /*0x992a3f*/
  {
    *(_DWORD *)(Arguments + 4) |= 8u; /*0x992a44*/
    dwExceptionCode = 0xC000008E; /*0x992a48*/
  }
  if ( (v7 & 8) != 0 ) /*0x992a52*/
  {
    *(_DWORD *)(Arguments + 4) |= 0x10u; /*0x992a57*/
    dwExceptionCode = 0xC0000090; /*0x992a5b*/
  }
  v8 = (unsigned int *)HIDWORD(Arguments); /*0x992a62*/
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(0x10 * *(_DWORD *)HIDWORD(Arguments))) & 0x10; /*0x992a75*/
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(2 * *v8)) & 8; /*0x992a87*/
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v8 >> 1)) & 4; /*0x992a99*/
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v8 >> 3)) & 2; /*0x992aac*/
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v8 >> 5)) & 1; /*0x992abe*/
  v9 = _statfp(a1); /*0x992ac1*/
  if ( (v9 & 1) != 0 ) /*0x992ac8*/
    *(_DWORD *)(Arguments + 0xC) |= 0x10u; /*0x992acd*/
  if ( (v9 & 4) != 0 ) /*0x992ad3*/
    *(_DWORD *)(Arguments + 0xC) |= 8u; /*0x992ad8*/
  if ( (v9 & 8) != 0 ) /*0x992ade*/
    *(_DWORD *)(Arguments + 0xC) |= 4u; /*0x992ae3*/
  if ( (v9 & 0x10) != 0 ) /*0x992ae9*/
    *(_DWORD *)(Arguments + 0xC) |= 2u; /*0x992aee*/
  if ( (v9 & 0x20) != 0 ) /*0x992af4*/
    *(_DWORD *)(Arguments + 0xC) |= 1u; /*0x992af9*/
  v10 = *v8 & 0xC00; /*0x992b03*/
  switch ( v10 ) /*0x992b05*/
  {
    case 0: /*0x992b05*/
      *(_DWORD *)Arguments &= 0xFFFFFFFC; /*0x992b3f*/
      break; /*0x992b3f*/
    case 0x400: /*0x992b05*/
      v11 = (unsigned int *)Arguments; /*0x992b30*/
      v12 = *(_DWORD *)Arguments & 0xFFFFFFFC | 1; /*0x992b38*/
      goto LABEL_27; /*0x992b3a*/
    case 0x800: /*0x992b05*/
      v11 = (unsigned int *)Arguments; /*0x992b21*/
      v12 = *(_DWORD *)Arguments & 0xFFFFFFFC | 2; /*0x992b29*/
LABEL_27:
      *v11 = v12; /*0x992b2c*/
      break; /*0x992b2e*/
    case 0xC00: /*0x992b05*/
      *(_DWORD *)Arguments |= 3u; /*0x992b1c*/
      break;
  }
  v13 = *v8 & 0x300; /*0x992b42*/
  switch ( v13 ) /*0x992b4b*/
  {
    case 0: /*0x992b4b*/
      v14 = (unsigned int *)Arguments; /*0x992b6d*/
      v15 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 8; /*0x992b75*/
      goto LABEL_36; /*0x992b75*/
    case 0x200: /*0x992b4b*/
      v14 = (unsigned int *)Arguments; /*0x992b60*/
      v15 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 4; /*0x992b68*/
LABEL_36:
      *v14 = v15; /*0x992b78*/
      break; /*0x992b78*/
    case 0x300: /*0x992b4b*/
      *(_DWORD *)Arguments &= 0xFFFFFFE3; /*0x992b5b*/
      break;
  }
  *(_DWORD *)Arguments ^= (*(_DWORD *)Arguments ^ (0x20 * a4)) & 0x1FFE0; /*0x992b7a*/
  *(_DWORD *)(Arguments + 0x20) |= 1u; /*0x992b90*/
  v16 = a6; /*0x992b99*/
  if ( a7 ) /*0x992b9c*/
  {
    *(_DWORD *)(Arguments + 0x20) &= 0xFFFFFFE1; /*0x992b9e*/
    *(float *)(Arguments + 0x10) = *a5; /*0x992baa*/
    *(_DWORD *)(Arguments + 0x60) |= 1u; /*0x992bb0*/
    *(_DWORD *)(Arguments + 0x60) &= 0xFFFFFFE1; /*0x992bb6*/
    *(float *)(Arguments + 0x50) = *v16; /*0x992bbf*/
  }
  else
  {
    *(_DWORD *)(Arguments + 0x20) = *(_DWORD *)(Arguments + 0x20) & 0xFFFFFFE1 | 2; /*0x992bcd*/
    *(double *)(Arguments + 0x10) = *(double *)a5; /*0x992bd8*/
    *(_DWORD *)(Arguments + 0x60) |= 1u; /*0x992bde*/
    *(_DWORD *)(Arguments + 0x60) = *(_DWORD *)(Arguments + 0x60) & 0xFFFFFFE1 | 2; /*0x992bed*/
    *(double *)(Arguments + 0x50) = *(double *)v16; /*0x992bf5*/
  }
  _clrfp(v17); /*0x992bf8*/
  RaiseException(dwExceptionCode, 0, 1u, &Arguments); /*0x992c07*/
  v18 = Arguments; /*0x992c0d*/
  if ( (*(_BYTE *)(Arguments + 8) & 0x10) != 0 ) /*0x992c14*/
    *v8 &= ~1u; /*0x992c16*/
  if ( (*(_BYTE *)(v18 + 8) & 8) != 0 ) /*0x992c1d*/
    *v8 &= ~4u; /*0x992c1f*/
  if ( (*(_BYTE *)(v18 + 8) & 4) != 0 ) /*0x992c26*/
    *v8 &= ~8u; /*0x992c28*/
  if ( (*(_BYTE *)(v18 + 8) & 2) != 0 ) /*0x992c2f*/
    *v8 &= ~0x10u; /*0x992c31*/
  if ( (*(_BYTE *)(v18 + 8) & 1) != 0 ) /*0x992c37*/
    *v8 &= ~0x20u; /*0x992c39*/
  v19 = *(_DWORD *)v18 & 3; /*0x992c3e*/
  if ( !v19 ) /*0x992c4a*/
  {
    *v8 &= 0xFFFFF3FF; /*0x992c7b*/
    goto LABEL_59; /*0x992c7b*/
  }
  v20 = v19 - 1; /*0x992c4c*/
  if ( !v20 ) /*0x992c4d*/
  {
    v22 = *v8 & 0xFFFFF3FF | 0x400; /*0x992c74*/
    goto LABEL_56; /*0x992c79*/
  }
  v21 = v20 - 1; /*0x992c4f*/
  if ( !v21 ) /*0x992c50*/
  {
    v22 = *v8 & 0xFFFFF3FF | 0x800; /*0x992c64*/
LABEL_56:
    *v8 = v22; /*0x992c69*/
    goto LABEL_59; /*0x992c6b*/
  }
  if ( v21 == 1 ) /*0x992c53*/
    *v8 |= 0xC00u; /*0x992c55*/
LABEL_59:
  v23 = (*(_DWORD *)v18 >> 2) & 7; /*0x992c7d*/
  if ( !v23 ) /*0x992c87*/
  {
    result = *v8 & 0xFFFFF0FF | 0x300; /*0x992ca2*/
    goto LABEL_65; /*0x992ca2*/
  }
  v24 = v23 - 1; /*0x992c89*/
  if ( !v24 ) /*0x992c8a*/
  {
    result = *v8 & 0xFFFFF1FF | 0x200; /*0x992c97*/
LABEL_65:
    *v8 = result; /*0x992ca7*/
    goto LABEL_66; /*0x992ca7*/
  }
  result = v24 - 1; /*0x992c8c*/
  if ( !result ) /*0x992c8d*/
    *v8 &= 0xFFFFF3FF; /*0x992c8f*/
LABEL_66:
  if ( a7 ) /*0x992cac*/
    *v16 = *(float *)(v18 + 0x50); /*0x992cb1*/
  else
    *(double *)v16 = *(double *)(v18 + 0x50); /*0x992cb8*/
  return result; /*0x992cba*/
}
