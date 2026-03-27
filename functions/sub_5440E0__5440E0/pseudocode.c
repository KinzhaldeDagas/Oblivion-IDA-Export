int (__cdecl *__thiscall sub_5440E0(_DWORD *this))(_DWORD)
{
  _DWORD *v2; // ecx
  volatile LONG *v3; // edi
  int (__cdecl *result)(_DWORD); // eax
  volatile LONG *v5; // [esp+4h] [ebp-4h] BYREF

  v2 = (_DWORD *)*(this + 0xA);
  if ( v2 )
  {
    sub_708560(v2, &v5, 6);
    if ( v5 )
    {
      v3 = v5;
      if ( !InterlockedDecrement(v5 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
    }
    if ( *(this + 0xB) )
      sub_405680((NiNode *)*(this + 0xA), (BSShaderProperty *)*(this + 0xB));
    if ( *((_BYTE *)this + 0x34) )
      *(_WORD *)(*(this + 0xA) + 0x18) &= ~1u;
    NiAVObject_InitializePropertyState((NiAVObject *)*(this + 0xA));
  }
  result = (int (__cdecl *)(_DWORD))*(this + 0xC);
  if ( result )
    return (int (__cdecl *)(_DWORD))result(*(this + 0xB));
  return result;
}
