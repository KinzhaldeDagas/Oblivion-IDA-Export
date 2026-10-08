_DWORD *__thiscall sub_719AF0(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // ecx
  int v6; // esi
  _DWORD *result; // eax
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  v5 = (_DWORD *)*(this + 0x2D); /*0x719af0*/
  v6 = v5[7]; /*0x719aff*/
  (*(void (__stdcall **)(int, int *, int *, int *))(*v5 + 0x60))(a2, &a2, &v8, &v9); /*0x719b16*/
  *a3 = v6 + 0xC * (unsigned __int16)a2; /*0x719b27*/
  *a4 = v6 + 0xC * (unsigned __int16)v8; /*0x719b38*/
  result = a5; /*0x719b42*/
  *a5 = v6 + 0xC * (unsigned __int16)v9; /*0x719b49*/
  return result; /*0x719b4b*/
}
