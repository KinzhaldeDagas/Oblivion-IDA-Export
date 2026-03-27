void __thiscall sub_67A760(Ni2DBuffer **this, int a2)
{
  int *v3; // ecx
  Ni2DBuffer **v4; // eax
  int *v5; // edi
  LONG v6; // eax
  int *v7; // [esp-4h] [ebp-20h]

  if ( !a2 || sub_677CA0(this) )
  {
    if ( !a2 )
      return;
  }
  else
  {
    v3 = (int *)this;
    v4 = this;
    if ( this )
    {
      while ( *v3 != a2 )
      {
        v4 = (Ni2DBuffer **)v3;
        v3 = (int *)v3[1];
        if ( !v3 )
          goto LABEL_15;
      }
      if ( v3 == (int *)this )
      {
        v5 = (int *)*(this + 1);
        if ( !v5 )
        {
          NiSmartPointer_Set__(this, 0);
          v6 = InterlockedDecrement((volatile LONG *)(a2 + 4));
          goto LABEL_16;
        }
        v7 = (int *)*(this + 1);
        *(this + 1) = (Ni2DBuffer *)v5[1];
        sub_55E2A0((int *)this, v7);
        v3 = v5;
      }
      else
      {
        v4[1] = (Ni2DBuffer *)v3[1];
      }
      sub_67A1F0(v3, 1);
    }
  }
LABEL_15:
  v6 = InterlockedDecrement((volatile LONG *)(a2 + 4));
LABEL_16:
  if ( !v6 )
    (**(void (__thiscall ***)(int, int))a2)(a2, 1);
}
