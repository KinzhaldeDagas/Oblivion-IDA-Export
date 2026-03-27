char __thiscall sub_6E4240(int this, float a2)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // [esp+10h] [ebp-10h] BYREF
  int v9; // [esp+14h] [ebp-Ch]
  int v10; // [esp+18h] [ebp-8h]
  int v11; // [esp+1Ch] [ebp-4h]

  result = *(_BYTE *)(this + 8) >> 5;
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 )
  {
    *(float *)(this + 0x28) = flt_A7A164;
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C);
    if ( v5 )
    {
      *(float *)&v8 = 0.0;
      v6 = *(_DWORD *)(this + 0x30);
      *(float *)&v9 = 0.0;
      *(float *)&v10 = 0.0;
      *(float *)&v11 = 0.0;
      result = (*(int (__thiscall **)(int, _DWORD, int, int *))(*(_DWORD *)v5 + 0x50))(
                 v5,
                 *(float *)(this + 0x28),
                 v6,
                 &v8);
      if ( result )
      {
        v7 = *(_DWORD **)(this + 0x44);
        if ( v7 )
          return sub_730540(v7, v8, v9, v10, v11);
      }
    }
    return result;
  }
  result = sub_6C36B0((float *)this, a2);
  if ( !result )
    goto LABEL_6;
  v4 = *(_DWORD *)(this + 0x3C);
  if ( v4 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4);
    if ( result )
      goto LABEL_6;
  }
  return result;
}
