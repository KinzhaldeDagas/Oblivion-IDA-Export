int __thiscall sub_72F750(float *this, int a2)
{
  int v2; // esi
  float *v3; // ebp
  void (__cdecl *v4)(int, float *, int, int *, int); // edx
  int v5; // eax
  int (__cdecl *v6)(int, int *, int, int *, int); // edx
  int result; // eax
  bool v8; // zf
  int v9; // edi
  void (__cdecl *v10)(int, int, int, int *, int); // eax
  unsigned int v11; // ebx
  int v12; // ebp
  void (__cdecl *v13)(int, int, int, int *, int); // eax
  void (__cdecl *v14)(int, int, int, int *, int); // edx
  int v16; // [esp-28h] [ebp-48h]
  int v17; // [esp-14h] [ebp-34h]
  int v18; // [esp-14h] [ebp-34h]
  int v19; // [esp-14h] [ebp-34h]
  int v20; // [esp+10h] [ebp-10h]
  int v21; // [esp+14h] [ebp-Ch] BYREF
  int v22; // [esp+18h] [ebp-8h] BYREF
  float *v23; // [esp+1Ch] [ebp-4h]

  v2 = a2;
  v3 = this;
  v23 = this;
  nullsub_returnvVoid_1arg(a2);
  sub_718BB0(v3 + 3, v2);
  v4 = *(void (__cdecl **)(int, float *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v17 = *(_DWORD *)(v2 + 0x220);
  v21 = 4;
  v4(v17, v3 + 0x10, 4, &v21, 1);
  v5 = *(_DWORD *)(v2 + 0x220);
  LOBYTE(a2) = *(_DWORD *)(*((_DWORD *)v3 + 0x11) + 0x44) != 0;
  v6 = *(int (__cdecl **)(int, int *, int, int *, int))(v5 + 8);
  v21 = 1;
  result = v6(v5, &a2, 1, &v21, 1);
  v8 = *((_DWORD *)v3 + 0x10) == 0;
  v21 = 0;
  if ( !v8 )
  {
    v20 = 0;
    do
    {
      v9 = v20 + *((_DWORD *)v3 + 0x11);
      sub_718BB0((float *)v9, v2);
      sub_716EE0((char *)(v9 + 0x34), v2);
      v18 = *(_DWORD *)(v2 + 0x220);
      v10 = *(void (__cdecl **)(int, int, int, int *, int))(v18 + 8);
      v22 = 2;
      v10(v18, v9 + 0x48, 2, &v22, 1);
      if ( (_BYTE)a2 )
      {
        v11 = 0;
        if ( *(_WORD *)(v9 + 0x48) )
        {
          do
          {
            v12 = *(_DWORD *)(v9 + 0x44) + 8 * v11;
            v19 = *(_DWORD *)(v2 + 0x220);
            v13 = *(void (__cdecl **)(int, int, int, int *, int))(v19 + 8);
            v22 = 2;
            v13(v19, v12, 2, &v22, 1);
            v14 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
            v16 = *(_DWORD *)(v2 + 0x220);
            v22 = 4;
            v14(v16, v12 + 4, 4, &v22, 1);
            ++v11;
          }
          while ( v11 < *(unsigned __int16 *)(v9 + 0x48) );
          v3 = v23;
        }
      }
      v20 += 0x4C;
      result = v21 + 1;
    }
    while ( (unsigned int)++v21 < *((_DWORD *)v3 + 0x10) );
  }
  return result;
}
