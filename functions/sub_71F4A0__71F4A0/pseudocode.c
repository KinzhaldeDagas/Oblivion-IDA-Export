NiPixelData *__thiscall sub_71F4A0(void *this, _DWORD *a2, unsigned int a3, Ni2DBuffer *a4)
{
  _DWORD *v5; // ebx
  NiPixelData *v6; // eax
  NiPixelData *v7; // edi
  int v8; // esi
  int v10; // eax
  UInt32 v11; // ebx
  _DWORD *v12; // ecx
  Ni2DBuffer *v13; // [esp+0h] [ebp-7Ch]
  char v14; // [esp+17h] [ebp-65h] BYREF
  UInt32 v15; // [esp+18h] [ebp-64h] BYREF
  int v16; // [esp+1Ch] [ebp-60h] BYREF
  unsigned int v17; // [esp+20h] [ebp-5Ch] BYREF
  unsigned int v18; // [esp+24h] [ebp-58h] BYREF
  void *v19; // [esp+28h] [ebp-54h]
  NiSurfaceData v20; // [esp+2Ch] [ebp-50h] BYREF
  int v21; // [esp+78h] [ebp-4h]

  v19 = this; /*0x71f4c8*/
  v5 = a2; /*0x71f4cc*/
  if ( *a2 )
  {
    InitSurfacEData(&v20); /*0x71f4dd*/
    if ( (*(unsigned __int8 (__thiscall **)(void *, _DWORD, NiSurfaceData *, char *, unsigned int *, unsigned int *, int *))(*(_DWORD *)this + 4))(
           this,
           *a2,
           &v20,
           &v14,
           &v18,
           &v17,
           &v16) )
    {
      if ( v16 == 1 )
      {
        v6 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x71f51c*/
        v15 = (UInt32)v6; /*0x71f524*/
        v21 = 0; /*0x71f52a*/
        v7 = v6 ? NiPixelData::NiPixelData(v6, v18, v17, (int)&v20, a3, 1) : 0;
        v21 = 0xFFFFFFFF; /*0x71f55c*/
        if ( v7 ) /*0x71f564*/
        {
          v8 = 0; /*0x71f56a*/
          if ( !a3 ) /*0x71f573*/
            return v7; /*0x71f589*/
          while ( 1 ) /*0x71f594*/
          {
            v10 = v5[v8]; /*0x71f594*/
            if ( !v10 ) /*0x71f599*/
            {
              (**(void (__thiscall ***)(NiPixelData *, int))v7)(v7, 1); /*0x71f663*/
              return 0; /*0x71f663*/
            }
            v15 = 0; /*0x71f59f*/
            v21 = 1; /*0x71f5a9*/
            if ( v8 || !a4 ) /*0x71f5bc*/
            {
              v13 = (Ni2DBuffer *)(*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)v19 + 8))(v19, v10, 0); /*0x71f5cf*/
              NiSmartPointer_Set__((Ni2DBuffer **)&v15, v13); /*0x71f5d4*/
            }
            else
            {
              NiSmartPointer_Set__((Ni2DBuffer **)&v15, a4); /*0x71f5bf*/
            }
            v11 = v15; /*0x71f5d9*/
            if ( !v15 ) /*0x71f5df*/
              break; /*0x71f5df*/
            v12 = *(_DWORD **)(v15 + 0x5C); /*0x71f5f2*/
            if ( *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8 + 4) - *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8) != v12[1] - *v12 ) /*0x71f5fc*/
              break; /*0x71f5fc*/
            memcpy( /*0x71f611*/
              (void *)(*((_DWORD *)v7 + 0x14) + *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8)),
              (const void *)(*v12 + *(_DWORD *)(v15 + 0x50)),
              *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8 + 4) - *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8));
            if ( !v8 ) /*0x71f61b*/
            {
              if ( sub_71B480(&v20) ) /*0x71f621*/
                sub_71B140(v7, *(_DWORD *)(v11 + 0x4C)); /*0x71f630*/
            }
            v21 = 0xFFFFFFFF; /*0x71f639*/
            NiPointerSlot_Release((void **)&v15); /*0x71f641*/
            if ( ++v8 >= a3 ) /*0x71f650*/
              return v7; /*0x71f650*/
            v5 = a2; /*0x71f590*/
          }
          (**(void (__thiscall ***)(NiPixelData *, int))v7)(v7, 1); /*0x71f684*/
          v21 = 0xFFFFFFFF; /*0x71f68a*/
          NiPointerSlot_Release((void **)&v15); /*0x71f692*/
        }
      }
    }
  }
  return 0; /*0x71f577*/
}
