void __thiscall sub_7C7EF0(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // edi
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  unsigned int i; // [esp+10h] [ebp+4h]

  v4 = *(unsigned __int16 *)(a2 + 0xB8);
  v5 = 0;
  for ( i = v4; v5 < i; ++v5 )
  {
    if ( *(unsigned __int16 *)(a2 + 0xB6) > v5 )
    {
      v7 = *(_DWORD *)(a2 + 0xB0);
      v8 = *(_DWORD *)(v7 + 4 * v5);
      if ( v8 )
      {
        v9 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 4))(*(_DWORD *)(v7 + 4 * v5));
        if ( v9 )
        {
          while ( (char *)v9 != dword_B3FD14 )
          {
            v9 = *(_DWORD *)(v9 + 4);
            if ( !v9 )
              goto LABEL_7;
          }
          if ( (_BYTE)a3 )
            sub_7C7DC0(this, v8);
          else
            sub_7C6AE0(this, v8, (ShadowSceneLight *)1);
        }
        else
        {
LABEL_7:
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) )
            sub_7C7EF0(this, v8, a3);
        }
      }
    }
  }
}
