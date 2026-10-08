void __thiscall sub_8B9BA0(_DWORD *this, signed int a2)
{
  _DWORD *v3; // ecx
  int HavokObject; // eax
  int v5; // eax

  if ( this && (v3 = (_DWORD *)*(this + 2)) != 0 && (HavokObject = bhkCollisionWrapper_GetHavokObject(v3)) != 0 ) /*0x8b9bb6*/
    v5 = *(_DWORD *)(HavokObject + 0xC); /*0x8b9bb8*/
  else
    v5 = 0; /*0x8b9bbd*/
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v5); /*0x8b9bcb*/
  sub_89D7B0(this, a2); /*0x8b9bd0*/
}
