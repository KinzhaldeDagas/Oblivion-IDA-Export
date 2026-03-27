NiCamera *__thiscall sub_70D6B0(char **this, _DWORD **a2)
{
  NiCamera *v3; // eax
  NiCamera *v4; // esi

  v3 = (NiCamera *)FormHeapAlloc(0x124u);
  v4 = 0;
  if ( v3 )
    v4 = sub_70D590(v3);
  sub_70D050(this, (int)v4, a2);
  return v4;
}
