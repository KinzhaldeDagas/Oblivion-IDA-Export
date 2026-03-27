NiObject *__thiscall sub_56CE90(
        NiObject *this,
        int a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        float a10,
        int a11,
        float a12,
        float a13)
{
  int v14; // edi
  int v15; // edi
  int v16; // ebp
  int v17; // edi

  BSTempEff_constr(this, a2, a3);
  this->__vftable = (NiObjectVtbl *)&BSTempEffectGeometryDecal::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_BYTE *)this + 0x28) = 0;
  *((_DWORD *)this + 6) = a4;
  sub_718A50((float *)(a4 + 8));
  v14 = *((_DWORD *)this + 7);
  if ( v14 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
      (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    *((_DWORD *)this + 7) = 0;
  }
  *((_DWORD *)this + 9) = 0;
  v15 = *((_DWORD *)this + 0xB);
  if ( v15 != a5 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    }
    *((_DWORD *)this + 0xB) = a5;
    if ( a5 )
      InterlockedIncrement((volatile LONG *)(a5 + 4));
  }
  v16 = *(_DWORD *)(a5 + 0x1C);
  v17 = *((_DWORD *)this + 0xC);
  if ( v17 != v16 )
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    }
    *((_DWORD *)this + 0xC) = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  *((float *)this + 0x13) = a12;
  *((_DWORD *)this + 0xD) = a6;
  *((float *)this + 0x14) = a13;
  *((_DWORD *)this + 0xE) = a7;
  *((float *)this + 0x10) = a9;
  *((_DWORD *)this + 0xF) = a8;
  *((float *)this + 0x11) = a10;
  *((_DWORD *)this + 0x12) = a11;
  return this;
}
