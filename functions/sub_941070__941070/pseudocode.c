char __thiscall sub_941070(int *this, _DWORD *a2, _DWORD *a3, int a4, int a5, const char *a6)
{
  _DWORD *v6; // edi
  int *v7; // ebx
  int v8; // eax
  _DWORD *v9; // eax
  const char *v10; // ebp
  _DWORD *v11; // esi
  int v12; // eax

  v6 = a2;
  v7 = this + 5;
  v8 = sub_8B0F00(this + 5, (unsigned int)a2);
  sub_8B0D80(v7, (bool *)&a2, v8);
  LOBYTE(v9) = (_BYTE)a2;
  if ( !(_BYTE)a2 )
  {
    v10 = a6;
    v11 = a3;
    while ( 1 )
    {
      if ( *sub_90D380(v11, (bool *)&a6) )
      {
        if ( !a4 )
          break;
        v11 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a4 + 0xC))(a4, v6);
      }
      if ( !v11 )
        break;
      v9 = sub_9411E0(this, v6, v11, a4, a5, v10);
      if ( v9 )
      {
        v10 = off_B30594;
        v11 = &unk_BA8788;
        v6 = v9;
        v12 = sub_8B0F00(v7, (unsigned int)v9);
        sub_8B0D80(v7, (bool *)&a2, v12);
        LOBYTE(v9) = (_BYTE)a2;
        if ( !(_BYTE)a2 )
          continue;
      }
      return (char)v9;
    }
    LOBYTE(v9) = sub_8B0E80((char **)v7, (unsigned int)v6, 0xFFFFFFFF);
  }
  return (char)v9;
}
