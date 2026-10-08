int (__cdecl *__thiscall sub_5440E0(_DWORD *this))(_DWORD)
{
  int ***v2; // ecx
  volatile LONG *v3; // edi
  int (__cdecl *result)(_DWORD); // eax
  volatile LONG *v5; // [esp+4h] [ebp-4h] BYREF

  v2 = (int ***)*(this + 0xA); /*0x5440e4*/
  if ( v2 ) /*0x5440e9*/
  {
    sub_708560(v2, &v5, 6); /*0x5440f2*/
    if ( v5 ) /*0x5440fd*/
    {
      v3 = v5; /*0x544100*/
      if ( !InterlockedDecrement(v5 + 1) ) /*0x544106*/
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1); /*0x54411c*/
    }
    if ( *(this + 0xB) ) /*0x54411f*/
      sub_405680((NiNode *)*(this + 0xA), (BSShaderProperty *)*(this + 0xB)); /*0x54412a*/
    if ( *((_BYTE *)this + 0x34) ) /*0x54412f*/
      *(_WORD *)(*(this + 0xA) + 0x18) &= ~1u; /*0x544138*/
    NiAVObject_InitializePropertyState((NiAVObject *)*(this + 0xA)); /*0x544141*/
  }
  result = (int (__cdecl *)(_DWORD))*(this + 0xC); /*0x544146*/
  if ( result ) /*0x54414b*/
    return (int (__cdecl *)(_DWORD))result(*(this + 0xB)); /*0x544151*/
  return result; /*0x544156*/
}
