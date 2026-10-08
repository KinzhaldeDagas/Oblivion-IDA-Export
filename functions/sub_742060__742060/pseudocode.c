void __thiscall sub_742060(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  _DWORD *v3; // eax
  Ni2DBuffer *v4; // eax
  Ni2DBuffer **v5; // edi
  _DWORD *height; // esi
  _DWORD *v7; // eax
  int v8; // esi

  if ( a2 ) /*0x74206a*/
  {
    if ( a2->members.data || a2[1].__vftable || a2[1].members.super.m_uiRefCount || a2[1].members.width ) /*0x74207e*/
    {
      v3 = (_DWORD *)FormHeapAlloc(0x20u); /*0x742097*/
      if ( v3 ) /*0x7420a1*/
        v4 = (Ni2DBuffer *)sub_709E60(v3); /*0x7420a5*/
      else
        v4 = 0; /*0x7420ac*/
      v5 = this + 0x2C; /*0x7420ae*/
      NiSmartPointer_Set__(v5, v4); /*0x7420b7*/
      height = (_DWORD *)a2->members.height; /*0x7420bc*/
      while ( height ) /*0x7420c1*/
      {
        v7 = (_DWORD *)height[1]; /*0x7420c3*/
        height = (_DWORD *)*height; /*0x7420c8*/
        sub_731CE0(*v5, v7); /*0x7420cb*/
      }
    }
    else
    {
      NiSmartPointer_Set__(this + 0x2C, a2); /*0x74208b*/
    }
  }
  else
  {
    v8 = (int)*(this + 0x2C); /*0x7420d9*/
    if ( v8 ) /*0x7420e1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7420e7*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7420fd*/
      *(this + 0x2C) = 0; /*0x7420ff*/
    }
  }
}
