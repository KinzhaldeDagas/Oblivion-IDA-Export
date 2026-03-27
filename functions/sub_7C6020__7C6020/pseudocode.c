void __thiscall sub_7C6020(_DWORD *this, int a2)
{
  int v2; // esi
  int *v4; // ebx
  void (__thiscall ***v5)(_DWORD, int); // edi
  float v6; // edx
  float v7; // eax
  float v8[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = a2;
  if ( *(_BYTE *)(a2 + 0xFC) )
  {
    if ( *(_BYTE *)(a2 + 0x104) )
    {
      if ( !*(_BYTE *)(a2 + 0xF4) )
      {
        v4 = (int *)*sub_405AD0((_DWORD *)a2, &a2);
        if ( a2 )
        {
          v5 = (void (__thiscall ***)(_DWORD, int))a2;
          if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
            (**v5)(v5, 1);
        }
        v6 = *(float *)(v2 + 0x10C);
        v7 = *(float *)(v2 + 0x110);
        v8[0] = *(float *)(v2 + 0x108);
        v8[1] = v6;
        v8[2] = v7;
        if ( sub_8AA390(v8, (float *)v4 + 0x22) )
        {
          if ( *(_WORD *)(v2 + 0x118) != 0xFF )
          {
            sub_7C5720((_DWORD *)v2, v4[0x22], v4[0x23], v4[0x24]);
            sub_7C5F60(this, v2);
          }
        }
      }
    }
  }
}
