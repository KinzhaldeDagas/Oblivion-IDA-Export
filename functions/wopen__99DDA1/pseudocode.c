int _wopen(const wchar_t *lpFileName, int a2, ...)
{
  int v2; // ebx
  int v3; // edi
  int v5; // eax
  _BYTE *v6; // eax
  int v7; // [esp+10h] [ebp-24h]
  int v8; // [esp+14h] [ebp-20h] BYREF
  int v9; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]
  int v11; // [esp+44h] [ebp+10h]
  va_list va; // [esp+48h] [ebp+14h] BYREF

  va_start(va, a2);
  v11 = va_arg(va, _DWORD); /*0x99dda1*/
  v9 = 0xFFFFFFFF; /*0x99ddad*/
  v8 = 0; /*0x99ddb3*/
  if ( !lpFileName ) /*0x99ddc0*/
  {
    *_errno() = 0x16; /*0x99ddc7*/
    _invalid_parameter(v2, v3, 0); /*0x99ddd2*/
    return 0xFFFFFFFF; /*0x99dddd*/
  }
  ms_exc.registration.TryLevel = 0; /*0x99dddf*/
  _tsopen_nolock(&v9, &v8, (LPCSTR)lpFileName, a2, 0x40, v11); /*0x99ddf4*/
  v7 = v5; /*0x99ddfc*/
  ms_exc.registration.TryLevel = 0xFFFFFFFE; /*0x99ddff*/
  if ( v8 ) /*0x99de20*/
  {
    if ( v5 ) /*0x99de25*/
    {
      v6 = (_BYTE *)(unk_BAAAC0[v9 >> 5] + 0x28 * (v9 & 0x1F) + 4); /*0x99de3d*/
      *v6 &= ~1u; /*0x99de41*/
    }
    _unlock_fhandle(v9); /*0x99de47*/
  }
  if ( v7 ) /*0x99de10*/
  {
    *_errno() = v7; /*0x99de17*/
    return 0xFFFFFFFF; /*0x99de19*/
  }
  return v9; /*0x99de51*/
}
