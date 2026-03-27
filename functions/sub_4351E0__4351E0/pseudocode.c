void __thiscall sub_4351E0(_DWORD *this)
{
  int v2; // eax

  v2 = *(this + 0xF);
  if ( v2 )
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(this + 0xE) + 0x1C) + 0x84))(
      *(_DWORD *)(*(this + 0xE) + 0x1C),
      v2,
      1);
    NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 0xF), 0.0, 0);
    NiAVObject_InitializePropertyState((NiAVObject *)*(this + 0xF));
  }
}
