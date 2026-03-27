bool __thiscall sub_728F50(NiRenderTargetGroup *this, int a2)
{
  bool result; // al
  int v4; // ecx

  result = 0;
  if ( (unsigned __int8)sub_700650(this, a2) )
  {
    v4 = *((_DWORD *)this + 0xD);
    if ( !v4 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2) )
      return 1;
  }
  return result;
}
