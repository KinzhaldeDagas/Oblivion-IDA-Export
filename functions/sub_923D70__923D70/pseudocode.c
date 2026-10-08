_BYTE *__cdecl sub_923D70(_BYTE *a1, _DWORD *a2, unsigned int a3, int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ebp
  unsigned int v7; // ebx

  v4 = a2[0x11]; /*0x923d7b*/
  v5 = a3; /*0x923d7f*/
  v6 = a3 + 4 * a4; /*0x923d83*/
  if ( v4 == a2[3] ) /*0x923d89*/
    v4 += 0x80; /*0x923d8b*/
  v7 = a2[4] - 0x10; /*0x923d94*/
  if ( a3 >= v6 ) /*0x923d99*/
  {
LABEL_6:
    *a1 = 1; /*0x923db7*/
    return a1; /*0x923db7*/
  }
  else
  {
    while ( 1 ) /*0x923daa*/
    {
      v4 += (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)v5 + 0x50) + 0x1C))(*(_DWORD *)(*(_DWORD *)v5 + 0x50)); /*0x923daa*/
      if ( v4 > v7 ) /*0x923dae*/
        break; /*0x923dae*/
      v5 += 4; /*0x923db0*/
      if ( v5 >= v6 ) /*0x923db5*/
        goto LABEL_6; /*0x923db5*/
    }
    *a1 = 0; /*0x923dca*/
    return a1; /*0x923dc3*/
  }
}
