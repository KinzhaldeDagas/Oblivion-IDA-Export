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

  v2 = a2; /*0x72f756*/
  v3 = this; /*0x72f75b*/
  v23 = this; /*0x72f75e*/
  nullsub_returnvVoid_1arg(a2); /*0x72f762*/
  sub_718BB0(v3 + 3, v2); /*0x72f76b*/
  v4 = *(void (__cdecl **)(int, float *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x72f776*/
  v17 = *(_DWORD *)(v2 + 0x220); /*0x72f786*/
  v21 = 4; /*0x72f787*/
  v4(v17, v3 + 0x10, 4, &v21, 1); /*0x72f78f*/
  v5 = *(_DWORD *)(v2 + 0x220); /*0x72f799*/
  LOBYTE(a2) = *(_DWORD *)(*((_DWORD *)v3 + 0x11) + 0x44) != 0; /*0x72f7a9*/
  v6 = *(int (__cdecl **)(int, int *, int, int *, int))(v5 + 8); /*0x72f7ad*/
  v21 = 1; /*0x72f7b8*/
  result = v6(v5, &a2, 1, &v21, 1); /*0x72f7c0*/
  v8 = *((_DWORD *)v3 + 0x10) == 0; /*0x72f7c5*/
  v21 = 0; /*0x72f7c7*/
  if ( !v8 ) /*0x72f7cb*/
  {
    v20 = 0; /*0x72f7d1*/
    do /*0x72f88a*/
    {
      v9 = v20 + *((_DWORD *)v3 + 0x11); /*0x72f7d8*/
      sub_718BB0((float *)v9, v2); /*0x72f7df*/
      sub_716EE0((char *)(v9 + 0x34), v2); /*0x72f7e8*/
      v18 = *(_DWORD *)(v2 + 0x220); /*0x72f800*/
      v10 = *(void (__cdecl **)(int, int, int, int *, int))(v18 + 8); /*0x72f801*/
      v22 = 2; /*0x72f804*/
      v10(v18, v9 + 0x48, 2, &v22, 1); /*0x72f80c*/
      if ( (_BYTE)a2 ) /*0x72f816*/
      {
        v11 = 0; /*0x72f818*/
        if ( *(_WORD *)(v9 + 0x48) ) /*0x72f81a*/
        {
          do /*0x72f871*/
          {
            v12 = *(_DWORD *)(v9 + 0x44) + 8 * v11; /*0x72f830*/
            v19 = *(_DWORD *)(v2 + 0x220); /*0x72f836*/
            v13 = *(void (__cdecl **)(int, int, int, int *, int))(v19 + 8); /*0x72f837*/
            v22 = 2; /*0x72f83a*/
            v13(v19, v12, 2, &v22, 1); /*0x72f842*/
            v14 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x72f84a*/
            v16 = *(_DWORD *)(v2 + 0x220); /*0x72f85a*/
            v22 = 4; /*0x72f85b*/
            v14(v16, v12 + 4, 4, &v22, 1); /*0x72f863*/
            ++v11; /*0x72f869*/
          }
          while ( v11 < *(unsigned __int16 *)(v9 + 0x48) ); /*0x72f871*/
          v3 = v23; /*0x72f873*/
        }
      }
      v20 += 0x4C; /*0x72f87b*/
      result = v21 + 1; /*0x72f880*/
    }
    while ( (unsigned int)++v21 < *((_DWORD *)v3 + 0x10) ); /*0x72f88a*/
  }
  return result; /*0x72f890*/
}
