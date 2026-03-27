void __thiscall sub_723C80(int *this, unsigned int *a2)
{
  int *v2; // ebp
  unsigned int *v3; // ebx
  _DWORD *v4; // eax
  unsigned int v5; // edi
  _DWORD *v6; // esi
  void (__cdecl *v7)(unsigned int, unsigned int **, int, int *, int); // eax
  int v8; // ebp
  void (__cdecl *v9)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v10)(unsigned int, float *, int, int *, int); // eax
  bool v11; // cf
  int v12; // edi
  unsigned int v13; // [esp-28h] [ebp-6Ch]
  unsigned int v14; // [esp-14h] [ebp-58h]
  unsigned int v15; // [esp-14h] [ebp-58h]
  int v16; // [esp+14h] [ebp-30h] BYREF
  int v17; // [esp+18h] [ebp-2Ch] BYREF
  int v18; // [esp+1Ch] [ebp-28h] BYREF
  float v19; // [esp+20h] [ebp-24h] BYREF
  float v20; // [esp+24h] [ebp-20h]
  int *v21; // [esp+28h] [ebp-1Ch]
  _DWORD v22[3]; // [esp+2Ch] [ebp-18h] BYREF
  unsigned int v23; // [esp+40h] [ebp-4h]

  v2 = this;
  v21 = this;
  v3 = a2;
  sub_7247D0(this, a2);
  if ( v3[0x36] > 0xA00010B )
  {
    sub_712A20(v3);
  }
  else
  {
    v4 = (_DWORD *)FormHeapAlloc(0x28u);
    v20 = *(float *)&v4;
    v5 = 0;
    v23 = 0;
    if ( v4 )
      v6 = sub_7249A0(v4);
    else
      v6 = 0;
    v23 = 0xFFFFFFFF;
    sub_709430((char *)v22, (signed int)v3);
    v6[2] = v22[0];
    v6[3] = v22[1];
    v6[4] = v22[2];
    v14 = v3[0x87];
    v7 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v14 + 4);
    v16 = 4;
    v7(v14, &a2, 4, &v16, 1);
    if ( a2 )
    {
      sub_724AB0(v6, (signed int)a2);
      if ( a2 )
      {
        v8 = 0;
        do
        {
          v15 = v3[0x87];
          v9 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v15 + 4);
          v16 = 4;
          v9(v15, &v18, 4, &v16, 1);
          v13 = v3[0x87];
          v10 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v13 + 4);
          v17 = 4;
          v10(v13, &v19, 4, &v17, 1);
          v16 = v18;
          v11 = v5 < v6[8];
          v20 = v19;
          if ( !v11 )
            sub_724AB0(v6, v5 + 1);
          *(float *)(v6[9] + v8) = *(float *)&v16;
          ++v5;
          *(float *)(v6[9] + v8 + 4) = v20;
          v8 += 0x10;
        }
        while ( v5 < (unsigned int)a2 );
        v2 = v21;
      }
    }
    v12 = v2[0x3F];
    if ( (_DWORD *)v12 != v6 )
    {
      if ( v12 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
          (**(void (__thiscall ***)(int, int))v12)(v12, 1);
      }
      v2[0x3F] = (int)v6;
      InterlockedIncrement(v6 + 1);
    }
  }
}
