_DWORD *__thiscall sub_4A5C00(void *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  int v5; // ebx

  result = a2;
  if ( !a2 )
  {
    v4 = (_DWORD *)FormHeapAlloc(0xCu);
    if ( v4 )
    {
      v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xC))(this);
      v4[1] = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 4))(this);
      *v4 = &TESRegionGrassObject::`vftable';
      v4[2] = v5;
      return v4;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
