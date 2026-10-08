void __stdcall sub_5708F0(NiObject *a1, NiTArray_NiTexturingPropertyMap *a2, unsigned int *a3)
{
  NiObject *v3; // esi
  NiObject *v4; // eax
  unsigned int *v5; // ebx
  NiTArray_NiTexturingPropertyMap *v6; // ebp
  char *v7; // ecx
  bool v8; // zf
  int v9; // esi
  NiRTTI *v10; // eax
  char v11; // al
  int v12; // eax
  unsigned int v13; // esi
  char v14; // dl
  int v15; // ecx
  bool v16; // cf
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // esi
  NiObject *i; // eax
  NiObject *v22; // [esp+4h] [ebp-8h]

  v3 = a1; /*0x5708f4*/
  if ( a1 )
  {
    v4 = NiRTTI_Cast((BSStringT *)&stru_B40864, a1); /*0x57090d*/
    v5 = a3; /*0x570912*/
    v6 = a2; /*0x570916*/
    v22 = v4; /*0x57091f*/
    if ( v4 )
    {
      v7 = 0; /*0x570929*/
      v8 = v4[0x1A].__vftable == 0; /*0x57092b*/
      a3 = 0; /*0x570931*/
      if ( !v8 )
      {
        do
        {
          v9 = sub_4954B0(v4, (unsigned int)v7); /*0x570948*/
          if ( v9 )
          {
            v10 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x570955*/
            if ( v10 ) /*0x570959*/
            {
              while ( v10 != &stru_B40C3C ) /*0x570965*/
              {
                v10 = v10->parent; /*0x570967*/
                if ( !v10 ) /*0x57096c*/
                  goto LABEL_8; /*0x57096c*/
              }
              v11 = 1; /*0x57099a*/
            }
            else
            {
LABEL_8:
              v11 = 0; /*0x57096e*/
            }
            v12 = v11 != 0 ? v9 : 0;
            if ( v12 ) /*0x570976*/
            {
              v13 = *v5; /*0x570978*/
              v14 = 1; /*0x57097a*/
              v15 = *v5 - 1; /*0x57097c*/
              while ( v15 >= 0 ) /*0x570982*/
              {
                if ( *((_DWORD *)&v6->data->vtbl + v15) == *(_DWORD *)(v12 + 0x18) ) /*0x57098d*/
                  v14 = 0; /*0x57098f*/
                --v15; /*0x570991*/
                if ( !v14 ) /*0x570996*/
                  goto LABEL_18; /*0x570996*/
              }
              a2 = *(NiTArray_NiTexturingPropertyMap **)(v12 + 0x18); /*0x5709ad*/
              NiTArray_SetAt(v6, v13, &a2); /*0x5709b1*/
              ++*v5; /*0x5709b6*/
            }
          }
LABEL_18:
          v4 = v22; /*0x5709b9*/
          v7 = (char *)a3 + 1; /*0x5709c1*/
          v16 = (NiObjectVtbl *)((unsigned int)a3 + 1) < v22[0x1A].__vftable; /*0x5709c4*/
          a3 = (unsigned int *)((char *)a3 + 1); /*0x5709ca*/
        }
        while ( v16 );
        v3 = a1; /*0x5709d4*/
      }
    }
    v17 = (int)v3->__vftable->Unk_02(v3); /*0x5709df*/
    v18 = v17; /*0x5709e1*/
    if ( v17 ) /*0x5709e5*/
    {
      v19 = *(unsigned __int16 *)(v17 + 0xB6); /*0x5709e7*/
      v20 = 0; /*0x5709ee*/
      if ( *(_WORD *)(v18 + 0xB6) ) /*0x5709e7*/
      {
        if ( v19 ) /*0x5709f6*/
          goto LABEL_24; /*0x5709f6*/
        for ( i = 0; ; i = *(NiObject **)(*(_DWORD *)(v18 + 0xB0) + 4 * v20) ) /*0x5709f8*/
        {
          sub_5708F0(i, v6, v5); /*0x570a0c*/
          if ( *(unsigned __int16 *)(v18 + 0xB6) <= (unsigned int)++v20 ) /*0x570a1d*/
            break; /*0x570a1d*/
LABEL_24:
          ; /*0x5709fc*/
        }
      }
    }
  }
}
