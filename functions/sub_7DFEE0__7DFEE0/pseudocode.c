char __thiscall sub_7DFEE0(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int **v7; // edi
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage *v9; // ecx
  unsigned int **v10; // edi
  NiD3DTextureStage *v11; // eax
  NiD3DTextureStage *v12; // ecx
  NiD3DTextureStage *v13; // eax
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // ebx
  int v21; // ebp
  _DWORD *v22; // edi
  int v23; // ebx
  int v24; // esi
  int v25; // edi
  _DWORD *v26; // esi
  unsigned int *a3; // [esp+14h] [ebp-18h] BYREF
  NiD3DPass *v29; // [esp+18h] [ebp-14h] BYREF
  NiD3DTextureStage *v30; // [esp+1Ch] [ebp-10h] BYREF
  int v31; // [esp+28h] [ebp-4h]

  if ( !*(this + 0x35) )
  {
    v2 = sub_7606A0(&v29);
    v3 = *(this + 0x35);
    v4 = v3 == *v2;
    v31 = 0;
    if ( !v4 )
    {
      if ( v3 )
      {
        v4 = v3->RefCount-- == 1;
        if ( v4 )
          sub_7604D0(v3);
      }
      v5 = *v2;
      v4 = *v2 == 0;
      *(this + 0x35) = *v2;
      if ( !v4 )
        ++v5->RefCount;
    }
    v6 = v29;
    v31 = 0xFFFFFFFF;
    if ( v29 )
    {
      --v29->RefCount;
      if ( !v6->RefCount )
        sub_7604D0(v6);
    }
    sub_772630(&a3);
    v31 = 1;
    sub_801110((int)a3, 0, 3, 2);
    sub_771640((_DWORD **)a3, 0);
    sub_760010(*(this + 0x35), (*(this + 0x35))->CurrentStage, a3);
    v7 = (unsigned int **)sub_772630(&v29);
    v8 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v7;
    LOBYTE(v31) = 2;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v8[7].Unk08 )
          sub_772560(v8);
      }
      v8 = (NiD3DTextureStage *)*v7;
      a3 = *v7;
      if ( a3 )
      {
        ++v8[7].Unk08;
        v8 = (NiD3DTextureStage *)a3;
      }
    }
    v9 = (NiD3DTextureStage *)v29;
    LOBYTE(v31) = 1;
    if ( v29 )
    {
      --*(_DWORD *)&v29->SoftwareVP;
      if ( !v9[7].Unk08 )
        sub_772560(v9);
      v8 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v8, 1, 3, 2);
    sub_771640((_DWORD **)a3, 0);
    sub_760010(*(this + 0x35), (*(this + 0x35))->CurrentStage, a3);
    v10 = (unsigned int **)sub_772630(&v30);
    v11 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v10;
    LOBYTE(v31) = 3;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v11[7].Unk08 )
          sub_772560(v11);
      }
      v11 = (NiD3DTextureStage *)*v10;
      a3 = *v10;
      if ( a3 )
      {
        ++v11[7].Unk08;
        v11 = (NiD3DTextureStage *)a3;
      }
    }
    v12 = v30;
    LOBYTE(v31) = 1;
    if ( v30 )
    {
      --v30[7].Unk08;
      if ( !v12[7].Unk08 )
        sub_772560(v12);
      v11 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v11, 2, 3, 2);
    sub_771640((_DWORD **)a3, 0);
    sub_760010(*(this + 0x35), (*(this + 0x35))->CurrentStage, a3);
    v13 = (NiD3DTextureStage *)a3;
    v31 = 0xFFFFFFFF;
    if ( a3 )
    {
      --a3[0x17];
      if ( !v13[7].Unk08 )
        sub_772560(v13);
    }
  }
  v14 = (int)*(this + 0x35);
  if ( !*(_DWORD *)(v14 + 0x30) )
    *(_DWORD *)(v14 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v14 + 0x30), 7, 0, 0);
  v15 = (int)*(this + 0x35);
  if ( !*(_DWORD *)(v15 + 0x30) )
    *(_DWORD *)(v15 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v15 + 0x30), 0xE, 0, 0);
  v16 = (int)*(this + 0x35);
  if ( !*(_DWORD *)(v16 + 0x30) )
    *(_DWORD *)(v16 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v16 + 0x30), 0x1B, 0, 0);
  v17 = (int)*(this + 0x35);
  if ( !*(_DWORD *)(v17 + 0x30) )
    *(_DWORD *)(v17 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v17 + 0x30), 0xF, 0, 0);
  v18 = (int)*(this + 0x35);
  if ( !*(_DWORD *)(v18 + 0x30) )
    *(_DWORD *)(v18 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v18 + 0x30), 0xA8, 0xF, 0);
  v19 = (int)*(this + 0x35);
  v20 = (int)*(this + 0x2C);
  v21 = *(_DWORD *)(v19 + 0x58);
  v22 = (_DWORD *)(v19 + 0x58);
  if ( v21 != v20 )
  {
    if ( v21 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
        (**(void (__thiscall ***)(int, int))v21)(v21, 1);
    }
    *v22 = v20;
    if ( v20 )
      InterlockedIncrement((volatile LONG *)(v20 + 4));
  }
  v23 = (int)*(this + 0x2D);
  v24 = (int)*(this + 0x35);
  v25 = *(_DWORD *)(v24 + 0x44);
  v26 = (_DWORD *)(v24 + 0x44);
  if ( v25 != v23 )
  {
    if ( v25 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) )
        (**(void (__thiscall ***)(int, int))v25)(v25, 1);
    }
    *v26 = v23;
    if ( v23 )
      InterlockedIncrement((volatile LONG *)(v23 + 4));
  }
  return 1;
}
