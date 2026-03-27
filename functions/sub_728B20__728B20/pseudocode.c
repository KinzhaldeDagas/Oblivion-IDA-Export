void __thiscall sub_728B20(int this)
{
  int v2; // edi

  if ( *(_BYTE *)(this + 0x3C) )
  {
    v2 = *(_DWORD *)(this + 0x34);
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 0x4C))(*(_DWORD *)(this + 0x34)) )
      {
        if ( !*(_BYTE *)(this + 0x3D) )
          sub_7261D0(v2, 0);
      }
    }
    *(_BYTE *)(this + 0x3C) = 0;
  }
}
