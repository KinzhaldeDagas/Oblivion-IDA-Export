char __stdcall sub_7C53B0(NiGeometry *a1)
{
  NiAVObject *v1; // edi
  volatile LONG *v2; // ebx
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiGeometry *v4; // esi
  NiGeometry *v5; // esi

  if ( !UseHDR )
    return 1;
  v1 = (NiAVObject *)a1;
  v2 = *sub_405760(a1, (volatile LONG **)&a1);
  v3 = InterlockedDecrement;
  if ( a1 )
  {
    v4 = a1;
    if ( !v3((volatile LONG *)&a1->member) )
      v4->__vftable->super.super.super.Destructor((NiRefObject *)v4, 1);
  }
  if ( !v2 )
  {
    NiAVObject_InitializePropertyState(v1);
    sub_405760((NiGeometry *)v1, (volatile LONG **)&a1);
    v5 = a1;
    if ( a1 )
    {
      if ( !v3((volatile LONG *)&a1->member) )
      {
        if ( v5 )
          v5->__vftable->super.super.super.Destructor((NiRefObject *)v5, 1);
      }
    }
  }
  return 1;
}
