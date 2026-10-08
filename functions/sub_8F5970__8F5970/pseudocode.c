BOOL __thiscall sub_8F5970(int *this)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  char v6; // [esp+7h] [ebp-1h] BYREF

  if ( !*(_BYTE *)(*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)*(this + 2) + 8))(*(this + 2), &v6) ) /*0x8f5981*/
    return 1; /*0x8f5986*/
  sub_8F58D0(this); /*0x8f5993*/
  v3 = *(this + 6) - *(this + 5); /*0x8f599b*/
  v4 = 0; /*0x8f599e*/
  if ( v3 <= 0 ) /*0x8f59a2*/
    return 0; /*0x8f59c8*/
  while ( 1 ) /*0x8f59b3*/
  {
    v5 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 2) + 0xC))( /*0x8f59b3*/
           *(this + 2),
           *(this + 4) + *(this + 3),
           v3);
    v4 += v5; /*0x8f59bb*/
    *(this + 5) += v5; /*0x8f59bf*/
    if ( v5 != v3 ) /*0x8f59c2*/
      break; /*0x8f59c2*/
    if ( v4 >= v3 ) /*0x8f59c6*/
      return 0; /*0x8f59c6*/
  }
  return v4 == 0; /*0x8f598b*/
}
