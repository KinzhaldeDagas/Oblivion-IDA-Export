// Seed ShadowSceneNode+0x104 saved-next cursor and return the first active-light payload.
_DWORD *__thiscall sub_7C5AB0(_DWORD *this)
{
  int v1; // ebx
  _DWORD *result; // eax
  bool v4; // zf
  _DWORD *v5; // ebp
  void (__thiscall ***v6)(_DWORD, int); // esi
  bool v7; // [esp+Bh] [ebp-5h]
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v1 = 0; /*0x7c5ab4*/
  v8 = 0; /*0x7c5ab9*/
  result = (_DWORD *)*(this + 0x3E); /*0x7c5abd*/
  *(this + 0x41) = result; /*0x7c5ac5*/
  if ( result ) /*0x7c5acb*/
  {
    while ( 1 ) /*0x7c5ad7*/
    {
      v4 = *result == 0; /*0x7c5ad7*/
      *(this + 0x41) = *result; /*0x7c5ad9*/
      v5 = (_DWORD *)result[2]; /*0x7c5adf*/
      v7 = 0; /*0x7c5b03*/
      if ( !v4 ) /*0x7c5ae2*/
      {
        if ( !v5 || (v1 |= 1u, !*ShadowSceneLight_GetLightRef(v5, &v8)) ) /*0x7c5af7*/
          v7 = 1; /*0x7c5ae2*/
      }
      if ( (v1 & 1) != 0 ) /*0x7c5b0b*/
      {
        v6 = (void (__thiscall ***)(_DWORD, int))v8; /*0x7c5b0d*/
        v1 &= ~1u; /*0x7c5b11*/
        if ( v8 ) /*0x7c5b16*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7c5b1c*/
          {
            if ( v6 ) /*0x7c5b28*/
              (**v6)(v6, 1); /*0x7c5b32*/
          }
        }
      }
      if ( !v7 ) /*0x7c5b39*/
        break; /*0x7c5b39*/
      result = (_DWORD *)*(this + 0x41); /*0x7c5b3b*/
    }
    return v5; /*0x7c5b44*/
  }
  return result; /*0x7c5acd*/
}
