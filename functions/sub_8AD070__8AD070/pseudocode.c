int __thiscall sub_8AD070(float *this, int a2)
{
  int v3; // edi
  float v4; // eax
  int result; // eax
  int v6; // ecx
  float v7; // [esp+Ch] [ebp-1A4h]
  _DWORD v8[4]; // [esp+10h] [ebp-1A0h] BYREF
  char *v9; // [esp+20h] [ebp-190h]
  int v10; // [esp+24h] [ebp-18Ch]
  int v11; // [esp+28h] [ebp-188h]
  char v12; // [esp+30h] [ebp-180h] BYREF

  *(_DWORD *)(a2 + 0x14) = 0;
  *(_DWORD *)(a2 + 4) = 0x7F7FFFFF;
  v3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 0xC) + 8) + 0x74);
  v7 = *(float *)(v3 + 8);
  *(float *)(v3 + 8) = *(this + 0x17) + *(this + 0x16) + v7;
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0xC) + 0x34))(*((_DWORD *)this + 0xC), a2);
  *(float *)(v3 + 8) = v7;
  v4 = *this;
  v8[0] = &hkAllCdPointCollector::`vftable';
  v9 = &v12;
  v11 = 0x80000008;
  v10 = 0;
  v8[1] = 0x7F7FFFFF;
  (*(void (__thiscall **)(float *, int, _DWORD *))(LODWORD(v4) + 8))(this, a2, v8);
  result = v11;
  v8[0] = &hkAllCdPointCollector::`vftable';
  if ( v11 >= 0 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    return sub_8A75D0(v6, v9, 0x30 * (v11 & 0x3FFFFFFF), 0x14);
  }
  return result;
}
