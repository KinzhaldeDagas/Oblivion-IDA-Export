char *__thiscall sub_682580(char *this)
{
  *(_DWORD *)this = 0; /*0x682584*/
  *((_DWORD *)this + 1) = 0; /*0x682586*/
  *((_DWORD *)this + 2) = 0; /*0x682589*/
  *((_DWORD *)this + 3) = 0; /*0x68258c*/
  *((_DWORD *)this + 4) = 0; /*0x68258f*/
  *((_DWORD *)this + 5) = LODWORD(g_zeroNiPoint3.x); /*0x682598*/
  *((_DWORD *)this + 6) = LODWORD(g_zeroNiPoint3.y); /*0x6825a1*/
  *((_DWORD *)this + 7) = LODWORD(g_zeroNiPoint3.z); /*0x6825aa*/
  *((_DWORD *)this + 8) = 0; /*0x6825ad*/
  *(this + 0x24) = 1; /*0x6825b0*/
  return this; /*0x6825b4*/
}
