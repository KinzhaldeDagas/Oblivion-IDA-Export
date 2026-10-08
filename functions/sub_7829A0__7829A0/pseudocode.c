int __thiscall sub_7829A0(_DWORD *this, unsigned int a2, _DWORD *a3, _DWORD *a4, char a5, char a6)
{
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // ecx

  if ( *(this + 2) < a2 ) /*0x7829ac*/
  {
    v7 = *(this + 4); /*0x7829ae*/
    if ( v7 ) /*0x7829b3*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(*(this + 4)); /*0x7829bb*/
    *(this + 4) = 0; /*0x7829c0*/
    v8 = a2; /*0x7829c7*/
    if ( (a2 & 0xF) != 0 ) /*0x7829c9*/
      v8 = (a2 & 0xFFFFFFF0) + 0x20; /*0x7829ce*/
    *(this + 2) = v8; /*0x7829d1*/
  }
  if ( !*(this + 4) ) /*0x7829d4*/
  {
    v9 = 0x208; /*0x7829e2*/
    if ( a6 ) /*0x7829e7*/
      v9 = 0x218; /*0x7829e9*/
    if ( (*(int (__stdcall **)(_DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)*(this + 3) + 0x68))( /*0x782a0b*/
           *(this + 3),
           *(this + 2),
           v9,
           *(this + 1),
           0,
           this + 4,
           0) >= 0 )
      *(this + 5) = 0; /*0x782a0d*/
  }
  if ( a5 || (v10 = *(this + 5), *(this + 2) - v10 < a2) ) /*0x782a25*/
  {
    v11 = a3; /*0x782a3c*/
    v12 = a4; /*0x782a40*/
    *a3 = 0; /*0x782a44*/
    *(this + 5) = a2; /*0x782a4a*/
    *a4 = 0x2000; /*0x782a4d*/
  }
  else
  {
    v11 = a3; /*0x782a27*/
    *a3 = v10; /*0x782a2b*/
    v12 = a4; /*0x782a2d*/
    *(this + 5) += a2; /*0x782a31*/
    *a4 = 0x1000; /*0x782a34*/
  }
  if ( !*v11 ) /*0x782a53*/
    *v12 = 0x2000; /*0x782a58*/
  return *(this + 4); /*0x782a60*/
}
