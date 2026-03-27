char __thiscall sub_721A60(NiNode *this, int a2)
{
  char result; // al

  result = sub_70AD70(this, a2);
  if ( result )
    return ((*((_BYTE *)this + 0xDC) ^ *(_BYTE *)(a2 + 0xDC)) & 7) == 0;
  return result;
}
