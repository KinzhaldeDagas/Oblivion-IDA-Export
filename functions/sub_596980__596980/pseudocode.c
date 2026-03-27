char __thiscall sub_596980(int this, int a2, int a3)
{
  int v8; // edi
  InterfaceManager *Singleton; // eax

  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x34))(this);
  if ( sub_578FE0() == v8 )
  {
    switch ( a2 )
    {
      case 9:
        Singleton = InterfaceManager_GetSingleton(0, 0);
        (*(void (__thiscall **)(int, int, Tile *))(*(_DWORD *)this + 0xC))(this, 0x63, Singleton->altActiveTile);
        return 1;
      case 0xA:
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 0xC))(this, 4, 0);
        return 1;
      case 0xB:
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 0xC))(this, 5, 0);
        return 1;
    }
  }
  return 0;
}
