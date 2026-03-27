_DWORD *__thiscall sub_77ABF0(_DWORD *this, int a2)
{
  int v3; // eax

  *this = &NiRefObject::`vftable';
  *(this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *this = &NiDX9TextureManager::`vftable';
  *(this + 3) = a2;
  v3 = *(_DWORD *)(a2 + 0x280);
  *(this + 2) = v3;
  (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  return this;
}
