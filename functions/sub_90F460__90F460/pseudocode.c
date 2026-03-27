void __thiscall sub_90F460(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD **v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  _DWORD v10[2]; // [esp+8h] [ebp-Ch] BYREF
  char i; // [esp+10h] [ebp-4h]

  if ( *a2 )
  {
    v3 = *(this + 0x49) - 1;
    if ( v3 < 0 )
    {
LABEL_6:
      v5 = *(this + 0x15) - 1;
      v10[1] = a2;
      v10[0] = this;
      for ( i = 0; v5 >= 0; --v5 )
      {
        v6 = *(_DWORD *)(*(this + 0x14) + 4 * v5);
        if ( v6 )
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 4))(v6, v10);
      }
    }
    else
    {
      v4 = (_DWORD **)(*(this + 0x48) + 8 * v3 + 4);
      while ( *v4 != a2 )
      {
        --v3;
        v4 += 0xFFFFFFFE;
        if ( v3 < 0 )
          goto LABEL_6;
      }
      sub_88D7D0(this, a2, 1);
      v7 = *(_DWORD *)(*(this + 0x48) + 8 * v3);
      if ( v7 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 0x18))(v7);
      v8 = *(this + 0x49) - 1;
      *(this + 0x49) = v8;
      v9 = *(this + 0x48);
      *(_DWORD *)(v9 + 8 * v3) = *(_DWORD *)(v9 + 8 * v8);
      *(_DWORD *)(v9 + 8 * v3 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4);
    }
  }
}
