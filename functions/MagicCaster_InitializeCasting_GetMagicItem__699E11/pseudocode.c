int __usercall MagicCaster_InitializeCasting____::GetMagicItem@<eax>(char a1@<bl>, _DWORD *a2@<esi>)
{
  int result; // eax
  int v3; // edi
  int (__thiscall *v4)(_DWORD *, _DWORD); // edx
  int v5; // eax
  _DWORD *v6; // eax
  int FXEffect; // eax
  unsigned int v8; // ecx
  int v9; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*a2 + 0x30))(a2);
  if ( result )
  {
    v3 = *a2;
    v4 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x30);
    a2[2] = 7;
    v5 = v4(a2, 0);
    (*(void (__thiscall **)(_DWORD *, int))(v3 + 0x18))(a2, v5);
    if ( a1 )
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 0x30))(a2);
      FXEffect = MagicItem_GetFXEffect(v6, 0);
      if ( FXEffect )
      {
        LOWORD(v8) = *(_WORD *)(FXEffect + 0x20);
        if ( (_WORD)v8 == 0xFFFF )
          v8 = strlen(*(const char **)(FXEffect + 0x1C));
        else
          v8 = (unsigned __int16)v8;
        if ( v8 )
        {
          v9 = (*(int (__thiscall **)(int))(*(_DWORD *)(FXEffect + 0x18) + 0x14))(FXEffect + 0x18);
          QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v9, 0, 1);
        }
      }
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x34))(a2, 0);
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x3C))(a2, 0);
  }
  return result;
}
