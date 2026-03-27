char __userpurge sub_45F970@<al>(int ecx0@<ecx>, double a2@<st2>, double a3@<st1>, double st7_0@<st0>, int a5)
{
  int v5; // eax
  int *v6; // esi
  int v8; // ebx
  _DWORD *v9; // eax
  void (__usercall *v10)(int, int *, int, int *, int, double@<st0>, double@<st1>, double@<st2>); // edx
  FreeEntry *v11; // eax
  void *v12; // ebx
  void (__cdecl *v13)(int, void *, int, int *, int); // ecx
  int v14; // esi
  float *v15; // eax
  TESForm *v16; // eax
  float *v17; // eax
  int *p_a1; // esi
  TESForm *v19; // eax
  _DWORD *v20; // edi
  double v22; // [esp+0h] [ebp-50h]
  size_t X_4; // [esp+Ch] [ebp-44h]
  int v24; // [esp+10h] [ebp-40h]
  int v25; // [esp+14h] [ebp-3Ch]
  int v26; // [esp+18h] [ebp-38h]
  int v27; // [esp+1Ch] [ebp-34h]
  float v28; // [esp+30h] [ebp-20h]
  int v29; // [esp+34h] [ebp-1Ch]
  int v30; // [esp+38h] [ebp-18h] BYREF
  int a1; // [esp+3Ch] [ebp-14h] BYREF
  int v32; // [esp+40h] [ebp-10h] BYREF
  _BYTE Dst[4]; // [esp+44h] [ebp-Ch] BYREF
  int v34; // [esp+48h] [ebp-8h]
  _DWORD *i; // [esp+4Ch] [ebp-4h]
  int savedregs; // [esp+50h] [ebp+0h] BYREF

  v5 = 0;
  v6 = (int *)(TESDataHandler + 0x74);
  v34 = 0;
  for ( i = 0; v6; v6 = (int *)v6[1] )
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( v5 )
      {
        v9 = (_DWORD *)FormHeapAlloc(8u);
        if ( v9 )
        {
          *v9 = v34;
          v9[1] = 0;
        }
        else
        {
          v9 = 0;
        }
        v9[1] = i;
        i = v9;
      }
      v5 = v8;
      v34 = v8;
    }
  }
  v10 = *(void (__usercall **)(int, int *, int, int *, int, double@<st0>, double@<st1>, double@<st2>))(a5 + 4);
  v32 = 1;
  v10(a5, &a1, 2, &v32, 1, st7_0, a3, a2);
  v32 = (unsigned __int16)(8 * a1);
  v11 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, (unsigned __int16)(8 * a1) | 0x100000000LL, v24);
  *(_DWORD *)(ecx0 + 0x14) = v11;
  if ( !v11 )
    sub_404EC0("Could not create save buffer, out of memory.");
  v12 = *(void **)(ecx0 + 0x14);
  v13 = *(void (__cdecl **)(int, void *, int, int *, int))(a5 + 4);
  v30 = 1;
  v13(a5, v12, v32, &v30, 1);
  v14 = 0;
  if ( (_WORD)a1 )
  {
    do
    {
      LODWORD(X_4) = 4;
      SaveLoad_LoadFormID(Dst, X_4, v25, v26, v27);
      v15 = *(float **)(ecx0 + 0x14);
      v28 = *v15;
      v22 = *v15;
      *(_DWORD *)(ecx0 + 0x14) = v15 + 1;
      if ( !_finite(v22) || (st7_0 = v28, _isnan(v28)) )
      {
        st7_0 = 0.0;
        v28 = 0.0;
      }
      v16 = TESForm_LookupByFormID(a1);
      v17 = (float *)OblivionDynamicCast(
                       v16,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESGlobal `RTTI Type Descriptor',
                       0);
      if ( v17 )
      {
        st7_0 = v28;
        v17[9] = v28;
        BSSimpleList_Remove(&v32, (int)v17);
      }
      ++v14;
    }
    while ( v14 < LOWORD(v28) );
  }
  MemoryHeap_Free_checked(v12);
  *(_DWORD *)(ecx0 + 0x14) = 0;
  p_a1 = &a1;
  do
  {
    v19 = (TESForm *)*p_a1;
    if ( *p_a1 )
      LOBYTE(v19) = TESSaveLoadGame_ResetObject(ecx0, a2, a3, st7_0, v19, 1, 0);
    p_a1 = (int *)p_a1[1];
  }
  while ( p_a1 );
  v20 = *(_DWORD **)(ecx0 + 0x40);
  if ( v20 )
    LOBYTE(v19) = sub_4531B0(v20, (char)&savedregs, v29, "Global Variables");
  return (char)v19;
}
