char __thiscall sub_6D9A30(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_6EC2C0(a2); /*0x6d9a39*/
  if ( result ) /*0x6d9a40*/
  {
    v4 = *(this + 7); /*0x6d9a47*/
    if ( v4 ) /*0x6d9a4c*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x6d9a54*/
    return 1; /*0x6d9a57*/
  }
  return result; /*0x6d9a42*/
}
