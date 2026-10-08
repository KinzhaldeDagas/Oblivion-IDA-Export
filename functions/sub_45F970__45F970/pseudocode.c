// Verified: reads a 16-bit count then fixed 8-byte (FormID,float) records. SaveLoad_LoadFormID remaps each ID; finite checks sanitize non-finite values to zero; RTTI confirms TESGlobal; value goes to TESGlobal.data at +0x24. Saved globals are removed from TESDataHandler.listGlobals; omitted globals are reset from active override records. Caller is SaveLoad_LoadGame_Subroutine at 46311E. Probable behavioral homolog Fallout BGSSaveLoadGlobalData::LoadGlobals 825F3FF8, which uses a variable-sized count and reconstruction map for missing globals. Fallout also has legacy TESSaveLoadGame::SaveGlobals 82602828 with a 16-bit count and NumericID/value tuples, but a matching legacy load counterpart is not yet established. Verified cross-path: this runtime Global Variables snapshot loader writes TESGlobal.data (+0x24). TESGlobal native plugin/form persistence is handled separately by TESGlobal_SaveFormRecord (FNAM/FLTV chunks). Unknown: exact save writer for the runtime global snapshot block has not yet been located. Veri
char __userpurge TESSaveLoadGame_LoadGlobalValues@<al>(
        TESSaveLoadGame_SerializationView *self@<ecx>,
        double arg2@<st2>,
        double arg3@<st1>,
        double arg4@<st0>,
        void *stream)
{
  int v5; // eax
  TESDataHandler *v6; // esi
  int v8; // ebx
  _DWORD *v9; // eax
  void (__cdecl *v10)(void *, int *, int, int *, int); // edx
  unsigned __int8 *v11; // eax
  unsigned __int8 *bufferCursor; // ebx
  void (__cdecl *v13)(void *, unsigned __int8 *, int, int *, int); // ecx
  int v14; // esi
  unsigned __int8 *v15; // eax
  TESForm *v16; // eax
  float *v17; // eax
  int *p_a1; // esi
  TESForm *v20; // eax
  _DWORD *v21; // edi
  double v23; // [esp+0h] [ebp-50h]
  double v24; // [esp+0h] [ebp-50h]
  int v25; // [esp+10h] [ebp-40h]
  float v26; // [esp+30h] [ebp-20h]
  int v27; // [esp+34h] [ebp-1Ch]
  int v28; // [esp+38h] [ebp-18h] BYREF
  int a1; // [esp+3Ch] [ebp-14h] BYREF
  int v30; // [esp+40h] [ebp-10h] BYREF
  unsigned int Dst; // [esp+44h] [ebp-Ch] BYREF
  int v32; // [esp+48h] [ebp-8h]
  _DWORD *i; // [esp+4Ch] [ebp-4h]
  int savedregs; // [esp+50h] [ebp+0h] BYREF

  v5 = 0; /*0x45f981*/
  v6 = g_TESDataHandler + 0x74; /*0x45f983*/
  v32 = 0; /*0x45f98b*/
  for ( i = 0; v6; v6 = *(TESDataHandler **)&v6[4] ) /*0x45f993*/
  {
    v8 = *(_DWORD *)v6; /*0x45f995*/
    if ( *(_DWORD *)v6 ) /*0x45f995*/
    {
      if ( v5 ) /*0x45f99d*/
      {
        v9 = (_DWORD *)FormHeapAlloc(8u); /*0x45f9a1*/
        if ( v9 ) /*0x45f9ab*/
        {
          *v9 = v32; /*0x45f9b1*/
          v9[1] = 0; /*0x45f9b3*/
        }
        else
        {
          v9 = 0; /*0x45f9bc*/
        }
        v9[1] = i; /*0x45f9c2*/
        i = v9; /*0x45f9c5*/
      }
      v5 = v8; /*0x45f9c9*/
      v32 = v8; /*0x45f9cb*/
    }
  }
  v10 = *((void (__cdecl **)(void *, int *, int, int *, int))stream + 1); /*0x45f9d9*/
  v30 = 1; /*0x45f9eb*/
  v10(stream, &a1, 2, &v30, 1); /*0x45f9f3*/
  v30 = (unsigned __int16)(8 * a1); /*0x45fa11*/
  v11 = (unsigned __int8 *)j_MemoryHeap_Alloc( /*0x45fa15*/
                             &FormHeap,
                             (char)&savedregs,
                             (unsigned __int16)(8 * a1) | 0x100000000LL,
                             v25);
  self->bufferCursor = v11; /*0x45fa1c*/
  if ( !v11 ) /*0x45fa1f*/
    sub_404EC0("Could not create save buffer, out of memory."); /*0x45fa26*/
  bufferCursor = self->bufferCursor; /*0x45fa32*/
  v13 = *((void (__cdecl **)(void *, unsigned __int8 *, int, int *, int))stream + 1); /*0x45fa35*/
  v28 = 1; /*0x45fa42*/
  v13(stream, bufferCursor, v30, &v28, 1); /*0x45fa4a*/
  v14 = 0; /*0x45fa4c*/
  if ( (_WORD)a1 ) /*0x45fa56*/
  {
    do /*0x45faf2*/
    {
      SaveLoad_LoadFormID(self, &Dst, 4u); /*0x45fa69*/
      v15 = self->bufferCursor; /*0x45fa6e*/
      v26 = *(float *)v15; /*0x45fa73*/
      __asm { fld     [esp+48h+var_20] } /*0x45fa77*/
      __asm { fstp    [esp+50h+var_50]; X }
      self->bufferCursor = v15 + 4; /*0x45fa84*/
      if ( !_finite(v23) ) /*0x45fa87*/
        goto LABEL_15; /*0x45fa87*/
      __asm { fld     [esp+48h+var_20] } /*0x45fa93*/
      __asm { fstp    [esp+50h+var_50]; X }
      if ( _isnan(v24) ) /*0x45fa9d*/
      {
LABEL_15:
        __asm /*0x45faa9*/
        {
          fldz
          fstp    [esp+48h+var_20]
        }
      }
      v16 = TESForm_LookupByFormID(a1); /*0x45fac2*/
      v17 = (float *)OblivionDynamicCast( /*0x45facb*/
                       v16,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESGlobal `RTTI Type Descriptor',
                       0);
      if ( v17 ) /*0x45fad5*/
      {
        __asm { fld     [esp+48h+var_20] } /*0x45fad7*/
        __asm { fstp    dword ptr [eax+24h] }
        v17[9] = _ET1; /*0x45fae0*/
        BSSimpleList_Remove(&v30, (int)v17); /*0x45fae3*/
      }
      ++v14; /*0x45faed*/
    }
    while ( v14 < LOWORD(v26) ); /*0x45faf2*/
  }
  MemoryHeap_Free_checked(bufferCursor); /*0x45fafe*/
  self->bufferCursor = 0; /*0x45fb03*/
  p_a1 = &a1; /*0x45fb0a*/
  do /*0x45fb27*/
  {
    v20 = (TESForm *)*p_a1; /*0x45fb10*/
    if ( *p_a1 ) /*0x45fb10*/
      LOBYTE(v20) = TESSaveLoadGame_ResetObject(self, arg2, arg3, arg4, v20, 1u, 0); /*0x45fb1d*/
    p_a1 = (int *)p_a1[1]; /*0x45fb22*/
  }
  while ( p_a1 ); /*0x45fb27*/
  v21 = *(_DWORD **)&self->unknown38[8]; /*0x45fb29*/
  if ( v21 ) /*0x45fb2e*/
    LOBYTE(v20) = sub_4531B0(v21, (char)&savedregs, v27, "Global Variables"); /*0x45fb3c*/
  return (char)v20; /*0x45fb41*/
}
