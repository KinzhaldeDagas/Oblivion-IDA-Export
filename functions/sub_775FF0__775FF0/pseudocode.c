char __thiscall sub_775FF0(float *this, int a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax
  double v6; // st7
  float v8; // [esp+8h] [ebp-24h]
  float v9; // [esp+Ch] [ebp-20h]
  float v10; // [esp+10h] [ebp-1Ch]
  float v11; // [esp+14h] [ebp-18h]
  float v12; // [esp+18h] [ebp-14h]
  float v13; // [esp+1Ch] [ebp-10h]
  float v14; // [esp+20h] [ebp-Ch]
  float v15; // [esp+24h] [ebp-8h]
  float v16; // [esp+28h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 0xB8); /*0x775ff9*/
  if ( *((_DWORD *)this + 0x1A) != v2 ) /*0x776004*/
  {
    *((_DWORD *)this + 0x1A) = v2; /*0x77600f*/
    _memset((int)this, 0, 0x68u); /*0x776012*/
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x84))(a2) - 1; /*0x776026*/
    if ( !v4 ) /*0x776029*/
    {
      *(_DWORD *)this = 3; /*0x776202*/
      *(this + 0x10) = *(float *)(a2 + 0x108); /*0x77620e*/
      *(this + 0x11) = *(float *)(a2 + 0x10C); /*0x776217*/
      *(this + 0x12) = *(float *)(a2 + 0x110); /*0x776220*/
      goto LABEL_7; /*0x776223*/
    }
    v5 = v4 - 1; /*0x77602f*/
    if ( v5 ) /*0x776032*/
    {
      if ( v5 != 1 ) /*0x77603b*/
      {
LABEL_7:
        v6 = *(float *)(a2 + 0xDC); /*0x7760c4*/
        v8 = *(float *)(a2 + 0xE0) * v6; /*0x77610c*/
        v9 = *(float *)(a2 + 0xE4) * v6; /*0x77612e*/
        v10 = *(float *)(a2 + 0xE8) * v6; /*0x77614b*/
        v11 = *(float *)(a2 + 0xEC) * v6; /*0x776157*/
        v12 = *(float *)(a2 + 0xF0) * v6; /*0x776161*/
        v13 = *(float *)(a2 + 0xF4) * v6; /*0x77616b*/
        v14 = *(float *)(a2 + 0xF8) * v6; /*0x776175*/
        v15 = *(float *)(a2 + 0xFC) * v6; /*0x77617f*/
        v16 = v6 * *(float *)(a2 + 0x100); /*0x776187*/
        *(this + 9) = v8; /*0x77618f*/
        *(this + 0xA) = v9; /*0x776196*/
        *(this + 0xB) = v10; /*0x77619d*/
        *(this + 0xC) = 1.0; /*0x7761a2*/
        *(this + 1) = v11; /*0x7761a9*/
        *(this + 2) = v12; /*0x7761b0*/
        *(this + 3) = v13; /*0x7761b7*/
        *(this + 4) = 1.0; /*0x7761ba*/
        *(this + 5) = v14; /*0x7761c1*/
        *(this + 6) = v15; /*0x7761c8*/
        *(this + 7) = v16; /*0x7761cf*/
        *(this + 8) = 1.0; /*0x7761d2*/
        return 1; /*0x7761d9*/
      }
      *(_DWORD *)this = 2; /*0x776041*/
      *(this + 0xD) = *(float *)(a2 + 0x88); /*0x77604d*/
      *(this + 0xE) = *(float *)(a2 + 0x8C); /*0x776056*/
      *(this + 0xF) = *(float *)(a2 + 0x90); /*0x77605f*/
      *(this + 0x10) = *(float *)(a2 + 0x114); /*0x776068*/
      *(this + 0x11) = *(float *)(a2 + 0x118); /*0x776071*/
      *(this + 0x12) = *(float *)(a2 + 0x11C); /*0x77607a*/
      *(this + 0x18) = 0.0; /*0x77607f*/
      *(this + 0x19) = *(float *)(a2 + 0x120) * unk_B3F9A4 / dbl_A65A18; /*0x776094*/
      *(this + 0x14) = *(float *)(a2 + 0x124); /*0x77609d*/
    }
    else
    {
      *(_DWORD *)this = 1; /*0x7761dc*/
      *(this + 0xD) = *(float *)(a2 + 0x88); /*0x7761e8*/
      *(this + 0xE) = *(float *)(a2 + 0x8C); /*0x7761f1*/
      *(this + 0xF) = *(float *)(a2 + 0x90); /*0x7761fa*/
    }
    *(this + 0x15) = *(float *)(a2 + 0x108); /*0x7760a6*/
    *(this + 0x16) = *(float *)(a2 + 0x10C); /*0x7760af*/
    *(this + 0x17) = *(float *)(a2 + 0x110); /*0x7760b8*/
    *(this + 0x13) = unk_B42844; /*0x7760c1*/
    goto LABEL_7; /*0x7760c1*/
  }
  return 0; /*0x7761d5*/
}
