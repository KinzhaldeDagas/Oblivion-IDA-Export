void __thiscall AVCollection_ModAV(unsigned int **this, int a2, float a3)
{
  float *Node; // eax
  float *v5; // eax

  Node = (float *)AVCollection_GetNode(this, a2);
  if ( Node )
  {
    if ( a3 == 0.0 )
      AVCollection_Remove(this, Node);
    else
      Node[1] = a3;
  }
  else if ( 0.0 != a3 )
  {
    v5 = (float *)FormHeapAlloc(8u);
    if ( v5 )
    {
      v5[1] = a3;
      *(_BYTE *)v5 = a2;
      AVCollection_Add(this, v5);
    }
    else
    {
      AVCollection_Add(this, 0);
    }
  }
}
