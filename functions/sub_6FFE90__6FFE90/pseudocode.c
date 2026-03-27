void __thiscall sub_6FFE90(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer *v2; // esi
  Ni2DBuffer *v3; // edi
  Ni2DBuffer **v4; // ebx
  UInt32 height; // edi
  LONG (__stdcall *v6)(volatile LONG *); // ebx
  Ni2DBuffer *v7; // eax
  UInt32 v8; // edi

  v2 = a2;
  if ( a2 )
  {
    v3 = *(this + 3);
    v4 = this + 3;
    if ( v3 )
    {
      if ( v3 == a2 )
      {
        InterlockedIncrement((volatile LONG *)&a2->members);
        NiSmartPointer_Set__(v4, (Ni2DBuffer *)v2[2].members.height);
        height = v2[2].members.height;
        v6 = InterlockedDecrement;
        if ( height )
        {
          if ( !v6((volatile LONG *)(height + 4)) )
            (**(void (__thiscall ***)(UInt32, int))height)(height, 1);
          v2[2].members.height = 0;
        }
        if ( !v6((volatile LONG *)&v2->members) )
          (*(void (__thiscall **)(Ni2DBuffer *, int))v2->__vftable)(v2, 1);
      }
      else
      {
        v7 = (Ni2DBuffer *)v3[2].members.height;
        if ( v7 )
        {
          while ( v7 != a2 )
          {
            v3 = v7;
            v7 = (Ni2DBuffer *)v7[2].members.height;
            if ( !v7 )
              return;
          }
          InterlockedIncrement((volatile LONG *)&a2->members);
          sub_6C61E0(v3, v2[2].members.height);
          v8 = v2[2].members.height;
          if ( v8 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
              (**(void (__thiscall ***)(UInt32, int))v8)(v8, 1);
            v2[2].members.height = 0;
          }
          sub_7016A0((NiD3DVertexShader *)&a2);
        }
      }
    }
  }
}
