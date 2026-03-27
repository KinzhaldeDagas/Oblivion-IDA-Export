void __thiscall sub_4A39D0(unsigned __int8 *this, _BYTE *a2, int a3)
{
  unsigned __int8 v4; // al
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  unsigned __int8 v9; // bl
  _DWORD *v10; // eax
  int v11; // ecx
  float v12; // [esp+0h] [ebp-18h]
  int v13; // [esp+4h] [ebp-14h]
  float v14; // [esp+8h] [ebp-10h]
  int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+Ch] [ebp-Ch]
  float v17; // [esp+1Ch] [ebp+4h]
  float v18; // [esp+1Ch] [ebp+4h]
  int v19; // [esp+20h] [ebp+8h]

  if ( a2 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0xC))(a2) == 6 && a3 )
  {
    if ( *(this + 5) )
    {
      *(this + 4) = a2[4];
      sub_4A3520(this, a2[6]);
LABEL_13:
      v7 = (_DWORD *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 0x24))(this);
      sub_4A6010(v7);
      v16 = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 0x24))(this);
      v8 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2);
      sub_4A6120(v8, v16);
      return;
    }
    if ( a2[5] )
      return;
    v4 = a2[4];
    if ( *(this + 4) )
    {
      if ( v4 )
      {
        if ( a2[6] > *(this + 6) )
        {
          *(this + 4) = v4;
          sub_4A3520(this, a2[6]);
          v5 = (_DWORD *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 0x24))(this);
          sub_4A6010(v5);
          v15 = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 0x24))(this);
          v6 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2);
          sub_4A6120(v6, v15);
        }
      }
    }
    else
    {
      if ( v4 )
      {
        *(this + 4) = v4;
        sub_4A3520(this, a2[6]);
        goto LABEL_13;
      }
      v9 = *(this + 6);
      v14 = (float)(unsigned __int8)a2[6];
      v13 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2);
      v12 = (float)v9;
      v10 = (_DWORD *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 0x24))(this);
      sub_4A61E0(v10, v12, v13, v14);
      v11 = (unsigned __int8)a2[6];
      v17 = (double)(*(this + 6) * *(this + 6) + v11 * (0x64 - *(this + 6)))
          + (double)(v11 * v11 + *(this + 6) * (0x64 - v11));
      v18 = v17 * dbl_A40048;
      v19 = (int)sub_4842F0(v18);
      sub_4A3520(this, v19);
    }
  }
}
