int __thiscall sub_538D10(bhkRefObject **this, float a2, int a3)
{
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // edi
  bhkRefObject *v6; // esi
  bhkRefObject *v7; // eax
  int v8; // esi
  bool v9; // zf
  int result; // eax
  bool v11; // sf
  int v12; // ecx
  int v13; // [esp+1Ch] [ebp-70h] BYREF
  hkRefObject *hkObject; // [esp+20h] [ebp-6Ch]
  _DWORD *v15; // [esp+28h] [ebp-64h]
  int v16; // [esp+30h] [ebp-5Ch]
  float v17; // [esp+3Ch] [ebp-50h]
  float v18; // [esp+40h] [ebp-4Ch]
  float v19; // [esp+44h] [ebp-48h]
  float v20; // [esp+48h] [ebp-44h]
  float v21; // [esp+4Ch] [ebp-40h]
  float v22; // [esp+50h] [ebp-3Ch]
  float v23; // [esp+54h] [ebp-38h]
  float v24; // [esp+58h] [ebp-34h]
  float v25; // [esp+5Ch] [ebp-30h]
  float v26; // [esp+60h] [ebp-2Ch]
  float v27; // [esp+64h] [ebp-28h]
  float v28; // [esp+68h] [ebp-24h]
  float v29; // [esp+6Ch] [ebp-20h]
  float v30; // [esp+70h] [ebp-1Ch]
  float v31; // [esp+74h] [ebp-18h]
  float v32; // [esp+78h] [ebp-14h]
  int v33; // [esp+88h] [ebp-4h]

  v4 = (bhkRefObject *)FormHeapAlloc(0x14u);
  v5 = 0;
  v33 = 0;
  if ( v4 )
    v6 = sub_532090(v4, a2, COERCE_FLOAT(1));
  else
    v6 = 0;
  sub_532250(&v13);
  v33 = 1;
  *(this + 2) = (bhkRefObject *)a3;
  v13 = (a3 << 0x10) | 0x1D;
  if ( v6 )
    hkObject = v6->hkObject;
  else
    hkObject = 0;
  v18 = 0.0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v23 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  v26 = 0.0;
  v28 = 0.0;
  v17 = 1.0;
  v22 = 1.0;
  v27 = 1.0;
  v29 = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  v32 = 0.0;
  v7 = (bhkRefObject *)FormHeapAlloc(0x14u);
  LOBYTE(v33) = 2;
  if ( v7 )
    v5 = sub_531FC0(v7, (int)&v13);
  v8 = (int)*this;
  v9 = *this == v5;
  LOBYTE(v33) = 1;
  if ( !v9 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    *this = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->members);
  }
  result = v16;
  v11 = v16 < 0;
  *((_BYTE *)this + 4) = 1;
  v33 = 0xFFFFFFFF;
  if ( !v11 )
  {
    v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v12 )
      v12 = dword_BA7D9C;
    return sub_8A75D0(v12, v15, 8 * result, 0x14);
  }
  return result;
}
