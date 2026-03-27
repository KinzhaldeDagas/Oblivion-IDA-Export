void __thiscall sub_437BB0(int this)
{
  MobileObject *v5; // ecx
  TESObjectCELL *ParentCell; // eax
  int v7; // edi

  if ( *(_DWORD *)(this + 0xC) == 6 || (v5 = *(MobileObject **)(this + 0x18)) == 0 || v5->super.niNode )
  {
    v7 = *(_DWORD *)(this + 0x1C);
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      *(_DWORD *)(this + 0x1C) = 0;
    }
  }
  else
  {
    sub_4D7D10(v5, *(volatile LONG **)(this + 0x1C));
    ParentCell = TESObjectREFR_GetParentCell(*(TESObjectREFR **)(this + 0x18));
    sub_441EF0((int)TES, *(TESObjectREFR **)(this + 0x18), ParentCell, 0, 0);
    sub_4D7010(*(_DWORD **)(this + 0x18), 1);
  }
}
