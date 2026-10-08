// Removes a specific NiTimeController from NiObjectNET's refcounted controller chain, relinking predecessor/head and clearing the removed controller's next link with balanced temporary references.
void __thiscall NiObjectNET_RemoveController(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer *v2; // esi
  Ni2DBuffer *v3; // edi
  Ni2DBuffer **v4; // ebx
  UInt32 height; // edi
  LONG (__stdcall *v6)(volatile LONG *); // ebx
  Ni2DBuffer *v7; // eax
  UInt32 v8; // edi

  v2 = a2; /*0x6ffeb4*/
  if ( a2 ) /*0x6ffeba*/
  {
    v3 = *(this + 3); /*0x6ffec0*/
    v4 = this + 3; /*0x6ffec5*/
    if ( v3 ) /*0x6ffec8*/
    {
      if ( v3 == a2 ) /*0x6ffed0*/
      {
        InterlockedIncrement((volatile LONG *)&a2->members); /*0x6ffeda*/
        NiSmartPointer_Set__(v4, (Ni2DBuffer *)v2[2].members.height); /*0x6ffeee*/
        height = v2[2].members.height; /*0x6ffef3*/
        v6 = InterlockedDecrement; /*0x6ffef8*/
        if ( height ) /*0x6ffefe*/
        {
          if ( !v6((volatile LONG *)(height + 4)) ) /*0x6fff04*/
            (**(void (__thiscall ***)(UInt32, int))height)(height, 1); /*0x6fff16*/
          v2[2].members.height = 0; /*0x6fff18*/
        }
        if ( !v6((volatile LONG *)&v2->members) ) /*0x6fff28*/
          (*(void (__thiscall **)(Ni2DBuffer *, int))v2->__vftable)(v2, 1); /*0x6fff3a*/
      }
      else
      {
        v7 = (Ni2DBuffer *)v3[2].members.height; /*0x6fff3e*/
        if ( v7 ) /*0x6fff43*/
        {
          while ( v7 != a2 ) /*0x6fff47*/
          {
            v3 = v7; /*0x6fff49*/
            v7 = (Ni2DBuffer *)v7[2].members.height; /*0x6fff4b*/
            if ( !v7 ) /*0x6fff50*/
              return; /*0x6fff50*/
          }
          InterlockedIncrement((volatile LONG *)&a2->members); /*0x6fff60*/
          sub_6C61E0(v3, v2[2].members.height); /*0x6fff74*/
          v8 = v2[2].members.height; /*0x6fff79*/
          if ( v8 ) /*0x6fff7e*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x6fff84*/
              (**(void (__thiscall ***)(UInt32, int))v8)(v8, 1); /*0x6fff9a*/
            v2[2].members.height = 0; /*0x6fff9c*/
          }
          NiPointerSlot_Release((NiD3DVertexShader *)&a2); /*0x6fffaf*/
        }
      }
    }
  }
}
