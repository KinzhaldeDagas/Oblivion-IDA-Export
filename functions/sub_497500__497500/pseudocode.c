char __thiscall sub_497500(unsigned __int8 *this, unsigned int i, _DWORD *a3, int a4)
{
  unsigned int v4; // ebp
  _DWORD *v6; // esi
  int BhkBlendCollisionObject; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  float *v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // ecx
  unsigned int v14; // eax
  char v16; // [esp+Fh] [ebp-1h]

  v4 = i; /*0x497502*/
  v16 = 1; /*0x49750c*/
  if ( !i ) /*0x497511*/
    return v16; /*0x497511*/
  v6 = a3; /*0x49751a*/
  if ( *a3 >= (unsigned int)*this ) /*0x497520*/
    return v16; /*0x497520*/
  BhkBlendCollisionObject = NiAVObject_GetBhkBlendCollisionObject(i); /*0x497527*/
  if ( !BhkBlendCollisionObject ) /*0x497531*/
  {
LABEL_7:
    v11 = *(unsigned __int16 *)(v4 + 0xB6); /*0x4975af*/
    v12 = 0; /*0x4975b7*/
    for ( i = v11; v12 < i; ++v12 ) /*0x4975bf*/
    {
      if ( *(unsigned __int16 *)(v4 + 0xB6) > v12 ) /*0x4975ca*/
      {
        v13 = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v12); /*0x4975d2*/
        if ( v13 ) /*0x4975d7*/
        {
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13); /*0x4975de*/
          if ( v14 ) /*0x4975e2*/
          {
            if ( !sub_497500(this, v14, v6, a4) ) /*0x4975ed*/
              v16 = 0; /*0x4975f6*/
          }
        }
      }
      if ( *v6 >= (unsigned int)*this ) /*0x4975ff*/
        break; /*0x4975ff*/
    }
    return v16; /*0x497613*/
  }
  v8 = sub_497340(*(_DWORD **)(BhkBlendCollisionObject + 0x10), &i); /*0x49753b*/
  if ( (_BYTE)a4 ) /*0x497545*/
  {
    *(_BYTE *)(*((_DWORD *)this + 1) + 0x1C * *v6) = BYTE1(*v8) & 0x1F; /*0x497561*/
LABEL_6:
    v9 = (_DWORD *)(*((_DWORD *)this + 1) + 0x1C * *v6 + 4); /*0x497564*/
    *v9 = *(_DWORD *)(v4 + 0x54); /*0x497579*/
    v9[1] = *(_DWORD *)(v4 + 0x58); /*0x49757e*/
    v9[2] = *(_DWORD *)(v4 + 0x5C); /*0x497584*/
    v10 = (float *)(*((_DWORD *)this + 1) + 0x1C * *v6); /*0x497595*/
    sub_711300((float *)(v4 + 0x30), v10 + 4, v10 + 5, v10 + 6); /*0x4975a7*/
    ++*v6; /*0x4975ac*/
    goto LABEL_7; /*0x4975ac*/
  }
  if ( *(_BYTE *)(*((_DWORD *)this + 1) + 0x1C * *v6) == (BYTE1(*v8) & 0x1F) ) /*0x49762f*/
    goto LABEL_6; /*0x49762f*/
  return 0; /*0x49760f*/
}
