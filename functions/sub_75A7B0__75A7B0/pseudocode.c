_DWORD *__thiscall sub_75A7B0(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi
  int v5; // ecx
  Ni2DBuffer *v6; // eax

  v3 = (NiObject *)FormHeapAlloc(0x1Cu);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_752BF0(v3);
    *(_DWORD *)v4 = &NiPSysColliderManager::`vftable';
    *(_DWORD *)(v4 + 0x18) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_752C40(this, v4, a2);
  v5 = (int)*(this + 6);
  if ( v5 )
  {
    v6 = (Ni2DBuffer *)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v5 + 0x18))(v5, a2);
    NiSmartPointer_Set__((Ni2DBuffer **)(v4 + 0x18), v6);
  }
  return (_DWORD *)v4;
}
