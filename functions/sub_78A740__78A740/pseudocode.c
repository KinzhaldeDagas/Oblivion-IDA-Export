int __fastcall sub_78A740(float *a1)
{
  bool v2; // zf
  int v3; // edi
  float i; // eax
  int v5; // ecx
  int v7; // [esp+0h] [ebp-60h] BYREF
  float v8; // [esp+4Ch] [ebp-14h]
  int *v9; // [esp+50h] [ebp-10h]
  int v10; // [esp+5Ch] [ebp-4h]

  v9 = &v7;
  v8 = *(float *)&a1;
  v2 = *((_DWORD *)a1 + 0xB) == 0;
  v10 = 0;
  if ( v2 )
  {
    v3 = *(unsigned __int16 *)(*(_DWORD *)a1 + 0xC0);
    *((_DWORD *)a1 + 0xB) = FormHeapAlloc(
                              (unsigned __int64)*(unsigned __int16 *)(*(_DWORD *)a1 + 0xC0) >> 0x1E != 0
                            ? 0xFFFFFFFF
                            : 4 * v3);
    for ( i = 0.0; ; *(float *)(v5 + 4 * LODWORD(i) - 4) = v8 )
    {
      v8 = i;
      if ( SLODWORD(i) >= v3 )
        break;
      v5 = *((_DWORD *)a1 + 0xB);
      if ( v3 <= 0 )
      {
        v8 = 1.0;
        ++LODWORD(i);
      }
      else
      {
        ++LODWORD(i);
        v8 = a1[9] * (double)SLODWORD(v8) + 1.0;
      }
    }
  }
  return *((_DWORD *)a1 + 0xB);
}
