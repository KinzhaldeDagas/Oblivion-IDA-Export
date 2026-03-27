void __thiscall sub_85C250(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  float v7; // ecx
  float v8; // edx
  NiD3DPass *v9; // esi
  int v10; // eax
  UInt32 Stage; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // ebp
  UInt32 v16; // [esp+2Ch] [ebp+Ch]

  v7 = flt_B4653C;
  v8 = flt_B46540;
  v9 = (NiD3DPass *)dword_B4779C;
  flt_B46528 = flt_B46538;
  v10 = dword_B46544;
  flt_B4652C = v7;
  flt_B46530 = v8;
  dword_B46534 = v10;
  sub_848E50(*(_DWORD *)(a4 + 0xC));
  Stage = v9->Stages.data->Stage;
  v16 = Stage;
  v12 = sub_848FD0(a5, 0);
  v13 = *(_DWORD *)(Stage + 4);
  v14 = v12;
  if ( v13 != v12 )
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    }
    *(_DWORD *)(v16 + 4) = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  if ( !(_BYTE)a6 )
  {
    ++v9->RefCount;
    a6 = v9;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v9->RefCount-- == 1 )
      sub_7604D0(v9);
    ++*((_DWORD *)this + 0xE);
  }
}
