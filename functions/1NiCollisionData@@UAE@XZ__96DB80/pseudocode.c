void __thiscall NiCollisionData::~NiCollisionData(NiCollisionData *this)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x10); /*0x96db86*/
  *(_DWORD *)this = &NiCollisionData::`vftable'; /*0x96db87*/
  FormHeapFree(v4); /*0x96db8d*/
  FormHeapFree(*((_DWORD *)this + 0x11)); /*0x96db96*/
  v2 = *((_DWORD *)this + 0xB); /*0x96db9b*/
  if ( v2 ) /*0x96dba3*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 8))(v2, 1); /*0x96dbac*/
  v3 = *((_DWORD *)this + 0xC); /*0x96dbae*/
  if ( v3 ) /*0x96dbb3*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 1); /*0x96dbbc*/
  sub_96D870(this); /*0x96dbc0*/
  sub_711C80(this); /*0x96dbc8*/
}
