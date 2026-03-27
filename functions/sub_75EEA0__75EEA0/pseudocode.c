char __thiscall sub_75EEA0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_700650(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)this + 0xA);
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2);
    return 1;
  }
  return result;
}
