void *__thiscall sub_566010(void **this, void *a2)
{
  _BYTE v4[8]; // [esp+8h] [ebp-14h] BYREF
  unsigned int v5; // [esp+18h] [ebp-4h]

  if ( a2 )
    return sub_56A850(this + 0xD, a2);
  DNameNode::DNameNode((DNameNode *)v4);
  v5 = 0;
  sub_56A850(this + 0xD, v4);
  v5 = 0xFFFFFFFF;
  return (void *)sub_56A7A0(v4);
}
