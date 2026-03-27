// positive sp value has been detected, the output may be wrong!
void __usercall sub_555555(char *a1@<eax>, Ni2DBuffer *a2@<ebx>, int a3@<edi>, _DWORD *a4@<esi>)
{
  int *v4; // eax
  Ni2DBuffer *v5; // ebp
  int v6; // edx
  int v7; // eax
  float *v8; // eax
  int v9; // eax
  NiNode *v10; // ecx
  NiProperty *NiPropertyByID; // eax
  double v12; // st7
  int *v13; // eax
  NiAVObject *v14; // edi
  NiNode *v15; // eax
  NiAVObject *v16; // esi
  NiProperty *v17; // eax
  NiNode *v18; // eax
  NiAVObject *v19; // esi
  NiProperty *v20; // eax
  NiAVObject *v21; // eax
  NiNode *v22; // esi
  NiProperty *v23; // esi
  BOOL v24; // eax
  float *v25; // eax
  #9279 *vftable; // ecx
  double v27; // rt0
  BOOL v28; // eax
  float *v29; // eax
  #9279 *v30; // ecx
  double v31; // rt1
  LONG (__stdcall *v32)(volatile LONG *); // edi
  Ni2DBuffer *v33; // esi
  void (__thiscall ***v34)(_DWORD, int); // esi
  Ni2DBuffer *v35; // [esp-44h] [ebp-74h]
  int v36; // [esp-40h] [ebp-70h]
  char v37; // [esp-3Ch] [ebp-6Ch]
  unsigned int m_uiRefCount; // [esp-3Ch] [ebp-6Ch]
  unsigned int v39; // [esp-38h] [ebp-68h]
  unsigned int v40; // [esp-34h] [ebp-64h]
  int v41; // [esp-30h] [ebp-60h] BYREF
  Ni2DBuffer *v42; // [esp-2Ch] [ebp-5Ch]
  int v43; // [esp-24h] [ebp-54h]
  Ni2DBuffer *v44; // [esp-20h] [ebp-50h] BYREF
  unsigned int v45; // [esp-1Ch] [ebp-4Ch] BYREF
  float v46; // [esp-18h] [ebp-48h] BYREF
  float v47; // [esp-14h] [ebp-44h]
  float v48; // [esp-10h] [ebp-40h]
  float v49; // [esp-Ch] [ebp-3Ch]
  Ni2DBuffer *v50; // [esp-4h] [ebp-34h] BYREF
  NiAVObject *v51; // [esp+Ch] [ebp-24h]
  int v52; // [esp+24h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+30h] [ebp+0h] BYREF

  v4 = (int *)sub_442890((UInt32 *)&retaddr, a1, 1, v37);
  sub_55E2A0((int *)&v50, v4);
  sub_7016A0((NiD3DVertexShader *)&retaddr);
  v5 = v50;
  v6 = *a4;
  if ( v50 == a2 )
  {
    m_uiRefCount = (unsigned int)a2;
    if ( !(*(int (__thiscall **)(_DWORD *))(v6 + 0x8C))(a4) )
    {
      v36 = dword_B430DC;
      (*(void (__thiscall **)(_DWORD *, Ni2DBuffer *))(*a4 + 0x84))(a4, a2);
    }
  }
  else
  {
    m_uiRefCount = (unsigned int)v50;
    v36 = (int)a2;
    (*(void (__thiscall **)(_DWORD *))(v6 + 0x84))(a4);
    v7 = *(_DWORD *)(sub_54F7D0(v5) + 4);
    if ( v7 == 5 || v7 == 6 || (LOBYTE(v50) = (_BYTE)a2, v7 == 1) )
      LOBYTE(v50) = 1;
    sub_434980(a4, 1, (char)v50);
  }
  if ( *(_BYTE *)(a3 + 0xB4) != (_BYTE)a2 && v43 == 0xE )
  {
    v35 = v44;
    (*(void (__thiscall **)(_DWORD *, int))(*a4 + 0x80))(a4, 1);
    if ( (Ni2DBuffer *)LODWORD(v46) == a2 )
    {
      v9 = sub_4783A0();
      v8 = (float *)sub_405070(&v52, v9);
      v45 |= 1u;
    }
    else
    {
      v8 = &v46;
    }
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*a4 + 0x84))(a4, 1, *(_DWORD *)v8);
    v10 = (NiNode *)LODWORD(v48);
    a4[7] |= 0x400u;
    a4[9] = a2;
    NiPropertyByID = NiNode_GetNiPropertyByID(v10, 2);
    if ( NiPropertyByID != (NiProperty *)a2 )
    {
      m_uiRefCount = NiPropertyByID[3].members.super.m_uiRefCount;
      if ( *(float *)&m_uiRefCount < 1.0 )
      {
        v12 = flt_A46B10;
        ++NiPropertyByID[3].members.m_controller;
        *(float *)&NiPropertyByID[3].members.super.m_uiRefCount = v12;
      }
    }
  }
  v13 = NiSmartPointer_Set__(&v44, a2);
  sub_55E2A0(&v41, v13);
  NiSmartPointer_Set__((Ni2DBuffer **)&v45, a2);
  sub_551140(SLODWORD(v48), v40);
  if ( ++LODWORD(v46) < 9u )
    JUMPOUT(0x5552E0);
  v14 = v51;
  v15 = (NiNode *)v51->vtbl->GetObjectByName(v51, "FaceGenEyeLeft");
  v16 = (NiAVObject *)v15;
  if ( v15 != (NiNode *)a2 )
  {
    v17 = NiNode_GetNiPropertyByID(v15, 6);
    if ( v17 != (NiProperty *)a2 && byte_B120E4 != (_BYTE)a2 )
      LOWORD(v17[1].vtbl) = (int)v17[1].vtbl & 0xFFF1 | 6;
    sub_7B8940(v16, 1, 1, 1);
    sub_551140((int)v16, v39);
  }
  v18 = (NiNode *)v14->vtbl->GetObjectByName(v14, "FaceGenEyeRight");
  v19 = (NiAVObject *)v18;
  if ( v18 != (NiNode *)a2 )
  {
    v20 = NiNode_GetNiPropertyByID(v18, 6);
    if ( v20 != (NiProperty *)a2 && byte_B120E4 != (_BYTE)a2 )
      LOWORD(v20[1].vtbl) = (int)v20[1].vtbl & 0xFFF1 | 6;
    sub_7B8940(v19, 1, 1, 1);
    sub_551140((int)v19, m_uiRefCount);
  }
  v21 = v14->vtbl->GetObjectByName(v14, "FaceGenHair");
  v22 = (NiNode *)v21;
  if ( v21 != (NiAVObject *)a2 )
  {
    sub_7B8940(v21, 1, 1, 1);
    v23 = NiNode_GetNiPropertyByID(v22, 4);
    v24 = v23 != (NiProperty *)a2 && (*((int (__thiscall **)(NiProperty *))v23->vtbl + 0x15))(v23) == 5;
    v25 = v24 ? (float *)v23 : 0;
    if ( v25 )
    {
      vftable = v35[5].__vftable;
      v27 = dbl_A3DDD8;
      v46 = (double)(unsigned __int8)vftable / v27;
      v25[0x2A] = v46;
      v47 = (double)BYTE1(vftable) / v27;
      v25[0x2B] = v47;
      v48 = (double)BYTE2(vftable) / v27;
      v49 = 1.0;
      v25[0x2C] = v48;
      v25[0x2D] = v49;
    }
    else
    {
      v28 = v23 != (NiProperty *)a2 && (*((int (__thiscall **)(NiProperty *))v23->vtbl + 0x15))(v23) == 0xA;
      v29 = v28 ? (float *)v23 : 0;
      if ( v29 )
      {
        v30 = v35[5].__vftable;
        v31 = dbl_A3DDD8;
        v46 = (double)(unsigned __int8)v30 / v31;
        v29[0x3C] = v46;
        v47 = (double)BYTE1(v30) / v31;
        v29[0x3D] = v47;
        v48 = (double)BYTE2(v30) / v31;
        v49 = 1.0;
        v29[0x3E] = v48;
        v29[0x3F] = v49;
      }
    }
  }
  NiAVObject_InitializePropertyState(v14);
  NiAVObject_UpdateNiAVObject(v14, 0.0, (int)a2);
  v32 = InterlockedDecrement;
  if ( v42 != a2 )
  {
    v33 = v42;
    if ( !v32((volatile LONG *)&v42->members) && v33 != a2 )
      (*(void (__thiscall **)(Ni2DBuffer *, int))v33->__vftable)(v33, 1);
  }
  if ( (Ni2DBuffer *)v36 != a2 && !v32((volatile LONG *)(v36 + 4)) && (Ni2DBuffer *)v36 != a2 )
    (**(void (__thiscall ***)(int, int))v36)(v36, 1);
  v34 = (void (__thiscall ***)(_DWORD, int))v41;
  LOBYTE(retaddr) = 4;
  if ( (Ni2DBuffer *)v41 != a2 && !v32((volatile LONG *)(v41 + 4)) )
    (**v34)(v34, 1);
  FormHeapFree((unsigned int)v35);
  FormHeapFree(LODWORD(v47));
  FormHeapFree((unsigned int)a2);
  FormHeapFree((unsigned int)a2);
  FormHeapFree((unsigned int)a2);
}
