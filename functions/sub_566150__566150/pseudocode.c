void __thiscall sub_566150(_DWORD *this, int a2)
{
  nullsub_returnvVoid_1arg(a2); /*0x566159*/
  if ( (a2 & 0x10000000) != 0 ) /*0x566164*/
    *(this + 7) &= ~0x8000u; /*0x566166*/
  if ( (a2 & 0x8000000) != 0 ) /*0x566173*/
    *(this + 7) &= ~0x10000u; /*0x566175*/
}
