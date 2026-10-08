unsigned __int8 __thiscall sub_72ED50(
        NiTPointerMap<unsigned int,float> *this,
        unsigned __int16 *a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char a6)
{
  char *v8; // ebx
  int v10; // esi
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // edi
  int v14; // edi
  bool v15; // zf
  unsigned int *v16; // esi
  unsigned int v17; // [esp-8h] [ebp-50h]
  int v18; // [esp+14h] [ebp-34h]
  unsigned int v20; // [esp+1Ch] [ebp-2Ch] BYREF
  int v21; // [esp+20h] [ebp-28h]
  unsigned int v22[2]; // [esp+24h] [ebp-24h] BYREF
  int v23; // [esp+2Ch] [ebp-1Ch]
  unsigned int v24[3]; // [esp+30h] [ebp-18h] BYREF
  int v25; // [esp+44h] [ebp-4h]
  unsigned __int8 v26; // [esp+4Ch] [ebp+4h]
  int v27; // [esp+54h] [ebp+Ch]

  memset(v24, 0, sizeof(v24)); /*0x72ed7f*/
  v25 = 0; /*0x72ed93*/
  v8 = sub_72E200(a2[4], a3); /*0x72eda5*/
  if ( v8 )
  {
    v26 = (unsigned __int8)NiTPointerMap<unsigned int,float>::NiTPointerMap<unsigned int,float>( /*0x72edd0*/
                             this,
                             a2,
                             a4,
                             a5,
                             (int)v8);
    if ( v26 )
    {
      sub_72EBA0(this, a2, a3, a4, (unsigned int)v8, v24, (int *)&v20); /*0x72edee*/
      v10 = *((_DWORD *)this + 2); /*0x72edf3*/
      v11 = (0x2C * (unsigned __int64)(unsigned int)v10) >> 0x20 != 0 ? 0xFFFFFFFF : 0x2C * v10;
      v12 = FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
      v21 = v12; /*0x72ee1d*/
      v13 = 0; /*0x72ee21*/
      LOBYTE(v25) = 1; /*0x72ee25*/
      if ( v12 ) /*0x72ee2a*/
      {
        v14 = v12 + 4; /*0x72ee37*/
        *(_DWORD *)v12 = v10; /*0x72ee3d*/
        ArrayConstructor( /*0x72ee3f*/
          (char *)(v12 + 4),
          0x2Cu,
          v10,
          (void (__thiscall *)(char *))sub_72C420,
          (void (__thiscall *)(void *))sub_72C450);
        v18 = v14; /*0x72ee44*/
        v13 = 0; /*0x72ee48*/
      }
      else
      {
        v18 = 0; /*0x72ee4c*/
      }
      v22[0] = 0; /*0x72ee58*/
      LOBYTE(v21) = a4 != a5; /*0x72ee5f*/
      v22[1] = 0; /*0x72ee63*/
      v23 = 0; /*0x72ee67*/
      v15 = *((_DWORD *)this + 2) == 0; /*0x72ee6f*/
      LOBYTE(v25) = 2; /*0x72ee73*/
      if ( !v15 ) /*0x72ee78*/
      {
        v27 = v18; /*0x72ee82*/
        do /*0x72ef02*/
        {
          sub_72D420(v22, v13, v20, a2[0x20]); /*0x72eea2*/
          v16 = *(unsigned int **)(v24[0] + 4 * v13); /*0x72eeb2*/
          sub_72D480(v27, (int)v22, v16, a2, (int)v8, v21, a6, a5, *(_DWORD *)(a3 + 0x40)); /*0x72eed1*/
          v23 = 0; /*0x72eed8*/
          if ( v16 ) /*0x72eee0*/
          {
            FormHeapFree(*v16); /*0x72eee5*/
            FormHeapFree((unsigned int)v16); /*0x72eeeb*/
          }
          v27 += 0x2C; /*0x72eef7*/
          ++v13; /*0x72eefc*/
        }
        while ( v13 < *((_DWORD *)this + 2) ); /*0x72ef02*/
      }
      FormHeapFree(v20); /*0x72ef09*/
      v17 = v22[0]; /*0x72ef1a*/
      *((_DWORD *)this + 3) = v18; /*0x72ef1b*/
      LOBYTE(v25) = 0; /*0x72ef1e*/
      FormHeapFree(v17); /*0x72ef23*/
    }
    _LN21(v8, 0xCu, *((_DWORD *)v8 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_6C4090); /*0x72ef3a*/
    FormHeapFree((unsigned int)(v8 + 0xFFFFFFFC)); /*0x72ef40*/
    FormHeapFree(v24[0]); /*0x72ef4a*/
    return v26; /*0x72ef4f*/
  }
  else
  {
    FormHeapFree(0); /*0x72edac*/
    return 0; /*0x72edb4*/
  }
}
