_DWORD *__cdecl sub_77E0A0(unsigned int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // esi
  unsigned int v5; // eax
  int v6; // eax

  v4 = (_DWORD *)FormHeapAlloc(0x18u); /*0x77e0a9*/
  if ( !v4 ) /*0x77e0b2*/
    return 0; /*0x77e108*/
  v5 = a1; /*0x77e0b4*/
  *v4 = 0; /*0x77e0ba*/
  v4[1] = 0; /*0x77e0bc*/
  v4[2] = 0; /*0x77e0bf*/
  v4[3] = 0; /*0x77e0c2*/
  v4[4] = 0; /*0x77e0c5*/
  if ( (a1 & 0xF) != 0 ) /*0x77e0c8*/
    v5 = (a1 & 0xFFFFFFF0) + 0x20; /*0x77e0cd*/
  v4[2] = v5; /*0x77e0d0*/
  v6 = v4[3]; /*0x77e0d3*/
  if ( v6 ) /*0x77e0d8*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 8))(v4[3]); /*0x77e0e0*/
  if ( a2 ) /*0x77e0e8*/
  {
    v4[3] = a2; /*0x77e0ea*/
    (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x77e0f3*/
  }
  else
  {
    v4[3] = 0; /*0x77e114*/
  }
  v4[1] = a3; /*0x77e0fd*/
  *v4 = a4; /*0x77e101*/
  return v4; /*0x77e100*/
}
