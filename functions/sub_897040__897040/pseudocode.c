void __fastcall sub_897040(int a1, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  bhkRefObject *v6; // eax
  bhkRefObject *v7; // eax
  int *v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // ebx
  int v12; // ebx
  int v13; // eax
  _DWORD *v14; // edi
  int v15; // ecx
  float v16; // [esp+10h] [ebp-74h]
  int v17; // [esp+10h] [ebp-74h]
  int v18; // [esp+14h] [ebp-70h] BYREF
  int v19; // [esp+18h] [ebp-6Ch]
  _DWORD *v20; // [esp+20h] [ebp-64h]
  int v21; // [esp+28h] [ebp-5Ch]
  unsigned int v22; // [esp+80h] [ebp-4h]

  if ( a3 )
  {
    v16 = *(float *)(a3 + 0x98) * *(float *)(a3 + 0x94);
    *(float *)(a1 + 0x248) = v16;
    sub_895190(a1, a2, a3);
    sub_532250(&v18);
    v4 = *(_DWORD *)(a3 + 0x74);
    v22 = 0;
    v18 = v4;
    v5 = sub_890BA0((int *)a1);
    if ( v5 )
      v19 = *(_DWORD *)(v5 + 8);
    else
      v19 = 0;
    v6 = (bhkRefObject *)FormHeapAlloc(0x14u);
    LOBYTE(v22) = 1;
    if ( v6 )
      v7 = sub_531FC0(v6, (int)&v18);
    else
      v7 = 0;
    v8 = (int *)(a1 + 0x364);
    LOBYTE(v22) = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)(a1 + 0x364), (Ni2DBuffer *)v7);
    if ( *(_DWORD *)(a3 + 0x78) )
    {
      if ( *v8 )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)*v8 + 0x5C))(*v8, *(_DWORD *)(a3 + 0x78));
        v17 = *v8;
        v9 = sub_8AEB80(0x96u, 0x96u, 0, 0x19u);
        sub_88BB60(*(int **)(a3 + 0x78), v17, v9);
        if ( *(_BYTE *)(*(_DWORD *)(a3 + 0x78) + 0x1A) )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x88))(a1, 0);
      }
      v10 = *(_DWORD *)(a1 + 0x368);
      if ( v10 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 0x5C))(v10, *(_DWORD *)(a3 + 0x78));
    }
    v11 = *v8;
    *(_DWORD *)(a1 + 0x2A0) = *(_DWORD *)(a3 + 0x88);
    *(float *)(a1 + 0x310) = *(float *)(a3 + 0x7C);
    *(float *)(a1 + 0x328) = *(float *)(a3 + 0x80);
    *(_DWORD *)(a1 + 0x3B0) = *(_DWORD *)(a3 + 0xA0);
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 8);
    else
      v12 = 0;
    *(_DWORD *)(a3 + 0x48) = v12;
    sub_8B9E50((void *)a1, a3);
    v13 = a1 + 0x1F0;
    v14 = *(_DWORD **)(a1 + 8);
    if ( v14 )
      sub_8ACD60(v14, v13);
    v22 = 0xFFFFFFFF;
    if ( v21 >= 0 )
    {
      v15 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v15 )
        v15 = dword_BA7D9C;
      sub_8A75D0(v15, v20, 8 * v21, 0x14);
    }
  }
}
