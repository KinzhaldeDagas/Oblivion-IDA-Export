int __thiscall sub_68FA00(_DWORD **this, _DWORD *a2)
{
  void *v3; // eax
  _BYTE *v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // eax

  if ( *(this + 3) )
  {
    v3 = (void *)(*(int (__thiscall **)(_DWORD))(**(this + 3) + 0x154))(*(this + 3));
    v4 = OblivionDynamicCast(
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&NiAVObject `RTTI Type Descriptor',
           &BSFadeNode `RTTI Type Descriptor',
           0);
    if ( v4 )
      sub_4A01B0(v4, 2);
  }
  v5 = *(this + 4);
  if ( v5 )
  {
    v6 = v5[2];
    if ( v6 )
    {
      v7 = v6 + 0x14;
      if ( v7 )
        *(_DWORD *)(v7 + 0x1C) = *(this + 5);
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*v5 + 0x80))(v5);
  sub_8A63A0(a2, (int)this);
  sub_8A6300(a2, (int)(this + 1));
  sub_8A6350(a2, (int)(this + 2));
  return ((int (__thiscall *)(_DWORD **, int))(*this)[4])(this, 1);
}
