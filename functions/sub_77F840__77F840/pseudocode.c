int __thiscall sub_77F840(_DWORD *this, int a2)
{
  int v3; // edi
  int result; // eax

  *(this + 0x3FF) = a2; /*0x77f849*/
  if ( a2 ) /*0x77f84f*/
  {
    v3 = *(_DWORD *)(a2 + 0x280); /*0x77f852*/
    result = *(this + 0x3FE); /*0x77f858*/
    if ( result ) /*0x77f860*/
      result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(*(this + 0x3FE)); /*0x77f868*/
    *(this + 0x3FE) = v3; /*0x77f86c*/
    if ( v3 ) /*0x77f872*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x77f87a*/
  }
  else
  {
    result = *(this + 0x3FE); /*0x77f881*/
    if ( result ) /*0x77f889*/
      result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(*(this + 0x3FE)); /*0x77f891*/
    *(this + 0x3FE) = 0; /*0x77f893*/
  }
  return result; /*0x77f87d*/
}
