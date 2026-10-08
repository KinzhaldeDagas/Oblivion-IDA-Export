int __thiscall sub_942A80(int *this, char *a2)
{
  char v3; // cl
  int v4; // eax
  char *v5; // edx
  int v6; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // edx

  v3 = *a2; /*0x942a8a*/
  v4 = 0; /*0x942a8d*/
  if ( *a2 ) /*0x942a8a*/
  {
    v5 = a2; /*0x942a93*/
    do /*0x942aa3*/
    {
      v4 = v3 + 0x1F * v4; /*0x942a9b*/
      v3 = *++v5; /*0x942a9d*/
    }
    while ( v3 ); /*0x942aa3*/
  }
  v6 = *this; /*0x942aa5*/
  v7 = v4 & 0x7FFFFFFF; /*0x942aac*/
  v8 = *(this + 2); /*0x942aae*/
  v9 = v7 & v8; /*0x942ab3*/
  v10 = *(_DWORD *)(*this + 4 * (v7 & v8)); /*0x942ab5*/
  if ( v10 == 0xFFFFFFFF ) /*0x942abb*/
    return *(this + 2) + 1; /*0x942ae8*/
  while ( v10 != v7 || sub_8B1770(a2, *(const char **)(v6 + 4 * (v9 + v8) + 4)) ) /*0x942ad6*/
  {
    v8 = *(this + 2); /*0x942ad8*/
    v6 = *this; /*0x942adb*/
    v9 = v8 & (v9 + 1); /*0x942ade*/
    v10 = *(_DWORD *)(*this + 4 * v9); /*0x942ae0*/
    if ( v10 == 0xFFFFFFFF ) /*0x942ae6*/
      return *(this + 2) + 1; /*0x942ae6*/
  }
  return v9; /*0x942aeb*/
}
