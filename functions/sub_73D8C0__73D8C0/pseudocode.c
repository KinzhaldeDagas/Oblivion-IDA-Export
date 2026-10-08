char __thiscall sub_73D8C0(NiNode *this, int a2)
{
  char result; // al

  result = sub_70AD70(this, a2); /*0x73d8c9*/
  if ( result ) /*0x73d8d0*/
    return *((_DWORD *)this + 0x37) == *(_DWORD *)(a2 + 0xDC); /*0x73d8e4*/
  return result; /*0x73d8d2*/
}
