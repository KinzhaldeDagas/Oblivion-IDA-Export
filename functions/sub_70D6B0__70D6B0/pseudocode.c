NiCamera *__thiscall sub_70D6B0(char **this, _DWORD **a2)
{
  NiCamera *v3; // eax
  NiCamera *v4; // esi

  v3 = (NiCamera *)FormHeapAlloc(0x124u); /*0x70d6da*/
  v4 = 0; /*0x70d6e6*/
  if ( v3 ) /*0x70d6ee*/
    v4 = sub_70D590(v3); /*0x70d6f7*/
  sub_70D050(this, (int)v4, a2); /*0x70d709*/
  return v4; /*0x70d710*/
}
