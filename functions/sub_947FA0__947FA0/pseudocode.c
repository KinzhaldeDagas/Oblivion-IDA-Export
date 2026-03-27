_BYTE *__thiscall sub_947FA0(int *this, _BYTE *a2, _DWORD **a3)
{
  int v3; // ebx
  _DWORD *v4; // ecx
  int v5; // eax
  char v7; // [esp+17h] [ebp-29h] BYREF
  int v8; // [esp+18h] [ebp-28h] BYREF
  int v9; // [esp+1Ch] [ebp-24h] BYREF
  int *v10; // [esp+20h] [ebp-20h]
  int v11; // [esp+24h] [ebp-1Ch] BYREF
  char v12[8]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v13[16]; // [esp+30h] [ebp-10h] BYREF

  v10 = this;
  do
  {
    sub_947910(a3, (char *)&v9, 1, 1);
    v3 = v9;
    if ( (_BYTE)v9 != 0xF0 )
    {
      if ( sub_8B0F40(v10 + 2, (unsigned __int8)v9, &v11) || !v11 )
      {
        if ( (_BYTE)v3 == 0xB0 )
        {
          sub_948C80(a3, (int)v13);
          sub_947910(a3, v12, 8, 1);
        }
        else if ( (_BYTE)v3 == 0xB1 )
        {
          sub_948C80(a3, (int)v13);
        }
        ++dword_BA7FC0;
        v8 = (int)&unk_BA7FC4;
        sub_8B1990(
          (char **)&v8,
          "VDB: Found a command (%x) with no handler. Could corrupt the stream.",
          (unsigned __int8)v3);
        v4 = (_DWORD *)(v8 - 0xC);
        v5 = *(_DWORD *)(v8 - 4) - 1;
        *(_DWORD *)(v8 - 0xC + 8) = v5;
        if ( v5 < 0 )
          sub_8B1930(v4);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 0xC))(v11, v3);
      }
    }
  }
  while ( *(_BYTE *)sub_918060(a3, (int)&v7) && (_BYTE)v3 != 0xF0 );
  *a2 = 1;
  return a2;
}
