int __thiscall sub_96E250(_DWORD *this, int a2)
{
  int v2; // edi

  v2 = a2; /*0x96e252*/
  sub_711D00(this, a2); /*0x96e259*/
  sub_96DE80(v2, (int)(this + 9)); /*0x96e263*/
  sub_96DE80(v2, (int)(this + 0xA)); /*0x96e26d*/
  if ( *(this + 0xB) ) /*0x96e275*/
  {
    LOBYTE(a2) = 1; /*0x96e281*/
    sub_7127E0(v2, (int)&a2); /*0x96e286*/
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 0xB) + 4))(*(this + 0xB), v2); /*0x96e297*/
  }
  else
  {
    LOBYTE(a2) = 0; /*0x96e2a4*/
    return sub_7127E0(v2, (int)&a2); /*0x96e2a9*/
  }
}
