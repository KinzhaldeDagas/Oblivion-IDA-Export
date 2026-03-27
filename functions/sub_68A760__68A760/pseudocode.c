double __thiscall sub_68A760(char *this, int a2)
{
  float *v3; // eax
  char *v4; // edi
  float **v5; // esi
  float *v6; // eax
  float *v7; // eax
  _BYTE *v8; // eax
  _BYTE *v9; // esi
  char *TeleportExtraData; // eax
  float v12; // [esp+4h] [ebp-1Ch]
  float v13; // [esp+8h] [ebp-18h]
  float v14; // [esp+Ch] [ebp-14h]
  float v15; // [esp+10h] [ebp-10h]
  float v16; // [esp+14h] [ebp-Ch]
  float v17; // [esp+18h] [ebp-8h]
  float v18; // [esp+1Ch] [ebp-4h]
  float v19; // [esp+24h] [ebp+4h]
  float v20; // [esp+24h] [ebp+4h]

  v12 = 0.0;
  if ( !a2 )
    return v12;
  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2);
  v4 = this + 4;
  v13 = *v3;
  v14 = v3[1];
  v15 = v3[2];
  if ( this != (char *)0xFFFFFFFC )
  {
    do
    {
      if ( !*((_DWORD *)v4 + 1) && !*(_DWORD *)v4 )
        return v12;
      v5 = *(float ***)v4;
      sub_68B110(*(float ***)v4);
      v16 = *v6 - v13;
      v17 = v6[1] - v14;
      v18 = v6[2] - v15;
      v19 = v17 * v17 + v16 * v16 + v18 * v18;
      v20 = sqrt(v19);
      v12 = v20 + v12;
      if ( DName::status(v5) == 1 )
      {
        sub_68B110(v5);
      }
      else
      {
        v8 = (_BYTE *)sub_68B0F0(v5);
        v9 = v8;
        if ( !v8 || !GetTeleportExtraData(v8) )
          goto LABEL_11;
        TeleportExtraData = (char *)GetTeleportExtraData(v9);
        v7 = (float *)sub_6899C0(TeleportExtraData);
      }
      v15 = v7[2];
      v14 = v7[1];
      v13 = *v7;
LABEL_11:
      v4 = *((char **)v4 + 1);
    }
    while ( v4 );
  }
  return v12;
}
