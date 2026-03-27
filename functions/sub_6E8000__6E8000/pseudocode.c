char __thiscall sub_6E8000(_DWORD *this)
{
  _DWORD *v1; // ebp
  LONG v2; // eax
  int v3; // ecx
  unsigned __int8 v4; // bl
  unsigned int v5; // esi
  int v6; // edi
  int (__thiscall ***v7)(_DWORD, int); // esi
  char v8; // dl
  unsigned int i; // ecx
  int v10; // esi
  char v12; // [esp+7h] [ebp-5h]

  v1 = this;
  v2 = *(this + 4);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 0x10);
    v4 = *(_BYTE *)(v2 + 0x14);
    v5 = *(_DWORD *)(v2 + 8);
    v6 = *(_DWORD *)(v2 + 0xC);
    if ( !v5 )
    {
      v7 = (int (__thiscall ***)(_DWORD, int))v2;
      v2 = InterlockedDecrement((volatile LONG *)(v2 + 4));
      if ( !v2 )
        LOBYTE(v2) = (**v7)(v7, 1);
      v1[4] = 0;
      *((_BYTE *)v1 + 0xC) = byte_A7C6AC;
      return v2;
    }
    LOBYTE(v2) = *(_BYTE *)(v6 + 4);
    v12 = v2;
    if ( v5 == 1 )
      goto LABEL_16;
    if ( v3 == 1 || v3 == 5 )
    {
      v8 = 1;
      for ( i = 1; i < v5; ++i )
      {
        if ( *(_BYTE *)(v6 + i * v4 + 4) != (_BYTE)v2 )
          v8 = 0;
        if ( !v8 )
          return v2;
        v1 = this;
      }
LABEL_16:
      v10 = v1[4];
      if ( v10 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
          (**(void (__thiscall ***)(int, int))v10)(v10, 1);
        LOBYTE(v2) = v12;
        v1[4] = 0;
      }
      *((_BYTE *)v1 + 0xC) = v2;
    }
  }
  return v2;
}
