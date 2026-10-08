signed int __thiscall sub_68F9B0(char *this, int *a2)
{
  char *v2; // esi
  int v3; // eax
  int v4; // eax
  signed int result; // eax

  v2 = this + 0xFFFFFFFC; /*0x68f9b6*/
  sub_8A63A0(a2, (int)(this + 0xFFFFFFFC)); /*0x68f9bc*/
  if ( v2 ) /*0x68f9c3*/
    v3 = (int)(v2 + 4); /*0x68f9c5*/
  else
    v3 = 0; /*0x68f9ca*/
  sub_8A6300(a2, v3); /*0x68f9cf*/
  if ( v2 ) /*0x68f9d6*/
    v4 = (int)(v2 + 8); /*0x68f9d8*/
  else
    v4 = 0; /*0x68f9dd*/
  result = sub_8A6350(a2, v4); /*0x68f9e2*/
  if ( v2 ) /*0x68f9e9*/
    return (*(signed int (__thiscall **)(char *, int))(*(_DWORD *)v2 + 0x10))(v2, 1); /*0x68f9f4*/
  return result; /*0x68f9f6*/
}
