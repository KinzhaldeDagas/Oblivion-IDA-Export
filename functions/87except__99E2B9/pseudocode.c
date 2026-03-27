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
  int *result; // eax
  ULONG_PTR v13; // [esp-18h] [ebp-A8h]
  int v14; // [esp-4h] [ebp-94h]
  int v15; // [esp+Ch] [ebp-84h] BYREF
  int Arguments; // [esp+10h] [ebp-80h] BYREF
  double v17; // [esp+40h] [ebp-50h]
  unsigned int v18; // [esp+50h] [ebp-40h]

  v3 = *a3;
  v5 = *(_DWORD *)a2 - 1;
  v4 = *(_DWORD *)a2 == 1;
  v15 = (unsigned __int16)*a3;
  if ( v4 )
    goto LABEL_13;
  v6 = v5 - 1;
  if ( !v6 )
  {
    v14 = 4;
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v14 = 0x11;
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v14 = 0x12;
    goto LABEL_14;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_13:
    v14 = 8;
LABEL_14:
    v11 = v14;
    if ( !_handle_exc(v14, (double *)(a2 + 0x18), v3) )
    {
      if ( dwExceptionCode == 0x10 || dwExceptionCode == 0x16 || dwExceptionCode == 0x1D )
      {
        v17 = *(double *)(a2 + 0x10);
        v18 = v18 & 0xFFFFFFE0 | 3;
      }
      else
      {
        v18 &= ~1u;
      }
      HIDWORD(v13) = &v15;
      LODWORD(v13) = &Arguments;
      _raise_exc(v13, v11, dwExceptionCode, (float *)(a2 + 8), (float *)(a2 + 0x18));
    }
    goto LABEL_21;
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    *(_DWORD *)a2 = 1;
    goto LABEL_21;
  }
  if ( v10 == 1 )
  {
    v14 = 0x10;
    goto LABEL_14;
  }
LABEL_21:
  _ctrlfp(v3);
  if ( *(_DWORD *)a2 == 8 )
    return unknown_libname_166(*(_DWORD *)a2);
  if ( dword_B320E8 )
    return unknown_libname_166(*(_DWORD *)a2);
  result = (int *)sub_98A318();
  if ( !result )
    return unknown_libname_166(*(_DWORD *)a2);
  return result;
}
