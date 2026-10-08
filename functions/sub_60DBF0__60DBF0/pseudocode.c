hkVector4 *__thiscall sub_60DBF0(char *this, _DWORD *a2, int a3)
{
  hkVector4 *result; // eax
  int v4; // edi
  double v5; // st7
  int i; // ebx
  float z; // esi
  int v8; // eax
  int v9; // esi
  _OWORD *LinearVelocityPtr; // eax
  NiAVObject *v11; // eax
  PlayerCharacter *v12; // eax
  int v13; // [esp+Ch] [ebp-34h]
  int v15; // [esp+18h] [ebp-28h]
  __int128 v16; // [esp+20h] [ebp-20h]
  __int128 v17; // [esp+20h] [ebp-20h]

  result = (hkVector4 *)a3; /*0x60dc0d*/
  v4 = 0; /*0x60dc18*/
  v15 = *(_DWORD *)(a3 + 0x4C); /*0x60dc20*/
  v13 = 0; /*0x60dc24*/
  if ( v15 > 0 ) /*0x60dc28*/
  {
    v5 = 0.0; /*0x60dc2e*/
    for ( i = 0; ; i += 0x30 ) /*0x60dc30*/
    {
      z = result[4].z; /*0x60dc38*/
      v8 = *(_DWORD *)(i + *a2 + 0x28); /*0x60dc43*/
      v9 = v4 + LODWORD(z); /*0x60dc46*/
      if ( *(_BYTE *)(v8 + 0x18) == 1 && v8 + *(_DWORD *)(v8 + 0x10) ) /*0x60dc51*/
      {
        v11 = bhkCollidable_ResolveNiAVObject(*(_DWORD *)(i + *a2 + 0x28)); /*0x60dcaa*/
        if ( v11 ) /*0x60dcb4*/
        {
          v12 = sub_4DC270((int)v11); /*0x60dcb7*/
          if ( v12 ) /*0x60dcc1*/
          {
            if ( v12 == (PlayerCharacter *)reference->unk578 ) /*0x60dccf*/
            {
              if ( this == (char *)0x1F0 || !*(_DWORD *)(this + 0xFFFFFE10 + 8) ) /*0x60dd0f*/
                result = &unk_BA7A40; /*0x60dd1f*/
              else
                result = (hkVector4 *)bhkWorldObject_GetLinearVelocityPtr(*(char **)(this + 0xFFFFFE10 + 8)); /*0x60dd18*/
              *(float *)&v17 = 0.0; /*0x60dd29*/
              *(hkVector4 *)(v9 + 0x10) = *result; /*0x60dd2d*/
              *((float *)&v17 + 1) = 0.0; /*0x60dd31*/
              *((float *)&v17 + 2) = 0.0; /*0x60dd35*/
              *((float *)&v17 + 3) = 1.0; /*0x60dd3b*/
              *(__int128 *)v9 = v17; /*0x60dd44*/
              return result; /*0x60dd44*/
            }
          }
        }
        v5 = 0.0; /*0x60dcd1*/
      }
      else if ( (*(_BYTE *)(v8 + 0x1C) & 0x3F) != 0x14 ) /*0x60dc5e*/
      {
        if ( this == (char *)0x1F0 || !*(_DWORD *)(this + 0xFFFFFE10 + 8) ) /*0x60dc6b*/
        {
          LinearVelocityPtr = &unk_BA7A40; /*0x60dc7f*/
        }
        else
        {
          LinearVelocityPtr = bhkWorldObject_GetLinearVelocityPtr(*(char **)(this + 0xFFFFFE10 + 8)); /*0x60dc76*/
          v5 = 0.0; /*0x60dc7b*/
        }
        *(float *)&v16 = v5; /*0x60dc87*/
        *((float *)&v16 + 1) = v5; /*0x60dc8b*/
        *(_OWORD *)(v9 + 0x10) = *LinearVelocityPtr; /*0x60dc8f*/
        *((float *)&v16 + 2) = v5; /*0x60dc93*/
        *((float *)&v16 + 3) = 1.0; /*0x60dc99*/
        *(__int128 *)v9 = v16; /*0x60dca2*/
      }
      result = (hkVector4 *)(v13 + 1); /*0x60dcd7*/
      v4 += 0x40; /*0x60dcda*/
      if ( ++v13 >= v15 ) /*0x60dce8*/
        return result; /*0x60dce8*/
      result = (hkVector4 *)a3; /*0x60dc34*/
    }
  }
  return result; /*0x60dcf0*/
}
