char __thiscall sub_721A60(NiNode *this, int a2)
{
  char result; // al

  result = sub_70AD70(this, a2); /*0x721a69*/
  if ( result ) /*0x721a70*/
    return ((*((_BYTE *)this + 0xDC) ^ *(_BYTE *)(a2 + 0xDC)) & 7) == 0; /*0x721a86*/
  return result; /*0x721a72*/
}
