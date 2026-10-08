_DWORD *__thiscall sub_6AE370(int *this, char *a2, int a3, int a4, int a5)
{
  char *v6; // eax
  char *v8; // edx
  char *v9; // esi
  char *v10; // eax
  _DWORD *v11; // edi
  int v12; // [esp-4h] [ebp-24h]
  int v13; // [esp+0h] [ebp-20h]

  if ( !bSoundEnabled_Audio ) /*0x6ae395*/
  {
    v6 = (char *)FormHeapAlloc(4u); /*0x6ae3a0*/
    a2 = v6; /*0x6ae3a8*/
    if ( v6 ) /*0x6ae3b6*/
      return unknown_libname_1(v6, 0); /*0x6ae3d7*/
    return 0; /*0x6ae3b6*/
  }
  v8 = a2; /*0x6ae3da*/
  if ( !a2 ) /*0x6ae3e0*/
    return 0; /*0x6ae3e0*/
  if ( !strcmp(a2, EmptyString) ) /*0x6ae3f4*/
    return 0; /*0x6ae3f4*/
  a2 = 0; /*0x6ae3fc*/
  v13 = *(this + 0x2D); /*0x6ae406*/
  v12 = a3; /*0x6ae40e*/
  *(this + 0x2D) = v13 + 1; /*0x6ae40f*/
  if ( sub_6AC610(this, (unsigned int **)&a2, v8, v12, v13) ) /*0x6ae41d*/
    return 0; /*0x6ae48d*/
  v9 = a2; /*0x6ae426*/
  sub_6ACCA0(this, a2, *((_DWORD *)a2 + 3)); /*0x6ae431*/
  v10 = (char *)FormHeapAlloc(4u); /*0x6ae438*/
  a2 = v10; /*0x6ae440*/
  if ( v10 ) /*0x6ae44e*/
    v11 = unknown_libname_1(v10, *((_DWORD *)v9 + 3)); /*0x6ae45b*/
  else
    v11 = 0; /*0x6ae45f*/
  sub_6B6F20((float *)v9, 1.0); /*0x6ae471*/
  return v11; /*0x6ae3c5*/
}
