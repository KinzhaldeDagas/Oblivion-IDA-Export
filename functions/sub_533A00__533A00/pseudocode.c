int __thiscall sub_533A00(bhkRefObject **this, float a2, int a3)
{
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // edi
  bhkRefObject *v6; // esi
  bhkRefObject *v7; // eax
  bhkRefObject *v8; // esi
  int result; // eax
  int v10; // ecx
  int v11; // [esp+1Ch] [ebp-70h] BYREF
  hkRefObject *hkObject; // [esp+20h] [ebp-6Ch]
  _DWORD *v13; // [esp+28h] [ebp-64h]
  int v14; // [esp+30h] [ebp-5Ch]
  float v15; // [esp+3Ch] [ebp-50h]
  float v16; // [esp+40h] [ebp-4Ch]
  float v17; // [esp+44h] [ebp-48h]
  float v18; // [esp+48h] [ebp-44h]
  float v19; // [esp+4Ch] [ebp-40h]
  float v20; // [esp+50h] [ebp-3Ch]
  float v21; // [esp+54h] [ebp-38h]
  float v22; // [esp+58h] [ebp-34h]
  float v23; // [esp+5Ch] [ebp-30h]
  float v24; // [esp+60h] [ebp-2Ch]
  float v25; // [esp+64h] [ebp-28h]
  float v26; // [esp+68h] [ebp-24h]
  float v27; // [esp+6Ch] [ebp-20h]
  float v28; // [esp+70h] [ebp-1Ch]
  float v29; // [esp+74h] [ebp-18h]
  float v30; // [esp+78h] [ebp-14h]
  int v31; // [esp+88h] [ebp-4h]

  v4 = (bhkRefObject *)FormHeapAlloc(0x14u);
  v5 = 0;
  v31 = 0;
  if ( v4 )
    v6 = sub_532090(v4, a2, COERCE_FLOAT(1));
  else
    v6 = 0;
  sub_532250(&v11);
  v31 = 1;
  v11 = (a3 << 0x10) | 0x1C;
  if ( v6 )
    hkObject = v6->hkObject;
  else
    hkObject = 0;
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
  v24 = 0.0;
  v26 = 0.0;
  v15 = 1.0;
  v20 = 1.0;
  v25 = 1.0;
  v27 = 0.0;
  v28 = 0.0;
  v29 = 0.0;
  v30 = 0.0;
  v7 = (bhkRefObject *)FormHeapAlloc(0x14u);
  LOBYTE(v31) = 2;
  if ( v7 )
    v5 = sub_531FC0(v7, (int)&v11);
  v8 = *(this + 0x68);
  LOBYTE(v31) = 1;
  if ( v8 != v5 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v8->members) )
        v8->__vftable->super.Destructor((NiRefObject *)v8, 1);
    }
    *(this + 0x68) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->members);
  }
  sub_8A7F20(0x1C, 3, 0);
  sub_8A7F20(0x1C, 0x15, 0);
  sub_8A7F20(0x1C, 6, 0);
  sub_8A7F20(0x1C, 7, 0);
  sub_8A7F20(0x1C, 8, 0);
  sub_8A7F20(0x1C, 0xB, 0);
  sub_8A7F20(0x1C, 0x12, 0);
  sub_8A7F20(0x1C, 0x14, 0);
  sub_8A7F20(0x1C, 0x18, 0);
  sub_8A7F20(0x1C, 0x19, 0);
  sub_8A7F20(0x1C, 0x1A, 0);
  sub_8A7F20(0x1C, 0x1C, 0);
  sub_8A7F20(0x1C, 0x1E, 0);
  result = v14;
  v31 = 0xFFFFFFFF;
  if ( v14 >= 0 )
  {
    v10 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v10 )
      v10 = dword_BA7D9C;
    return sub_8A75D0(v10, v13, 8 * v14, 0x14);
  }
  return result;
}
