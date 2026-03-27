void __thiscall sub_7E5C30(_WORD *this, NiNode *a2)
{
  _WORD *v3; // edi
  int v4; // eax
  int v5; // eax
  NiNode *v6; // esi

  v3 = this + 0x88;
  sub_477EF0(this + 0x88);
  v4 = *((_DWORD *)this + 0x1C);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v6 = a2;
        if ( a2 )
          InterlockedIncrement((volatile LONG *)&a2->members);
        NiTArray_AddItem((int)v3, (LONG *)&a2);
        if ( v6 )
        {
          if ( !InterlockedDecrement((volatile LONG *)&v6->members) )
            v6->vtbl->super.super.super.Destructor((NiRefObject *)v6, 1);
        }
      }
    }
    else
    {
      sub_7E5B50(this, a2);
    }
  }
  else
  {
    sub_7E59C0(this, a2);
  }
  sub_4784A0(v3);
}
