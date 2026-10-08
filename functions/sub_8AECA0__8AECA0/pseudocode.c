char __thiscall sub_8AECA0(int *this)
{
  int v2; // eax
  unsigned int *v3; // eax

  v2 = (*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x8aecab*/
  if ( v2 ) /*0x8aecaf*/
    v3 = *(unsigned int **)(v2 + 0x2B0); /*0x8aecb1*/
  else
    v3 = 0; /*0x8aecb9*/
  if ( v3 ) /*0x8aecbd*/
    return sub_88B4E0(v3, *(this + 2)); /*0x8aecc5*/
  else
    return 0; /*0x8aecce*/
}
