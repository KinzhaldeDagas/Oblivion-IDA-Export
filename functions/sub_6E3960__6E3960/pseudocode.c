int __thiscall sub_6E3960(_DWORD *this)
{
  int result; // eax
  unsigned int v3; // ecx
  _DWORD *v4; // esi
  int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // eax
  int v8; // edx
  char v9; // bl
  unsigned int i; // edi
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  unsigned __int8 v14; // [esp+7h] [ebp-15h]
  unsigned int v15; // [esp+8h] [ebp-14h]
  int v16; // [esp+Ch] [ebp-10h] BYREF
  int v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]

  result = *(this + 7);
  if ( result )
  {
    v3 = *(_DWORD *)(result + 8);
    v4 = *(_DWORD **)(result + 0xC);
    v5 = *(_DWORD *)(result + 0x10);
    v15 = v3;
    v14 = *(_BYTE *)(result + 0x14);
    if ( !v3 )
    {
      v6 = (void (__thiscall ***)(_DWORD, int))result;
      if ( !InterlockedDecrement((volatile LONG *)(result + 4)) )
        (**v6)(v6, 1);
      *(this + 7) = 0;
      *(this + 3) = dword_B24FD4;
      *(this + 4) = dword_B24FD8;
      result = dword_B24FDC;
      *(this + 5) = dword_B24FDC;
      *(this + 6) = dword_B24FE0;
      return result;
    }
    v7 = v4[2];
    v16 = v4[1];
    v8 = v4[3];
    v17 = v7;
    result = v4[4];
    v18 = v8;
    v19 = result;
    if ( v3 == 1 )
      goto LABEL_16;
    if ( v5 == 1 || v5 == 5 )
    {
      v9 = 1;
      for ( i = 1; i < v3; ++i )
      {
        result = sub_632310((float *)((char *)v4 + i * v14 + 4), (float *)&v16);
        if ( (_BYTE)result )
          v9 = 0;
        if ( !v9 )
          return result;
        v3 = v15;
      }
LABEL_16:
      v11 = *(this + 7);
      if ( v11 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
          (**(void (__thiscall ***)(int, int))v11)(v11, 1);
        *(this + 7) = 0;
      }
      v12 = v17;
      result = v18;
      *(this + 3) = v16;
      v13 = v19;
      *(this + 4) = v12;
      *(this + 5) = result;
      *(this + 6) = v13;
    }
  }
  return result;
}
