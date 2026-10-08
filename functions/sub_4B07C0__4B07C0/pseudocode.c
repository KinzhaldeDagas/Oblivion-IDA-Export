int *__thiscall sub_4B07C0(int *this, int a2, int a3)
{
  _DWORD *v4; // esi
  int v5; // edi
  _DWORD *v6; // eax
  void *v7; // ebx
  _DWORD *v8; // eax
  _BYTE *v9; // eax
  void *v10; // eax
  void *v12; // edi
  _DWORD *v13; // eax
  _DWORD *v14; // esi
  int *v15; // [esp+Ch] [ebp-4h]

  v4 = 0; /*0x4b07cb*/
  if ( TESLeveledList_GetCalcEachInCount((_BYTE *)this + 0x24) ) /*0x4b07cd*/
  {
    v15 = this + 0xA; /*0x4b07df*/
    if ( this != (int *)0xFFFFFFD8 ) /*0x4b07e3*/
    {
      while ( 1 ) /*0x4b07f4*/
      {
        v5 = *v15; /*0x4b07f4*/
        if ( *v15 ) /*0x4b07f4*/
        {
          if ( !v4 ) /*0x4b0800*/
          {
            v6 = (_DWORD *)FormHeapAlloc(8u); /*0x4b0804*/
            if ( v6 ) /*0x4b080e*/
            {
              *v6 = 0; /*0x4b0810*/
              v6[1] = 0; /*0x4b0812*/
            }
            else
            {
              v6 = 0; /*0x4b0817*/
            }
            v4 = v6; /*0x4b0819*/
          }
          v7 = OblivionDynamicCast( /*0x4b0830*/
                 *(void **)(v5 + 4),
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &SpellItem `RTTI Type Descriptor',
                 0);
          if ( !v7 ) /*0x4b0837*/
          {
            v9 = OblivionDynamicCast( /*0x4b087e*/
                   *(void **)(v5 + 4),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &TESLevSpell `RTTI Type Descriptor',
                   0);
            if ( v9 ) /*0x4b0888*/
            {
              v10 = sub_4B0770(v9, a2, a3); /*0x4b0896*/
              if ( v10 ) /*0x4b089d*/
                BSSimpleList_PushFront(v4, (int)v10); /*0x4b08a2*/
            }
            goto LABEL_18; /*0x4b08a2*/
          }
          if ( !*v4 ) /*0x4b083b*/
            goto LABEL_14; /*0x4b083b*/
          v8 = (_DWORD *)FormHeapAlloc(8u); /*0x4b083f*/
          if ( !v8 ) /*0x4b0849*/
          {
            *(_DWORD *)4 = v4[1]; /*0x4b0864*/
            v4[1] = 0; /*0x4b0867*/
LABEL_14:
            *v4 = v7; /*0x4b086a*/
            goto LABEL_18; /*0x4b086c*/
          }
          *v8 = *v4; /*0x4b084d*/
          v8[1] = 0; /*0x4b084f*/
          v8[1] = v4[1]; /*0x4b0855*/
          v4[1] = v8; /*0x4b0858*/
          *v4 = v7; /*0x4b085b*/
        }
LABEL_18:
        v15 = (int *)v15[1]; /*0x4b08a7*/
        if ( !v15 ) /*0x4b08b4*/
          return v4; /*0x4b08c1*/
      }
    }
  }
  else
  {
    v12 = sub_4B0770(this, a2, a3); /*0x4b08d5*/
    if ( v12 ) /*0x4b08d9*/
    {
      v13 = (_DWORD *)FormHeapAlloc(8u); /*0x4b08dd*/
      if ( v13 ) /*0x4b08e7*/
      {
        v14 = v13; /*0x4b08e9*/
        *v13 = 0; /*0x4b08ee*/
        v13[1] = 0; /*0x4b08f0*/
        BSSimpleList_PushFront(v13, (int)v12); /*0x4b08f3*/
        return v14; /*0x4b08fe*/
      }
      BSSimpleList_PushFront(0, (int)v12); /*0x4b0906*/
    }
  }
  return 0; /*0x4b08bb*/
}
