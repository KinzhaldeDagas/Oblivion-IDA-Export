void __thiscall sub_564990(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  NiObjectNET *v2; // ebx
  int v4; // esi
  int v5; // eax
  Ni2DBuffer **v6; // edi
  Ni2DBuffer *v7; // ebp

  v2 = (NiObjectNET *)a2;
  if ( a2 )
  {
    v4 = ((int (__thiscall *)(Ni2DBuffer **))(*this)[8].members.width)(this);
    if ( v4 )
    {
      NiObjectNET_SetName(v2, "Billboard");
      v5 = (int)*(this + 0x3A);
      v6 = this + 0x3A;
      if ( v5 )
      {
        (*(void (__thiscall **)(int, Ni2DBuffer **, int))(*(_DWORD *)v4 + 0x88))(v4, &a2, v5);
        v7 = a2;
        if ( a2 )
        {
          if ( !InterlockedDecrement((volatile LONG *)&a2->members) )
          {
            if ( v7 )
              (*(void (__thiscall **)(Ni2DBuffer *, int))v7->__vftable)(v7, 1);
          }
        }
      }
      (*(void (__thiscall **)(int, NiObjectNET *, int))(*(_DWORD *)v4 + 0x84))(v4, v2, 1);
      NiSmartPointer_Set__(v6, (Ni2DBuffer *)v2);
    }
  }
}
