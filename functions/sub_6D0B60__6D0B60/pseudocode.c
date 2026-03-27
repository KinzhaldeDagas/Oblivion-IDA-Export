void __thiscall sub_6D0B60(float *this, int a2)
{
  unsigned int v3; // ebx
  unsigned int i; // edi
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  float v8; // [esp+1Ch] [ebp-8h] BYREF
  float v9; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)(*((_DWORD *)this + 0x14) + 8);
  for ( i = 0; i < v3; ++i )
  {
    v5 = (*(int (__thiscall **)(float *, unsigned int))(*(_DWORD *)this + 0x80))(this, i);
    v6 = *((unsigned __int16 *)this + 0x25);
    v9 = 0.0;
    if ( i < v6 )
      v9 = *(float *)(*((_DWORD *)this + 0x11) + 4 * i);
    v8 = v9;
    if ( i || !*(_BYTE *)(*((_DWORD *)this + 0x14) + 0x14) )
    {
      if ( !v5
        || !(*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD, float *))(*(_DWORD *)v5 + 0x5C))(
              v5,
              *(this + 0xA),
              *((_DWORD *)this + 0xC),
              &v8) )
      {
        continue;
      }
    }
    else if ( *((_BYTE *)this + 0x59) )
    {
      v8 = 0.0;
    }
    else
    {
      v8 = 1.0;
    }
    v7 = *((unsigned __int16 *)this + 0x25);
    v9 = v8;
    if ( i < v7 )
      sub_4CA210((int)(this + 0x10), i, &v9);
  }
}
