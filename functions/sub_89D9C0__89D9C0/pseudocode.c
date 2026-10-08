char __thiscall sub_89D9C0(int *this)
{
  int v2; // eax
  unsigned int *v3; // eax

  v2 = (*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x89d9cb*/
  if ( v2 ) /*0x89d9cf*/
    v3 = *(unsigned int **)(v2 + 0x2B0); /*0x89d9d1*/
  else
    v3 = 0; /*0x89d9d9*/
  if ( v3 ) /*0x89d9dd*/
    return sub_88B580(v3, *(this + 2)); /*0x89d9e5*/
  else
    return 0; /*0x89d9ee*/
}
