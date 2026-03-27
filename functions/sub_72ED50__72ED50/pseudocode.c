unsigned __int8 __thiscall sub_72ED50(
        NiTPointerMap<unsigned int,float> *this,
        unsigned __int16 *a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char a6)
{
  int *v8; // ebx
  int v10; // esi
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // edi
  _DWORD *v14; // edi
  bool v15; // zf
  unsigned int *v16; // esi
  unsigned int v17; // [esp-8h] [ebp-50h]
  int v18; // [esp+14h] [ebp-34h]
  unsigned int v20; // [esp+1Ch] [ebp-2Ch] BYREF
  int *v21; // [esp+20h] [ebp-28h]
  unsigned int v22[2]; // [esp+24h] [ebp-24h] BYREF
  int v23; // [esp+2Ch] [ebp-1Ch]
  unsigned int v24[3]; // [esp+30h] [ebp-18h] BYREF
  int v25; // [esp+44h] [ebp-4h]
  unsigned __int8 v26; // [esp+4Ch] [ebp+4h]
  int v27; // [esp+54h] [ebp+Ch]

  memset(v24, 0, sizeof(v24));
  v25 = 0;
  v8 = sub_72E200(a2[4], a3);
  if ( v8 )
  {
    v26 = (unsigned __int8)NiTPointerMap<unsigned int,float>::NiTPointerMap<unsigned int,float>(
                             this,
                             a2,
                             a4,
                             a5,
                             (int)v8);
    if ( v26 )
    {
      sub_72EBA0(this, a2, a3, a4, (int)v8, v24, (int *)&v20);
      v10 = *((_DWORD *)this + 2);
      v11 = (0x2C * (unsigned __int64)(unsigned int)v10) >> 0x20 != 0 ? 0xFFFFFFFF : 0x2C * v10;
      v12 = (int *)FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
      v21 = v12;
      v13 = 0;
      LOBYTE(v25) = 1;
      if ( v12 )
      {
        v14 = v12 + 1;
        *v12 = v10;
        ArrayConstructor(v12 + 1, 0x2Cu, v10, (int)sub_72C420, (void (__thiscall *)(void *))sub_72C450);
        v18 = (int)v14;
        v13 = 0;
      }
      else
      {
        v18 = 0;
      }
      v22[0] = 0;
      LOBYTE(v21) = a4 != a5;
      v22[1] = 0;
      v23 = 0;
      v15 = *((_DWORD *)this + 2) == 0;
      LOBYTE(v25) = 2;
      if ( !v15 )
      {
        v27 = v18;
        do
        {
          sub_72D420(v22, v13, v20, a2[0x20]);
          v16 = *(unsigned int **)(v24[0] + 4 * v13);
          sub_72D480(v27, (int)v22, v16, a2, (int)v8, (char)v21, a6, a5, *(_DWORD *)(a3 + 0x40));
          v23 = 0;
          if ( v16 )
          {
            FormHeapFree(*v16);
            FormHeapFree((unsigned int)v16);
          }
          v27 += 0x2C;
          ++v13;
        }
        while ( v13 < *((_DWORD *)this + 2) );
      }
      FormHeapFree(v20);
      v17 = v22[0];
      *((_DWORD *)this + 3) = v18;
      LOBYTE(v25) = 0;
      FormHeapFree(v17);
    }
    _LN21(v8, 0xCu, v8[0xFFFFFFFF], (void (__thiscall *)(void *))sub_6C4090);
    FormHeapFree((unsigned int)(v8 + 0xFFFFFFFF));
    FormHeapFree(v24[0]);
    return v26;
  }
  else
  {
    FormHeapFree(0);
    return 0;
  }
}
