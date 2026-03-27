unsigned int *__thiscall NiD3DShaderInterface::Destructor(unsigned int *this, char a2)
{
  int v3; // eax

  v3 = *(this + 4);
  *this = (unsigned int)&NiD3DShaderInterface::`vftable';
  *(this + 5) = 0;
  *(this + 6) = 0;
  if ( v3 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  *(this + 4) = 0;
  sub_738600(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
