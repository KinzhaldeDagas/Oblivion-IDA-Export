int (__cdecl *__cdecl sub_8E6630(
        unsigned __int8 *a1,
        float a2,
        int a3,
        _DWORD *a4))(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *)
{
  int (__cdecl *result)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *); // eax

  if ( *a1 == 2 ) /*0x8e663b*/
  {
LABEL_4:
    result = *(int (__cdecl **)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *))(0x34 * a1[1] + *a4 + 0x16B4); /*0x8e6647*/
    if ( result ) /*0x8e665d*/
      return (int (__cdecl *)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *))result( /*0x8e666f*/
                                                                                             a1,
                                                                                             a1 + 0x20,
                                                                                             LODWORD(a2),
                                                                                             a3,
                                                                                             a4);
    return result; /*0x8e666f*/
  }
  if ( *a1 != 4 ) /*0x8e6640*/
  {
    result = (int (__cdecl *)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *))(*a1 - 6); /*0x8e6642*/
    if ( *a1 != 6 ) /*0x8e6645*/
      return result; /*0x8e6645*/
    goto LABEL_4; /*0x8e6645*/
  }
  if ( *((float *)a1 + 7) == a2 ) /*0x8e6687*/
    *((_DWORD *)a1 + 7) = a3; /*0x8e668d*/
  else
    *((_DWORD *)a1 + 7) = 0xBF800000; /*0x8e6692*/
  result = *(int (__cdecl **)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *))(0x34 * a1[1] + *a4 + 0x16B4); /*0x8e66a7*/
  if ( result ) /*0x8e66b1*/
    return (int (__cdecl *)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *))result( /*0x8e66c0*/
                                                                                           a1,
                                                                                           a1 + 0x30,
                                                                                           LODWORD(a2),
                                                                                           a3,
                                                                                           a4);
  return result; /*0x8e6674*/
}
