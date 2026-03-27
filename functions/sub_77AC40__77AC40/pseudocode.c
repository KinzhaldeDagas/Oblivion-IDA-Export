int *__thiscall sub_77AC40(int *this, char a2)
{
  int v3; // eax

  v3 = *(this + 2);
  *this = (int)&NiDX9TextureManager::`vftable';
  (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  *(this + 2) = 0;
  *this = (int)&NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
