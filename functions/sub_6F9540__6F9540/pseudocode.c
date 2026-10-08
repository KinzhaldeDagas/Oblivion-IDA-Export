int __cdecl sub_6F9540(int a1)
{
  NiRTTI *v1; // eax
  char v2; // al
  int v3; // eax

  if ( !a1 ) /*0x6f954a*/
    return 0; /*0x6f954a*/
  v1 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6f9553*/
  if ( v1 ) /*0x6f9557*/
  {
    while ( v1 != &stru_B3F95C ) /*0x6f9565*/
    {
      v1 = v1->parent; /*0x6f9567*/
      if ( !v1 ) /*0x6f956c*/
        goto LABEL_5; /*0x6f956c*/
    }
    v2 = 1; /*0x6f957e*/
  }
  else
  {
LABEL_5:
    v2 = 0; /*0x6f956e*/
  }
  v3 = v2 != 0 ? a1 : 0;
  if ( v3 ) /*0x6f9576*/
    return *(_DWORD *)(v3 + 0x38); /*0x6f9578*/
  else
    return 0; /*0x6f9582*/
}
