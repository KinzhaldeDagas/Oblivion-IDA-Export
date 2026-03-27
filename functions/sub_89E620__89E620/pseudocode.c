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

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x50, 0x26);
    *(_WORD *)(v3 + 4) = 0x50;
    v9 = *(float *)(a2 + 0x20);
    v6 = *(_WORD **)(a2 + 4);
    v13 = *(float *)(a2 + 0x24);
    v11 = *(float *)(a2 + 0x28);
    v4 = *(float *)(a2 + 0x2C);
    v17 = 0;
    v8 = v4;
    *(float *)&v15 = v9;
    *((float *)&v15 + 1) = v13;
    *((float *)&v15 + 2) = v11;
    *((float *)&v15 + 3) = v8;
    v12 = *(float *)(a2 + 0x14);
    v14 = *(float *)(a2 + 0x18);
    v10 = *(float *)(a2 + 0x1C);
    *(float *)&v16 = *(float *)(a2 + 0x10);
    *((float *)&v16 + 1) = v12;
    *((float *)&v16 + 2) = v14;
    *((float *)&v16 + 3) = v10;
    v5 = sub_8B89C0(
           (_DWORD *)v3,
           &v16,
           &v15,
           COERCE_INT(*(float *)(a2 + 0x30)),
           COERCE_INT(*(float *)(a2 + 0x34)),
           COERCE_INT(*(float *)(a2 + 0x3C)),
           v6);
    v7 = *(int *)(a2 + 0x38);
    v17 = 0xFFFFFFFF;
    sub_8B8A80(v5, v7);
    (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x4C))(this, v5);
    if ( *((_WORD *)v5 + 2) )
    {
      if ( !--*((_WORD *)v5 + 3) )
        (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1);
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
