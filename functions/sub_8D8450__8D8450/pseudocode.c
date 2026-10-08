_DWORD *__thiscall sub_8D8450(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // ecx

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 8, 0x1E); /*0x8d845f*/
  *(_WORD *)(v2 + 4) = 8; /*0x8d8462*/
  *(_WORD *)(v2 + 6) = 1; /*0x8d8468*/
  *(_DWORD *)v2 = &off_A9A24C; /*0x8d846e*/
  *(this + 0x40) = v2; /*0x8d8474*/
  v3 = this + 2; /*0x8d847a*/
  v4 = 8; /*0x8d847d*/
  do /*0x8d84db*/
  {
    v3[0xFFFFFFFE] = *(this + 0x40); /*0x8d8496*/
    v3[0xFFFFFFFF] = *(this + 0x40); /*0x8d849f*/
    *v3 = *(this + 0x40); /*0x8d84a8*/
    v3[1] = *(this + 0x40); /*0x8d84b0*/
    v3[2] = *(this + 0x40); /*0x8d84b9*/
    v3[3] = *(this + 0x40); /*0x8d84c2*/
    v3[4] = *(this + 0x40); /*0x8d84cb*/
    v3[5] = *(this + 0x40); /*0x8d84d4*/
    v3 += 8; /*0x8d84d7*/
    --v4; /*0x8d84da*/
  }
  while ( v4 ); /*0x8d84db*/
  return this; /*0x8d84df*/
}
