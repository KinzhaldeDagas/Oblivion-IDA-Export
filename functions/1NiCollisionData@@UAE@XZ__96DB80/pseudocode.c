void __thiscall NiCollisionData::~NiCollisionData(NiCollisionData *this)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x10);
  *(_DWORD *)this = &NiCollisionData::`vftable';
  FormHeapFree(v4);
  FormHeapFree(*((_DWORD *)this + 0x11));
  v2 = *((_DWORD *)this + 0xB);
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 8))(v2, 1);
  v3 = *((_DWORD *)this + 0xC);
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 1);
  sub_96D870(this);
  sub_711C80(this);
}
