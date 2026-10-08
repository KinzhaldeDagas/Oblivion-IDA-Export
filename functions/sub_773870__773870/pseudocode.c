bool __thiscall sub_773870(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4, _BYTE *a5, _BYTE *a6)
{
  _DWORD *v6; // edx
  int v7; // edx

  v6 = this + 3 * a2; /*0x77387a*/
  *a6 = *((_BYTE *)v6 + 0x1D); /*0x773886*/
  *a5 = *((_BYTE *)v6 + 0x1C); /*0x773890*/
  *a4 = *(this + 3 * a2 + 6); /*0x77389d*/
  v7 = v6[5]; /*0x77389f*/
  *a3 = v7; /*0x7738aa*/
  return v7 != 0x13; /*0x7738a9*/
}
