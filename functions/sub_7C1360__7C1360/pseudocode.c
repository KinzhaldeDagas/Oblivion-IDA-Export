int __thiscall sub_7C1360(int *this)
{
  int result; // eax
  NiDX9Renderer *v2; // esi
  unsigned int v3; // edi
  int *v4; // eax
  NiSurfaceData *SurfaceData; // ebx
  int v6; // ebp
  Ni2DBuffer *v7; // eax
  Ni2DBuffer **v8; // [esp+8h] [ebp-4h]

  result = *(this + 0x10);
  v2 = g_Renderer;
  v3 = (unsigned __int16)ShadowSurfaceRes;
  if ( !result || v3 > *(_DWORD *)(result + 8) || v3 > *(_DWORD *)(result + 0xC) )
  {
    v4 = this + 0x11;
    v8 = (Ni2DBuffer **)(this + 0x11);
    if ( !*(this + 0x11) )
    {
      SurfaceData = CreateSurfaceData((D3DFORMAT)dword_B2C994);
      v6 = (int)v2->__vftable->super.Unk_26((NiRenderer *)v2, SurfaceData);
      v7 = (Ni2DBuffer *)sub_70BC70(v3, v3, (int)v2, v6);
      NiSmartPointer_Set__(v8, v7);
      FormHeapFree(v6);
      FormHeapFree((unsigned int)SurfaceData);
      v4 = (int *)v8;
    }
    return *v4;
  }
  return result;
}
