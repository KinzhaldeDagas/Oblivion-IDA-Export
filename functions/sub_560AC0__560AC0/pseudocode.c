void __thiscall sub_560AC0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ebp
  double v4; // st7
  double v5; // st6
  double v6; // st6
  double v7; // st6
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // rt2
  double v12; // st4
  double v13; // st6
  double v14; // rtt
  double v15; // st4
  double v16; // st7
  _DWORD *v17; // ecx
  unsigned int v18; // eax
  char *v19; // edi
  char *v21; // eax
  int *v22; // eax
  NiRenderedTexture *v23; // esi
  NiTexturingProperty *v24; // eax
  NiTexturingProperty *v25; // eax
  const char *v26; // eax
  const char *v27; // edx
  unsigned int v28; // eax
  char *v29; // edi
  int *v31; // eax
  NiTexturingProperty **v32; // esi
  int *v33; // eax
  NiRenderedTexture *v34; // edi
  NiTexturingProperty *v35; // eax
  NiTexturingProperty *v36; // eax
  NiRenderedTexture *v37; // esi
  float v38; // [esp+0h] [ebp-15Ch]
  float v39; // [esp+0h] [ebp-15Ch]
  float v40; // [esp+0h] [ebp-15Ch]
  float v41; // [esp+18h] [ebp-144h]
  float v42; // [esp+18h] [ebp-144h]
  float v43; // [esp+18h] [ebp-144h]
  float v44; // [esp+18h] [ebp-144h]
  int v45; // [esp+1Ch] [ebp-140h] BYREF
  NiRenderedTexture *v46; // [esp+20h] [ebp-13Ch] BYREF
  int v47; // [esp+24h] [ebp-138h]
  int v48; // [esp+28h] [ebp-134h] BYREF
  const void *v49[6]; // [esp+2Ch] [ebp-130h] BYREF
  char v50; // [esp+47h] [ebp-115h] BYREF
  char ArgList[260]; // [esp+48h] [ebp-114h] BYREF
  unsigned int v52; // [esp+158h] [ebp-4h]

  v2 = a2;
  v3 = this;
  v48 = (int)this;
  v47 = (int)a2;
  v46 = 0;
  v52 = 0;
  if ( a2 )
  {
    if ( *(this + 3) )
    {
      if ( *(this + 2) != 2 )
      {
        v4 = 0.0;
        v5 = flt_B12610;
        if ( v5 < 0.0 || v5 > 1.0 )
        {
          v41 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a2 + 0x14C))(a2);
          v4 = 0.0;
          v5 = v41;
        }
        if ( v5 >= v4 && v5 <= 1.0 )
        {
          v38 = v5;
          sub_7870E0((int *)v3[3], v38);
          v4 = 0.0;
        }
        v6 = flt_B12618;
        if ( v6 < v4 || v6 > 1.0 )
        {
          v42 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a2 + 0x154))(a2);
          v4 = 0.0;
          v6 = v42;
        }
        if ( v6 >= v4 && v6 <= 1.0 )
        {
          v39 = v6;
          sub_787100((int *)v3[3], v39);
          v4 = 0.0;
        }
        v7 = flt_B12608;
        if ( v7 < v4 )
        {
          v43 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a2 + 0x134))(a2);
          v4 = 0.0;
          v7 = v43;
        }
        if ( v7 >= v4 )
          *((float *)v3 + 0x11) = v7;
        *(float *)&v45 = flt_B12620;
        v44 = flt_B12628;
        v8 = *(float *)&v45;
        v9 = flt_A430CC;
        if ( *(float *)&v45 < v4 || v9 < v8 || (v10 = v44, v44 < v4) || v10 > v9 || v10 < v8 )
        {
          *(float *)&v45 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a2 + 0x13C))(a2);
          v44 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a2 + 0x144))(a2);
          v9 = flt_A430CC;
          v4 = 0.0;
          v10 = v44;
          v8 = *(float *)&v45;
        }
        v11 = v10;
        v12 = v8;
        v13 = v11;
        if ( v12 >= v4 && v12 <= v9 )
        {
          v14 = v12;
          v15 = v4;
          v16 = v14;
          if ( v15 <= v13 && v9 >= v13 && v13 >= v16 )
          {
            v40 = v16;
            sub_787160((int *)v3[3], v40);
            sub_787180((int *)v3[3], v44);
          }
        }
        if ( !v3[0xD] )
        {
          sub_786FA0(v49);
          v17 = (_DWORD *)v3[3];
          LOBYTE(v52) = 1;
          sub_78A890(v17, (int *)v49);
          strcpy(ArgList, "Textures\\Trees\\Branches\\");
          v18 = strlen((const char *)v49[0]) + 1;
          v19 = &v50;
          while ( *++v19 )
            ;
          qmemcpy(v19, v49[0], v18);
          v21 = &ArgList[&ArgList[strlen(ArgList) + 1] - &ArgList[1]];
          v21[0xFFFFFFFD] = 0x64;
          v21[0xFFFFFFFE] = 0x64;
          v21[0xFFFFFFFF] = 0x73;
          v22 = (int *)sub_442890((UInt32 *)&v45, ArgList, 1, 0);
          LOBYTE(v52) = 2;
          sub_55E2A0((int *)&v46, v22);
          LOBYTE(v52) = 1;
          sub_7016A0((NiD3DVertexShader *)&v45);
          v23 = v46;
          if ( v46 )
          {
            v24 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
            v45 = (int)v24;
            LOBYTE(v52) = 3;
            if ( v24 )
              v25 = NiTexturingProperty::NiTexturingProperty(v24);
            else
              v25 = 0;
            LOBYTE(v52) = 1;
            NiSmartPointer_Set__((Ni2DBuffer **)v3 + 0xD, (Ni2DBuffer *)v25);
            NiTexturingProperty::SetUnk08((NiTexturingProperty *)v3[0xD], v23);
          }
          LOBYTE(v52) = 0;
          sub_786FC0(v49);
          v2 = (_DWORD *)v47;
        }
        if ( !v3[0xE] )
        {
          if ( sub_449190((int)(v2 + 0xF)) )
          {
            v26 = (const char *)v2[0x10];
            strcpy(ArgList, "Textures\\Trees\\Leaves\\");
            if ( !v26 )
              v26 = EmptyString;
            v27 = v26;
            v28 = strlen(v26) + 1;
            v29 = &v50;
            while ( *++v29 )
              ;
            qmemcpy(v29, v27, v28);
            v31 = (int *)sub_442890((UInt32 *)&v45, ArgList, 1, 0);
            LOBYTE(v52) = 4;
            sub_55E2A0(v3 + 0xE, v31);
            LOBYTE(v52) = 0;
            sub_7016A0((NiD3DVertexShader *)&v45);
          }
          v2 = (_DWORD *)v47;
          v3 = (_DWORD *)v48;
        }
        v32 = (NiTexturingProperty **)(v3 + 0xF);
        if ( !v3[0xF] )
        {
          sub_786FA0(v49);
          LOBYTE(v52) = 5;
          sub_4B9C40(v2, ArgList);
          v33 = (int *)sub_442890((UInt32 *)&v48, ArgList, 1, 0);
          LOBYTE(v52) = 6;
          sub_55E2A0((int *)&v46, v33);
          LOBYTE(v52) = 5;
          sub_7016A0((NiD3DVertexShader *)&v48);
          v34 = v46;
          if ( v46 )
          {
            v35 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
            v47 = (int)v35;
            LOBYTE(v52) = 7;
            if ( v35 )
              v36 = NiTexturingProperty::NiTexturingProperty(v35);
            else
              v36 = 0;
            LOBYTE(v52) = 5;
            NiSmartPointer_Set__((Ni2DBuffer **)v3 + 0xF, (Ni2DBuffer *)v36);
            NiTexturingProperty::SetUnk08(*v32, v34);
            sub_405870(*v32, 0);
          }
          LOBYTE(v52) = 0;
          sub_786FC0(v49);
        }
        v37 = v46;
        v52 = 0xFFFFFFFF;
        if ( v46 )
        {
          if ( !InterlockedDecrement((volatile LONG *)&v46->member) )
            v37->__vftable->super.super.super.Destructor((NiRefObject *)v37, 1);
        }
      }
    }
  }
}
