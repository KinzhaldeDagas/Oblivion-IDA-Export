int __thiscall sub_89D730(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax

  if ( this ) /*0x89d736*/
    result = *(this + 2); /*0x89d738*/
  else
    result = 0; /*0x89d73d*/
  if ( a2 != result ) /*0x89d745*/
  {
    if ( result ) /*0x89d749*/
    {
      v4 = (*(int (__thiscall **)(_DWORD *))(*this + 0x58))(this); /*0x89d750*/
      if ( v4 ) /*0x89d754*/
      {
        if ( *(_DWORD *)(v4 + 0x2B0) ) /*0x89d756*/
          (*(void (__thiscall **)(_DWORD *))(*this + 0x60))(this); /*0x89d766*/
      }
    }
    return sub_89D400(this, a2); /*0x89d76b*/
  }
  return result; /*0x89d770*/
}
