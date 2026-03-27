int __thiscall sub_562E20(char *this, float *arg0)
{
  bool v3; // zf
  NiGeometry *v4; // eax
  NiAVObject *v5; // eax
  NiNode **v6; // esi
  BSShaderProperty *v7; // ebp
  BSShaderProperty *v8; // edi
  NiProperty *NiPropertyByID; // eax
  NiObject *v10; // eax
  LONG (__stdcall *v11)(volatile LONG *); // edi
  NiScreenElementsData *v12; // esi
  NiScreenElementsData *a2; // [esp+14h] [ebp-170h] BYREF
  void *v15; // [esp+18h] [ebp-16Ch]
  float v16[3]; // [esp+1Ch] [ebp-168h] BYREF
  float v17[3]; // [esp+28h] [ebp-15Ch] BYREF
  float v18[3]; // [esp+34h] [ebp-150h] BYREF
  float v19[3]; // [esp+40h] [ebp-144h] BYREF
  float v20[75]; // [esp+4Ch] [ebp-138h] BYREF
  unsigned int v21; // [esp+180h] [ebp-4h]

  sub_7879A0(v20);
  v3 = *((_DWORD *)this + 3) == 0;
  v16[0] = 0.0;
  v16[1] = 0.0;
  v21 = 0;
  v16[2] = 0.0;
  v17[0] = 0.0;
  v17[1] = flt_A30634;
  v17[2] = 0.0;
  if ( !v3 && *((_DWORD *)this + 2) != 2 )
  {
    if ( arg0 )
    {
      sub_78B690(v19, (int *)v18);
      sub_78D140(v16, v17);
      sub_78C110(*((float ***)this + 3), 0.0);
      sub_4BA3C0(arg0, (volatile LONG **)&a2, 0);
      a2->member.super.super.super.m_usDirtyFlags = a2->member.super.super.super.m_usDirtyFlags & 0xFFF | 0x4000;
      a2->member.super.super.super.m_ucKeepFlags = 0x11;
      LOBYTE(v21) = 1;
      a2->member.super.super.super.m_ucCompressFlags = 0x1F;
      v4 = (NiGeometry *)FormHeapAlloc(0xC0u);
      v15 = v4;
      LOBYTE(v21) = 2;
      if ( v4 )
        v5 = NiTriShape_NiTriShape(v4, a2);
      else
        v5 = 0;
      v6 = (NiNode **)(this + 0x1C);
      LOBYTE(v21) = 1;
      NiSmartPointer_Set__((Ni2DBuffer **)this + 7, (Ni2DBuffer *)v5);
      NiObjectNET_SetName(*((NiObjectNET **)this + 7), "STBB");
      v7 = (BSShaderProperty *)sub_561030();
      v15 = v7;
      if ( v7 )
        InterlockedIncrement((volatile LONG *)&v7->member);
      LOBYTE(v21) = 3;
      if ( v7 )
        sub_405680(*v6, v7);
      v8 = *((BSShaderProperty **)this + 0xF);
      if ( v8 )
        sub_405680(*v6, v8);
      sub_7B8940((NiAVObject *)*v6, 1, 1, 1);
      NiPropertyByID = NiNode_GetNiPropertyByID(*v6, 4);
      if ( NiPropertyByID )
      {
        NiPropertyByID[1].members.super.m_uiRefCount |= (unsigned int)&loc_402000;
        NiPropertyByID[1].members.m_controller = 0;
      }
      v10 = NiRTTI_Cast(&stru_B44F90, (NiObject *)(*v6)->members.effects.vtlb);
      if ( v10 )
      {
        g_Renderer->__vftable->super.NiRenderer::PrecacheGeometryData(
          (NiRenderer *)g_Renderer,
          (UInt32)*v6,
          0,
          0,
          v10[0xF].members.m_uiRefCount);
        sub_769030(g_Renderer);
      }
      sub_78D140(v19, v18);
      v11 = InterlockedDecrement;
      LOBYTE(v21) = 1;
      if ( v7 )
      {
        if ( !v11((volatile LONG *)&v7->member) )
          (*(void (__thiscall **)(BSShaderProperty *, int))v7->vtbl)(v7, 1);
      }
      v12 = a2;
      LOBYTE(v21) = 0;
      if ( a2 )
      {
        if ( !v11((volatile LONG *)&a2->member) )
        {
          if ( v12 )
            (*(void (__thiscall **)(NiScreenElementsData *, int))v12->__vftable)(v12, 1);
        }
      }
    }
  }
  v21 = 0xFFFFFFFF;
  return sub_787B20(v20);
}
