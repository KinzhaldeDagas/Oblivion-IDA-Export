int __thiscall sub_8A9390(_DWORD *this, int a2)
{
  int v3; // esi
  NiRTTI *v4; // eax
  char v5; // al
  int result; // eax

  if ( a2 ) /*0x8a939a*/
    v3 = *(_DWORD *)(a2 + 0xC); /*0x8a939c*/
  else
    v3 = 0; /*0x8a93a1*/
  if ( !v3 ) /*0x8a93a5*/
    return 0; /*0x8a93a5*/
  v4 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x8a93ae*/
  if ( v4 ) /*0x8a93b2*/
  {
    while ( v4 != &stru_BA7D84 ) /*0x8a93b9*/
    {
      v4 = v4->parent; /*0x8a93bb*/
      if ( !v4 ) /*0x8a93c0*/
        goto LABEL_8; /*0x8a93c0*/
    }
    v5 = 1; /*0x8a93db*/
  }
  else
  {
LABEL_8:
    v5 = 0; /*0x8a93c2*/
  }
  result = v5 != 0 ? v3 : 0;
  if ( !result || (*(_DWORD *)(result + 0x18) & *(this + 1)) == 0 ) /*0x8a93d2*/
    return 0; /*0x8a93d4*/
  return result; /*0x8a93d6*/
}
