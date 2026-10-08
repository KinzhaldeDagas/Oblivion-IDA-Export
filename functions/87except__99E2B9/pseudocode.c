int *__cdecl _87except(DWORD dwExceptionCode, int a2, __int16 *a3)
{
  __int16 v3; // cx
  bool v4; // zf
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  DWORD v11; // ebx
  __int16 v12; // fps
  int *result; // eax
  ULONG_PTR v14; // [esp-18h] [ebp-A8h]
  int v15; // [esp-4h] [ebp-94h]
  int v16; // [esp+Ch] [ebp-84h] BYREF
  int Arguments; // [esp+10h] [ebp-80h] BYREF
  double v18; // [esp+40h] [ebp-50h]
  unsigned int v19; // [esp+50h] [ebp-40h]

  v3 = *a3; /*0x99e2d6*/
  v5 = *(_DWORD *)a2 - 1; /*0x99e2e0*/
  v4 = *(_DWORD *)a2 == 1; /*0x99e2e0*/
  v16 = (unsigned __int16)*a3; /*0x99e2e2*/
  if ( v4 ) /*0x99e2e6*/
    goto LABEL_13; /*0x99e2e6*/
  v6 = v5 - 1; /*0x99e2e8*/
  if ( !v6 ) /*0x99e2e9*/
  {
    v15 = 4; /*0x99e30f*/
    goto LABEL_14; /*0x99e311*/
  }
  v7 = v6 - 1; /*0x99e2eb*/
  if ( !v7 ) /*0x99e2ec*/
  {
    v15 = 0x11; /*0x99e30b*/
    goto LABEL_14; /*0x99e30d*/
  }
  v8 = v7 - 1; /*0x99e2ee*/
  if ( !v8 ) /*0x99e2ef*/
  {
    v15 = 0x12; /*0x99e307*/
    goto LABEL_14; /*0x99e309*/
  }
  v9 = v8 - 1; /*0x99e2f1*/
  if ( !v9 ) /*0x99e2f2*/
  {
LABEL_13:
    v15 = 8; /*0x99e313*/
LABEL_14:
    v11 = v15; /*0x99e315*/
    if ( !_handle_exc(v15, (double *)(a2 + 0x18), v3) ) /*0x99e31c*/
    {
      if ( dwExceptionCode == 0x10 || dwExceptionCode == 0x16 || dwExceptionCode == 0x1D ) /*0x99e338*/
      {
        v18 = *(double *)(a2 + 0x10); /*0x99e34b*/
        v19 = v19 & 0xFFFFFFE0 | 3; /*0x99e352*/
      }
      else
      {
        v19 &= ~1u; /*0x99e33a*/
      }
      HIDWORD(v14) = &v16; /*0x99e361*/
      LODWORD(v14) = &Arguments; /*0x99e366*/
      _raise_exc(v12, v14, v11, dwExceptionCode, (float *)(a2 + 8), (float *)(a2 + 0x18)); /*0x99e367*/
    }
    goto LABEL_21; /*0x99e367*/
  }
  v10 = v9 - 2; /*0x99e2f5*/
  if ( !v10 ) /*0x99e2f6*/
  {
    *(_DWORD *)a2 = 1; /*0x99e2ff*/
    goto LABEL_21; /*0x99e305*/
  }
  if ( v10 == 1 ) /*0x99e2f9*/
  {
    v15 = 0x10; /*0x99e2fb*/
    goto LABEL_14; /*0x99e2fd*/
  }
LABEL_21:
  _ctrlfp(v3); /*0x99e36f*/
  if ( *(_DWORD *)a2 == 8 ) /*0x99e382*/
    return unknown_libname_166(*(_DWORD *)a2); /*0x99e382*/
  if ( dword_B320E8 ) /*0x99e38b*/
    return unknown_libname_166(*(_DWORD *)a2); /*0x99e38b*/
  result = (int *)sub_98A318(); /*0x99e38e*/
  if ( !result ) /*0x99e396*/
    return unknown_libname_166(*(_DWORD *)a2); /*0x99e39a*/
  return result; /*0x99e3a0*/
}
