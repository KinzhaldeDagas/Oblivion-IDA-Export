void __thiscall CreatureSoundArray_ClearNthSound(_DWORD *this, unsigned int a2)
{
  unsigned int *v3; // esi
  unsigned int *v4; // eax

  if ( a2 <= 9 )
  {
    v3 = (unsigned int *)*(this + a2);
    if ( v3 )
    {
      while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v3) )
      {
        FormHeapFree(*v3);
        v4 = (unsigned int *)v3[1];
        if ( v4 )
        {
          v3[1] = v4[1];
          *v3 = *v4;
          FormHeapFree((unsigned int)v4);
        }
        else
        {
          *v3 = 0;
        }
      }
    }
  }
  FormHeapFree(*(this + a2));
  *(this + a2) = 0;
}
