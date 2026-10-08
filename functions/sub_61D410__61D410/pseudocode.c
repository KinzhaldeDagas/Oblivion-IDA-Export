void __thiscall sub_61D410(int this)
{
  int v2; // edi

  if ( *(_DWORD *)(this + 0x6C) == 6 ) /*0x61d417*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)(this + 0x3C) + 0x58); /*0x61d430*/
    if ( *(float *)(this + 0xD8) >= *(float *)(this + 0x44) - *(float *)(this + 0xD4) ) /*0x61d43a*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x184))(v2) == this ) /*0x61d48e*/
      {
        sub_619920(this, 0); /*0x61d494*/
        *(_DWORD *)(this + 0x12C) = 0; /*0x61d499*/
      }
    }
    else
    {
      sub_619920(this, 0); /*0x61d43e*/
      *(_DWORD *)(this + 0x12C) = 0; /*0x61d443*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x174))(v2) ) /*0x61d457*/
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x174))(v2) + 0x20) != 0xC ) /*0x61d46d*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 0x178))(v2, 0); /*0x61d47b*/
      }
    }
  }
}
