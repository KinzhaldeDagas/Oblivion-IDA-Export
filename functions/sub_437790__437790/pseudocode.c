int __thiscall sub_437790(void *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int result; // eax

  if ( *((int *)this + 3) >= 4 )
  {
    if ( !*((_DWORD *)this + 7)
      || (v2 = *((_DWORD *)this + 7),
          v3 = *(unsigned __int16 *)(v2 + 0xC),
          v4 = *(_DWORD *)(v2 + 0x10),
          (result = v3 == v4) != 0) )
    {
      MagicItem_LoadVFX__(*((char **)this + 8));
      result = *((_DWORD *)this + 2);
      if ( !result )
        return (**(int (__thiscall ***)(void *, int))this)(this, 1);
    }
  }
  return result;
}
