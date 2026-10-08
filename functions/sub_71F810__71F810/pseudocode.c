_DWORD *__thiscall sub_71F810(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *result; // eax
  int v4; // ecx

  v2 = this + 0x224; /*0x71f81a*/
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x224) + 4))(this + 0x224); /*0x71f822*/
  result[2] = a2; /*0x71f828*/
  result[1] = 0; /*0x71f82b*/
  *result = v2[1]; /*0x71f835*/
  v4 = v2[1]; /*0x71f837*/
  if ( v4 ) /*0x71f83c*/
  {
    *(_DWORD *)(v4 + 4) = result; /*0x71f83e*/
    ++v2[3]; /*0x71f841*/
  }
  else
  {
    ++v2[3]; /*0x71f84c*/
    v2[2] = result; /*0x71f850*/
  }
  v2[1] = result; /*0x71f845*/
  return result; /*0x71f848*/
}
