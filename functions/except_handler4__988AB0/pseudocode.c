int __cdecl _except_handler4(int a1, char *TargetFrame, int a3)
{
  int v3; // esi
  char *v4; // edi
  int v5; // ebp
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  char *v10; // eax
  int v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+18h] [ebp-Ch]
  _DWORD v13[2]; // [esp+1Ch] [ebp-8h] BYREF

  v3 = __security_cookie ^ *((_DWORD *)TargetFrame + 2);
  v12 = 1;
  v4 = TargetFrame + 0x10;
  if ( (*(_BYTE *)(a1 + 4) & 0x66) != 0 )
  {
    if ( *((_DWORD *)TargetFrame + 3) != 0xFFFFFFFE )
      _EH4_LocalUnwind(TargetFrame + 0x10, &__security_cookie);
    return v12;
  }
  v5 = *((_DWORD *)TargetFrame + 3);
  v13[0] = a1;
  v13[1] = a3;
  *((_DWORD *)TargetFrame + 0xFFFFFFFF) = v13;
  if ( v5 == 0xFFFFFFFE )
    return v12;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v3 + 0xC * v5 + 0x14);
    v7 = *(_DWORD *)(v3 + 0xC * v5 + 0x10);
    v11 = v7;
    if ( v6 )
      break;
LABEL_7:
    v5 = v7;
    if ( v7 == 0xFFFFFFFE )
      return v12;
  }
  v8 = _EH4_CallFilterFunc(v6, v4);
  if ( v8 < 0 )
    return 0;
  if ( v8 <= 0 )
  {
    v7 = v11;
    goto LABEL_7;
  }
  if ( *(_DWORD *)a1 == 0xE06D7363 )
  {
    if ( __DestructExceptionObject )
    {
      if ( _IsNonwritableInCurrentImage(&off_AA4930) )
        __DestructExceptionObject(a1, 1);
    }
  }
  _EH4_GlobalUnwind(TargetFrame);
  v10 = TargetFrame;
  if ( *((_DWORD *)TargetFrame + 3) != v5 )
  {
    _EH4_LocalUnwind(v4, &__security_cookie);
    v10 = TargetFrame;
  }
  *((_DWORD *)v10 + 3) = v11;
  return _except_handler4_::__EH4_TransferToHandler_8(*(_DWORD *)(v3 + 0xC * v5 + 0x18), v4);
}
