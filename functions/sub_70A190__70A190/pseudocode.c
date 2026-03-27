unsigned int __thiscall sub_70A190(int this, float a2)
{
  unsigned int result; // eax
  unsigned int v4; // ebx
  bool v5; // zf
  int *v6; // esi
  __int16 v7; // ax
  int v8; // eax

  result = (unsigned int)sub_47C930((_DWORD *)this, a2, (*(_BYTE *)(this + 0x18) & 8) != 0);
  if ( (*(_BYTE *)(this + 0x18) & 4) != 0 )
    result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x74))(this);
  v4 = 0;
  v5 = *(_WORD *)(this + 0xB6) == 0;
  *(float *)(this + 0x2C) = 0.0;
  if ( !v5 )
  {
    do
    {
      v6 = *(int **)(*(_DWORD *)(this + 0xB0) + 4 * v4);
      if ( v6 )
      {
        v7 = *((_WORD *)v6 + 0xC);
        if ( (v7 & 2) != 0 )
        {
          v5 = (v7 & 0x10) == 0;
          v8 = *v6;
          if ( v5 )
            (*(void (__stdcall **)(_DWORD))(v8 + 0x64))(LODWORD(a2));
          else
            (*(void (__stdcall **)(_DWORD))(v8 + 0x68))(LODWORD(a2));
        }
        if ( 0.0 != *((float *)v6 + 0xB) )
        {
          if ( 0.0 == *(float *)(this + 0x2C) )
          {
            *(_DWORD *)(this + 0x20) = v6[8];
            *(_DWORD *)(this + 0x24) = v6[9];
            *(_DWORD *)(this + 0x28) = v6[0xA];
            *(_DWORD *)(this + 0x2C) = v6[0xB];
          }
          else
          {
            sub_72A6B0((float *)(this + 0x20), (float *)v6 + 8);
          }
        }
      }
      result = *(unsigned __int16 *)(this + 0xB6);
      ++v4;
    }
    while ( v4 < result );
  }
  return result;
}
