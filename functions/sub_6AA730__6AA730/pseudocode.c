void __thiscall sub_6AA730(float *this)
{
  int v2; // ebx
  PlayerCharacter *v3; // eax
  float v4; // ecx
  int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // edx
  _DWORD *v9; // edi
  unsigned int *v10; // eax
  int v11; // edi
  _DWORD *v12; // ecx
  char v13; // bl
  float *v14; // ebp
  float v15; // edx
  float v16; // eax
  double v17; // st7
  double v18; // st6
  float v19; // [esp+0h] [ebp-54h]
  float v20; // [esp+0h] [ebp-54h]
  int v21; // [esp+20h] [ebp-34h] BYREF
  float v22; // [esp+24h] [ebp-30h] BYREF
  unsigned int *v23; // [esp+28h] [ebp-2Ch] BYREF
  int v24; // [esp+2Ch] [ebp-28h] BYREF
  float v25; // [esp+30h] [ebp-24h]
  float v26; // [esp+34h] [ebp-20h]
  float v27; // [esp+38h] [ebp-1Ch]
  float v28; // [esp+3Ch] [ebp-18h]
  float v29; // [esp+40h] [ebp-14h]
  float v30; // [esp+44h] [ebp-10h]
  unsigned int v31; // [esp+50h] [ebp-4h]

  if ( (unsigned int)(*(_DWORD *)&MEMORY[0xB33E90][0x10] - *((_DWORD *)this + 0x34)) >= 0x64 ) /*0x6aa769*/
  {
    v2 = 0; /*0x6aa76f*/
    *(this + 0x34) = *(float *)&MEMORY[0xB33E90][0x10]; /*0x6aa771*/
    v21 = 0; /*0x6aa777*/
    v3 = reference; /*0x6aa77b*/
    v4 = reference->super.super.super.super.pos[1]; /*0x6aa783*/
    v28 = reference->super.super.super.super.pos[0]; /*0x6aa786*/
    v30 = v3->super.super.super.super.pos[2]; /*0x6aa78d*/
    v5 = *((_DWORD *)this + 0xC1); /*0x6aa791*/
    v29 = v4; /*0x6aa797*/
    v6 = *(_DWORD *)(v5 + 4); /*0x6aa79b*/
    v7 = 0; /*0x6aa79e*/
    v31 = 0; /*0x6aa7a2*/
    if ( v6 ) /*0x6aa7a6*/
    {
      v8 = *(_DWORD **)(v5 + 8); /*0x6aa7a8*/
      v9 = v8; /*0x6aa7ab*/
      while ( !*v9 ) /*0x6aa7b3*/
      {
        ++v7; /*0x6aa7b9*/
        ++v9; /*0x6aa7bc*/
        if ( v7 >= v6 ) /*0x6aa7c1*/
          goto LABEL_6; /*0x6aa7c1*/
      }
      v10 = (unsigned int *)v8[v7]; /*0x6aa8e2*/
    }
    else
    {
LABEL_6:
      v10 = 0; /*0x6aa7c3*/
    }
    v23 = v10; /*0x6aa7c7*/
    if ( v10 ) /*0x6aa7cb*/
    {
      do /*0x6aa931*/
      {
        sub_7B2600(*((unsigned int ***)this + 0xC1), &v23, &v24, (unsigned int *)&v21); /*0x6aa7e6*/
        if ( v21 ) /*0x6aa7f0*/
        {
          v11 = v24; /*0x6aa7f6*/
          v12 = *((_DWORD **)this + 0xC0); /*0x6aa7fa*/
          v13 = 0; /*0x6aa806*/
          v22 = 0.0; /*0x6aa808*/
          NiTMap_GetAt(v12, v24, &v22); /*0x6aa810*/
          v14 = (float *)LODWORD(v22); /*0x6aa815*/
          if ( v22 == 0.0 ) /*0x6aa81b*/
          {
            NiTMap_RemoveAt(*((_DWORD **)this + 0xC1), v11); /*0x6aa91a*/
            sub_6F9710(v21); /*0x6aa924*/
          }
          else if ( sub_6B6AF0(SLODWORD(v22)) ) /*0x6aa823*/
          {
            v15 = *(float *)(v21 + 0x8C); /*0x6aa83a*/
            v16 = *(float *)(v21 + 0x90); /*0x6aa840*/
            v25 = *(float *)(v21 + 0x88); /*0x6aa846*/
            v17 = v25; /*0x6aa84a*/
            v27 = v16; /*0x6aa850*/
            v26 = v15; /*0x6aa858*/
            v18 = v16; /*0x6aa860*/
            if ( v28 == v25 && v29 == v26 ) /*0x6aa878*/
            {
              v22 = v30 - v18; /*0x6aa880*/
              v22 = fabs(v22); /*0x6aa88a*/
              if ( v22 < (double)flt_A2FFE8 ) /*0x6aa89d*/
              {
                v13 = 1; /*0x6aa8a1*/
                v25 = *(this + 0x20); /*0x6aa8a9*/
                v26 = *(this + 0x21); /*0x6aa8b3*/
                v17 = v25; /*0x6aa8bb*/
              }
            }
            if ( (*(_BYTE *)v14 & 8) != 0 || v13 ) /*0x6aa8c5*/
            {
              v22 = v18 - dbl_A3F428; /*0x6aa8f5*/
              v20 = v17; /*0x6aa909*/
              sub_6B6BE0(v14, v20, v26, v22); /*0x6aa90c*/
            }
            else
            {
              v19 = v17; /*0x6aa8d8*/
              sub_6B6BE0(v14, v19, v26, v27); /*0x6aa8db*/
            }
          }
        }
      }
      while ( v23 ); /*0x6aa931*/
      v2 = v21; /*0x6aa937*/
    }
    v31 = 0xFFFFFFFF; /*0x6aa93d*/
    if ( v2 ) /*0x6aa945*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6aa94b*/
        (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6aa95d*/
    }
  }
}
