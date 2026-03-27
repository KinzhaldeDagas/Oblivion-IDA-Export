void __thiscall sub_4A5800(_BYTE *this, int a2, int a3)
{
  char v4; // al
  int v5; // ecx
  float v6; // [esp+10h] [ebp+4h]
  float v7; // [esp+10h] [ebp+4h]
  int v8; // [esp+14h] [ebp+8h]

  if ( a2 && (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0xC))(a2) == 3 && a3 )
  {
    if ( *(this + 5) )
    {
      v4 = *(_BYTE *)(a2 + 4);
LABEL_6:
      *(this + 4) = v4;
      sub_4A3520(this, *(_BYTE *)(a2 + 6));
      sub_4EED80((_DWORD *)this + 2, (_DWORD *)(a2 + 8), 0);
      return;
    }
    if ( !*(_BYTE *)(a2 + 5) )
    {
      v4 = *(_BYTE *)(a2 + 4);
      if ( *(this + 4) )
      {
        if ( v4 && *(_BYTE *)(a2 + 6) > *(this + 6) )
          goto LABEL_6;
      }
      else
      {
        if ( v4 )
          goto LABEL_6;
        sub_4EED80((_DWORD *)this + 2, (_DWORD *)(a2 + 8), 1);
        v5 = *(unsigned __int8 *)(a2 + 6);
        v6 = (double)((unsigned __int8)*(this + 6) * (unsigned __int8)*(this + 6)
                    + v5 * (0x64 - (unsigned __int8)*(this + 6)))
           + (double)(v5 * v5 + (unsigned __int8)*(this + 6) * (0x64 - v5));
        v7 = v6 * dbl_A40048;
        v8 = (int)sub_4842F0(v7);
        sub_4A3520(this, v8);
      }
    }
  }
}
