char __thiscall sub_6DD270(NiTriBasedGeomData *this, int a2)
{
  int v2; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // edx
  int v9; // esi
  unsigned int v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned int v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  int v18; // eax
  __int16 v19; // cx
  __int16 v20; // dx
  int v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h] BYREF
  int v23; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x6dd274*/
  if ( !NiTimeController_IsEqual(this, a2) /*0x6dd2ad*/
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x12) + 0x2C))(
          *((_DWORD *)this + 0x12),
          *(_DWORD *)(v2 + 0x48))
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x13) + 0x2C))(
          *((_DWORD *)this + 0x13),
          *(_DWORD *)(v2 + 0x4C)) )
  {
    return 0; /*0x6dd28c*/
  }
  v5 = *((_DWORD **)this + 0x14); /*0x6dd2b4*/
  if ( !v5 ) /*0x6dd2b9*/
  {
    if ( !*(_DWORD *)(v2 + 0x50) ) /*0x6dd2c9*/
      goto LABEL_10; /*0x6dd2c9*/
    return 0; /*0x6dd2d3*/
  }
  if ( !*(_DWORD *)(v2 + 0x50) ) /*0x6dd2bf*/
    return 0; /*0x6dd2bf*/
LABEL_10:
  if ( v5 ) /*0x6dd2d9*/
  {
    sub_6DC770(this, &v23, &v21, &v22, &a2); /*0x6dd2f5*/
    v6 = *(_DWORD **)(v2 + 0x50); /*0x6dd2fe*/
    v7 = 4 * v21; /*0x6dd303*/
    v8 = v5; /*0x6dd308*/
    if ( (unsigned int)(4 * v21) < 4 ) /*0x6dd30a*/
    {
LABEL_14:
      if ( !v7 ) /*0x6dd326*/
        goto LABEL_24; /*0x6dd326*/
    }
    else
    {
      while ( *v8 == *v6 ) /*0x6dd314*/
      {
        v7 -= 4; /*0x6dd316*/
        ++v6; /*0x6dd319*/
        ++v8; /*0x6dd31c*/
        if ( v7 < 4 ) /*0x6dd322*/
          goto LABEL_14; /*0x6dd322*/
      }
    }
    v9 = *(unsigned __int8 *)v8 - *(unsigned __int8 *)v6; /*0x6dd32e*/
    if ( v9 ) /*0x6dd330*/
      goto LABEL_22; /*0x6dd330*/
    v10 = v7 - 1; /*0x6dd332*/
    v11 = (unsigned __int8 *)v6 + 1; /*0x6dd335*/
    v12 = (unsigned __int8 *)v8 + 1; /*0x6dd338*/
    if ( v10 ) /*0x6dd33d*/
    {
      v9 = *v12 - *v11; /*0x6dd345*/
      if ( v9 /*0x6dd375*/
        || (v13 = v10 - 1, v14 = v11 + 1, v15 = v12 + 1, v13)
        && ((v9 = *v15 - *v14) != 0 || (v16 = v14 + 1, v17 = v15 + 1, v13 != 1) && (v9 = *v17 - *v16) != 0) )
      {
LABEL_22:
        v18 = 1; /*0x6dd379*/
        if ( v9 <= 0 ) /*0x6dd37e*/
          v18 = 0xFFFFFFFF; /*0x6dd380*/
LABEL_25:
        if ( v18 ) /*0x6dd389*/
          return 0; /*0x6dd389*/
        goto LABEL_26; /*0x6dd389*/
      }
    }
LABEL_24:
    v18 = 0; /*0x6dd385*/
    goto LABEL_25; /*0x6dd385*/
  }
LABEL_26:
  if ( *(float *)(v2 + 0x54) == *((float *)this + 0x15) /*0x6dd3aa*/
    && ((this->members.super.m_bVertexStreamLocked ^ *(_BYTE *)(v2 + 0x3C)) & 1) == 0 )
  {
    v19 = *(_WORD *)(v2 + 0x3C); /*0x6dd3b0*/
    v20 = *(_WORD *)&this->members.super.m_bVertexStreamLocked; /*0x6dd3b4*/
    if ( ((((unsigned __int8)v20 >> 1) ^ ((unsigned __int8)v19 >> 1)) & 1) == 0 /*0x6dd449*/
      && *((_DWORD *)this + 0x1A) == *(_DWORD *)(v2 + 0x68)
      && ((((unsigned __int8)v20 >> 2) ^ ((unsigned __int8)v19 >> 2)) & 1) == 0
      && ((((unsigned __int8)v20 >> 3) ^ ((unsigned __int8)v19 >> 3)) & 1) == 0
      && ((((unsigned __int8)v20 >> 4) ^ ((unsigned __int8)v19 >> 4)) & 1) == 0
      && ((((unsigned __int8)v20 >> 5) ^ ((unsigned __int8)v19 >> 5)) & 1) == 0
      && *(float *)(v2 + 0x58) == *((float *)this + 0x16)
      && *(float *)(v2 + 0x5C) == *((float *)this + 0x17)
      && *((_WORD *)this + 0x30) == *(_WORD *)(v2 + 0x60)
      && ((((unsigned __int8)v20 >> 6) ^ ((unsigned __int8)v19 >> 6)) & 1) == 0 )
    {
      return 1; /*0x6dd454*/
    }
  }
  return 0; /*0x6dd285*/
}
