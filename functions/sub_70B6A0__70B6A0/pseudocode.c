int __thiscall sub_70B6A0(char *this, unsigned int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  unsigned int i; // ebx
  int v6; // eax
  int v7; // eax
  int (__cdecl *v8)(int, int *, int, int *, int); // edx
  int result; // eax
  int j; // edi
  int v11; // eax
  int v12; // [esp-14h] [ebp-28h]
  int v13; // [esp+Ch] [ebp-8h] BYREF
  int v14; // [esp+10h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2; /*0x70b6a5*/
  sub_708330(this, a2); /*0x70b6ad*/
  a2 = *((unsigned __int16 *)this + 0x5B); /*0x70b6c0*/
  v12 = v2[0x88]; /*0x70b6d1*/
  v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v12 + 8); /*0x70b6d2*/
  v14 = 4; /*0x70b6d5*/
  v4(v12, &a2, 4, &v14, 1); /*0x70b6dd*/
  for ( i = 0; i < a2; ++i ) /*0x70b6e8*/
  {
    if ( *((unsigned __int16 *)this + 0x5B) > i ) /*0x70b6f9*/
      v6 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * i); /*0x70b705*/
    else
      v6 = 0; /*0x70b6fb*/
    (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v6); /*0x70b710*/
  }
  v7 = v2[0x88]; /*0x70b721*/
  v13 = *((_DWORD *)this + 0x32); /*0x70b72e*/
  v8 = *(int (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x70b732*/
  v14 = 4; /*0x70b73d*/
  result = v8(v7, &v13, 4, &v14, 1); /*0x70b745*/
  if ( v13 > 0 ) /*0x70b74f*/
  {
    for ( j = *((_DWORD *)this + 0x31); j; result = (*(int (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v11) ) /*0x70b759*/
    {
      v11 = *(_DWORD *)(j + 8); /*0x70b768*/
      j = *(_DWORD *)(j + 4); /*0x70b76a*/
    }
  }
  return result; /*0x70b776*/
}
