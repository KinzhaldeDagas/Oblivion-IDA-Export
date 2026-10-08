int __cdecl _except_handler4(int a1, char *TargetFrame, int a3)
{
  int v3; // esi
  int v4; // ebp
  int (*v5)(void); // ecx
  int v6; // eax
  int v7; // eax
  char *v9; // eax
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+18h] [ebp-Ch]
  _DWORD v12[2]; // [esp+1Ch] [ebp-8h] BYREF

  v3 = __security_cookie ^ *((_DWORD *)TargetFrame + 2); /*0x988abd*/
  v11 = 1; /*0x988ace*/
  if ( (*(_BYTE *)(a1 + 4) & 0x66) != 0 ) /*0x988b00*/
  {
    if ( *((_DWORD *)TargetFrame + 3) != 0xFFFFFFFE ) /*0x988c29*/
      _EH4_LocalUnwind(TargetFrame + 0x10, &__security_cookie); /*0x988c3c*/
    return v11; /*0x988c41*/
  }
  v4 = *((_DWORD *)TargetFrame + 3); /*0x988b06*/
  v12[0] = a1; /*0x988b14*/
  v12[1] = a3; /*0x988b18*/
  *((_DWORD *)TargetFrame + 0xFFFFFFFF) = v12; /*0x988b1c*/
  if ( v4 == 0xFFFFFFFE ) /*0x988b1f*/
    return v11; /*0x988b8a*/
  while ( 1 ) /*0x988b25*/
  {
    v5 = *(int (**)(void))(v3 + 0xC * v4 + 0x14); /*0x988b25*/
    v6 = *(_DWORD *)(v3 + 0xC * v4 + 0x10); /*0x988b2f*/
    v10 = v6; /*0x988b31*/
    if ( v5 ) /*0x988b35*/
      break; /*0x988b35*/
LABEL_7:
    v4 = v6; /*0x988b4d*/
    if ( v6 == 0xFFFFFFFE ) /*0x988b52*/
      return v11; /*0x988b52*/
  }
  v7 = _EH4_CallFilterFunc(v5); /*0x988b39*/
  if ( v7 < 0 ) /*0x988b45*/
    return 0; /*0x988b93*/
  if ( v7 <= 0 ) /*0x988b47*/
  {
    v6 = v10; /*0x988b49*/
    goto LABEL_7; /*0x988b49*/
  }
  if ( *(_DWORD *)a1 == 0xE06D7363 ) /*0x988b9f*/
  {
    if ( __DestructExceptionObject ) /*0x988ba8*/
    {
      if ( _IsNonwritableInCurrentImage((int)&off_AA4930) ) /*0x988baf*/
        __DestructExceptionObject((_DWORD *)a1); /*0x988bc2*/
    }
  }
  _EH4_GlobalUnwind(TargetFrame); /*0x988bcf*/
  v9 = TargetFrame; /*0x988bd4*/
  if ( *((_DWORD *)TargetFrame + 3) != v4 ) /*0x988bdb*/
  {
    _EH4_LocalUnwind(TargetFrame + 0x10, &__security_cookie); /*0x988be7*/
    v9 = TargetFrame; /*0x988bec*/
  }
  *((_DWORD *)v9 + 3) = v10; /*0x988bf4*/
  return _except_handler4_::__EH4_TransferToHandler_8(*(int (__fastcall **)(_DWORD, _DWORD))(v3 + 0xC * v4 + 0x18)); /*0x988b83*/
}
