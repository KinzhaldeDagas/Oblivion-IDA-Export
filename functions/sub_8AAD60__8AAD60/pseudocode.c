void __thiscall sub_8AAD60(int this, float a2)
{
  int v3; // eax
  int v4; // edi
  __int16 v5; // ax
  int v6; // [esp+18h] [ebp-8h] BYREF
  int v7; // [esp+1Ch] [ebp-4h] BYREF
  float v8; // [esp+24h] [ebp+4h]

  v3 = *(_DWORD *)(this + 0x30);
  if ( v3 )
  {
    if ( (*(_BYTE *)(this + 8) & 8) != 0 )
    {
      if ( *(_DWORD *)(this + 0x50) )
      {
        v4 = sub_497420(v3);
        if ( v4 )
        {
          v8 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)this + 0x64))(this, LODWORD(a2));
          if ( sub_8AA990((float **)this, v8, (float *)&v6, (float *)&v7) )
          {
            if ( *(float *)(this + 0x58) < 0.0 )
            {
              *(float *)(this + 0x58) = *(float *)(v4 + 0x14);
              *(float *)(this + 0x5C) = *(float *)(v4 + 0x18);
            }
            *(float *)(v4 + 0x14) = *(float *)&v6;
            *(float *)(v4 + 0x18) = *(float *)&v7;
          }
          if ( *(float *)(this + 0x18) == v8 )
          {
            v5 = *(_WORD *)(this + 8);
            if ( (v5 & 6) == 4 )
            {
              if ( (v5 & 0x40) != 0 )
                sub_8AA7F0((float *)this);
              sub_8AA3E0(this);
              sub_8AA420(this, v4);
              (*(void (**)(void))(*(_DWORD *)this + 0x50))();
            }
          }
        }
        else
        {
          *(float *)(this + 0x20) = a2;
        }
      }
    }
  }
}
