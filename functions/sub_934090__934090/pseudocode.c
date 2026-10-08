_BYTE *__cdecl sub_934090(_DWORD *a1, int a2, int a3)
{
  _BYTE *v3; // edi

  v3 = (_BYTE *)a2; /*0x93409f*/
  if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1[3] + 4))( /*0x9340bd*/
                   *(_DWORD *)(a1[3] + 4),
                   &a2,
                   a1[3],
                   *a1,
                   a1[1],
                   a1[2],
                   *(_DWORD *)(a2 + 8))
    || !*v3 )
  {
    return &v3[(unsigned __int8)v3[3]]; /*0x9340c5*/
  }
  (*(void (__cdecl **)(_BYTE *, int, _DWORD))(0x34 * (unsigned __int8)v3[1] + *(_DWORD *)a1[3] + 0x1698))(v3, a3, a1[4]); /*0x9340e5*/
  return v3; /*0x9340c7*/
}
