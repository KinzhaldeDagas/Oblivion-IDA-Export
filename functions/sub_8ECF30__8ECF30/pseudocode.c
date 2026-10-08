void __thiscall sub_8ECF30(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD **v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  _DWORD v8[2]; // [esp+8h] [ebp-Ch] BYREF
  char i; // [esp+10h] [ebp-4h]

  if ( *a2 ) /*0x8ecf3a*/
  {
    v3 = *(this + 0x49) - 1; /*0x8ecf46*/
    if ( v3 < 0 ) /*0x8ecf47*/
    {
LABEL_6:
      v5 = *(this + 0x15) - 1; /*0x8ecf5e*/
      v8[1] = a2; /*0x8ecf62*/
      v8[0] = this; /*0x8ecf66*/
      for ( i = 0; v5 >= 0; --v5 ) /*0x8ecf6f*/
      {
        v6 = *(_DWORD *)(*(this + 0x14) + 4 * v5); /*0x8ecf74*/
        if ( v6 ) /*0x8ecf79*/
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 4))(v6, v8); /*0x8ecf82*/
      }
    }
    else
    {
      v4 = (_DWORD **)(*(this + 0x48) + 4 * v3); /*0x8ecf4f*/
      while ( *v4 != a2 ) /*0x8ecf54*/
      {
        --v3; /*0x8ecf56*/
        v4 += 0xFFFFFFFF; /*0x8ecf57*/
        if ( v3 < 0 ) /*0x8ecf5c*/
          goto LABEL_6; /*0x8ecf5c*/
      }
      sub_88D7D0(this, a2, 1); /*0x8ecf99*/
      v7 = *(this + 0x49) - 1; /*0x8ecfa4*/
      *(this + 0x49) = v7; /*0x8ecfa5*/
      *(_DWORD *)(*(this + 0x48) + 4 * v3) = *(_DWORD *)(*(this + 0x48) + 4 * v7); /*0x8ecfb4*/
    }
  }
}
