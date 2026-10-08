// Loads NiTimeController, then for stream versions 0x0A010068 through 0x0A01006C reads a transitional Boolean and maps it to controller flag 0x20. Other versions rely on the base flag representation/migration.
unsigned int __thiscall NiInterpController_LoadBinary(NiRenderer *this, signed int a2)
{
  signed int v2; // esi
  unsigned int result; // eax
  int (__cdecl *v5)(int, signed int *, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x6d0552*/
  NiTimeController_LoadBinary(this, a2); /*0x6d055a*/
  result = *(_DWORD *)(v2 + 0xD8); /*0x6d055f*/
  if ( result >= 0xA010068 && result < 0xA01006D ) /*0x6d0571*/
  {
    v6 = *(_DWORD *)(v2 + 0x21C); /*0x6d0587*/
    v5 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v6 + 4); /*0x6d0588*/
    v7 = 1; /*0x6d058b*/
    result = v5(v6, &a2, 1, &v7, 1); /*0x6d0593*/
    if ( (_BYTE)a2 ) /*0x6d059d*/
      LOWORD(this->members.accumulator) |= 0x20u; /*0x6d059f*/
    else
      LOWORD(this->members.accumulator) &= ~0x20u; /*0x6d05aa*/
  }
  return result; /*0x6d05a4*/
}
