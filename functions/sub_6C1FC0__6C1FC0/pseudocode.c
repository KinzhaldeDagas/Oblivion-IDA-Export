int __cdecl sub_6C1FC0(float a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // eax

  if ( a1 >= 1.0 ) /*0x6c1fd3*/
    a2 = a3; /*0x6c1fd5*/
  *a4 = a2[1]; /*0x6c1fdc*/
  a4[1] = a2[2]; /*0x6c1fe1*/
  a4[2] = a2[3]; /*0x6c1fe7*/
  result = a2[4]; /*0x6c1fea*/
  a4[3] = result; /*0x6c1fed*/
  return result; /*0x6c1ff0*/
}
