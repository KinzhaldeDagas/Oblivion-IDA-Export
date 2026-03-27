void __thiscall sub_4A5460(_BYTE *this, _BYTE *a2, int a3)
{
  char v4; // al
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  float v10; // [esp+18h] [ebp+4h]
  float v11; // [esp+18h] [ebp+4h]
  int v12; // [esp+1Ch] [ebp+8h]

  if ( a2 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0xC))(a2) == 7 && a3 )
  {
    if ( *(this + 5) )
    {
      v4 = a2[4];
LABEL_11:
      *(this + 4) = v4;
      sub_4A3520(this, a2[6]);
      v5 = *(_DWORD *)this;
      v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2);
      (*(void (__thiscall **)(_BYTE *, int))(v5 + 0x28))(this, v6);
      return;
    }
    if ( a2[5] )
      return;
    v4 = a2[4];
    if ( *(this + 4) )
    {
      if ( v4 && a2[6] > *(this + 6) )
        goto LABEL_11;
    }
    else
    {
      if ( v4 )
        goto LABEL_11;
      if ( a2[6] > *(this + 6) )
      {
        v7 = *(_DWORD *)this;
        v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2);
        (*(void (__thiscall **)(_BYTE *, int))(v7 + 0x28))(this, v8);
      }
      v9 = (unsigned __int8)a2[6];
      v10 = (double)((unsigned __int8)*(this + 6) * (unsigned __int8)*(this + 6)
                   + v9 * (0x64 - (unsigned __int8)*(this + 6)))
          + (double)(v9 * v9 + (unsigned __int8)*(this + 6) * (0x64 - v9));
      v11 = v10 * dbl_A40048;
      v12 = (int)sub_4842F0(v11);
      sub_4A3520(this, v12);
    }
  }
}
