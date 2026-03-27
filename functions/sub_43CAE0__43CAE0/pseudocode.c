void __thiscall sub_43CAE0(volatile LONG *this)
{
  int v2; // eax
  TESObjectCELL *ParentCell; // eax

  if ( *((int *)this + 3) >= 4
    && (!*((_DWORD *)this + 7)
     || *(unsigned __int16 *)(*((_DWORD *)this + 7) + 0xC) == *(_DWORD *)(*((_DWORD *)this + 7) + 0x10))
    && *((_DWORD *)this + 3) != 6 )
  {
    v2 = *((_DWORD *)this + 9);
    if ( v2 )
    {
      if ( !*((_DWORD *)this + 0xA) )
        sub_435AB0((_DWORD *)this + 0xA, *(_DWORD *)(v2 + 0x28));
    }
    if ( *((_DWORD *)this + 0xA)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 8) + 0x190))(*((_DWORD *)this + 8))
      && (ParentCell = TESObjectREFR_GetParentCell(*((TESObjectREFR **)this + 8)),
          TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0))
      && sub_441E90(*((_DWORD **)this + 8))
      && !*(_DWORD *)(*((_DWORD *)this + 8) + 0x3C) )
    {
      sub_43C530(ModelLoaderPtr, (int)this);
    }
    else
    {
      sub_4BD750(this);
    }
  }
}
