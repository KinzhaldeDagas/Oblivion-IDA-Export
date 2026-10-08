char __thiscall sub_70E940(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_700650(this, a2); /*0x70e949*/
  if ( result ) /*0x70e950*/
  {
    v4 = *((_DWORD *)this + 0x13); /*0x70e957*/
    if ( v4 ) /*0x70e95c*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x70e964*/
    return 1; /*0x70e967*/
  }
  return result; /*0x70e952*/
}
