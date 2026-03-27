void __thiscall sub_67E3D0(char *this, int *a2, void *a3)
{
  float *v4; // esi
  float *v5; // eax
  char *CastingType; // edi
  char *v7; // eax
  _BYTE *v8; // eax
  _BYTE *v9; // esi
  Actor *v10; // ecx
  char v11; // al
  char v12; // al
  char v13; // al
  char *v14; // eax
  float v15; // edx
  float v16; // ecx
  double v17; // st6
  NiNode *Health; // eax
  int v19; // [esp+10h] [ebp-30h] BYREF
  float v20; // [esp+14h] [ebp-2Ch]
  float v21; // [esp+18h] [ebp-28h]
  float v22; // [esp+1Ch] [ebp-24h] BYREF
  float v23; // [esp+20h] [ebp-20h]
  float v24; // [esp+24h] [ebp-1Ch]
  float v25; // [esp+28h] [ebp-18h] BYREF
  float v26; // [esp+2Ch] [ebp-14h]
  float v27; // [esp+30h] [ebp-10h]
  int v28; // [esp+34h] [ebp-Ch] BYREF
  float v29; // [esp+38h] [ebp-8h]
  float v30; // [esp+3Ch] [ebp-4h]

  if ( a2 )
  {
    sub_68C6E0(a2);
    v4 = (float *)(this + 0xC);
    if ( sub_8AA390((float *)this, (float *)this + 3) )
    {
      if ( sub_8AA390((float *)this, (float *)&dword_B15450) )
      {
        if ( sub_8AA390((float *)this + 3, (float *)&dword_B15450) )
        {
          v5 = (float *)sub_68C280(a2, (_DWORD *)this + 3, 0);
          sub_68CB40(v5, a3);
          if ( *((_DWORD *)this + 7) && (CastingType = *((char **)this + 9)) != 0 )
          {
            do
            {
              v7 = sub_4BEF40(CastingType);
              v8 = sub_68C280(a2, v7, 0);
              v9 = v8;
              if ( v8 )
              {
                sub_68CA30(v8, 1);
                v10 = *((Actor **)this + 0xA);
                if ( !v10 || !Actor_IsCreature(v10) )
                {
                  v11 = sub_4E8040((float *)CastingType);
                  sub_68CA60(v9, v11);
                }
                v12 = sub_67ECF0(CastingType);
                sub_68CA90(v9, v12);
                v13 = sub_67ED20(CastingType);
                sub_68CAC0(v9, v13);
                sub_68CB10(v9, 1);
              }
              CastingType = (char *)TESEnchantableForm_GetCastingType(CastingType);
            }
            while ( CastingType );
            v14 = sub_4BEF40(*((char **)this + 9));
            v4 = (float *)(this + 0xC);
            v19 = *(int *)v14;
            v20 = *((float *)v14 + 1);
            v15 = *((float *)v14 + 2);
          }
          else
          {
            v16 = *((float *)this + 1);
            v15 = *((float *)this + 2);
            v19 = *(int *)this;
            v20 = v16;
          }
          v21 = v15;
          sub_68C280(a2, this, 0);
          if ( !TES->currentInteriorCell )
          {
            if ( sub_43F7C0((int *)TES, (float *)&v19, v4, (float *)&v28, 1.0) )
            {
              v22 = *v4 - *(float *)&v19;
              v23 = v4[1] - v20;
              v24 = 0.0;
              sub_43F350(&v22);
              v17 = dbl_A3F3E8;
              v25 = v22 * v17;
              v26 = v23 * v17;
              v27 = v17 * v24;
              v30 = v21;
              v22 = *(float *)&v28 - v25;
              v23 = v29 - v26;
              v24 = v21 - v27;
              v25 = *(float *)&v28 + v25;
              v26 = v26 + v29;
              v27 = v21 + v27;
              Health = TESHealthForm_GetHealth((Sky *)a2);
              sub_68C3A0(a2, &v22, &v25, Health);
            }
          }
        }
      }
    }
  }
}
