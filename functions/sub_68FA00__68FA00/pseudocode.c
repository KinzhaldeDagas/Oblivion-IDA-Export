int __thiscall sub_68FA00(_DWORD **this, int *a2)
{
  void *v3; // eax
  _BYTE *v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // eax

  if ( *(this + 3) ) /*0x68fa03*/
  {
    v3 = (void *)(*(int (__thiscall **)(_DWORD))(**(this + 3) + 0x154))(*(this + 3)); /*0x68fa15*/
    v4 = OblivionDynamicCast( /*0x68fa26*/
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&NiAVObject `RTTI Type Descriptor',
           &BSFadeNode `RTTI Type Descriptor',
           0);
    if ( v4 ) /*0x68fa30*/
      sub_4A01B0(v4, 2); /*0x68fa36*/
  }
  v5 = *(this + 4); /*0x68fa3b*/
  if ( v5 ) /*0x68fa43*/
  {
    v6 = v5[2]; /*0x68fa45*/
    if ( v6 ) /*0x68fa4a*/
    {
      v7 = v6 + 0x14; /*0x68fa4c*/
      if ( v7 ) /*0x68fa4f*/
        *(_DWORD *)(v7 + 0x1C) = *(this + 5); /*0x68fa51*/
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*v5 + 0x80))(v5); /*0x68fa5c*/
  sub_8A63A0(a2, (int)this); /*0x68fa65*/
  sub_8A6300(a2, (int)(this + 1)); /*0x68fa70*/
  sub_8A6350(a2, (int)(this + 2)); /*0x68fa7b*/
  return ((int (__thiscall *)(_DWORD **, int))(*this)[4])(this, 1); /*0x68fa8b*/
}
