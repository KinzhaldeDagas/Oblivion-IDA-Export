void __thiscall sub_8ECF30(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD **v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  _DWORD v8[2]; // [esp+8h] [ebp-Ch] BYREF
  char i; // [esp+10h] [ebp-4h]

  if ( *a2 )
  {
    v3 = *(this + 0x49) - 1;
    if ( v3 < 0 )
    {
LABEL_6:
      v5 = *(this + 0x15) - 1;
      v8[1] = a2;
      v8[0] = this;
      for ( i = 0; v5 >= 0; --v5 )
      {
        v6 = *(_DWORD *)(*(this + 0x14) + 4 * v5);
        if ( v6 )
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 4))(v6, v8);
      }
    }
    else
    {
      v4 = (_DWORD **)(*(this + 0x48) + 4 * v3);
      while ( *v4 != a2 )
      {
        --v3;
        v4 += 0xFFFFFFFF;
        if ( v3 < 0 )
          goto LABEL_6;
      }
      sub_88D7D0(this, a2, 1);
      v7 = *(this + 0x49) - 1;
      *(this + 0x49) = v7;
      *(_DWORD *)(*(this + 0x48) + 4 * v3) = *(_DWORD *)(*(this + 0x48) + 4 * v7);
    }
  }
}
