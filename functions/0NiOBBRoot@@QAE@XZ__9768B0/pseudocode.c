NiOBBRoot *__thiscall NiOBBRoot::NiOBBRoot(NiOBBRoot *this, unsigned __int16 a2, int a3, int a4, int a5, int a6)
{
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax

  *(_DWORD *)this = &NiOBBRoot::`vftable'; /*0x9768bc*/
  if ( a2 <= 1u ) /*0x9768c2*/
  {
    v9 = (float *)FormHeapAlloc(0x98u); /*0x9768f9*/
    if ( v9 ) /*0x976903*/
    {
      v8 = sub_977530(v9, (int)this, a3, a4, a5, 0); /*0x976919*/
      goto LABEL_7; /*0x97691e*/
    }
LABEL_6:
    v8 = 0; /*0x976920*/
    goto LABEL_7; /*0x976920*/
  }
  v7 = (float *)FormHeapAlloc(0x8Cu); /*0x9768c9*/
  if ( !v7 ) /*0x9768d3*/
    goto LABEL_6; /*0x9768d3*/
  v8 = sub_97ABE0(v7, (int)this, a2, a3, a4, a5, a6); /*0x9768ed*/
LABEL_7:
  *((_DWORD *)this + 2) = v8; /*0x976922*/
  *((float *)this + 1) = 0.0; /*0x976927*/
  *((_DWORD *)this + 4) = LODWORD(g_zeroNiPoint3.x); /*0x976930*/
  *((_DWORD *)this + 5) = LODWORD(g_zeroNiPoint3.y); /*0x976938*/
  *((_DWORD *)this + 6) = LODWORD(g_zeroNiPoint3.z); /*0x976941*/
  sub_718A50((float *)this + 7); /*0x976947*/
  *((_BYTE *)this + 0xC) = 0; /*0x97694d*/
  *((_DWORD *)this + 0x14) = 0; /*0x976951*/
  return this; /*0x97694c*/
}
