// Advance ShadowSceneNode+0x104 saved-next active-light iterator.
_DWORD *__thiscall sub_7C5B50(_DWORD *this)
{
  int v1; // ebx
  _DWORD *result; // eax
  _DWORD *v4; // eax
  bool v5; // zf
  _DWORD *v6; // ebp
  void (__thiscall ***v7)(_DWORD, int); // esi
  bool v8; // [esp+Bh] [ebp-5h]
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v1 = 0; /*0x7c5b54*/
  result = 0; /*0x7c5b59*/
  v9 = 0; /*0x7c5b5b*/
  if ( *(this + 0x41) ) /*0x7c5b5f*/
  {
    do /*0x7c5bd3*/
    {
      v4 = (_DWORD *)*(this + 0x41); /*0x7c5b69*/
      v5 = *v4 == 0; /*0x7c5b71*/
      *(this + 0x41) = *v4; /*0x7c5b73*/
      v6 = (_DWORD *)v4[2]; /*0x7c5b79*/
      v8 = 0; /*0x7c5b9d*/
      if ( !v5 ) /*0x7c5b7c*/
      {
        if ( !v6 || (v1 |= 1u, !*ShadowSceneLight_GetLightRef(v6, &v9)) ) /*0x7c5b91*/
          v8 = 1; /*0x7c5b7c*/
      }
      if ( (v1 & 1) != 0 ) /*0x7c5ba5*/
      {
        v7 = (void (__thiscall ***)(_DWORD, int))v9; /*0x7c5ba7*/
        v1 &= ~1u; /*0x7c5bab*/
        if ( v9 ) /*0x7c5bb0*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x7c5bb6*/
          {
            if ( v7 ) /*0x7c5bc2*/
              (**v7)(v7, 1); /*0x7c5bcc*/
          }
        }
      }
    }
    while ( v8 ); /*0x7c5bd3*/
    return v6; /*0x7c5bd6*/
  }
  return result; /*0x7c5bd9*/
}
