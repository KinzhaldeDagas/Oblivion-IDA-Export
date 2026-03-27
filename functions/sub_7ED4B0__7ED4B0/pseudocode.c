int __thiscall sub_7ED4B0(int **this)
{
  int v1; // edi
  int *v3; // eax
  int v4; // ecx
  bool v5; // bl
  void (__thiscall ***v6)(_DWORD, int); // esi
  char v7; // bl
  void (__thiscall ***v8)(_DWORD, int); // esi
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h] BYREF

  v1 = 0;
  v10 = 0;
  if ( !*(this + 0x1F) )
    goto LABEL_20;
  do
  {
    v3 = *(this + 0x1F);
    v4 = *v3;
    *(this + 0x1F) = (int *)*v3;
    v1 = v3[2];
    v5 = 0;
    if ( v1 )
    {
      if ( v4 )
      {
        if ( *(_WORD *)(v1 + 0x118) == 0xFF
          || (v10 |= 1u, (*(_BYTE *)(*sub_405AD0((_DWORD *)v1, &v11) + 0x18) & 1) != 0)
          || *(_BYTE *)(v1 + 0xF4) == 1 )
        {
          v5 = 1;
        }
      }
    }
    if ( (v10 & 1) != 0 )
    {
      v6 = (void (__thiscall ***)(_DWORD, int))v11;
      v10 &= ~1u;
      if ( v11 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        {
          if ( v6 )
            (**v6)(v6, 1);
        }
      }
    }
  }
  while ( v5 );
  if ( v1
    && (*(_WORD *)(v1 + 0x118) == 0xFF
     || (LOBYTE(v10) = v10 | 2, (*(_BYTE *)(*sub_405AD0((_DWORD *)v1, &v11) + 0x18) & 1) != 0)
     || *(_BYTE *)(v1 + 0xF4) == 1) )
  {
    v7 = 1;
  }
  else
  {
LABEL_20:
    v7 = 0;
  }
  if ( (v10 & 2) != 0 )
  {
    v8 = (void (__thiscall ***)(_DWORD, int))v11;
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
      {
        if ( v8 )
          (**v8)(v8, 1);
      }
    }
  }
  return v7 == 0 ? v1 : 0;
}
