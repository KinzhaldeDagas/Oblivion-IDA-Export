int __thiscall sub_8C65D0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ebx
  int i; // esi
  int v6; // eax
  int *v7; // eax

  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8c65df*/
    v4 = *(_DWORD *)(v3 + 0x30); /*0x8c65e1*/
  else
    v4 = 0; /*0x8c65e6*/
  for ( i = 0; i < v4; ++i ) /*0x8c65f0*/
  {
    if ( this && (v6 = *(this + 2)) != 0 ) /*0x8c65fb*/
      v7 = (int *)(*(_DWORD *)(v6 + 0x28) + 8 * i); /*0x8c6600*/
    else
      v7 = &unk_BA8138; /*0x8c6605*/
    if ( *v7 ) /*0x8c660a*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)*v7 + 0x24))(*v7, a2); /*0x8c6616*/
  }
  return sub_6EC2C0(a2); /*0x8c6627*/
}
