// QueuedDistantLOD attach/update callback: attaches result node +0x3C through owner +0x38/+0x1C then updates property state.
void __thiscall sub_4351E0(_DWORD *this)
{
  int v2; // eax

  v2 = *(this + 0xF); /*0x4351e3*/
  if ( v2 ) /*0x4351e8*/
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(this + 0xE) + 0x1C) + 0x84))( /*0x4351fb*/
      *(_DWORD *)(*(this + 0xE) + 0x1C),
      v2,
      1);
    NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 0xF), 0.0, 0); /*0x435208*/
    NiAVObject_InitializePropertyState((NiAVObject *)*(this + 0xF)); /*0x435211*/
  }
}
