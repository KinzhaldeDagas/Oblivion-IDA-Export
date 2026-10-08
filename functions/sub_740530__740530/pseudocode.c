bool __thiscall sub_740530(NiRenderTargetGroup *this, int a2)
{
  bool result; // al

  result = sub_732B80(this, a2); /*0x740539*/
  if ( result ) /*0x740540*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x17) + 0x24))(*((_DWORD *)this + 0x17), a2); /*0x740550*/
    return 1; /*0x740553*/
  }
  return result; /*0x740542*/
}
