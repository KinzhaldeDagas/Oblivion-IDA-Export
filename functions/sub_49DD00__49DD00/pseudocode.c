void __thiscall sub_49DD00(Ni2DBuffer **this, int arg0, float a3)
{
  bool v3; // zf
  int v5; // esi
  unsigned int v6; // ecx
  NiScreenElementsData *v7; // eax
  Ni2DBuffer *p_member; // edi
  void (__thiscall ***v9)(_DWORD, int); // esi
  unsigned __int16 **v10; // esi
  NiScreenElementsData *v11; // eax
  Ni2DBuffer *v12; // eax
  unsigned int v13; // edi
  unsigned int i; // ecx
  unsigned int v15; // eax
  bool v16; // cf
  int v17; // eax
  void (__thiscall ***v18)(_DWORD, int); // ebx
  double v19; // st7
  int v20; // eax
  NiScreenElementsData *v21; // edx
  double v22; // st5
  double v23; // st6
  int v24; // eax
  NiGeometry *v25; // eax
  NiAVObject *v26; // edi
  int v27; // eax
  NiAVObject *v28; // esi
  NiAVObject **v29; // ebx
  __int64 v30; // kr00_8
  NiTexturingProperty *v31; // eax
  NiTexturingProperty *v32; // esi
  Ni2DBuffer *v33; // [esp+28h] [ebp-164h]
  NiRenderedTexture *v34; // [esp+28h] [ebp-164h]
  bool v35; // [esp+43h] [ebp-149h]
  int v36; // [esp+44h] [ebp-148h] BYREF
  unsigned int v37; // [esp+48h] [ebp-144h]
  float v38; // [esp+4Ch] [ebp-140h]
  NiScreenElementsData *a2; // [esp+50h] [ebp-13Ch]
  float v40; // [esp+54h] [ebp-138h]
  __int64 v41; // [esp+58h] [ebp-134h]
  int v42; // [esp+60h] [ebp-12Ch]
  float v43; // [esp+64h] [ebp-128h]
  int v44; // [esp+68h] [ebp-124h] BYREF
  __int64 v45; // [esp+6Ch] [ebp-120h]
  int v46; // [esp+74h] [ebp-118h]
  char ArgList[260]; // [esp+78h] [ebp-114h] BYREF
  int v48; // [esp+188h] [ebp-4h]

  v3 = (dword_B3526C & 1) == 0;
  v46 = arg0;
  if ( v3 )
  {
    dword_B3526C |= 1u;
    sub_444060(&dword_B35264, (int)"uSurfaceTextureSize:Water", 0x80);
    atexit(sub_A1A660);
    v48 = 0xFFFFFFFF;
  }
  v35 = 0;
  sub_49CA50((int **)this);
  v5 = (_DWORD)*(this + 6) * (_DWORD)*(this + 6);
  if ( v5 )
  {
    v6 = (unsigned __int64)(unsigned int)v5 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v5;
    v7 = (NiScreenElementsData *)FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4);
    a2 = v7;
    v48 = 1;
    if ( v7 )
    {
      p_member = (Ni2DBuffer *)&v7->member;
      v7->__vftable = (void **)v5;
      ArrayConstructor(
        &v7->member,
        4u,
        v5,
        (int)Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
    }
    else
    {
      p_member = 0;
    }
    v48 = 0xFFFFFFFF;
    *(this + 2) = p_member;
  }
  if ( *(this + 2) )
  {
    v3 = byte_B07050 == 0;
    v38 = flt_B07040;
    v43 = v38 - a3;
    if ( v3 || !ImageSpaceEffectEnabled )
    {
      _sprintf(ArgList, "%s00.DDS", (const char *)*(this + 3));
      if ( OBSE_g_FileFinder )
        OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, ArgList, (UInt32)ArgList, 0, 0xFFFFFFFF);
      if ( !*(this + 4) )
      {
        v33 = (Ni2DBuffer *)*sub_442890((UInt32 *)&v36, ArgList, 1, 0);
        v48 = 2;
        NiSmartPointer_Set__(this + 4, v33);
        v48 = 0xFFFFFFFF;
        if ( *(float *)&v36 != 0.0 )
        {
          v9 = (void (__thiscall ***)(_DWORD, int))v36;
          if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) )
            (**v9)(v9, 1);
        }
      }
      v10 = (unsigned __int16 **)(this + 7);
      if ( !*(this + 7) )
      {
        v11 = (NiScreenElementsData *)FormHeapAlloc(0x5Cu);
        a2 = v11;
        v48 = 3;
        if ( v11 )
          v12 = (Ni2DBuffer *)NiFlipController::NiFlipController((NiFlipController *)v11);
        else
          v12 = 0;
        v48 = 0xFFFFFFFF;
        NiSmartPointer_Set__(this + 7, v12);
        sub_6D1BC0(*v10, (unsigned int)*(this + 4), 0);
        v13 = 1;
        for ( i = 1; ; i = v37 + 1 )
        {
          v15 = dword_B07088;
          v16 = i < dword_B07088;
          v37 = i;
          if ( !v16 )
            break;
          _sprintf(ArgList, "%s%02d.DDS", (const char *)*(this + 3), i);
          sub_442890((UInt32 *)&v44, ArgList, 1, 0);
          v17 = v44;
          v48 = 4;
          if ( v44 )
          {
            sub_6D1BC0(*v10, v44, v13);
            v17 = v44;
            ++v13;
          }
          v48 = 0xFFFFFFFF;
          if ( v17 )
          {
            v18 = (void (__thiscall ***)(_DWORD, int))v17;
            if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
              (**v18)(v18, 1);
          }
        }
        dword_B07088 = v13;
        v35 = v15 > v13;
        (*v10)[4] = (*v10)[4] & 0xFFF6 | 1;
        (*v10)[4] &= 0xFFF9u;
      }
    }
    v19 = v38;
    v20 = Double_To_SInt32(v38);
    v21 = (NiScreenElementsData *)dword_B35264;
    v36 = v20;
    a2 = v21;
    v22 = (double)(int)v21;
    if ( (int)v21 < 0 )
      v22 = v22 + flt_A2FC78;
    v23 = (double)v20 / (v22 * flt_B07048);
    v36 = (unsigned __int16)v37 | 0xC00;
    v45 = (__int64)v23;
    v24 = (__int64)v23;
    if ( !v24 )
      v24 = 1;
    *(float *)&v36 = v19 + v19;
    a2 = (NiScreenElementsData *)sub_49D2A0(*(float *)&v36, *(float *)&v36, (int)v21, v24, 1, COERCE_FLOAT(1));
    *(float *)&v41 = v43;
    v3 = *(this + 6) == 0;
    *((float *)&v41 + 1) = 0.0;
    v37 = 0;
    *(float *)&v36 = 0.0;
    v38 = v38 + v38;
    if ( !v3 )
    {
      do
      {
        v3 = *(this + 6) == 0;
        v40 = v43;
        v42 = 0;
        if ( !v3 )
        {
          do
          {
            v25 = (NiGeometry *)FormHeapAlloc(0xC0u);
            LODWORD(v45) = v25;
            v48 = 5;
            if ( v25 )
              v26 = NiTriShape_NiTriShape(v25, a2);
            else
              v26 = 0;
            v48 = 0xFFFFFFFF;
            if ( v26 )
            {
              v27 = (int)*(this + 2);
              v28 = *(NiAVObject **)(v27 + 4 * v37);
              v29 = (NiAVObject **)(v27 + 4 * v37);
              if ( v28 != v26 )
              {
                if ( v28 )
                {
                  if ( !InterlockedDecrement((volatile LONG *)&v28->members) )
                    v28->vtbl->super.super.Destructor((NiRefObject *)v28, 1);
                }
                *v29 = v26;
                InterlockedIncrement((volatile LONG *)&v26->members);
              }
              v30 = v41;
              v26->members.m_localTransform.pos.x = v40;
              *(_QWORD *)&v26->members.m_localTransform.pos.y = v30;
              if ( !sub_43F4D0() )
              {
                v31 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
                LODWORD(v45) = v31;
                v48 = 6;
                if ( v31 )
                  v32 = NiTexturingProperty::NiTexturingProperty(v31);
                else
                  v32 = 0;
                v34 = (NiRenderedTexture *)*(this + 4);
                v48 = 0xFFFFFFFF;
                NiTexturingProperty::SetUnk08(v32, v34);
                sub_405900(v32, 2);
                v32->unk018 = v32->unk018 & 0xFFF1 | 4;
                (*((void (__thiscall **)(_DWORD, NiTexturingProperty *))(*(this + 7))->__vftable + 0x16))(
                  *(this + 7),
                  v32);
                LOWORD((*(this + 7))->members.width) |= 8u;
                sub_405680((NiNode *)v26, (BSShaderProperty *)v32);
              }
              (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)v46 + 0x84))(v46, v26, 1);
              ++v37;
              v40 = v40 + v38;
            }
            v16 = ++v42 < (unsigned int)*(this + 6);
          }
          while ( v16 );
        }
        v16 = ++v36 < (unsigned int)*(this + 6);
        *(float *)&v41 = *(float *)&v41 + v38;
      }
      while ( v16 );
    }
    if ( v35 )
      PrintError("Water art assets don't match .ini settings.\r\n");
  }
}
