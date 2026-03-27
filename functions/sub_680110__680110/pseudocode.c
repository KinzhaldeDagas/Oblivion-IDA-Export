char __cdecl sub_680110(int a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5, int a6)
{
  int v8; // eax
  float *i; // esi
  int v10; // eax
  char *v11; // eax
  _WORD *v12; // esi
  int v13; // eax
  int v14; // eax
  _WORD *v15; // eax
  char v16; // [esp+1Fh] [ebp-1Dh]
  NiTPointerList__BSImageSpaceShader v17; // [esp+20h] [ebp-1Ch] BYREF

  if ( !lowPathWorld_ptr )
    return 0;
  v16 = 0;
  if ( a1 && a3 && a5 && a6 )
  {
    BSSimpleList_Clear(a5);
    if ( a1 == a3 )
      return 1;
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g_pathingMutex, (int)&unk_A2F830);
    sub_6805C0();
    memset(&v17.start, 0, 0xC);
    v17.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&AStarWorldNodeList::`vftable';
    flt_B1545C = flt_A32048;
    dword_B3BE08 = a6;
    dword_B3BE04 = 0;
    dword_B3BE0C = a1;
    dword_B3BE10 = a3;
    LODWORD(qword_B3BE20) = *a2;
    HIDWORD(qword_B3BE20) = a2[1];
    dword_B3BE28 = a2[2];
    LODWORD(qword_B3BE2C) = *a4;
    HIDWORD(qword_B3BE2C) = a4[1];
    v8 = a4[2];
    v17.unk18 = 0;
    dword_B3BE34 = v8;
    sub_67F690(&v17);
    for ( i = sub_680B40(&v17, flt_B1545C); i; i = sub_680B40(&v17, flt_B1545C) )
    {
      v10 = sub_680760(i);
      v11 = (char *)sub_6803F0(i, v10);
      if ( v11 != (char *)dword_B3BE10 )
        sub_67F830(v11, i, &v17);
      sub_680500((unsigned __int16 *)i, 1);
    }
    v12 = (_WORD *)dword_B3BE04;
    if ( dword_B3BE04 )
    {
      v16 = 1;
      while ( 1 )
      {
        v13 = sub_680760(v12);
        if ( !v13 )
          v13 = a1;
        v14 = sub_680380(v12, v13);
        BSSimpleList_PushFront(a5, v14);
        v15 = (_WORD *)sub_680430(v12);
        v12 = v15;
        if ( !v15 )
          break;
        if ( v15 == (_WORD *)sub_680430(v15) )
        {
          PrintError("Loop found in low path. Failing.");
          BSSimpleList_Clear(a5);
          v16 = 0;
          break;
        }
      }
    }
    NiLeaveCriticalSection_0(&g_pathingMutex);
    v17.unk18 = (BSShader *)0xFFFFFFFF;
    AStarWorldNodeList::~AStarWorldNodeList(&v17);
  }
  return v16;
}
