int (__cdecl *__cdecl sub_8E6630(
        unsigned __int8 *a1,
        float a2,
        int a3,
        _DWORD *a4))(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *)
{
  int (__cdecl *result)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *); // eax

  if ( *a1 == 2 )
  {
LABEL_4:
    result = *(int (__cdecl **)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *))(0x34 * a1[1] + *a4 + 0x16B4);
    if ( result )
      return (int (__cdecl *)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *))result(
                                                                                             a1,
                                                                                             a1 + 0x20,
                                                                                             LODWORD(a2),
                                                                                             a3,
                                                                                             a4);
    return result;
  }
  if ( *a1 != 4 )
  {
    result = (int (__cdecl *)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *))(*a1 - 6);
    if ( *a1 != 6 )
      return result;
    goto LABEL_4;
  }
  if ( *((float *)a1 + 7) == a2 )
    *((_DWORD *)a1 + 7) = a3;
  else
    *((_DWORD *)a1 + 7) = 0xBF800000;
  result = *(int (__cdecl **)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *))(0x34 * a1[1] + *a4 + 0x16B4);
  if ( result )
    return (int (__cdecl *)(unsigned __int8 *, unsigned __int8 *, _DWORD, int, _DWORD *))result(
                                                                                           a1,
                                                                                           a1 + 0x30,
                                                                                           LODWORD(a2),
                                                                                           a3,
                                                                                           a4);
  return result;
}
