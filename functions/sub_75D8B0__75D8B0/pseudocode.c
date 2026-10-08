bool __thiscall sub_75D8B0(NiRenderTargetGroup *this, int a2)
{
  bool result; // al

  result = sub_71FDD0(this, a2); /*0x75d8b9*/
  if ( result ) /*0x75d8c0*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x1A) + 0x24))(*((_DWORD *)this + 0x1A), a2); /*0x75d8d0*/
    return 1; /*0x75d8d3*/
  }
  return result; /*0x75d8c2*/
}
