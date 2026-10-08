int __thiscall sub_5723E0(char *this, char *a2, float a3, float a4, int a5, int a6, float a7, int a8)
{
  _DWORD *Singleton; // eax
  char *m_data; // eax
  int v14; // edi
  unsigned int m_dataLen; // ecx
  unsigned int i; // edx
  int v18; // esi
  char j; // cl
  int v21; // esi
  char *v22; // ecx
  LONG (__stdcall *v23)(volatile LONG *); // ebx
  char *v24; // eax
  const char *v25; // eax
  int v26; // eax
  char *v27; // edi
  InterfaceManager *v28; // eax
  char *v29; // ebp
  NiAVObject *v30; // ebp
  NiAVObject *v31; // eax
  NiAVObject *v32; // edi
  char *v33; // esi
  NiAVObject *v34; // ebp
  int v35; // edi
  int v36; // ecx
  double v37; // st4
  double v38; // st4
  char v39; // [esp+4Bh] [ebp-21h]
  int v41; // [esp+50h] [ebp-1Ch]
  int v42; // [esp+54h] [ebp-18h] BYREF
  BSStringT Src; // [esp+58h] [ebp-14h] BYREF
  int v44; // [esp+68h] [ebp-4h]

  if ( !InterfaceManager_GetSingleton(0, 1)->unk070 ) /*0x57241b*/
    return 0; /*0x57241b*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x572423*/
  v41 = 0; /*0x572431*/
  v39 = 0; /*0x572435*/
  if ( !a8 ) /*0x57243d*/
    a8 = dword_B12DB4; /*0x572444*/
  Src.m_data = 0; /*0x572448*/
  *(_DWORD *)&Src.m_dataLen = 0; /*0x57244c*/
  v44 = 0; /*0x57245c*/
  if ( a2 && *a2 )
  {
    BSStringT_Set(&Src, a2, 0); /*0x57246d*/
    v42 = 0x4B0; /*0x572472*/
    a2 = 0; /*0x57247a*/
    Singleton = FontManager_GetSingleton(); /*0x57247e*/
    sub_574A80((_DWORD *)Singleton[a8 - 1], (const char **)&Src.m_data, &v42, (int *)&a2, 0, 0xA); /*0x57249f*/
    if ( a6 > 0 )
    {
      m_data = Src.m_data; /*0x5724b5*/
      v14 = 0; /*0x5724b9*/
      if ( Src.m_dataLen == (__int16)0xFFFF ) /*0x5724c0*/
        m_dataLen = strlen(Src.m_data); /*0x5724c4*/
      else
        m_dataLen = (unsigned __int16)Src.m_dataLen; /*0x5724de*/
      for ( i = 0; i < m_dataLen; ++i )
      {
        if ( v14 >= a6 - 1 ) /*0x5724f2*/
          break; /*0x5724f2*/
        if ( Src.m_data[Src.m_data != 0 ? i : 0] == 0xA )
          ++v14; /*0x572502*/
      }
      if ( i == m_dataLen ) /*0x57250e*/
      {
        FormHeapFree((unsigned int)Src.m_data); /*0x572511*/
        return 0; /*0x57251b*/
      }
      v18 = 0; /*0x572520*/
      for ( j = Src.m_data[Src.m_data != 0 ? i : 0]; j != 0xA; j = Src.m_data[Src.m_data != 0 ? i : 0] )
      {
        if ( !j ) /*0x572534*/
          break; /*0x572534*/
        m_data[m_data != 0 ? v18 : 0] = j;
        m_data = Src.m_data; /*0x572541*/
        ++i; /*0x572545*/
        ++v18; /*0x572548*/
      }
      if ( m_data[m_data != 0 ? i : 0] )
      {
        v41 = v18; /*0x572575*/
        if ( m_data[m_data != 0 ? v18 : 0] )
        {
          while ( m_data[m_data != 0 ? ++v41 : 0] != 0 )
            ; /*0x57258f*/
        }
      }
      m_data[m_data != 0 ? v18 : 0] = 0;
    }
  }
  else
  {
    v39 = 1; /*0x5724d4*/
  }
  v21 = 0; /*0x5725b1*/
  v22 = this + 8; /*0x5725b6*/
  do /*0x5725e8*/
  {
    if ( a3 == *((float *)v22 + 0xFFFFFFFE) && a4 == *((float *)v22 + 0xFFFFFFFF) && *(_DWORD *)v22 == a5 ) /*0x5725da*/
      break; /*0x5725da*/
    ++v21; /*0x5725dc*/
    v22 += 0x1C; /*0x5725df*/
  }
  while ( v21 < 0xC8 ); /*0x5725e8*/
  v23 = InterlockedDecrement; /*0x5725f2*/
  if ( v21 == 0xC8 ) /*0x5725fa*/
  {
    v21 = 0; /*0x5725fc*/
    v24 = this + 8; /*0x5725fe*/
    do /*0x572611*/
    {
      if ( !*(_DWORD *)v24 ) /*0x572600*/
        break; /*0x572603*/
      ++v21; /*0x572605*/
      v24 += 0x1C; /*0x572608*/
    }
    while ( v21 < 0xC8 ); /*0x572611*/
    if ( v21 == 0xC8 ) /*0x572619*/
    {
      PrintError("Too many unique debug text items. \n"); /*0x572624*/
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x57262b*/
      FormHeapFree((unsigned int)Src.m_data); /*0x572635*/
      return 0xFFFFFFFF; /*0x572640*/
    }
  }
  else
  {
    if ( !v39 ) /*0x57264a*/
    {
      if ( *((_DWORD *)this + 7 * v21 + 3) ) /*0x572659*/
      {
        if ( Src.m_data && (v25 = *((const char **)this + 7 * v21 + 4)) != 0 ) /*0x572670*/
          v26 = CRT_StricmpLocaleDispatch(v25, Src.m_data); /*0x572674*/
        else
          v26 = 2 * (Src.m_data == 0) - 1; /*0x572685*/
        if ( !v26 ) /*0x57268b*/
          goto LABEL_68; /*0x57268b*/
      }
    }
    v27 = this + 0x1C * v21 + 0xC; /*0x5726a3*/
    if ( *(_DWORD *)v27 ) /*0x57269e*/
    {
      v28 = InterfaceManager_GetSingleton(0, 1); /*0x5726ad*/
      v28->unk070->vtbl->RemoveObject(v28->unk070, (NiAVObject **)&a2, *(NiAVObject **)v27); /*0x5726c8*/
      if ( a2 ) /*0x5726d0*/
      {
        v29 = a2; /*0x5726d2*/
        if ( !v23((volatile LONG *)a2 + 1) ) /*0x5726d8*/
          (**(void (__thiscall ***)(char *, int))v29)(v29, 1); /*0x5726eb*/
      }
      v30 = *(NiAVObject **)v27; /*0x5726ed*/
      if ( *(_DWORD *)v27 ) /*0x5726ed*/
      {
        if ( !v23((volatile LONG *)&v30->members) ) /*0x5726f7*/
        {
          if ( v30 ) /*0x5726ff*/
            v30->vtbl->super.super.Destructor((NiRefObject *)v30, 1); /*0x57270a*/
        }
        *(_DWORD *)v27 = 0; /*0x57270c*/
      }
    }
  }
  if ( v39 ) /*0x572717*/
  {
    v35 = *((_DWORD *)this + 7 * v21 + 3); /*0x572799*/
    v33 = this + 0x1C * v21; /*0x57279f*/
    if ( v35 ) /*0x5727a2*/
    {
      if ( !v23((volatile LONG *)(v35 + 4)) ) /*0x5727a8*/
        (**(void (__thiscall ***)(int, int))v35)(v35, 1); /*0x5727ba*/
      *((_DWORD *)v33 + 3) = 0; /*0x5727bc*/
    }
  }
  else
  {
    v31 = sub_571900(Src.m_data, a3, a4, a5, a8); /*0x57273e*/
    v32 = *((NiAVObject **)this + 7 * v21 + 3); /*0x572750*/
    v33 = this + 0x1C * v21; /*0x572754*/
    v34 = v31; /*0x572757*/
    if ( v32 != v31 ) /*0x57275b*/
    {
      if ( v32 ) /*0x57275f*/
      {
        if ( !v23((volatile LONG *)&v32->members) ) /*0x572765*/
          v32->vtbl->super.super.Destructor((NiRefObject *)v32, 1); /*0x572777*/
      }
      *((_DWORD *)v33 + 3) = v34; /*0x57277b*/
      if ( v34 ) /*0x57277e*/
        InterlockedIncrement((volatile LONG *)&v34->members); /*0x572784*/
    }
  }
  if ( *((_DWORD *)v33 + 3) ) /*0x5727c3*/
  {
    BSStringT_Set((BSStringT *)v33 + 2, Src.m_data, 0); /*0x5727d3*/
    NiObjectNET_SetName(*((NiObjectNET **)v33 + 3), Src.m_data); /*0x5727e0*/
    v36 = a5; /*0x5727e9*/
    *(float *)v33 = a3; /*0x5727ed*/
    v37 = a4; /*0x5727ef*/
    *((_DWORD *)v33 + 2) = v36; /*0x5727f3*/
    *((float *)v33 + 1) = v37; /*0x5727f6*/
    v38 = a7; /*0x5727f9*/
  }
  else
  {
    *((_DWORD *)v33 + 2) = 0; /*0x572801*/
    *(float *)v33 = 0.0; /*0x572808*/
    v38 = kTerrainLODQuadRayDirectionZ; /*0x57280a*/
  }
  *((float *)v33 + 6) = v38; /*0x572810*/
LABEL_68:
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x572813*/
  FormHeapFree((unsigned int)Src.m_data); /*0x57281f*/
  return v41; /*0x57282b*/
}
