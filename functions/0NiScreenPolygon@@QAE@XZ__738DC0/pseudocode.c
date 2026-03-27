NiScreenPolygon *__thiscall NiScreenPolygon::NiScreenPolygon(
        NiScreenPolygon *this,
        unsigned __int16 a2,
        void *Src,
        void *a4,
        void *a5)
{
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // ebp
  void *v10; // eax
  NiPropertyState *v11; // eax
  NiPropertyState *v12; // ebp
  volatile LONG *v13; // esi
  size_t v15; // [esp-8h] [ebp-2Ch]
  size_t v16; // [esp-8h] [ebp-2Ch]
  size_t v17; // [esp-4h] [ebp-28h]

  NiObject_constr((NiObject *)this);
  *(_DWORD *)this = &NiScreenPolygon::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = a2;
  v6 = (void *)FormHeapAlloc((0xC * (unsigned __int64)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * a2);
  LODWORD(v15) = 0xC * a2;
  *((_DWORD *)this + 4) = v6;
  memcpy(v6, Src, v15);
  if ( a4 )
  {
    v7 = (void *)FormHeapAlloc((unsigned __int64)a2 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * a2);
    LODWORD(v16) = 8 * a2;
    *((_DWORD *)this + 5) = v7;
    memcpy(v7, a4, v16);
  }
  else
  {
    *((_DWORD *)this + 5) = 0;
  }
  if ( a5 )
  {
    v8 = (void *)FormHeapAlloc((unsigned __int64)a2 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * a2);
    v9 = v8;
    if ( v8 )
    {
      sub_401080(v8, 0x10, a2, (void *(__thiscall *)(void *))sub_47EA50);
      v10 = v9;
    }
    else
    {
      v10 = 0;
    }
    LODWORD(v17) = 0x10 * a2;
    *((_DWORD *)this + 6) = v10;
    memcpy(v10, a5, v17);
  }
  else
  {
    *((_DWORD *)this + 6) = 0;
  }
  v11 = (NiPropertyState *)FormHeapAlloc(0x30u);
  if ( v11 )
    v12 = sub_7319E0(v11);
  else
    v12 = 0;
  v13 = *((volatile LONG **)this + 2);
  if ( v13 != (volatile LONG *)v12 )
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement(v13 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v13)(v13, 1);
    }
    *((_DWORD *)this + 2) = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)v12 + 1);
  }
  return this;
}
