char __thiscall sub_4A2FB0(int **this)
{
  int *v1; // esi
  _DWORD *v2; // ecx

  v1 = *(this + 7); /*0x4a2fb1*/
  if ( !v1 ) /*0x4a2fb6*/
    return 0; /*0x4a2fb6*/
  v2 = *(this + 6); /*0x4a2fb8*/
  if ( !v2 || !sub_4A44A0(v2) ) /*0x4a2fbf*/
    return 0; /*0x4a2fe4*/
  do /*0x4a2fde*/
  {
    if ( !*v1 ) /*0x4a2fc8*/
      break; /*0x4a2fcc*/
    if ( !sub_4A78A0(*v1, 1) ) /*0x4a2fd7*/
      return 0; /*0x4a2fd7*/
    v1 = (int *)v1[1]; /*0x4a2fd9*/
  }
  while ( v1 ); /*0x4a2fde*/
  return 1; /*0x4a2fe2*/
}
