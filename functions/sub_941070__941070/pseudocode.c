char __thiscall sub_941070(int *this, _DWORD *a2, _DWORD *a3, int a4, int a5, const char *a6)
{
  _DWORD *v6; // edi
  int *v7; // ebx
  int v8; // eax
  _DWORD *v9; // eax
  const char *v10; // ebp
  _DWORD *v11; // esi
  int v12; // eax

  v6 = a2; /*0x941073*/
  v7 = this + 5; /*0x941077*/
  v8 = sub_8B0F00(this + 5, (unsigned int)a2); /*0x941081*/
  sub_8B0D80(v7, (bool *)&a2, v8); /*0x94108e*/
  LOBYTE(v9) = (_BYTE)a2; /*0x941093*/
  if ( !(_BYTE)a2 ) /*0x941099*/
  {
    v10 = a6; /*0x9410a0*/
    v11 = a3; /*0x9410a5*/
    while ( 1 ) /*0x9410b0*/
    {
      if ( *sub_90D380(v11, (bool *)&a6) ) /*0x9410bc*/
      {
        if ( !a4 ) /*0x9410c7*/
          break; /*0x9410c7*/
        v11 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a4 + 0xC))(a4, v6); /*0x9410cf*/
      }
      if ( !v11 ) /*0x9410d3*/
        break; /*0x9410d3*/
      v9 = sub_9411E0(this, v6, v11, a4, a5, v10); /*0x9410e6*/
      if ( v9 ) /*0x9410ed*/
      {
        v10 = off_B30594; /*0x9410ef*/
        v11 = unk_BA8788; /*0x9410f8*/
        v6 = v9; /*0x9410fd*/
        v12 = sub_8B0F00(v7, (unsigned int)v9); /*0x9410ff*/
        sub_8B0D80(v7, (bool *)&a2, v12); /*0x94110c*/
        LOBYTE(v9) = (_BYTE)a2; /*0x941111*/
        if ( !(_BYTE)a2 ) /*0x941117*/
          continue; /*0x941117*/
      }
      return (char)v9; /*0x941117*/
    }
    LOBYTE(v9) = sub_8B0E80((char **)v7, (unsigned int)v6, 0xFFFFFFFF); /*0x941121*/
  }
  return (char)v9; /*0x94111b*/
}
