void __userpurge sub_6B9750(
        _DWORD *a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        signed int *a5,
        int a6,
        unsigned int a7,
        char *a2)
{
  double v10; // st7
  double v11; // st7
  _DWORD *v12; // edi
  unsigned int v13; // edx
  _DWORD *v14; // ecx
  float v15; // [esp+0h] [ebp-140h]
  float v16; // [esp+0h] [ebp-140h]
  float v17; // [esp+0h] [ebp-140h]
  float v18; // [esp+4h] [ebp-13Ch]
  float v19; // [esp+4h] [ebp-13Ch]
  float v20; // [esp+4h] [ebp-13Ch]
  const char *v21; // [esp+Ch] [ebp-134h]
  BSStringT v24; // [esp+28h] [ebp-118h] BYREF
  int v25[68]; // [esp+30h] [ebp-110h] BYREF

  _ESI = a5;
  v24.m_data = 0;
  v24.m_dataLen = 0;
  v24.m_bufLen = 0;
  BSStringT_Set(&v24, a2, 0);
  v21 = (const char *)a1[2];
  v25[0x43] = 0;
  _sprintf((char *)v25, "%s%s", a2, v21);
  __asm { fild    dword ptr [esi] }
  __asm { fstp    [esp+140h+var_13C]; float }
  __asm
  {
    fldz
    fstp    [esp+140h+var_140]; float
  }
  InterfaceMgr_DebugTextLine(0, st5_0, a3, a4, (char *)v25, v15, v18, 1, 0xFFFFFFFF);
  _sprintf((char *)v25, "%u", a1[9] / 0x64u);
  __asm { fild    dword ptr [esi] }
  __asm { fstp    [esp+13Ch+var_13C]; float }
  v10 = sub_57D7A0();
  __asm { fmul    qword ptr ds:0A46B08h }
  __asm
  {
    fdiv    qword ptr ds:0A309F0h
    fstp    [esp+140h+var_11C]
    fld     [esp+140h+var_11C]
    fstp    [esp+140h+var_140]; float
  }
  InterfaceMgr_DebugTextLine(0, st5_0, a3, v10, (char *)v25, v16, v19, 1, 0xFFFFFFFF);
  _sprintf((char *)v25, "%u", 0x64 * a1[9] / a7);
  __asm { fild    dword ptr [esi] }
  __asm { fstp    [esp+13Ch+var_13C]; float }
  v11 = sub_57D7A0();
  __asm { fmul    qword ptr ds:0A78850h }
  __asm
  {
    fdiv    qword ptr ds:0A309F0h
    fstp    [esp+140h+var_11C]
    fld     [esp+140h+var_11C]
    fstp    [esp+140h+var_140]; float
  }
  InterfaceMgr_DebugTextLine(0, st5_0, a3, v11, (char *)v25, v17, v20, 1, 0xFFFFFFFF);
  *a5 += a6;
  BSStringT_Append(&v24, (char *)&word_A403A0);
  v12 = (_DWORD *)a1[5];
  if ( v12 )
  {
    v13 = a7 / 0x64;
    do
    {
      v14 = (_DWORD *)v12[2];
      if ( v14[9] > v13 )
      {
        sub_6B9750(v14, st5_0, a3, a5, a6, a7, v24.m_data);
        v13 = a7 / 0x64;
      }
      v12 = (_DWORD *)*v12;
    }
    while ( v12 );
  }
  FormHeapFree((unsigned int)v24.m_data);
}
