NiPixelData *__thiscall sub_71F4A0(void *this, _DWORD *a2, unsigned int a3, Ni2DBuffer *a4)
{
  _DWORD *v5; // ebx
  NiPixelData *v6; // eax
  NiPixelData *v7; // edi
  int v8; // esi
  int v10; // eax
  UInt32 v11; // ebx
  _DWORD *v12; // ecx
  size_t v13; // [esp+0h] [ebp-7Ch]
  Ni2DBuffer *v14; // [esp+0h] [ebp-7Ch]
  char v15; // [esp+17h] [ebp-65h] BYREF
  UInt32 v16; // [esp+18h] [ebp-64h] BYREF
  int v17; // [esp+1Ch] [ebp-60h] BYREF
  unsigned int v18; // [esp+20h] [ebp-5Ch] BYREF
  unsigned int v19; // [esp+24h] [ebp-58h] BYREF
  void *v20; // [esp+28h] [ebp-54h]
  NiSurfaceData v21; // [esp+2Ch] [ebp-50h] BYREF
  int v22; // [esp+78h] [ebp-4h]

  v20 = this;
  v5 = a2;
  if ( *a2 )
  {
    InitSurfacEData(&v21);
    if ( (*(unsigned __int8 (__thiscall **)(void *, _DWORD, NiSurfaceData *, char *, unsigned int *, unsigned int *, int *))(*(_DWORD *)this + 4))(
           this,
           *a2,
           &v21,
           &v15,
           &v19,
           &v18,
           &v17) )
    {
      if ( v17 == 1 )
      {
        v6 = (NiPixelData *)FormHeapAlloc(0x70u);
        v16 = (UInt32)v6;
        v22 = 0;
        v7 = v6 ? NiPixelData::NiPixelData(v6, v19, v18, (int)&v21, a3, 1) : 0;
        v22 = 0xFFFFFFFF;
        if ( v7 )
        {
          v8 = 0;
          if ( !a3 )
            return v7;
          while ( 1 )
          {
            v10 = v5[v8];
            if ( !v10 )
            {
              (**(void (__thiscall ***)(NiPixelData *, int))v7)(v7, 1);
              return 0;
            }
            v16 = 0;
            v22 = 1;
            if ( v8 || !a4 )
            {
              v14 = (Ni2DBuffer *)(*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)v20 + 8))(v20, v10, 0);
              NiSmartPointer_Set__((Ni2DBuffer **)&v16, v14);
            }
            else
            {
              NiSmartPointer_Set__((Ni2DBuffer **)&v16, a4);
            }
            v11 = v16;
            if ( !v16 )
              break;
            v12 = *(_DWORD **)(v16 + 0x5C);
            if ( *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8 + 4) - *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8) != v12[1] - *v12 )
              break;
            LODWORD(v13) = *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8 + 4)
                         - *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8);
            memcpy(
              (void *)(*((_DWORD *)v7 + 0x14) + *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8)),
              (const void *)(*v12 + *(_DWORD *)(v16 + 0x50)),
              v13);
            if ( !v8 )
            {
              if ( sub_71B480(&v21) )
                sub_71B140(v7, *(_DWORD *)(v11 + 0x4C));
            }
            v22 = 0xFFFFFFFF;
            sub_7016A0((NiD3DVertexShader *)&v16);
            if ( ++v8 >= a3 )
              return v7;
            v5 = a2;
          }
          (**(void (__thiscall ***)(NiPixelData *, int))v7)(v7, 1);
          v22 = 0xFFFFFFFF;
          sub_7016A0((NiD3DVertexShader *)&v16);
        }
      }
    }
  }
  return 0;
}
