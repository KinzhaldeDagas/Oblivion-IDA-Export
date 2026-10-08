bool __thiscall sub_728F50(NiRenderTargetGroup *this, int a2)
{
  bool result; // al
  int v4; // ecx

  result = 0; /*0x728f7d*/
  if ( (unsigned __int8)sub_700650(this, a2) ) /*0x728f59*/
  {
    v4 = *((_DWORD *)this + 0xD); /*0x728f69*/
    if ( !v4 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2) ) /*0x728f76*/
      return 1; /*0x728f60*/
  }
  return result; /*0x728f62*/
}
