int __thiscall sub_926CA0(int *this)
{
  int v2; // ebx
  int v3; // edi
  int result; // eax
  int v5; // ecx

  v2 = *(this + 3); /*0x926ca4*/
  *this = (int)&off_AA1828; /*0x926ca9*/
  if ( v2 > 0 ) /*0x926caf*/
  {
    v3 = 0; /*0x926cb2*/
    do /*0x926cc3*/
    {
      sub_8BC730(*(int (__stdcall ****)(signed int))(*(this + 2) + v3)); /*0x926cba*/
      v3 += 0x50; /*0x926cbf*/
      --v2; /*0x926cc2*/
    }
    while ( v2 ); /*0x926cc3*/
  }
  result = *(this + 4); /*0x926cc6*/
  if ( result >= 0 ) /*0x926ccb*/
  {
    v5 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x926cdd*/
    if ( !v5 ) /*0x926ce5*/
      v5 = unk_BA7D9C; /*0x926ce7*/
    result = sub_8A75D0(v5, (_DWORD *)*(this + 2), 0x50 * (result & 0x3FFFFFFF), 0x14); /*0x926cff*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x926d04*/
  return result; /*0x926d0a*/
}
