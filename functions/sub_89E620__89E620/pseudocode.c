void __thiscall sub_89E620(void *this, int a2)
{
  int v3; // eax
  double v4; // st7
  _DWORD *v5; // edi
  _WORD *v6; // [esp+14h] [ebp-68h]
  int v7; // [esp+14h] [ebp-68h]
  float v8; // [esp+28h] [ebp-54h]
  float v9; // [esp+2Ch] [ebp-50h]
  float v10; // [esp+2Ch] [ebp-50h]
  float v11; // [esp+30h] [ebp-4Ch]
  float v12; // [esp+30h] [ebp-4Ch]
  float v13; // [esp+34h] [ebp-48h]
  float v14; // [esp+34h] [ebp-48h]
  __int128 v15; // [esp+3Ch] [ebp-40h] BYREF
  __int128 v16; // [esp+4Ch] [ebp-30h] BYREF
  unsigned int v17; // [esp+78h] [ebp-4h]

  if ( a2 ) /*0x89e65e*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x50, 0x26); /*0x89e673*/
    *(_WORD *)(v3 + 4) = 0x50; /*0x89e675*/
    v9 = *(float *)(a2 + 0x20); /*0x89e682*/
    v6 = *(_WORD **)(a2 + 4); /*0x89e68c*/
    v13 = *(float *)(a2 + 0x24); /*0x89e68d*/
    v11 = *(float *)(a2 + 0x28); /*0x89e69b*/
    v4 = *(float *)(a2 + 0x2C); /*0x89e6a3*/
    v17 = 0; /*0x89e6a6*/
    v8 = v4; /*0x89e6ae*/
    *(float *)&v15 = v9; /*0x89e6b6*/
    *((float *)&v15 + 1) = v13; /*0x89e6be*/
    *((float *)&v15 + 2) = v11; /*0x89e6c6*/
    *((float *)&v15 + 3) = v8; /*0x89e6ce*/
    v12 = *(float *)(a2 + 0x14); /*0x89e6dc*/
    v14 = *(float *)(a2 + 0x18); /*0x89e6e3*/
    v10 = *(float *)(a2 + 0x1C); /*0x89e6ea*/
    *(float *)&v16 = *(float *)(a2 + 0x10); /*0x89e6f2*/
    *((float *)&v16 + 1) = v12; /*0x89e6fa*/
    *((float *)&v16 + 2) = v14; /*0x89e702*/
    *((float *)&v16 + 3) = v10; /*0x89e70a*/
    v5 = sub_8B89C0( /*0x89e72e*/
           (_DWORD *)v3,
           &v16,
           &v15,
           COERCE_INT(*(float *)(a2 + 0x30)),
           COERCE_INT(*(float *)(a2 + 0x34)),
           COERCE_INT(*(float *)(a2 + 0x3C)),
           v6);
    v7 = *(int *)(a2 + 0x38); /*0x89e733*/
    v17 = 0xFFFFFFFF; /*0x89e736*/
    sub_8B8A80(v5, v7); /*0x89e73e*/
    (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x4C))(this, v5); /*0x89e74b*/
    if ( *((_WORD *)v5 + 2) ) /*0x89e74d*/
    {
      if ( !--*((_WORD *)v5 + 3) ) /*0x89e759*/
        (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x89e76a*/
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x89e774*/
  }
}
