int *__userpurge sub_435600@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        signed int a5,
        int *a6,
        int *a7,
        char a8)
{
  int v8; // ebx
  int v9; // eax
  double v10; // st7
  int v11; // eax
  double v12; // st7
  double v13; // st7
  int *result; // eax
  int v15; // ebx
  int v16; // ebp
  int v17; // edi
  unsigned int i; // esi
  double v19; // st7
  float v20; // [esp+0h] [ebp-420h]
  float v21; // [esp+0h] [ebp-420h]
  float v22; // [esp+0h] [ebp-420h]
  float v23; // [esp+0h] [ebp-420h]
  float v24; // [esp+4h] [ebp-41Ch]
  float v25; // [esp+4h] [ebp-41Ch]
  float v26; // [esp+4h] [ebp-41Ch]
  float v27; // [esp+4h] [ebp-41Ch]
  int v29; // [esp+20h] [ebp-400h]
  int v30; // [esp+24h] [ebp-3FCh]
  int v31; // [esp+24h] [ebp-3FCh]
  int v32; // [esp+28h] [ebp-3F8h]
  int v33; // [esp+28h] [ebp-3F8h]
  char v34[1000]; // [esp+34h] [ebp-3ECh] BYREF

  v8 = *a7; /*0x43561d*/
  v32 = *a6; /*0x435637*/
  v30 = *a7; /*0x435646*/
  v9 = (*((int (__usercall **)@<eax>(IOManager *@<ecx>, double@<st0>, double@<st1>, double@<st2>))MEMORY[0xB33A10]->vtbl /*0x43564a*/
        + 0xE))(
         MEMORY[0xB33A10],
         a4,
         a3,
         a2);
  _sprintf(v34, "Queued IO Task Count: %d", v9);
  v24 = (float)v30; /*0x435675*/
  v10 = (double)(0x500 - iDebugTextLeftRightOffset); /*0x43567d*/
  v20 = v10; /*0x435685*/
  InterfaceMgr_DebugTextLine((char)a7, a2, a3, v10, v34, v20, v24, 3, 0xFFFFFFFF); /*0x435689*/
  v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 0x38))(*(_DWORD *)(a1 + 8)); /*0x4356aa*/
  _sprintf(v34, "Queued Reference Count: %d", v11);
  v25 = (float)(a5 + v8); /*0x4356d5*/
  v12 = (double)(0x500 - iDebugTextLeftRightOffset); /*0x4356dd*/
  v21 = v12; /*0x4356e5*/
  InterfaceMgr_DebugTextLine((char)a7, a2, a3, v12, v34, v21, v25, 3, 0xFFFFFFFF); /*0x4356e9*/
  v31 = a5 + a5 + v8; /*0x435701*/
  _sprintf(v34, "Total BSTask Count: %d", MEMORY[0xB33A20]);
  v26 = (float)v31; /*0x43571d*/
  v13 = (double)(0x500 - iDebugTextLeftRightOffset); /*0x43572b*/
  v22 = v13; /*0x435733*/
  result = (int *)InterfaceMgr_DebugTextLine((char)a7, a2, a3, v13, v34, v22, v26, 3, 0xFFFFFFFF); /*0x435737*/
  v15 = a5 + v31; /*0x43573f*/
  if ( a8 )
  {
    v16 = a5 + v32 + 4 * a5; /*0x43575d*/
    v33 = v16; /*0x435766*/
    v17 = 0; /*0x43576a*/
    v29 = Double_To_SInt32((double)a5 * -1.5); /*0x435771*/
    for ( i = 0; i < 0x48; i += 0xC )
    {
      _sprintf(
        v34,
        "Priority %i - Textures: %3i Meshes: %3i Misc: %3i",
        v17,
        *(_DWORD *)((char *)MEMORY[0xB33A10]->members.super.unk2C + i),
        *(_DWORD *)((char *)MEMORY[0xB33A10]->members.super.unk2C + i + 4),
        *(_DWORD *)((char *)MEMORY[0xB33A10]->members.super.unk2C + i + 8));
      v27 = (float)v33; /*0x4357c6*/
      v19 = (double)iDebugTextLeftRightOffset; /*0x4357ce*/
      v23 = v19; /*0x4357d4*/
      InterfaceMgr_DebugTextLine(v16, a2, a3, v19, v34, v23, v27, 1, 0xFFFFFFFF); /*0x4357d8*/
      v16 -= v29; /*0x4357dd*/
      ++v17; /*0x4357e7*/
      v33 = v16; /*0x4357ed*/
    }
    *a6 = v16; /*0x4357fb*/
    *a7 = v15; /*0x4357fd*/
    return a7; /*0x4357f7*/
  }
  else
  {
    *a6 = v32; /*0x435805*/
    *a7 = v15; /*0x435807*/
  }
  return result; /*0x43580a*/
}
