void __thiscall sub_742060(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  _DWORD *v3; // eax
  Ni2DBuffer *v4; // eax
  Ni2DBuffer **v5; // edi
  _DWORD *height; // esi
  _DWORD *v7; // eax
  int v8; // esi

  if ( a2 )
  {
    if ( a2->members.data || a2[1].__vftable || a2[1].members.super.m_uiRefCount || a2[1].members.width )
    {
      v3 = (_DWORD *)FormHeapAlloc(0x20u);
      if ( v3 )
        v4 = (Ni2DBuffer *)sub_709E60(v3);
      else
        v4 = 0;
      v5 = this + 0x2C;
      NiSmartPointer_Set__(v5, v4);
      height = (_DWORD *)a2->members.height;
      while ( height )
      {
        v7 = (_DWORD *)height[1];
        height = (_DWORD *)*height;
        sub_731CE0(*v5, v7);
      }
    }
    else
    {
      NiSmartPointer_Set__(this + 0x2C, a2);
    }
  }
  else
  {
    v8 = (int)*(this + 0x2C);
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      *(this + 0x2C) = 0;
    }
  }
}
