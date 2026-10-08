char __thiscall sub_73BF30(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_708B40(a2); /*0x73bf39*/
  if ( result ) /*0x73bf40*/
  {
    v4 = *(this + 0x4F); /*0x73bf47*/
    if ( v4 ) /*0x73bf4f*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x73bf57*/
    return 1; /*0x73bf5a*/
  }
  return result; /*0x73bf42*/
}
