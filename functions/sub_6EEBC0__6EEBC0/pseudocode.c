void __thiscall __noreturn sub_6EEBC0(_DWORD *this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  char *v10; // edi
  int v11; // eax
  unsigned int *v12; // eax
  _DWORD *v13; // ecx
  char *v14; // ecx
  _DWORD v15[6]; // [esp+0h] [ebp-68h] BYREF
  char *v16; // [esp+18h] [ebp-50h]
  unsigned int v17; // [esp+1Ch] [ebp-4Ch]
  int v18[3]; // [esp+20h] [ebp-48h] BYREF
  unsigned int v19; // [esp+2Ch] [ebp-3Ch]
  unsigned int v20; // [esp+3Ch] [ebp-2Ch]
  int v21; // [esp+4Ch] [ebp-1Ch]
  unsigned int v22; // [esp+50h] [ebp-18h]
  _DWORD *v23; // [esp+58h] [ebp-10h]
  int v24; // [esp+64h] [ebp-4h]

  v23 = v15; /*0x6eebeb*/
  v16 = (char *)this; /*0x6eebf7*/
  sub_6EDC20(v18, a5); /*0x6eebfa*/
  v6 = *(this + 1); /*0x6eebff*/
  v7 = 0; /*0x6eec02*/
  v24 = 0; /*0x6eec06*/
  if ( v6 ) /*0x6eec09*/
    v7 = (*(this + 3) - v6) / 0x34; /*0x6eec1f*/
  if ( a4 ) /*0x6eec26*/
  {
    if ( v6 ) /*0x6eec2e*/
      v8 = (*(this + 2) - v6) / 0x34; /*0x6eec48*/
    else
      v8 = 0; /*0x6eec30*/
    if ( 0x4EC4EC4 - v8 < a4 ) /*0x6eec53*/
      OB_stVector_ThrowLengthError_010201A0(v7); /*0x6eec55*/
    if ( v6 ) /*0x6eec5c*/
      v9 = (*(this + 2) - v6) / 0x34; /*0x6eec76*/
    else
      v9 = 0; /*0x6eec5e*/
    if ( v7 < a4 + v9 ) /*0x6eec7c*/
    {
      if ( 0x4EC4EC4 - (v7 >> 1) >= v7 ) /*0x6eec8f*/
        v10 = (char *)((v7 >> 1) + v7); /*0x6eec95*/
      else
        v10 = 0; /*0x6eec91*/
      if ( v6 ) /*0x6eec99*/
        v11 = (*(this + 2) - v6) / 0x34; /*0x6eecb3*/
      else
        v11 = 0; /*0x6eec9b*/
      if ( (unsigned int)v10 < a4 + v11 ) /*0x6eecb9*/
        v10 = (char *)(a4 + sub_54F6A0(this)); /*0x6eecc4*/
      v12 = sub_54F740(v10); /*0x6eecc9*/
      v13 = (_DWORD *)*(this + 1); /*0x6eecce*/
      LOBYTE(v17) = 0; /*0x6eecd1*/
      v15[4] = v12; /*0x6eecdf*/
      v15[5] = v12; /*0x6eece2*/
      LOBYTE(v24) = 1; /*0x6eecea*/
      sub_6EE1C0(v13, a3, v12); /*0x6eecee*/
    }
    v14 = (char *)*(this + 2); /*0x6eeda6*/
    v17 = (unsigned int)v14; /*0x6eedc3*/
    if ( (v14 - a3) / 0x34 < a4 ) /*0x6eedc6*/
    {
      v17 = 0x34 * a4; /*0x6eedd1*/
      sub_6EEB90(a3, v14, (unsigned int *)&a3[0x34 * a4]); /*0x6eeddb*/
    }
    v16 = &v14[0xFFFFFFCC * a4]; /*0x6eee5c*/
    sub_6EEB90(v16, v14, (unsigned int *)v14); /*0x6eee5f*/
  }
  if ( v22 >= 0x10 ) /*0x6eee89*/
    FormHeapFree(v20); /*0x6eee8f*/
  v22 = 0xF; /*0x6eee9c*/
  v21 = 0; /*0x6eeea3*/
  LOBYTE(v20) = 0; /*0x6eeeaa*/
  if ( v19 ) /*0x6eeeae*/
    FormHeapFree(v19); /*0x6eeeb1*/
}
