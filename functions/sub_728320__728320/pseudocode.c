__int16 __thiscall sub_728320(_WORD *this, __int16 a2, int a3, int a4, int a5, int a6, char a7, __int16 a8)
{
  int v9; // eax
  unsigned __int16 v10; // cx
  __int16 v11; // ax
  __int16 result; // ax

  *(this + 4) = a2; /*0x728330*/
  v9 = *(_DWORD *)this; /*0x728334*/
  *((_DWORD *)this + 7) = a3; /*0x728336*/
  *((_DWORD *)this + 8) = a4; /*0x728339*/
  v10 = (*(int (__thiscall **)(_WORD *))(v9 + 0x50))(this); /*0x728343*/
  if ( v10 ) /*0x728349*/
  {
    if ( *((_DWORD *)this + 7) ) /*0x72834b*/
      NiSphere_ComputeFromVertices((NiSphere *)(this + 6), v10, *((const NiPoint3 **)this + 7)); /*0x72835a*/
  }
  v11 = *(this + 0x16); /*0x728363*/
  *((_DWORD *)this + 9) = a5; /*0x72836b*/
  result = a8 | a7 & 0x3F | v11 & 0xFC0; /*0x72837d*/
  *((_DWORD *)this + 0xA) = a6; /*0x728382*/
  *(this + 0x16) = result; /*0x728385*/
  return result; /*0x728389*/
}
