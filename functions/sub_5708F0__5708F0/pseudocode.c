void __stdcall sub_5708F0(NiObject *a1, NiTArray_NiTexturingPropertyMap *a2, unsigned int *a3)
{
  NiObject *v3; // esi
  NiObject *v4; // eax
  unsigned int *v5; // ebx
  NiTArray_NiTexturingPropertyMap *v6; // ebp
  char *v7; // ecx
  bool v8; // zf
  int v9; // esi
  int v10; // eax
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
  int i; // eax
  NiObject *v22; // [esp+4h] [ebp-8h]

  v3 = a1;
  if ( a1 )
  {
    v4 = NiRTTI_Cast((BSStringT *)dword_B40864, a1);
    v5 = a3;
    v6 = a2;
    v22 = v4;
    if ( v4 )
    {
      v7 = 0;
      v8 = v4[0x1A].__vftable == 0;
      a3 = 0;
      if ( !v8 )
      {
        do
        {
          v9 = sub_4954B0(v4, (unsigned int)v7);
          if ( v9 )
          {
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
            if ( v10 )
            {
              while ( (char *)v10 != dword_B40C3C )
              {
                v10 = *(_DWORD *)(v10 + 4);
                if ( !v10 )
                  goto LABEL_8;
              }
              v11 = 1;
            }
            else
            {
LABEL_8:
              v11 = 0;
            }
            v12 = v11 != 0 ? v9 : 0;
            if ( v12 )
            {
              v13 = *v5;
              v14 = 1;
              v15 = *v5 - 1;
              while ( v15 >= 0 )
              {
                if ( *((_DWORD *)&v6->data->vtbl + v15) == *(_DWORD *)(v12 + 0x18) )
                  v14 = 0;
                --v15;
                if ( !v14 )
                  goto LABEL_18;
              }
              a2 = *(NiTArray_NiTexturingPropertyMap **)(v12 + 0x18);
              NiTArray_SetAt(v6, v13, &a2);
              ++*v5;
            }
          }
LABEL_18:
          v4 = v22;
          v7 = (char *)a3 + 1;
          v16 = (NiObjectVtbl *)((unsigned int)a3 + 1) < v22[0x1A].__vftable;
          a3 = (unsigned int *)((char *)a3 + 1);
        }
        while ( v16 );
        v3 = a1;
      }
    }
    v17 = (int)v3->__vftable->Unk_02(v3);
    v18 = v17;
    if ( v17 )
    {
      v19 = *(unsigned __int16 *)(v17 + 0xB6);
      v20 = 0;
      if ( *(_WORD *)(v18 + 0xB6) )
      {
        if ( v19 )
          goto LABEL_24;
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v18 + 0xB0) + 4 * v20) )
        {
          sub_5708F0(i, (int)v6, v5);
          if ( *(unsigned __int16 *)(v18 + 0xB6) <= (unsigned int)++v20 )
            break;
LABEL_24:
          ;
        }
      }
    }
  }
}
