float *__thiscall sub_5EE660(void *this, float *a2)
{
  _DWORD *v3; // eax
  float v4; // edx
  float v5; // ecx
  float *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // ebx
  double v10; // st7
  double v12; // st7
  int (__thiscall *v13)(void *); // eax
  float *v14; // eax
  double v15; // st7

  v3 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x168))(this); /*0x5ee66d*/
  v4 = MEMORY[0xB3F9AC]; /*0x5ee67b*/
  *a2 = g_zeroNiPoint3; /*0x5ee681*/
  v5 = MEMORY[0xB3F9B0][0]; /*0x5ee683*/
  a2[1] = v4; /*0x5ee689*/
  a2[2] = v5; /*0x5ee68c*/
  if ( v3 && (v6 = (float *)ActorSkinInfo_GetCachedNode(v3, 0)) != 0 /*0x5ee6e7*/
    || (v7 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this)) != 0
    && (v8 = sub_700010(v7, (int)&stru_B3CAC0)) != 0
    && (v9 = v8[0x1F]) != 0
    && ((v6 = (float *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 0x4C))(v9, "Bip01 Head")) != 0
     || (v6 = (float *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 0x4C))(v9, "Bip02 Head")) != 0) )
  {
    *a2 = v6[0x22] + *a2; /*0x5ee6f2*/
    a2[1] = v6[0x23] + a2[1]; /*0x5ee6fd*/
    v10 = v6[0x24]; /*0x5ee700*/
    a2[2] = v10 + a2[2]; /*0x5ee70b*/
    return a2; /*0x5ee706*/
  }
  else
  {
    v12 = Actor_GetScaledCollisionHeight(this); /*0x5ee715*/
    v13 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174); /*0x5ee722*/
    a2[2] = v12 * dbl_A6E700 + a2[2]; /*0x5ee72d*/
    v14 = (float *)v13(this); /*0x5ee730*/
    *a2 = *v14 + *a2; /*0x5ee737*/
    a2[1] = v14[1] + a2[1]; /*0x5ee73f*/
    v15 = v14[2]; /*0x5ee742*/
    a2[2] = v15 + a2[2]; /*0x5ee74a*/
    return a2; /*0x5ee745*/
  }
}
