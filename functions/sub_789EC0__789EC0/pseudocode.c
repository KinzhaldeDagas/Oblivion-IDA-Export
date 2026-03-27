void __thiscall sub_789EC0(int this)
{
  bool v2; // zf
  unsigned int v3; // edi
  _DWORD *v4; // eax
  _DWORD v5[23]; // [esp+0h] [ebp-5Ch] BYREF

  v5[0x13] = v5;
  v2 = *(_BYTE *)(this + 0x45) == 0;
  v5[0x16] = 0;
  if ( !v2 )
  {
    v3 = *(_DWORD *)(this + 0x60);
    if ( v3 )
    {
      if ( !*(_DWORD *)(this + 0x34) )
      {
        v4 = *(_DWORD **)(this + 0x30);
        if ( v4 )
        {
          if ( *v4 == 1 )
          {
            sub_797270(*(_DWORD **)(this + 0x60));
            FormHeapFree(v3);
            *(_DWORD *)(this + 0x60) = 0;
          }
        }
      }
    }
  }
}
