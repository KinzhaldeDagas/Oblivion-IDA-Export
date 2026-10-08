int __thiscall sub_75ED20(_DWORD *this, float a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int result; // eax

  v5 = *(this + 0xA); /*0x75ed20*/
  if ( !v5 ) /*0x75ed25*/
    return 0; /*0x75ed25*/
  result = (*(int (__stdcall **)(_DWORD, int, int, int))(*(_DWORD *)v5 + 0x4C))(LODWORD(a2), a3, a4, a5); /*0x75ed43*/
  if ( !result ) /*0x75ed47*/
    return 0; /*0x75ed49*/
  return result; /*0x75ed4b*/
}
