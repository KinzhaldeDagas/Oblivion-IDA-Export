int __thiscall sub_74FDB0(int *this, int a2)
{
  int result; // eax
  int v4; // ecx

  result = sub_75E670(this, a2); /*0x74fdb9*/
  v4 = *(this + 0x12); /*0x74fdbe*/
  if ( v4 ) /*0x74fdc3*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x38))(v4, a2); /*0x74fdcb*/
  return result; /*0x74fdcd*/
}
