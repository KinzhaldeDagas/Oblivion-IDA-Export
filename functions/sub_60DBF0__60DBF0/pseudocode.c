hkVector4 *__thiscall sub_60DBF0(char *this, _DWORD *a2, int a3)
{
  hkVector4 *result; // eax
  int v4; // edi
  double v5; // st7
  int i; // ebx
  float z; // esi
  int v8; // eax
  int v9; // esi
  _OWORD *v10; // eax
  NiAVObject *v11; // eax
  PlayerCharacter *v12; // eax
  int v13; // [esp+Ch] [ebp-34h]
  int v15; // [esp+18h] [ebp-28h]
  __int128 v16; // [esp+20h] [ebp-20h]
  __int128 v17; // [esp+20h] [ebp-20h]

  result = (hkVector4 *)a3;
  v4 = 0;
  v15 = *(_DWORD *)(a3 + 0x4C);
  v13 = 0;
  if ( v15 > 0 )
  {
    v5 = 0.0;
    for ( i = 0; ; i += 0x30 )
    {
      z = result[4].z;
      v8 = *(_DWORD *)(i + *a2 + 0x28);
      v9 = v4 + LODWORD(z);
      if ( *(_BYTE *)(v8 + 0x18) == 1 && v8 + *(_DWORD *)(v8 + 0x10) )
      {
        v11 = sub_8AFCE0(*(_DWORD *)(i + *a2 + 0x28));
        if ( v11 )
        {
          v12 = sub_4DC270((int)v11);
          if ( v12 )
          {
            if ( v12 == (PlayerCharacter *)TESDataHandler_g_PlayerRef->unk578 )
            {
              if ( this == (char *)0x1F0 || !*(_DWORD *)(this + 0xFFFFFE10 + 8) )
                result = &stru_BA7A40;
              else
                result = (hkVector4 *)sub_8AC0A0(*(char **)(this + 0xFFFFFE10 + 8));
              *(float *)&v17 = 0.0;
              *(hkVector4 *)(v9 + 0x10) = *result;
              *((float *)&v17 + 1) = 0.0;
              *((float *)&v17 + 2) = 0.0;
              *((float *)&v17 + 3) = 1.0;
              *(__int128 *)v9 = v17;
              return result;
            }
          }
        }
        v5 = 0.0;
      }
      else if ( (*(_BYTE *)(v8 + 0x1C) & 0x3F) != 0x14 )
      {
        if ( this == (char *)0x1F0 || !*(_DWORD *)(this + 0xFFFFFE10 + 8) )
        {
          v10 = &stru_BA7A40;
        }
        else
        {
          v10 = sub_8AC0A0(*(char **)(this + 0xFFFFFE10 + 8));
          v5 = 0.0;
        }
        *(float *)&v16 = v5;
        *((float *)&v16 + 1) = v5;
        *(_OWORD *)(v9 + 0x10) = *v10;
        *((float *)&v16 + 2) = v5;
        *((float *)&v16 + 3) = 1.0;
        *(__int128 *)v9 = v16;
      }
      result = (hkVector4 *)(v13 + 1);
      v4 += 0x40;
      if ( ++v13 >= v15 )
        return result;
      result = (hkVector4 *)a3;
    }
  }
  return result;
}
