double __thiscall AVCollection_GetAV(_DWORD *this, int a2)
{
  float *Node; // eax

  Node = (float *)AVCollection_GetNode(this, a2);
  if ( Node )
    return Node[1];
  else
    return (float)0.0;
}
