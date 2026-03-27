char __thiscall sub_65A310(Actor *this, char a2)
{
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v3; // esi
  _BYTE *v4; // ecx
  _DWORD *v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  bool v10; // [esp+4h] [ebp+4h]

  CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
  if ( CharProxy )
  {
    v10 = a2 == 0;
    v3 = CharProxy;
    v4 = *((_BYTE **)CharProxy + 0xDA);
    if ( v4 )
    {
      LOBYTE(CharProxy) = v10;
      if ( v10 != (v4[0x68] == 0) )
      {
        if ( v10 )
        {
          sub_88D560((int)v4, 0);
          v5 = *((_DWORD **)v3 + 2);
          v6 = *((_DWORD *)v3 + 0xDA);
          if ( v5 )
            v7 = sub_8AC0C0(v5);
          else
            v7 = 0;
          v8 = *(_DWORD *)(v7 + 8);
          if ( v8 )
            LOBYTE(CharProxy) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x5C))(v6, *(_DWORD *)(v8 + 0x2B0));
          else
            LOBYTE(CharProxy) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x5C))(v6, 0);
        }
        else
        {
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 0x60))(v4);
          LOBYTE(CharProxy) = sub_88D560(*((_DWORD *)v3 + 0xDA), 1);
        }
      }
    }
  }
  return (char)CharProxy;
}
