_DWORD *__thiscall sub_4A5C00(void *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  int v5; // ebx

  result = a2; /*0x4a5c25*/
  if ( !a2 ) /*0x4a5c2b*/
  {
    v4 = (_DWORD *)FormHeapAlloc(0xCu); /*0x4a5c34*/
    if ( v4 ) /*0x4a5c47*/
    {
      v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xC))(this); /*0x4a5c52*/
      v4[1] = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 4))(this); /*0x4a5c5d*/
      *v4 = &TESRegionGrassObject::`vftable'; /*0x4a5c60*/
      v4[2] = v5; /*0x4a5c66*/
      return v4; /*0x4a5c69*/
    }
    else
    {
      return 0; /*0x4a5c80*/
    }
  }
  return result; /*0x4a5c6b*/
}
