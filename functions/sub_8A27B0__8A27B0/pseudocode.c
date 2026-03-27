void __thiscall sub_8A27B0(void *this, int a2, _DWORD *a3, char *Src)
{
  unsigned int v5; // ebx
  int v6; // eax
  float *v7; // edi
  int v8; // esi
  __int16 v9; // si
  int v10; // edx
  _WORD *v11; // ecx
  int v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // edi
  int v16; // eax
  NiAVObject *v17; // eax
  NiAVObject *v18; // esi
  unsigned int v19; // [esp+14h] [ebp-20h]
  UInt16 *v20; // [esp+18h] [ebp-1Ch]
  int v21; // [esp+1Ch] [ebp-18h]
  __int16 v22; // [esp+20h] [ebp-14h]
  int v24; // [esp+3Ch] [ebp+8h]

  if ( a3 )
  {
    v5 = a3[1];
    v6 = a3[4];
    v22 = v5;
    v24 = v6;
    if ( v5 )
    {
      if ( v6 )
      {
        v21 = FormHeapAlloc((0xC * (unsigned __int64)v5) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v5);
        v20 = (UInt16 *)FormHeapAlloc((unsigned __int64)(unsigned int)(3 * v24) >> 0x1F != 0 ? 0xFFFFFFFF : 6 * v24);
        v7 = (float *)v21;
        v8 = 0;
        v19 = v5;
        do
        {
          sub_43F3E0(v7, (__m128 *)(v8 + *a3));
          v8 += 0x10;
          v7 += 3;
          --v19;
        }
        while ( v19 );
        v9 = v24;
        if ( v24 )
        {
          v10 = 0;
          v11 = v20 + 2;
          v12 = v24;
          do
          {
            v13 = a3[3];
            v14 = *(_DWORD *)(v13 + v10);
            v15 = *(_DWORD *)(v13 + v10 + 4);
            v16 = *(_DWORD *)(v10 + v13 + 8);
            v11[0xFFFFFFFE] = v14;
            v11[0xFFFFFFFF] = v15;
            *v11 = v16;
            v10 += 0xC;
            v11 += 3;
            --v12;
          }
          while ( v12 );
          LOWORD(v5) = v22;
          v9 = v24;
        }
        v17 = (NiAVObject *)FormHeapAlloc(0xC0u);
        if ( v17 )
          v18 = sub_7174B0(v17, v5, v21, 0, 0, 0, 0, 0, v9, v20);
        else
          v18 = 0;
        if ( Src )
          NiObjectNET_SetName((NiObjectNET *)v18, Src);
        sub_728280((int)v18[1].members.super.m_pcName, 1);
        (*(void (__thiscall **)(void *, NiAVObject *))(*(_DWORD *)this + 0x98))(this, v18);
        (*(void (__thiscall **)(int, NiAVObject *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v18, 0);
      }
    }
  }
}
