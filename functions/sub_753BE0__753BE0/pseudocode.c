char __thiscall sub_753BE0(int this, float a2)
{
  __int16 v3; // ax
  _DWORD *v4; // esi
  _DWORD *v5; // ebx
  int v6; // ebp
  int v7; // eax
  char result; // al
  bool v9; // zf
  int v10; // [esp+14h] [ebp-4h]

  v3 = *(_WORD *)(this + 8);
  *(float *)(this + 0x14) = -flt_A7DEB4;
  *(float *)(this + 0x18) = flt_A7DEB4;
  *(_WORD *)(this + 8) = v3 & 0xFFF9 | 4;
  v4 = *(_DWORD **)(*(_DWORD *)(this + 0x30) + 0xC);
  v5 = 0;
  v6 = 0;
  v10 = *(_DWORD *)(this + 0x30);
  if ( v4 )
  {
    while ( 1 )
    {
      v7 = (*(int (__thiscall **)(_DWORD *))(*v4 + 4))(v4);
      if ( v7 )
        break;
LABEL_5:
      v4 = (_DWORD *)v4[0xD];
      if ( !v4 )
        goto LABEL_8;
    }
    while ( (char *)v7 != dword_B40BCC )
    {
      v7 = *(_DWORD *)(v7 + 4);
      if ( !v7 )
        goto LABEL_5;
    }
    v6 = v4[0x11];
    v5 = v4;
  }
LABEL_8:
  if ( -flt_A7DEB4 != *(float *)(this + 0x20) )
  {
    if ( v5 )
    {
      if ( (v5[2] & 6) == 0 && *(float *)(v6 + 0x48) < a2 - *(float *)(this + 0x20) )
        *(float *)(this + 0x20) = a2;
    }
  }
  result = sub_6C36B0((float *)this, a2);
  v9 = *(_DWORD *)(this + 0x30) == 0;
  *(float *)(this + 0x18) = 0.0;
  *(float *)(this + 0x14) = 0.0;
  if ( !v9 && !result )
    return (*(char (__stdcall **)(_DWORD))(*(_DWORD *)v10 + 0x98))(*(float *)(this + 0x28));
  return result;
}
