int __thiscall sub_60F250(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // ebp
  _DWORD *v8; // ebp
  _DWORD *v9; // ebp
  _DWORD *v10; // ebp
  _DWORD *v11; // ebp
  _DWORD *v12; // ebp

  v5 = *(this + 0x16);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 0x20) == 0xF )
        JUMPOUT(0x60FB86);
    }
  }
  if ( a2 )
  {
    switch ( a2[1] )
    {
      case 0:
        v9 = this + 0x11;
        Script_AddEventToExtraScript(a2[3], this + 0x11, 0x10000);
        Script_AddEventToExtraScript(a2[2], v9, 0x400000);
        return def_60F2A6(a2, a3, a4, a5);
      case 1:
        v12 = this + 0x11;
        Script_AddEventToExtraScript(a2[3], this + 0x11, 0x20000);
        Script_AddEventToExtraScript(a2[2], v12, &loc_800000);
        return def_60F2A6(a2, a3, a4, a5);
      case 2:
        v10 = this + 0x11;
        Script_AddEventToExtraScript(a2[3], this + 0x11, 0x40000);
        Script_AddEventToExtraScript(a2[2], v10, 0x1000000);
        return def_60F2A6(a2, a3, a4, a5);
      case 3:
        v7 = this + 0x11;
        Script_AddEventToExtraScript(a2[3], this + 0x11, 0x80000);
        Script_AddEventToExtraScript(a2[2], v7, 0x2000000);
        return def_60F2A6(a2, a3, a4, a5);
      case 4:
        v8 = this + 0x11;
        Script_AddEventToExtraScript(a2[3], this + 0x11, 0x100000);
        Script_AddEventToExtraScript(a2[2], v8, 0x4000000);
        return def_60F2A6(a2, a3, a4, a5);
      case 5:
        v11 = this + 0x11;
        Script_AddEventToExtraScript(a2[3], this + 0x11, 0x200000);
        Script_AddEventToExtraScript(a2[2], v11, 0x8000000);
        return def_60F2A6(a2, a3, a4, a5);
      default:
        break;
    }
  }
  JUMPOUT(0x60F34E);
}
