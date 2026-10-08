char *__thiscall sub_70D050(char **this, int a2, _DWORD **a3)
{
  char *result; // eax

  sub_707E90(this, (NiGeometry *)a2, a3); /*0x70d060*/
  memcpy((void *)(a2 + 0xAC), this + 0x2B, 0x40u); /*0x70d075*/
  *(_DWORD *)(a2 + 0x88) = *(this + 0x22); /*0x70d080*/
  *(_DWORD *)(a2 + 0x8C) = *(this + 0x23); /*0x70d08c*/
  *(_DWORD *)(a2 + 0x90) = *(this + 0x24); /*0x70d098*/
  qmemcpy((void *)(a2 + 0xEC), this + 0x3B, 0x1Cu); /*0x70d0af*/
  *(_DWORD *)(a2 + 0x110) = *(this + 0x44); /*0x70d0b7*/
  *(_DWORD *)(a2 + 0x114) = *(this + 0x45); /*0x70d0c3*/
  *(_DWORD *)(a2 + 0x118) = *(this + 0x46); /*0x70d0cf*/
  result = *(this + 0x47); /*0x70d0d5*/
  *(_DWORD *)(a2 + 0x11C) = result; /*0x70d0db*/
  *(float *)(a2 + 0x120) = *((float *)this + 0x48); /*0x70d0eb*/
  *(float *)(a2 + 0x108) = *((float *)this + 0x42); /*0x70d0f8*/
  *(float *)(a2 + 0x10C) = *((float *)this + 0x43); /*0x70d104*/
  return result; /*0x70d10a*/
}
