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

  if ( Seed - *((_DWORD *)this + 0x34) >= 0x64 )
  {
    v2 = 0;
    *((_DWORD *)this + 0x34) = Seed;
    v21 = 0;
    v3 = TESDataHandler_g_PlayerRef;
    v4 = TESDataHandler_g_PlayerRef->super.super.super.super.pos[1];
    v28 = TESDataHandler_g_PlayerRef->super.super.super.super.pos[0];
    v30 = v3->super.super.super.super.pos[2];
    v5 = *((_DWORD *)this + 0xC1);
    v29 = v4;
    v6 = *(_DWORD *)(v5 + 4);
    v7 = 0;
    v31 = 0;
    if ( v6 )
    {
      v8 = *(_DWORD **)(v5 + 8);
      v9 = v8;
      while ( !*v9 )
      {
        ++v7;
        ++v9;
        if ( v7 >= v6 )
          goto LABEL_6;
      }
      v10 = (unsigned int *)v8[v7];
    }
    else
    {
LABEL_6:
      v10 = 0;
    }
    v23 = v10;
    if ( v10 )
    {
      do
      {
        sub_7B2600(*((_DWORD **)this + 0xC1), &v23, &v24, (unsigned int *)&v21);
        if ( v21 )
        {
          v11 = v24;
          v12 = *((_DWORD **)this + 0xC0);
          v13 = 0;
          v22 = 0.0;
          NiTMap_GetAt(v12, v24, &v22);
          v14 = (float *)LODWORD(v22);
          if ( v22 == 0.0 )
          {
            NiTMap_RemoveAt(*((_DWORD **)this + 0xC1), v11);
            sub_6F9710(v21);
          }
          else if ( sub_6B6AF0(SLODWORD(v22)) )
          {
            v15 = *(float *)(v21 + 0x8C);
            v16 = *(float *)(v21 + 0x90);
            v25 = *(float *)(v21 + 0x88);
            v17 = v25;
            v27 = v16;
            v26 = v15;
            v18 = v16;
            if ( v28 == v25 && v29 == v26 )
            {
              v22 = v30 - v18;
              v22 = fabs(v22);
              if ( v22 < (double)flt_A2FFE8 )
              {
                v13 = 1;
                v25 = *(this + 0x20);
                v26 = *(this + 0x21);
                v17 = v25;
              }
            }
            if ( (*(_BYTE *)v14 & 8) != 0 || v13 )
            {
              v22 = v18 - dbl_A3F428;
              v20 = v17;
              sub_6B6BE0(v14, v20, v26, v22);
            }
            else
            {
              v19 = v17;
              sub_6B6BE0(v14, v19, v26, v27);
            }
          }
        }
      }
      while ( v23 );
      v2 = v21;
    }
    v31 = 0xFFFFFFFF;
    if ( v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
        (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    }
  }
}
