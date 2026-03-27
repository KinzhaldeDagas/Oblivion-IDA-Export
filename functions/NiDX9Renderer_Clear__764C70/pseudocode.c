void __userpurge NiDX9Renderer::Clear(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, int a5, float *a6)
{
  int v7; // ebp
  int v8; // eax
  double v10; // st7
  double v11; // st7
  int v12; // eax
  double v13; // st5
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ebp
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // [esp+38h] [ebp-28h] BYREF
  int v25; // [esp+40h] [ebp-20h]
  int v26; // [esp+44h] [ebp-1Ch]
  _DWORD v27[2]; // [esp+48h] [ebp-18h] BYREF
  _BYTE v28[16]; // [esp+50h] [ebp-10h] BYREF
  float v29; // [esp+6Ch] [ebp+Ch]
  float v30; // [esp+70h] [ebp+10h]

  if ( a5 )
  {
    if ( !*(_BYTE *)(a1 + 0x6F0) )
    {
      v7 = (*(int (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(a1 + 0x87C) + 0x4C))(
             *(_DWORD *)(a1 + 0x87C),
             0,
             a3,
             a2);
      v8 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x87C) + 0x50))(*(_DWORD *)(a1 + 0x87C), 0);
      if ( a6 )
      {
        v10 = (double)v7;
        if ( v7 < 0 )
          v10 = v10 + flt_A2FC78;
        v30 = v10;
        v11 = (double)v8;
        if ( v8 < 0 )
          v11 = v11 + flt_A2FC78;
        v29 = v11;
        v25 = Double_To_SInt32(v30);
        v26 = Double_To_SInt32(v30);
        v12 = Double_To_SInt32(1.0);
        v13 = a6[3];
        v27[0] = v12;
        v8 = Double_To_SInt32((1.0 - v13) * v29);
      }
      else
      {
        v25 = 0;
        v26 = 0;
        v27[0] = v7;
      }
      v14 = *(_DWORD *)(a1 + 0x87C);
      v27[1] = v8;
      v15 = a5 & 1;
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x84))(v14);
      v17 = (_DWORD *)sub_497DD0((int)&unk_B4263C, v16);
      v18 = v17;
      if ( v17 )
      {
        if ( (a5 & 4) != 0 && sub_76D4F0(v17) )
          v19 = 2;
        else
          v19 = 0;
        v20 = v19 | v15;
        if ( (a5 & 2) != 0 && sub_76D510(v18) )
          v21 = 4;
        else
          v21 = 0;
        v15 = v21 | v20;
      }
      (*(void (__cdecl **)(_DWORD, _BYTE *))(**(_DWORD **)(a1 + 0x280) + 0xC0))(*(_DWORD *)(a1 + 0x280), v28);
      v22 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x87C) + 0x4C))(*(_DWORD *)(a1 + 0x87C), 0);
      v23 = *(_DWORD *)(a1 + 0x87C);
      *(_DWORD *)(a1 + 0x6C8) = v22;
      *(_DWORD *)(a1 + 0x6CC) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 0x50))(v23, 0);
      (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x280) + 0xBC))(*(_DWORD *)(a1 + 0x280), a1 + 0x6C0);
      (*(void (__stdcall **)(_DWORD, int, int *, int, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x280) + 0xAC))(
        *(_DWORD *)(a1 + 0x280),
        1,
        &v24,
        v15,
        *(_DWORD *)(a1 + 0x5D4),
        *(float *)(a1 + 0x5D8),
        *(_DWORD *)(a1 + 0x5DC));
      (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 0x280) + 0xBC))(*(_DWORD *)(a1 + 0x280), v27);
    }
  }
}
