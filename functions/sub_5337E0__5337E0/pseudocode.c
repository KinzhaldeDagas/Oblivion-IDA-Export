void __thiscall sub_5337E0(int *this, int *a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax

  v3 = *(this + 0x68); /*0x5337e3*/
  if ( v3 ) /*0x5337eb*/
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v3 + 0x5C))(v3, a2); /*0x5337f8*/
    if ( a2 ) /*0x5337fc*/
    {
      v4 = *(this + 0x68); /*0x5337fe*/
      v5 = sub_8AEB80(0xFFu, 0x10u, 0x10u, 0x19u); /*0x53380f*/
      sub_88BB60(a2, v4, v5); /*0x53381b*/
    }
  }
}
