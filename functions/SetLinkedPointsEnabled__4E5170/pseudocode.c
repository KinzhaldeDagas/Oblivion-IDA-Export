void __thiscall SetLinkedPointsEnabled(_DWORD **this, int a2, char a3)
{
  int v4; // esi
  char i; // al
  int v6; // [esp+4h] [ebp-4h] BYREF

  v6 = 0;
  if ( NiTMap_GetAt(this + 0xD, a2, &v6) )
  {
    v4 = v6;
    for ( i = 0; v4; i = 1 )
    {
      if ( !*(_DWORD *)(v4 + 4) && !*(_DWORD *)v4 )
        break;
      sub_67ED80(*(_BYTE **)v4, a3 == 0);
      v4 = *(_DWORD *)(v4 + 4);
    }
    if ( !a3 )
    {
      if ( i )
        (*(void (__thiscall **)(_DWORD, int))(**(this + 8) + 0x40))(*(this + 8), 0x1000000);
    }
  }
}
