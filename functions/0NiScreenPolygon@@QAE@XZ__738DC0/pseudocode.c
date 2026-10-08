NiScreenPolygon *__thiscall NiScreenPolygon::NiScreenPolygon(
        NiScreenPolygon *this,
        unsigned __int16 a2,
        void *Src,
        void *source,
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

  NiObject_constr((NiObject *)this); /*0x738deb*/
  *(_DWORD *)this = &NiScreenPolygon::`vftable'; /*0x738df2*/
  *((_DWORD *)this + 2) = 0; /*0x738dfc*/
  *((_WORD *)this + 6) = a2; /*0x738e07*/
  v6 = (void *)FormHeapAlloc((0xC * (unsigned __int64)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * a2);
  *((_DWORD *)this + 4) = v6; /*0x738e36*/
  memcpy(v6, Src, 0xC * a2); /*0x738e39*/
  if ( source )
  {
    v7 = (void *)FormHeapAlloc((unsigned __int64)a2 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * a2);
    *((_DWORD *)this + 5) = v7; /*0x738e6b*/
    memcpy(v7, source, 8 * a2); /*0x738e6e*/
  }
  else
  {
    *((_DWORD *)this + 5) = 0; /*0x738e78*/
  }
  if ( a5 )
  {
    v8 = (void *)FormHeapAlloc((unsigned __int64)a2 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * a2);
    v9 = v8; /*0x738e9b*/
    if ( v8 ) /*0x738eab*/
    {
      sub_401080(v8, 0x10, a2, (void *(__thiscall *)(void *))sub_47EA50); /*0x738eb6*/
      v10 = v9; /*0x738ebb*/
    }
    else
    {
      v10 = 0; /*0x738ebf*/
    }
    *((_DWORD *)this + 6) = v10; /*0x738ecc*/
    memcpy(v10, a5, 0x10 * a2); /*0x738ecf*/
  }
  else
  {
    *((_DWORD *)this + 6) = 0; /*0x738ed9*/
  }
  v11 = (NiPropertyState *)FormHeapAlloc(0x30u); /*0x738ee2*/
  if ( v11 ) /*0x738ef5*/
    v12 = sub_7319E0(v11); /*0x738efe*/
  else
    v12 = 0; /*0x738f02*/
  v13 = *((volatile LONG **)this + 2); /*0x738f04*/
  if ( v13 != (volatile LONG *)v12 ) /*0x738f0e*/
  {
    if ( v13 ) /*0x738f12*/
    {
      if ( !InterlockedDecrement(v13 + 1) ) /*0x738f18*/
        (**(void (__thiscall ***)(volatile LONG *, int))v13)(v13, 1); /*0x738f2e*/
    }
    *((_DWORD *)this + 2) = v12; /*0x738f32*/
    if ( v12 ) /*0x738f35*/
      InterlockedIncrement((volatile LONG *)v12 + 1); /*0x738f3b*/
  }
  return this; /*0x738f43*/
}
