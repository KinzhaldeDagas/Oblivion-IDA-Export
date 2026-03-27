float *__thiscall sub_5713F0(
        void *this,
        int a2,
        float a3,
        int a4,
        const char *a5,
        float a6,
        float a7,
        int a8,
        float a9,
        UInt32 a10,
        const char *a11,
        float a12,
        char a13)
{
  NiAVObject **v14; // ebp
  int v15; // esi
  void *v16; // eax
  Ni2DBuffer *v17; // eax
  NiAVObject *v18; // esi
  void *v19; // ecx
  void *v20; // ecx
  NiAVObject *v21; // eax
  void (__thiscall *v22)(int, NiAVObject *, int); // eax
  float v24; // [esp+10h] [ebp-54h]
  float v25[9]; // [esp+34h] [ebp-30h] BYREF
  int v26; // [esp+60h] [ebp-4h]
  float v27; // [esp+94h] [ebp+30h]

  BSTempEff_constr((NiObject *)this, a2, a3);
  v14 = (NiAVObject **)((char *)this + 0x18);
  *(_DWORD *)this = &BSTempEffectParticle::`vftable';
  v26 = 0;
  *((_DWORD *)this + 6) = 0;
  *((float *)this + 2) = 0.0;
  *((_DWORD *)this + 7) = 0;
  v15 = *((_DWORD *)this + 6);
  LOBYTE(v26) = 1;
  if ( v15 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    *v14 = 0;
  }
  v16 = (void *)sub_439EB0((int *)ModelLoaderPtr, a5, 0, 0, 1);
  *((_DWORD *)this + 7) = a5;
  if ( !a13 )
  {
    v17 = (Ni2DBuffer *)sub_700900(v16);
    goto LABEL_14;
  }
  if ( TES )
  {
    v17 = (Ni2DBuffer *)sub_441760(TES, (int)v16);
LABEL_14:
    NiSmartPointer_Set__((Ni2DBuffer **)this + 6, v17);
    goto LABEL_15;
  }
  v18 = *v14;
  if ( *v14 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v18->members) )
    {
      if ( v18 )
        v18->vtbl->super.super.Destructor((NiRefObject *)v18, 1);
    }
    *v14 = 0;
  }
LABEL_15:
  if ( *v14 )
  {
    *((float *)this + 2) = sub_570B40(this, *v14);
    sub_98598A(v19);
    v24 = -*(float *)&a8;
    sub_98598A(v20);
    sub_7118E0(v25, a6, 0.0, v24);
    v21 = *v14;
    v27 = fabs(a12);
    v21->members.m_localTransform.pos.x = a9;
    v21 = (NiAVObject *)((char *)v21 + 0x54);
    v21->members.super.super.m_uiRefCount = a10;
    v21->members.super.m_pcName = a11;
    qmemcpy(&(*v14)->members.m_localTransform, v25, 0x24u);
    v22 = *(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)a4 + 0x84);
    (*v14)->members.m_localTransform.scale = v27;
    v22(a4, *v14, 1);
    NiAVObject_InitializePropertyState(*v14);
    NiAVObject_UpdateNiAVObject(*v14, flt_B33A30, 1);
    sub_570A30((NiObject *)*v14);
    sub_715B40((int)*v14);
  }
  return (float *)this;
}
