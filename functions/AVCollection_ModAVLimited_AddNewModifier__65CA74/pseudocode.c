// positive sp value has been detected, the output may be wrong!
void __userpurge AVCollection_ModAVLimited_::AddNewModifier(
        char a1@<bl>,
        unsigned int **a2@<esi>,
        int a3,
        float a4,
        int a5)
{
  float *v5; // eax

  if ( 0.0 == a4 )
  {
    AVCollection_ModAVLimited_::Done(a3, LODWORD(a4), a5);
  }
  else
  {
    v5 = (float *)FormHeapAlloc(8u);
    if ( v5 )
    {
      v5[1] = a4;
      *(_BYTE *)v5 = a1;
      AVCollection_Add(a2, v5);
    }
    else
    {
      AVCollection_Add(a2, 0);
    }
  }
}
