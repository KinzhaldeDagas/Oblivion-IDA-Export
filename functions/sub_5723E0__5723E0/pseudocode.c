int __userpurge sub_5723E0@<eax>(
        char *this@<ecx>,
        unsigned int ebp0@<ebp>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        char *a2,
        float a7,
        float a8,
        int a9,
        int a10,
        float a11,
        int a12)
{
  int Singleton; // eax
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
  char *v25; // eax
  int v26; // eax
  char *v27; // edi
  InterfaceManager *v28; // eax
  char *v29; // ebp
  NiAVObject *v30; // eax
  NiAVObject *v31; // edi
  char *v32; // esi
  NiAVObject *v33; // ebp
  int v34; // edi
  int v35; // ecx
  double v36; // st4
  double v37; // st4
  char v38; // [esp+4Bh] [ebp-21h]
  int v40; // [esp+50h] [ebp-1Ch]
  int v41; // [esp+54h] [ebp-18h] BYREF
  BSStringT Src; // [esp+58h] [ebp-14h] BYREF
  int v43; // [esp+68h] [ebp-4h]

  if ( !InterfaceManager_GetSingleton(0, 1)->unk070 )
    return 0;
  nullsub_returnTrue_0arg();
  v40 = 0;
  v38 = 0;
  if ( !a12 )
    a12 = dword_B12DB4;
  Src.m_data = 0;
  *(_DWORD *)&Src.m_dataLen = 0;
  v43 = 0;
  if ( a2 && *a2 )
  {
    BSStringT_Set(&Src, a2, 0);
    v41 = 0x4B0;
    a2 = 0;
    Singleton = FontManager_GetSingleton(st7_0, st6_0, st5_0);
    sub_574A80(*(_DWORD **)(Singleton + 4 * a12 - 4), (const char **)&Src.m_data, &v41, (int *)&a2, 0, 0xA);
    LOBYTE(ebp0) = a10;
    if ( a10 > 0 )
    {
      m_data = Src.m_data;
      v14 = 0;
      if ( Src.m_dataLen == (__int16)0xFFFF )
        m_dataLen = strlen(Src.m_data);
      else
        m_dataLen = (unsigned __int16)Src.m_dataLen;
      for ( i = 0; i < m_dataLen; ++i )
      {
        if ( v14 >= a10 - 1 )
          break;
        ebp0 = Src.m_data != 0 ? i : 0;
        if ( Src.m_data[ebp0] == 0xA )
          ++v14;
      }
      if ( i == m_dataLen )
      {
        FormHeapFree((unsigned int)Src.m_data);
        return 0;
      }
      v18 = 0;
      for ( j = Src.m_data[Src.m_data != 0 ? i : 0]; j != 0xA; j = Src.m_data[Src.m_data != 0 ? i : 0] )
      {
        if ( !j )
          break;
        m_data[m_data != 0 ? v18 : 0] = j;
        m_data = Src.m_data;
        ++i;
        ++v18;
      }
      if ( m_data[m_data != 0 ? i : 0] )
      {
        v40 = v18;
        if ( m_data[m_data != 0 ? v18 : 0] )
        {
          while ( m_data[m_data != 0 ? ++v40 : 0] != 0 )
            ;
        }
      }
      m_data[m_data != 0 ? v18 : 0] = 0;
    }
  }
  else
  {
    v38 = 1;
  }
  v21 = 0;
  v22 = this + 8;
  do
  {
    if ( a7 == *((float *)v22 + 0xFFFFFFFE) && a8 == *((float *)v22 + 0xFFFFFFFF) && *(_DWORD *)v22 == a9 )
      break;
    ++v21;
    v22 += 0x1C;
  }
  while ( v21 < 0xC8 );
  v23 = InterlockedDecrement;
  if ( v21 == 0xC8 )
  {
    v21 = 0;
    v24 = this + 8;
    do
    {
      if ( !*(_DWORD *)v24 )
        break;
      ++v21;
      v24 += 0x1C;
    }
    while ( v21 < 0xC8 );
    if ( v21 == 0xC8 )
    {
      PrintError("Too many unique debug text items. \n");
      nullsub_returnTrue_0arg();
      FormHeapFree((unsigned int)Src.m_data);
      return 0xFFFFFFFF;
    }
  }
  else
  {
    if ( !v38 )
    {
      if ( *((_DWORD *)this + 7 * v21 + 3) )
      {
        if ( Src.m_data && (v25 = *((char **)this + 7 * v21 + 4)) != 0 )
          v26 = _strcmp(v25, Src.m_data);
        else
          v26 = 2 * (Src.m_data == 0) - 1;
        if ( !v26 )
          goto LABEL_68;
      }
    }
    v27 = this + 0x1C * v21 + 0xC;
    if ( *(_DWORD *)v27 )
    {
      v28 = InterfaceManager_GetSingleton(0, 1);
      v28->unk070->vtbl->RemoveObject(v28->unk070, (NiAVObject **)&a2, *(NiAVObject **)v27);
      if ( a2 )
      {
        v29 = a2;
        if ( !v23((volatile LONG *)a2 + 1) )
          (**(void (__thiscall ***)(char *, int))v29)(v29, 1);
      }
      ebp0 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 )
      {
        if ( !v23((volatile LONG *)(ebp0 + 4)) )
        {
          if ( ebp0 )
            (**(void (__thiscall ***)(unsigned int, int))ebp0)(ebp0, 1);
        }
        *(_DWORD *)v27 = 0;
      }
    }
  }
  if ( v38 )
  {
    v34 = *((_DWORD *)this + 7 * v21 + 3);
    v32 = this + 0x1C * v21;
    if ( v34 )
    {
      if ( !v23((volatile LONG *)(v34 + 4)) )
        (**(void (__thiscall ***)(int, int))v34)(v34, 1);
      *((_DWORD *)v32 + 3) = 0;
    }
  }
  else
  {
    v30 = sub_571900(ebp0, st5_0, st6_0, st7_0, Src.m_data, a7, a8, a9, a12);
    v31 = *((NiAVObject **)this + 7 * v21 + 3);
    v32 = this + 0x1C * v21;
    v33 = v30;
    if ( v31 != v30 )
    {
      if ( v31 )
      {
        if ( !v23((volatile LONG *)&v31->members) )
          v31->vtbl->super.super.Destructor((NiRefObject *)v31, 1);
      }
      *((_DWORD *)v32 + 3) = v33;
      if ( v33 )
        InterlockedIncrement((volatile LONG *)&v33->members);
    }
  }
  if ( *((_DWORD *)v32 + 3) )
  {
    BSStringT_Set((BSStringT *)v32 + 2, Src.m_data, 0);
    NiObjectNET_SetName(*((NiObjectNET **)v32 + 3), Src.m_data);
    v35 = a9;
    *(float *)v32 = a7;
    v36 = a8;
    *((_DWORD *)v32 + 2) = v35;
    *((float *)v32 + 1) = v36;
    v37 = a11;
  }
  else
  {
    *((_DWORD *)v32 + 2) = 0;
    *(float *)v32 = 0.0;
    v37 = flt_A30634;
  }
  *((float *)v32 + 6) = v37;
LABEL_68:
  nullsub_returnTrue_0arg();
  FormHeapFree((unsigned int)Src.m_data);
  return v40;
}
