char __thiscall sub_6F9E90(int *this, NiObject *a2)
{
  NiObject *v3; // ebx
  NiObject *v4; // esi
  NiObject *v6; // eax
  NiObject *v7; // ebp
  _DWORD *v8; // ecx
  int vftable; // eax
  BSReference *v10; // eax
  BSReference *v11; // eax
  unsigned int v12; // ebp
  int *v13; // edi
  bool v14; // cf
  LONG (__stdcall *v15)(volatile LONG *); // edi
  NiObject *v16; // esi
  LONG v17; // [esp+14h] [ebp-10h] BYREF
  unsigned int v18; // [esp+20h] [ebp-4h]

  if ( !*(this + 0x122) ) /*0x6f9eb9*/
    return sub_713F00(this, (int)a2); /*0x6fa01d*/
  v3 = a2; /*0x6f9ec5*/
  v4 = a2; /*0x6f9ed5*/
  if ( NiTMap_GetAt(this + 0x91, (int)a2, &a2) ) /*0x6f9ed7*/
    return 0; /*0x6f9ee0*/
  a2 = 0; /*0x6f9ee7*/
  v18 = 0; /*0x6f9ef1*/
  v6 = NiRTTI_Cast((BSStringT *)&stru_B3F584, v3); /*0x6f9ef5*/
  v7 = v6; /*0x6f9efa*/
  if ( v6 /*0x6f9f2c*/
    && (v8 = (_DWORD *)*(this + 0x122), vftable = (int)v6[1].__vftable, v17 = 0, v8)
    && vftable
    && (NiTMap_GetAt(v8, vftable, &v17), v17) )
  {
    v10 = (BSReference *)FormHeapAlloc(0xCu); /*0x6f9f30*/
    v17 = (LONG)v10; /*0x6f9f38*/
    LOBYTE(v18) = 1; /*0x6f9f3e*/
    if ( v10 ) /*0x6f9f43*/
      v11 = BSReference::BSReference(v10, (const char *)v7[1].__vftable); /*0x6f9f4b*/
    else
      v11 = 0; /*0x6f9f52*/
    LOBYTE(v18) = 0; /*0x6f9f59*/
    NiSmartPointer_Set__((Ni2DBuffer **)&a2, (Ni2DBuffer *)v11); /*0x6f9f5e*/
    v4 = a2; /*0x6f9f63*/
  }
  else
  {
    sub_6FE260((unsigned __int16 *)*(this + 0x123), (int)this, (int)v3); /*0x6f9f71*/
  }
  NiTMap_SetAt(this + 0x91, (int)v3, *(this + 0x7E)); /*0x6f9f84*/
  v17 = (LONG)v4; /*0x6f9f8b*/
  if ( v4 ) /*0x6f9f8f*/
    InterlockedIncrement((volatile LONG *)&v4->members); /*0x6f9f95*/
  v12 = *(this + 0x7E); /*0x6f9f9b*/
  v13 = this + 0x7B; /*0x6f9fa1*/
  v14 = v12 < v13[2]; /*0x6f9fa7*/
  LOBYTE(v18) = 2; /*0x6f9faa*/
  if ( !v14 ) /*0x6f9faf*/
    sub_8BCA30((int **)v13, (int *)(v12 + v13[5])); /*0x6f9fb9*/
  sub_8BCD40(v13, v12, &v17); /*0x6f9fc6*/
  v15 = InterlockedDecrement; /*0x6f9fcd*/
  LOBYTE(v18) = 0; /*0x6f9fd3*/
  if ( v4 ) /*0x6f9fd8*/
  {
    if ( !v15((volatile LONG *)&v4->members) ) /*0x6f9fde*/
      v4->__vftable->super.Destructor((NiRefObject *)v4, 1); /*0x6f9fec*/
  }
  v16 = a2; /*0x6f9fee*/
  v18 = 0xFFFFFFFF; /*0x6f9ff4*/
  if ( a2 ) /*0x6f9ffc*/
  {
    if ( !v15((volatile LONG *)&a2->members) ) /*0x6fa002*/
      v16->__vftable->super.Destructor((NiRefObject *)v16, 1); /*0x6fa010*/
  }
  return 1; /*0x6fa022*/
}
