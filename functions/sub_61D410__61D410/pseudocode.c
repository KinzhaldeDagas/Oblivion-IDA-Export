void __thiscall sub_61D410(int this)
{
  int v2; // edi

  if ( *(_DWORD *)(this + 0x6C) == 6 )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(this + 0x3C) + 0x58);
    if ( *(float *)(this + 0xD8) >= *(float *)(this + 0x44) - *(float *)(this + 0xD4) )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x184))(v2) == this )
      {
        sub_619920(this, 0);
        *(_DWORD *)(this + 0x12C) = 0;
      }
    }
    else
    {
      sub_619920(this, 0);
      *(_DWORD *)(this + 0x12C) = 0;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x174))(v2) )
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x174))(v2) + 0x20) != 0xC )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 0x178))(v2, 0);
      }
    }
  }
}
