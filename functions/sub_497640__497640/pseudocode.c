char __thiscall sub_497640(unsigned __int8 *this, int a2, _DWORD *a3)
{
  unsigned __int8 *v3; // edi
  int BhkBlendCollisionObject; // eax
  _WORD *v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  void (__thiscall *v12)(_WORD *, int, _DWORD); // edx
  unsigned int v13; // ebp
  unsigned int i; // esi
  int v15; // ecx
  int v16; // eax
  char v17; // [esp+1Fh] [ebp-29h]
  float v19[9]; // [esp+24h] [ebp-24h] BYREF

  v3 = this; /*0x49764d*/
  v17 = 1; /*0x497653*/
  if ( a2 && *a3 < (unsigned int)*this ) /*0x497667*/
  {
    BhkBlendCollisionObject = NiAVObject_GetBhkBlendCollisionObject(a2); /*0x49766e*/
    v5 = (_WORD *)BhkBlendCollisionObject; /*0x497673*/
    if ( BhkBlendCollisionObject ) /*0x49767a*/
    {
      v6 = *(_DWORD *)(BhkBlendCollisionObject + 0x10); /*0x497680*/
      if ( v6 && (v7 = *(_DWORD *)(v6 + 8)) != 0 && (v8 = v7 + 0x14) != 0 ) /*0x497691*/
        v9 = *(_DWORD *)(v8 + 0x1C); /*0x497693*/
      else
        BYTE1(v9) = 0; /*0x497698*/
      v10 = *((_DWORD *)v3 + 1) + 0x1C * *a3; /*0x4976ab*/
      if ( *(_BYTE *)v10 != (BYTE1(v9) & 0x1F) ) /*0x4976b3*/
        return 0; /*0x4976be*/
      *(_DWORD *)(a2 + 0x54) = *(_DWORD *)(v10 + 4); /*0x4976c4*/
      *(_DWORD *)(a2 + 0x58) = *(_DWORD *)(v10 + 8); /*0x4976cd*/
      *(_DWORD *)(a2 + 0x5C) = *(_DWORD *)(v10 + 0xC); /*0x4976d3*/
      sub_711580( /*0x497703*/
        v19,
        *(float *)(*((_DWORD *)v3 + 1) + 0x1C * *a3 + 0x10),
        *(float *)(*((_DWORD *)v3 + 1) + 0x1C * *a3 + 0x14),
        *(float *)(*((_DWORD *)v3 + 1) + 0x1C * *a3 + 0x18));
      qmemcpy((void *)(a2 + 0x30), v19, 0x24u); /*0x497714*/
      v12 = *(void (__thiscall **)(_WORD *, int, _DWORD))(*(_DWORD *)v5 + 0x70); /*0x497719*/
      v5[6] |= 0x40u; /*0x49771c*/
      v12(v5, 1, 0); /*0x497727*/
      ++*a3; /*0x49772d*/
      v3 = this; /*0x497730*/
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x74))(a2); /*0x49773b*/
    v13 = *(unsigned __int16 *)(a2 + 0xB6); /*0x49773d*/
    for ( i = 0; i < v13; ++i ) /*0x49773d*/
    {
      if ( *(unsigned __int16 *)(a2 + 0xB6) > i ) /*0x497759*/
      {
        v15 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * i); /*0x497761*/
        if ( v15 ) /*0x497766*/
        {
          v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15); /*0x49776d*/
          if ( v16 ) /*0x497771*/
          {
            if ( !sub_497640(v3, v16, a3) ) /*0x49777b*/
              v17 = 0; /*0x497784*/
          }
        }
      }
      if ( *a3 >= (unsigned int)*v3 ) /*0x497791*/
        break; /*0x497791*/
    }
  }
  return v17; /*0x4976b5*/
}
