char __thiscall sub_5334F0(unsigned __int16 *this, int a2, unsigned int a3)
{
  int v3; // esi
  char result; // al
  bool v5; // zf
  double v6; // st7
  double v7; // st6
  unsigned int v8; // eax
  double v9; // st6
  int v10; // eax
  int v11; // eax
  double v12; // st5
  bhkRefObject *v13; // eax
  bhkRefObject *v14; // esi
  float v15; // eax
  bhkRefObject *v16; // eax
  bhkRefObject *v17; // edi
  unsigned int v18; // ebx
  unsigned int v19; // eax
  _DWORD *v20; // esi
  int v21; // ecx
  bhkRefObject *v22; // [esp+1Ch] [ebp-158h]
  void *v23; // [esp+20h] [ebp-154h] BYREF
  unsigned int v24; // [esp+24h] [ebp-150h]
  unsigned __int16 *v25; // [esp+28h] [ebp-14Ch]
  int v26; // [esp+2Ch] [ebp-148h]
  void *slot; // [esp+30h] [ebp-144h]
  __m128 v28; // [esp+34h] [ebp-140h] BYREF
  float v29[8]; // [esp+44h] [ebp-130h] BYREF
  int v30; // [esp+64h] [ebp-110h]
  float v31[5]; // [esp+74h] [ebp-100h] BYREF
  int v32; // [esp+88h] [ebp-ECh]
  int v33; // [esp+94h] [ebp-E0h]
  float v34; // [esp+98h] [ebp-DCh]
  float v35; // [esp+124h] [ebp-50h]
  float v36; // [esp+130h] [ebp-44h]
  char v37; // [esp+144h] [ebp-30h]
  unsigned int v38; // [esp+170h] [ebp-4h]

  v3 = a2; /*0x533530*/
  result = 0; /*0x533535*/
  v5 = *(this + 0xA) == 0; /*0x533537*/
  v25 = this; /*0x53353b*/
  v26 = a2; /*0x53353f*/
  if ( v5 ) /*0x533543*/
  {
    if ( a2 ) /*0x53354b*/
    {
      sub_8A5790(v31); /*0x533555*/
      v6 = 0.0; /*0x53355a*/
      v35 = 0.0; /*0x533561*/
      v7 = flt_B114A4; /*0x533568*/
      LODWORD(v31[0]) = 0x10011; /*0x53356e*/
      v33 = 0x10011; /*0x533572*/
      v36 = v7; /*0x533579*/
      v8 = 0; /*0x533580*/
      v38 = 0; /*0x533585*/
      v37 = 7; /*0x53358c*/
      v24 = 0; /*0x533594*/
      if ( a3 ) /*0x533598*/
      {
        v9 = flt_A5611C; /*0x53359e*/
        while ( 1 ) /*0x5335be*/
        {
          v10 = *(_DWORD *)(v3 + 4 * v8); /*0x5335be*/
          if ( v10 ) /*0x5335c3*/
          {
            v11 = *(_DWORD *)(v10 + 0xB4); /*0x5335c9*/
            v29[6] = v6; /*0x5335d1*/
            v12 = kTerrainLODQuadRayDirectionZ; /*0x5335da*/
            v30 = 0; /*0x5335e0*/
            v29[7] = v12; /*0x5335e4*/
            LODWORD(v29[5]) = 0x11; /*0x5335e8*/
            LODWORD(v29[4]) = 0x11; /*0x5335ee*/
            v29[0] = v9; /*0x5335f2*/
            v28.m128_u64[0] = 0; /*0x5335f6*/
            v29[1] = flt_A56118; /*0x533604*/
            v29[2] = v29[0]; /*0x53360c*/
            v29[3] = v6; /*0x533610*/
            v30 = *(_DWORD *)(v11 + 0x1C); /*0x533617*/
            sub_8B0C60((int)v29); /*0x53361b*/
            v13 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x533622*/
            v23 = v13; /*0x53362a*/
            LOBYTE(v38) = 1; /*0x533630*/
            if ( v13 ) /*0x533638*/
            {
              v14 = sub_532CD0(v13, &v28); /*0x533646*/
              v22 = v14; /*0x533648*/
            }
            else
            {
              v22 = 0; /*0x53364e*/
              v14 = 0; /*0x533652*/
            }
            slot = v14; /*0x533656*/
            if ( v14 ) /*0x53365a*/
              InterlockedIncrement((volatile LONG *)&v14->members); /*0x533660*/
            v15 = *(float *)&v14->hkObject; /*0x533666*/
            LOBYTE(v38) = 2; /*0x53366b*/
            v31[1] = v15; /*0x533673*/
            v34 = v15; /*0x533677*/
            v16 = (bhkRefObject *)FormHeapAlloc(0x1Cu); /*0x53367e*/
            v23 = v16; /*0x533686*/
            LOBYTE(v38) = 3; /*0x53368c*/
            if ( v16 ) /*0x533694*/
              v17 = sub_533290(v16, (int)v31); /*0x5336a2*/
            else
              v17 = 0; /*0x5336a6*/
            v23 = v17; /*0x5336aa*/
            if ( v17 ) /*0x5336ae*/
              InterlockedIncrement((volatile LONG *)&v17->members); /*0x5336b4*/
            v18 = v25[9]; /*0x5336be*/
            v19 = v25[8]; /*0x5336c2*/
            v20 = v25 + 4; /*0x5336c6*/
            LOBYTE(v38) = 4; /*0x5336cb*/
            if ( v18 >= v19 ) /*0x5336d3*/
              NiTObjectArray_Resize16((MEF_RefPointerArray16 *)(v25 + 4), v18 + v25[0xB]); /*0x5336de*/
            sub_5331C0(v20, v18, (LONG *)&v23); /*0x5336eb*/
            LOBYTE(v38) = 2; /*0x5336f2*/
            if ( v17 ) /*0x5336fa*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x533700*/
                v17->__vftable->super.Destructor((NiRefObject *)v17, 1); /*0x533712*/
            }
            LOBYTE(v38) = 0; /*0x53371c*/
            if ( !InterlockedDecrement((volatile LONG *)&v22->members) ) /*0x533724*/
              v22->__vftable->super.Destructor((NiRefObject *)v22, 1); /*0x533736*/
          }
          v8 = ++v24; /*0x533744*/
          if ( v24 >= a3 ) /*0x53374e*/
            break; /*0x53374e*/
          v3 = v26; /*0x5335b6*/
          v9 = flt_A5611C; /*0x5335bc*/
          v6 = 0.0; /*0x5335bc*/
        }
      }
      v38 = 0xFFFFFFFF; /*0x533761*/
      if ( v32 >= 0 ) /*0x53376c*/
      {
        v21 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x53377e*/
        if ( !v21 ) /*0x533786*/
          v21 = unk_BA7D9C; /*0x533788*/
        sub_8A75D0(v21, (_DWORD *)LODWORD(v31[3]), 8 * v32, 0x14); /*0x5337a4*/
      }
    }
    return 1; /*0x5337a9*/
  }
  return result; /*0x5337ab*/
}
