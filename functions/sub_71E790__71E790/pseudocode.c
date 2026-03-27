char *__thiscall sub_71E790(void (__stdcall **this)(char *), UInt32 a2, int a3, char *a4, UInt32 a5)
{
  void (__stdcall **v5)(char *); // ebp
  UInt32 v6; // esi
  int v7; // ebx
  int v8; // ecx
  char *v9; // eax
  char *v10; // edi
  int v11; // eax
  unsigned int v12; // eax
  char *v13; // eax
  UInt32 v15; // edi
  int v16; // eax
  Ni2DBuffer *v17; // eax
  char *v18; // ebx
  NiPixelData *v19; // eax
  NiPixelData *v20; // ebx
  int (__thiscall *v21)(void (__stdcall **)(char *), NiPixelData *, UInt32, unsigned int); // edx
  char v22; // al
  LONG (__stdcall *v23)(volatile LONG *); // ebp
  void (__thiscall ***v24)(_DWORD, int); // esi
  void (__thiscall ***v25)(_DWORD, int); // esi
  LONG (__stdcall *v26)(volatile LONG *); // ebx
  void (__thiscall ***v27)(_DWORD, int); // esi
  void (__thiscall ***v28)(_DWORD, int); // esi
  UInt32 v29; // [esp+28h] [ebp-14h] BYREF
  void (__stdcall **v30)(char *); // [esp+2Ch] [ebp-10h]
  unsigned int v31; // [esp+38h] [ebp-4h]

  v5 = this;
  v30 = this;
  v29 = 0;
  v31 = 0;
  v6 = a2;
  if ( (*(_BYTE *)(a2 + 8) & 1) == 0 )
    return 0;
  v7 = a3;
  if ( (*(_BYTE *)a3 & 1) == 0 )
    return 0;
  v8 = *(_DWORD *)(a2 + 0xC);
  if ( v8 >= 4 && v8 <= 6 && *(_DWORD *)(a3 + 4) != *(_DWORD *)(a2 + 0xC) )
  {
    v9 = sub_734460(v5 + 0x1A0, a2);
    NiSmartPointer_Set__((Ni2DBuffer **)&v29, (Ni2DBuffer *)v9);
    v6 = v29;
  }
  a2 = 0;
  v10 = a4;
  LOBYTE(v31) = 1;
  if ( (_BYTE)a5 )
  {
    if ( *(_DWORD *)(v6 + 0x60) <= 1u )
    {
      v11 = **(_DWORD **)(v6 + 0x54);
      if ( v11 )
      {
        if ( ((v11 - 1) & v11) == 0 && sub_71B460(**(_DWORD **)(v6 + 0x58)) )
        {
          v12 = *(_DWORD *)(v7 + 4);
          if ( v12 < 2 || v12 == 8 || v12 == 9 )
          {
            v13 = sub_71B8D0(v5, v6, v10);
            NiSmartPointer_Set__((Ni2DBuffer **)&a2, (Ni2DBuffer *)v13);
            if ( a2 )
              v6 = a2;
          }
        }
      }
    }
  }
  if ( v10
    && sub_71AD40((_DWORD *)v10 + 2, v7)
    && (!(_BYTE)a5 || *((_DWORD *)v10 + 0x18) > 1u)
    && (v10 == (char *)v6
     || (*((unsigned __int8 (__thiscall **)(void (__stdcall **)(char *), char *, UInt32, unsigned int))*v5 + 0xB))(
          v5,
          v10,
          v6,
          0xFFFFFFFF)) )
  {
    LOBYTE(v31) = 0;
    sub_7016A0((NiD3DVertexShader *)&a2);
    v31 = 0xFFFFFFFF;
    sub_7016A0((NiD3DVertexShader *)&v29);
    return v10;
  }
  v15 = 0;
  a5 = 0;
  v16 = *(_DWORD *)(v7 + 4);
  LOBYTE(v31) = 2;
  if ( v16 == 8 || v16 == 9 )
  {
    v17 = (Ni2DBuffer *)(*((int (__thiscall **)(void (__stdcall **)(char *), UInt32, int))*v5 + 0xC))(v5, v6, v7);
    NiSmartPointer_Set__((Ni2DBuffer **)&a5, v17);
    v15 = a5;
    if ( a5 )
      v6 = a5;
  }
  v18 = (char *)FormHeapAlloc(0x70u);
  a4 = v18;
  LOBYTE(v31) = 3;
  if ( v18 )
  {
    v19 = NiPixelData::NiPixelData(
            (NiPixelData *)v18,
            **(_DWORD **)(v6 + 0x54),
            **(_DWORD **)(v6 + 0x58),
            a3,
            *(_DWORD *)(v6 + 0x60),
            *(_DWORD *)(v6 + 0x6C));
    v5 = v30;
    v20 = v19;
  }
  else
  {
    v20 = 0;
  }
  v21 = *((int (__thiscall **)(void (__stdcall **)(char *), NiPixelData *, UInt32, unsigned int))*v5 + 0xB);
  LOBYTE(v31) = 2;
  v22 = v21(v5, v20, v6, 0xFFFFFFFF);
  LOBYTE(v31) = 1;
  if ( !v22 )
  {
    v26 = InterlockedDecrement;
    if ( v15 )
    {
      if ( !v26((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1);
    }
    v27 = (void (__thiscall ***)(_DWORD, int))a2;
    LOBYTE(v31) = 0;
    if ( a2 )
    {
      if ( !v26((volatile LONG *)(a2 + 4)) )
        (**v27)(v27, 1);
    }
    v28 = (void (__thiscall ***)(_DWORD, int))v29;
    v31 = 0xFFFFFFFF;
    if ( v29 )
    {
      if ( !v26((volatile LONG *)(v29 + 4)) )
        (**v28)(v28, 1);
    }
    return 0;
  }
  v23 = InterlockedDecrement;
  if ( v15 )
  {
    if ( !v23((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1);
  }
  v24 = (void (__thiscall ***)(_DWORD, int))a2;
  LOBYTE(v31) = 0;
  if ( a2 )
  {
    if ( !v23((volatile LONG *)(a2 + 4)) )
      (**v24)(v24, 1);
  }
  v25 = (void (__thiscall ***)(_DWORD, int))v29;
  v31 = 0xFFFFFFFF;
  if ( v29 )
  {
    if ( !v23((volatile LONG *)(v29 + 4)) )
      (**v25)(v25, 1);
  }
  return (char *)v20;
}
