void __thiscall sub_4E7FB0(int *this, float *a2)
{
  int *v3; // esi
  int *v4; // ebx
  int v5; // edi
  int *v6; // eax

  v3 = this + 8;
  v4 = 0;
  if ( this != (int *)0xFFFFFFE0 )
  {
    do
    {
      if ( !v3[1] && !*v3 )
        break;
      v5 = *v3;
      if ( sub_47D810((float *)(*v3 + 0x14), a2, fConstant_2) )
      {
        BSSimpleList_Remove((_DWORD *)(v5 + 0x20), (int)this);
        if ( v4 )
        {
          BSSimpleList_Remove(v4, v5);
          v3 = (int *)v4[1];
        }
        else
        {
          v6 = (int *)v3[1];
          if ( v6 )
          {
            v3[1] = v6[1];
            *v3 = *v6;
            FormHeapFree((unsigned int)v6);
          }
          else
          {
            *v3 = 0;
          }
        }
      }
      else
      {
        v4 = v3;
        v3 = (int *)v3[1];
      }
    }
    while ( v3 );
  }
}
