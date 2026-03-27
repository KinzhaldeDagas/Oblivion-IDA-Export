void __thiscall sub_5E4010(_DWORD *this, char a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  char v6; // cl
  double v7; // st7
  float v8; // [esp+4h] [ebp-Ch]
  float v9; // [esp+Ch] [ebp-4h]
  float v10; // [esp+14h] [ebp+4h]

  v3 = *(this + 0x16);
  if ( v3 && (v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0xEC))(v3, 1)) != 0 )
    v5 = *(_DWORD *)(v4 + 8);
  else
    v5 = 0;
  if ( !v5 )
  {
    v7 = 0.0;
    goto LABEL_10;
  }
  v6 = *(_BYTE *)(v5 + 0x90);
  if ( v6 != 5 && v6 != 4 )
  {
    v7 = *(float *)(v5 + 0x7C);
LABEL_10:
    v9 = v7;
    v10 = sub_547560(v9, a2);
    v8 = -v10;
    Actor_ModFatigue_(this, v8);
  }
}
