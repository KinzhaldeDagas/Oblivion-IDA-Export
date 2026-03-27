void __thiscall sub_78C160(int this)
{
  bool v2; // zf
  unsigned int v3; // edi
  _DWORD v4[23]; // [esp+0h] [ebp-5Ch] BYREF

  v4[0x13] = v4;
  v2 = *(_BYTE *)(this + 0x45) == 0;
  v4[0x16] = 0;
  if ( !v2 )
  {
    v3 = *(_DWORD *)(this + 4);
    if ( v3 )
    {
      if ( !*(_DWORD *)(this + 0x34) && **(_DWORD **)(this + 0x30) == 1 )
      {
        sub_797270(*(_DWORD **)(this + 4));
        FormHeapFree(v3);
        *(_DWORD *)(this + 4) = 0;
      }
    }
  }
}
