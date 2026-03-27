int __thiscall sub_6DA320(_DWORD *this)
{
  _DWORD *v1; // ebx
  int result; // eax
  unsigned int v3; // ebp
  int v4; // esi
  _DWORD *v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // ecx
  int v8; // edx
  char v9; // bl
  unsigned int i; // esi
  int v11; // esi
  int v12; // ecx
  int v13; // edx
  unsigned __int8 v14; // [esp+7h] [ebp-11h]
  int v16; // [esp+Ch] [ebp-Ch] BYREF
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  v1 = this;
  result = *(this + 6);
  if ( result )
  {
    v3 = *(_DWORD *)(result + 8);
    v4 = *(_DWORD *)(result + 0x10);
    v5 = *(_DWORD **)(result + 0xC);
    v14 = *(_BYTE *)(result + 0x14);
    if ( !v3 )
    {
      v6 = (void (__thiscall ***)(_DWORD, int))*(this + 6);
      if ( !InterlockedDecrement((volatile LONG *)(result + 4)) )
        (**v6)(v6, 1);
      v1[6] = 0;
      result = dword_B24FC8;
      v1[3] = dword_B24FC8;
      v1[4] = dword_B24FCC;
      v1[5] = dword_B24FD0;
      return result;
    }
    result = v5[1];
    v7 = v5[2];
    v8 = v5[3];
    v16 = result;
    v17 = v7;
    v18 = v8;
    if ( v3 == 1 )
      goto LABEL_16;
    if ( v4 == 1 || v4 == 5 )
    {
      v9 = 1;
      for ( i = 1; i < v3; ++i )
      {
        result = sub_8AA390((float *)((char *)v5 + i * v14 + 4), (float *)&v16);
        if ( (_BYTE)result )
          v9 = 0;
        if ( !v9 )
          return result;
      }
      v1 = this;
LABEL_16:
      v11 = v1[6];
      if ( v11 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
          (**(void (__thiscall ***)(int, int))v11)(v11, 1);
        v1[6] = 0;
      }
      result = v16;
      v12 = v17;
      v13 = v18;
      v1[3] = v16;
      v1[4] = v12;
      v1[5] = v13;
    }
  }
  return result;
}
