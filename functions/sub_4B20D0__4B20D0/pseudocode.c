NiAVObject *__thiscall sub_4B20D0(const char **this, TESObjectREFR *arg0)
{
  NiAVObject *v3; // esi
  TESObjectREFR *v4; // edi
  int (__thiscall *v5)(const char **, TESObjectREFR *); // edx
  const char *v6; // eax
  unsigned int v7; // eax
  int (__thiscall *v8)(const char **); // edx
  char *v9; // eax
  unsigned int v10; // eax
  float *v11; // eax
  int v13; // [esp+Ch] [ebp-70h]
  float v14[9]; // [esp+1Ch] [ebp-60h] BYREF
  NiTPointerMap<NiObject *,NiObject *> *v15; // [esp+40h] [ebp-3Ch] BYREF
  void (__thiscall ***v16)(_DWORD, int); // [esp+44h] [ebp-38h]
  float v17; // [esp+50h] [ebp-2Ch]
  float v18; // [esp+54h] [ebp-28h]
  float v19; // [esp+58h] [ebp-24h]
  int v20; // [esp+5Ch] [ebp-20h]
  float v21; // [esp+60h] [ebp-1Ch]
  void *v22; // [esp+64h] [ebp-18h]
  NiAVObject *v23; // [esp+68h] [ebp-14h]
  int v24; // [esp+78h] [ebp-4h]

  v3 = 0; /*0x4b20fd*/
  v23 = 0; /*0x4b20ff*/
  v20 = 0; /*0x4b2102*/
  v4 = arg0; /*0x4b2107*/
  v5 = *((int (__thiscall **)(const char **, TESObjectREFR *))*this + 0x44); /*0x4b210a*/
  v24 = 0; /*0x4b2111*/
  v22 = (void *)v5(this, arg0); /*0x4b2118*/
  if ( !v22 ) /*0x4b211b*/
    return 0; /*0x4b22ae*/
  if ( !unk_B333F4 ) /*0x4b2121*/
  {
    unk_B333F4 = 1; /*0x4b212a*/
    v6 = (const char *)(*((int (__thiscall **)(const char **))*this + 0x35))(this); /*0x4b213b*/
    unk_B333F4 = 0; /*0x4b213f*/
    if ( v6 ) /*0x4b2146*/
      strlen(v6); /*0x4b2157*/
  }
  _alloca_(v13); /*0x4b2162*/
  LOWORD(v7) = *((_WORD *)this + 0x1C); /*0x4b2167*/
  if ( (_WORD)v7 == 0xFFFF ) /*0x4b216f*/
    v7 = strlen(*(this + 0xD)); /*0x4b2174*/
  else
    v7 = (unsigned __int16)v7; /*0x4b2184*/
  if ( !v7 ) /*0x4b2189*/
  {
    v3 = (NiAVObject *)(*(int (__thiscall **)(void *))(*(_DWORD *)v22 + 8))(v22); /*0x4b2195*/
    v8 = *((int (__thiscall **)(const char **))*this + 0x35); /*0x4b2199*/
    v23 = v3; /*0x4b21a1*/
    v9 = (char *)v8(this); /*0x4b21a4*/
    NiObjectNET_SetName((NiObjectNET *)v3, v9); /*0x4b21a9*/
  }
  if ( ((unsigned int)*(this + 2) & 0x10) != 0 ) /*0x4b21b6*/
  {
    if ( arg0 ) /*0x4b21ba*/
      sub_46A9C0(arg0, 1); /*0x4b21c0*/
  }
  v21 = 1.0; /*0x4b21c9*/
  if ( arg0 ) /*0x4b21cc*/
    v21 = arg0->vtbl->GetScale(arg0); /*0x4b21da*/
  OB_NiCloningProcess_ctor(&v15); /*0x4b21e0*/
  v19 = v21; /*0x4b21e8*/
  v18 = v21; /*0x4b21eb*/
  v17 = v21; /*0x4b21ee*/
  LOWORD(v10) = *((_WORD *)this + 0x1C); /*0x4b21f1*/
  LOBYTE(v24) = 1; /*0x4b21f9*/
  if ( (_WORD)v10 == 0xFFFF ) /*0x4b21fd*/
    v10 = strlen(*(this + 0xD)); /*0x4b2202*/
  else
    v10 = (unsigned __int16)v10; /*0x4b2212*/
  if ( v10 ) /*0x4b2217*/
  {
    v23 = (NiAVObject *)sub_700610(v22, (int)&v15); /*0x4b2225*/
    v3 = v23; /*0x4b2228*/
  }
  if ( v3 ) /*0x4b222c*/
  {
    v11 = arg0->vtbl->GetPos(arg0); /*0x4b2238*/
    v3->members.m_localTransform.pos.x = *v11; /*0x4b223c*/
    v3->members.m_localTransform.pos.y = v11[1]; /*0x4b2242*/
    v3->members.m_localTransform.pos.z = v11[2]; /*0x4b224e*/
    qmemcpy(&v3->members.m_localTransform, sub_4D7AF0((float *)arg0, v14), 0x24u); /*0x4b2262*/
    NiAVObject_UpdateNiAVObject(v23, 0.0, 0); /*0x4b226d*/
    v4 = arg0; /*0x4b2272*/
    v3 = v23; /*0x4b2275*/
  }
  TESObjectLIGH_ConfigureReferencePointLight((TESObjectLIGH_DecodedLayout *)this, v4, (NiNode *)v3); /*0x4b227c*/
  NiAVObject_InitializePropertyState(v3); /*0x4b2283*/
  LOBYTE(v24) = 0; /*0x4b228d*/
  if ( v15 ) /*0x4b2291*/
    (**(void (__thiscall ***)(NiTPointerMap<NiObject *,NiObject *> *, int))v15)(v15, 1); /*0x4b2299*/
  if ( v16 ) /*0x4b22a0*/
    (**v16)(v16, 1); /*0x4b22a8*/
  return v3; /*0x4b22b3*/
}
