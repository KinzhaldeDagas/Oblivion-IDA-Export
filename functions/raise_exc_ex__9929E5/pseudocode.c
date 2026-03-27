unsigned int __cdecl _raise_exc_ex(ULONG_PTR Arguments, DWORD dwExceptionCode, int a3, float *a4, float *a5, int a6)
{
  char v6; // cl
  unsigned int *v7; // esi
  char v8; // al
  int v9; // eax
  unsigned int *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int *v13; // eax
  unsigned int v14; // ecx
  float *v15; // edi
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int result; // eax

  v6 = dwExceptionCode;
  *(_DWORD *)(Arguments + 4) = 0;
  *(_DWORD *)(Arguments + 8) = 0;
  *(_DWORD *)(Arguments + 0xC) = 0;
  if ( (v6 & 0x10) != 0 )
  {
    *(_DWORD *)(Arguments + 4) |= 1u;
    dwExceptionCode = 0xC000008F;
  }
  if ( (v6 & 2) != 0 )
  {
    *(_DWORD *)(Arguments + 4) |= 2u;
    dwExceptionCode = 0xC0000093;
  }
  if ( (v6 & 1) != 0 )
  {
    *(_DWORD *)(Arguments + 4) |= 4u;
    dwExceptionCode = 0xC0000091;
  }
  if ( (v6 & 4) != 0 )
  {
    *(_DWORD *)(Arguments + 4) |= 8u;
    dwExceptionCode = 0xC000008E;
  }
  if ( (v6 & 8) != 0 )
  {
    *(_DWORD *)(Arguments + 4) |= 0x10u;
    dwExceptionCode = 0xC0000090;
  }
  v7 = (unsigned int *)HIDWORD(Arguments);
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(0x10 * *(_DWORD *)HIDWORD(Arguments))) & 0x10;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(2 * *v7)) & 8;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v7 >> 1)) & 4;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v7 >> 3)) & 2;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v7 >> 5)) & 1;
  v8 = _statfp();
  if ( (v8 & 1) != 0 )
    *(_DWORD *)(Arguments + 0xC) |= 0x10u;
  if ( (v8 & 4) != 0 )
    *(_DWORD *)(Arguments + 0xC) |= 8u;
  if ( (v8 & 8) != 0 )
    *(_DWORD *)(Arguments + 0xC) |= 4u;
  if ( (v8 & 0x10) != 0 )
    *(_DWORD *)(Arguments + 0xC) |= 2u;
  if ( (v8 & 0x20) != 0 )
    *(_DWORD *)(Arguments + 0xC) |= 1u;
  v9 = *v7 & 0xC00;
  switch ( v9 )
  {
    case 0:
      *(_DWORD *)Arguments &= 0xFFFFFFFC;
      break;
    case 0x400:
      v10 = (unsigned int *)Arguments;
      v11 = *(_DWORD *)Arguments & 0xFFFFFFFC | 1;
      goto LABEL_27;
    case 0x800:
      v10 = (unsigned int *)Arguments;
      v11 = *(_DWORD *)Arguments & 0xFFFFFFFC | 2;
LABEL_27:
      *v10 = v11;
      break;
    case 0xC00:
      *(_DWORD *)Arguments |= 3u;
      break;
  }
  v12 = *v7 & 0x300;
  switch ( v12 )
  {
    case 0:
      v13 = (unsigned int *)Arguments;
      v14 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 8;
      goto LABEL_36;
    case 0x200:
      v13 = (unsigned int *)Arguments;
      v14 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 4;
LABEL_36:
      *v13 = v14;
      break;
    case 0x300:
      *(_DWORD *)Arguments &= 0xFFFFFFE3;
      break;
  }
  *(_DWORD *)Arguments ^= (*(_DWORD *)Arguments ^ (0x20 * a3)) & 0x1FFE0;
  *(_DWORD *)(Arguments + 0x20) |= 1u;
  v15 = a5;
  if ( a6 )
  {
    *(_DWORD *)(Arguments + 0x20) &= 0xFFFFFFE1;
    *(float *)(Arguments + 0x10) = *a4;
    *(_DWORD *)(Arguments + 0x60) |= 1u;
    *(_DWORD *)(Arguments + 0x60) &= 0xFFFFFFE1;
    *(float *)(Arguments + 0x50) = *v15;
  }
  else
  {
    *(_DWORD *)(Arguments + 0x20) = *(_DWORD *)(Arguments + 0x20) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 0x10) = *(double *)a4;
    *(_DWORD *)(Arguments + 0x60) |= 1u;
    *(_DWORD *)(Arguments + 0x60) = *(_DWORD *)(Arguments + 0x60) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 0x50) = *(double *)v15;
  }
  _clrfp();
  RaiseException(dwExceptionCode, 0, 1u, &Arguments);
  v16 = Arguments;
  if ( (*(_BYTE *)(Arguments + 8) & 0x10) != 0 )
    *v7 &= ~1u;
  if ( (*(_BYTE *)(v16 + 8) & 8) != 0 )
    *v7 &= ~4u;
  if ( (*(_BYTE *)(v16 + 8) & 4) != 0 )
    *v7 &= ~8u;
  if ( (*(_BYTE *)(v16 + 8) & 2) != 0 )
    *v7 &= ~0x10u;
  if ( (*(_BYTE *)(v16 + 8) & 1) != 0 )
    *v7 &= ~0x20u;
  v17 = *(_DWORD *)v16 & 3;
  if ( !v17 )
  {
    *v7 &= 0xFFFFF3FF;
    goto LABEL_59;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v20 = *v7 & 0xFFFFF3FF | 0x400;
    goto LABEL_56;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v20 = *v7 & 0xFFFFF3FF | 0x800;
LABEL_56:
    *v7 = v20;
    goto LABEL_59;
  }
  if ( v19 == 1 )
    *v7 |= 0xC00u;
LABEL_59:
  v21 = (*(_DWORD *)v16 >> 2) & 7;
  if ( !v21 )
  {
    result = *v7 & 0xFFFFF0FF | 0x300;
    goto LABEL_65;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    result = *v7 & 0xFFFFF1FF | 0x200;
LABEL_65:
    *v7 = result;
    goto LABEL_66;
  }
  result = v22 - 1;
  if ( !result )
    *v7 &= 0xFFFFF3FF;
LABEL_66:
  if ( a6 )
    *v15 = *(float *)(v16 + 0x50);
  else
    *(double *)v15 = *(double *)(v16 + 0x50);
  return result;
}
