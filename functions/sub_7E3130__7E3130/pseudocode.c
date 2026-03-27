NiD3DPass *__thiscall sub_7E3130(int this)
{
  if ( *(_DWORD *)(this + 0x24) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x88) + 0x5C))(*(_DWORD *)(this + 0x88));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x8C) + 0x44))(*(_DWORD *)(this + 0x8C));
  }
  return sub_77A4A0((NiD3DShader *)this);
}
