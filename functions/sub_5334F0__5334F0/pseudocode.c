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
  bhkRefObject *v23; // [esp+20h] [ebp-154h] BYREF
  unsigned int v24; // [esp+24h] [ebp-150h]
  unsigned __int16 *v25; // [esp+28h] [ebp-14Ch]
  int v26; // [esp+2Ch] [ebp-148h]
  bhkRefObject *v27; // [esp+30h] [ebp-144h]
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

  v3 = a2;
  result = 0;
  v5 = *(this + 0xA) == 0;
  v25 = this;
  v26 = a2;
  if ( v5 )
  {
    if ( a2 )
    {
      sub_8A5790(v31);
      v6 = 0.0;
      v35 = 0.0;
      v7 = flt_B114A4;
      LODWORD(v31[0]) = 0x10011;
      v33 = 0x10011;
      v36 = v7;
      v8 = 0;
      v38 = 0;
      v37 = 7;
      v24 = 0;
      if ( a3 )
      {
        v9 = flt_A5611C;
        while ( 1 )
        {
          v10 = *(_DWORD *)(v3 + 4 * v8);
          if ( v10 )
          {
            v11 = *(_DWORD *)(v10 + 0xB4);
            v29[6] = v6;
            v12 = flt_A30634;
            v30 = 0;
            v29[7] = v12;
            LODWORD(v29[5]) = 0x11;
            LODWORD(v29[4]) = 0x11;
            v29[0] = v9;
            v28.m128_u64[0] = 0;
            v29[1] = flt_A56118;
            v29[2] = v29[0];
            v29[3] = v6;
            v30 = *(_DWORD *)(v11 + 0x1C);
            sub_8B0C60((int)v29);
            v13 = (bhkRefObject *)FormHeapAlloc(0x14u);
            v23 = v13;
            LOBYTE(v38) = 1;
            if ( v13 )
            {
              v14 = sub_532CD0(v13, &v28);
              v22 = v14;
            }
            else
            {
              v22 = 0;
              v14 = 0;
            }
            v27 = v14;
            if ( v14 )
              InterlockedIncrement((volatile LONG *)&v14->members);
            v15 = *(float *)&v14->hkObject;
            LOBYTE(v38) = 2;
            v31[1] = v15;
            v34 = v15;
            v16 = (bhkRefObject *)FormHeapAlloc(0x1Cu);
            v23 = v16;
            LOBYTE(v38) = 3;
            if ( v16 )
              v17 = sub_533290(v16, (int)v31);
            else
              v17 = 0;
            v23 = v17;
            if ( v17 )
              InterlockedIncrement((volatile LONG *)&v17->members);
            v18 = v25[9];
            v19 = v25[8];
            v20 = v25 + 4;
            LOBYTE(v38) = 4;
            if ( v18 >= v19 )
              sub_523B10(v25 + 4, v18 + v25[0xB]);
            sub_5331C0(v20, v18, (LONG *)&v23);
            LOBYTE(v38) = 2;
            if ( v17 )
            {
              if ( !InterlockedDecrement((volatile LONG *)&v17->members) )
                v17->__vftable->super.Destructor((NiRefObject *)v17, 1);
            }
            LOBYTE(v38) = 0;
            if ( !InterlockedDecrement((volatile LONG *)&v22->members) )
              v22->__vftable->super.Destructor((NiRefObject *)v22, 1);
          }
          v8 = ++v24;
          if ( v24 >= a3 )
            break;
          v3 = v26;
          v9 = flt_A5611C;
          v6 = 0.0;
        }
      }
      v38 = 0xFFFFFFFF;
      if ( v32 >= 0 )
      {
        v21 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
        if ( !v21 )
          v21 = dword_BA7D9C;
        sub_8A75D0(v21, (_DWORD *)LODWORD(v31[3]), 8 * v32, 0x14);
      }
    }
    return 1;
  }
  return result;
}
