char __thiscall sub_6F9E90(int *this, NiObject *a2)
{
  NiObject *v3; // ebx
  int v4; // esi
  NiObject *v6; // eax
  NiObject *v7; // ebp
  _DWORD *v8; // ecx
  int vftable; // eax
  BSReference *v10; // eax
  BSReference *v11; // eax
  unsigned int v12; // ebp
  _DWORD *v13; // edi
  bool v14; // cf
  LONG (__stdcall *v15)(volatile LONG *); // edi
  NiObject *v16; // esi
  BSReference *v17; // [esp+14h] [ebp-10h] BYREF
  unsigned int v18; // [esp+20h] [ebp-4h]

  if ( !*(this + 0x122) )
    return sub_713F00(this, (int)a2);
  v3 = a2;
  v4 = (int)a2;
  if ( NiTMap_GetAt(this + 0x91, (int)a2, &a2) )
    return 0;
  a2 = 0;
  v18 = 0;
  v6 = NiRTTI_Cast((BSStringT *)dword_B3F584, v3);
  v7 = v6;
  if ( v6
    && (v8 = (_DWORD *)*(this + 0x122), vftable = (int)v6[1].__vftable, v17 = 0, v8)
    && vftable
    && (NiTMap_GetAt(v8, vftable, &v17), v17) )
  {
    v10 = (BSReference *)FormHeapAlloc(0xCu);
    v17 = v10;
    LOBYTE(v18) = 1;
    if ( v10 )
      v11 = BSReference::BSReference(v10, (const char *)v7[1].__vftable);
    else
      v11 = 0;
    LOBYTE(v18) = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)&a2, (Ni2DBuffer *)v11);
    v4 = (int)a2;
  }
  else
  {
    sub_6FE260((unsigned __int16 *)*(this + 0x123), (int)this, (int)v3);
  }
  NiTMap_SetAt(this + 0x91, (int)v3, *(this + 0x7E));
  v17 = (BSReference *)v4;
  if ( v4 )
    InterlockedIncrement((volatile LONG *)(v4 + 4));
  v12 = *(this + 0x7E);
  v13 = this + 0x7B;
  v14 = v12 < v13[2];
  LOBYTE(v18) = 2;
  if ( !v14 )
    sub_8BCA30(v13, v12 + v13[5]);
  sub_8BCD40(v13, v12, (LONG *)&v17);
  v15 = InterlockedDecrement;
  LOBYTE(v18) = 0;
  if ( v4 )
  {
    if ( !v15((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  v16 = a2;
  v18 = 0xFFFFFFFF;
  if ( a2 )
  {
    if ( !v15((volatile LONG *)&a2->members) )
      v16->__vftable->super.Destructor((NiRefObject *)v16, 1);
  }
  return 1;
}
