int __thiscall sub_532370(volatile LONG **this, float a2, int a3)
{
  bhkRefObject *v4; // eax
  volatile LONG *v5; // edi
  bhkRefObject *v6; // ebx
  int v7; // eax
  bhkRefObject *v8; // eax
  volatile LONG *v9; // esi
  bhkRefObject *v10; // eax
  volatile LONG *v11; // edi
  volatile LONG *v12; // esi
  int v13; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v15; // ecx
  int result; // eax
  int v17; // ecx
  int v19; // [esp+24h] [ebp-D8h]
  int v20; // [esp+2Ch] [ebp-D0h] BYREF
  hkRefObject *v21; // [esp+30h] [ebp-CCh]
  _DWORD *v22; // [esp+38h] [ebp-C4h]
  int v23; // [esp+40h] [ebp-BCh]
  float v24; // [esp+4Ch] [ebp-B0h]
  float v25; // [esp+50h] [ebp-ACh]
  float v26; // [esp+54h] [ebp-A8h]
  float v27; // [esp+58h] [ebp-A4h]
  float v28; // [esp+5Ch] [ebp-A0h]
  float v29; // [esp+60h] [ebp-9Ch]
  float v30; // [esp+64h] [ebp-98h]
  float v31; // [esp+68h] [ebp-94h]
  float v32; // [esp+6Ch] [ebp-90h]
  float v33; // [esp+70h] [ebp-8Ch]
  float v34; // [esp+74h] [ebp-88h]
  float v35; // [esp+78h] [ebp-84h]
  float v36; // [esp+7Ch] [ebp-80h]
  float v37; // [esp+80h] [ebp-7Ch]
  float v38; // [esp+84h] [ebp-78h]
  float v39; // [esp+88h] [ebp-74h]
  int v40; // [esp+8Ch] [ebp-70h] BYREF
  hkRefObject *hkObject; // [esp+90h] [ebp-6Ch]
  _DWORD *v42; // [esp+98h] [ebp-64h]
  int v43; // [esp+A0h] [ebp-5Ch]
  float v44; // [esp+ACh] [ebp-50h]
  float v45; // [esp+B0h] [ebp-4Ch]
  float v46; // [esp+B4h] [ebp-48h]
  float v47; // [esp+B8h] [ebp-44h]
  float v48; // [esp+BCh] [ebp-40h]
  float v49; // [esp+C0h] [ebp-3Ch]
  float v50; // [esp+C4h] [ebp-38h]
  float v51; // [esp+C8h] [ebp-34h]
  float v52; // [esp+CCh] [ebp-30h]
  float v53; // [esp+D0h] [ebp-2Ch]
  float v54; // [esp+D4h] [ebp-28h]
  float v55; // [esp+D8h] [ebp-24h]
  float v56; // [esp+DCh] [ebp-20h]
  float v57; // [esp+E0h] [ebp-1Ch]
  float v58; // [esp+E4h] [ebp-18h]
  float v59; // [esp+E8h] [ebp-14h]
  int v60; // [esp+F8h] [ebp-4h]

  v4 = (bhkRefObject *)FormHeapAlloc(0x14u);
  v5 = 0;
  v60 = 0;
  if ( v4 )
    v6 = sub_532090(v4, a2, COERCE_FLOAT(1));
  else
    v6 = 0;
  sub_532250(&v40);
  v60 = 1;
  sub_532250(&v20);
  v7 = (unsigned __int16)(dword_B2EB3C + 1);
  LOBYTE(v60) = 2;
  dword_B2EB3C = v7;
  if ( !v7 )
  {
    v7 = 0xA;
    dword_B2EB3C = 0xA;
  }
  v19 = (v7 << 0x10) | 0x18;
  v40 = (a3 << 0x10) | 0x18;
  if ( v6 )
    hkObject = v6->hkObject;
  else
    hkObject = 0;
  v45 = 0.0;
  v46 = 0.0;
  v47 = 0.0;
  v48 = 0.0;
  v50 = 0.0;
  v51 = 0.0;
  v52 = 0.0;
  v53 = 0.0;
  v55 = 0.0;
  v44 = 1.0;
  v49 = 1.0;
  v54 = 1.0;
  v56 = 0.0;
  v57 = 0.0;
  v58 = 0.0;
  v59 = 0.0;
  v8 = (bhkRefObject *)FormHeapAlloc(0x14u);
  LOBYTE(v60) = 3;
  if ( v8 )
    v5 = (volatile LONG *)sub_531FC0(v8, (int)&v40);
  v9 = *this;
  LOBYTE(v60) = 2;
  if ( v9 != v5 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement(v9 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
    }
    *this = v5;
    if ( v5 )
      InterlockedIncrement(v5 + 1);
  }
  v20 = v19;
  if ( v6 )
    v21 = v6->hkObject;
  else
    v21 = 0;
  v25 = 0.0;
  v26 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  v32 = 0.0;
  v33 = 0.0;
  v35 = 0.0;
  v24 = 1.0;
  v29 = 1.0;
  v34 = 1.0;
  v36 = 0.0;
  v37 = 0.0;
  v38 = 0.0;
  v39 = 0.0;
  v10 = (bhkRefObject *)FormHeapAlloc(0x14u);
  LOBYTE(v60) = 4;
  if ( v10 )
    v11 = (volatile LONG *)sub_531FC0(v10, (int)&v20);
  else
    v11 = 0;
  v12 = *(this + 1);
  LOBYTE(v60) = 2;
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement(v12 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v12)(v12, 1);
    }
    *(this + 1) = v11;
    if ( v11 )
      InterlockedIncrement(v11 + 1);
  }
  v13 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  LOBYTE(v60) = 1;
  if ( v23 >= 0 )
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C);
    if ( !v15 )
      v15 = dword_BA7D9C;
    sub_8A75D0(v15, v22, 8 * v23, 0x14);
  }
  result = v43;
  v60 = 0xFFFFFFFF;
  if ( v43 >= 0 )
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C);
    if ( !v17 )
      v17 = dword_BA7D9C;
    return sub_8A75D0(v17, v42, 8 * v43, 0x14);
  }
  return result;
}
