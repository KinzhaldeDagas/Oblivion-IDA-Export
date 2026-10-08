NiAVObject *__thiscall sub_47B7D0(TESObjectREFR **this, Ni2DBuffer *unusedTrailing, NiObjectNET *modelRoot)
{
  NiObjectNET *v5; // esi
  NiObjectNET *v6; // ebx
  _DWORD *v7; // ecx
  const char *v8; // eax
  NiExtraData *ExtraData; // eax
  int *v10; // ecx
  NiAVObject *result; // eax
  int v12; // [esp-4h] [ebp-78h]
  char *m_data; // [esp-4h] [ebp-78h]
  int v14; // [esp+14h] [ebp-60h]
  BSStringT Src; // [esp+18h] [ebp-5Ch] BYREF
  float v16[9]; // [esp+20h] [ebp-54h] BYREF
  float v17[9]; // [esp+44h] [ebp-30h] BYREF
  unsigned int v18; // [esp+70h] [ebp-4h]
  char unusedTrailinga; // [esp+78h] [ebp+4h]

  if ( unusedTrailing ) /*0x47b7ff*/
  {
    v5 = modelRoot; /*0x47b805*/
    if ( modelRoot ) /*0x47b80b*/
    {
      v14 = dword_B065CC; /*0x47b822*/
      unusedTrailinga = 0; /*0x47b826*/
      if ( *(this + 0x54) == (TESObjectREFR *)reference ) /*0x47b82b*/
        unusedTrailinga = sub_65D770(reference, (int)this); /*0x47b837*/
      v6 = (NiObjectNET *)sub_47B5B0((int **)this, (int)modelRoot, 1, unusedTrailinga, unusedTrailing); /*0x47b84c*/
      if ( !v6 ) /*0x47b852*/
      {
        v6 = modelRoot; /*0x47b85e*/
        AttachModelUsingPrnExtraData( /*0x47b860*/
          (NiNode *)*this,
          (NiAVObject *)modelRoot,
          0,
          (unsigned int)this,
          1,
          (unsigned int)unusedTrailing);
      }
      Src.m_data = 0; /*0x47b86a*/
      Src.m_dataLen = 0; /*0x47b86e*/
      Src.m_bufLen = 0; /*0x47b873*/
      v7 = *(this + 0x17); /*0x47b878*/
      v18 = 0; /*0x47b87b*/
      v8 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0xD4))(v7, v7[3]); /*0x47b88b*/
      BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B0658C, v8, v12); /*0x47b89e*/
      NiObjectNET_SetName(v6, Src.m_data); /*0x47b8ad*/
      if ( *((_BYTE *)this + 0x68) ) /*0x47b8b2*/
      {
        qmemcpy(v16, &v6[2], sizeof(v16)); /*0x47b8c6*/
        qmemcpy(&v6[2], sub_4D7C50(*(this + 0x54), v17, v16, 1), 0x24u); /*0x47b8e7*/
        v5 = modelRoot; /*0x47b8e9*/
      }
      ExtraData = NiObjectNET_GetExtraData(v5, dword_A7D0EC); /*0x47b8f4*/
      if ( ExtraData ) /*0x47b8fb*/
      {
        if ( ((int)ExtraData[1].__vftable & 0x10) != 0 ) /*0x47b906*/
          sub_4E26F0((int)v5, (int)v5); /*0x47b909*/
      }
      if ( *((_BYTE *)this + 0x68) || !(*((int (__thiscall **)(NiObjectNET *))v6->vtbl + 2))(v6) ) /*0x47b91e*/
        goto LABEL_19; /*0x47b922*/
      if ( *(this + 2 * v14 + 2) ) /*0x47b928*/
      {
        v10 = (int *)*(this + 2 * v14 + 2); /*0x47b92f*/
      }
      else
      {
        if ( !v6[1].members.super.m_uiRefCount ) /*0x47b939*/
        {
LABEL_19:
          m_data = Src.m_data; /*0x47b94b*/
          *(this + 0x19) = (TESObjectREFR *)v6; /*0x47b950*/
          v18 = 0xFFFFFFFF; /*0x47b953*/
          FormHeapFree((unsigned int)m_data); /*0x47b95b*/
          goto LABEL_20; /*0x47b95b*/
        }
        v10 = (int *)*this; /*0x47b93b*/
      }
      (*(void (__thiscall **)(int *, NiObjectNET *, int))(*v10 + 0x84))(v10, v6, 1); /*0x47b949*/
      goto LABEL_19; /*0x47b949*/
    }
  }
LABEL_20:
  result = (NiAVObject *)*(this + 0x54); /*0x47b963*/
  if ( result ) /*0x47b96b*/
  {
    result = (NiAVObject *)LODWORD(result->members.m_localTransform.rot.data[1][0]); /*0x47b96d*/
    if ( result ) /*0x47b972*/
    {
      NiAVObject_InitializePropertyState(result); /*0x47b976*/
      return (NiAVObject *)NiNode_UpdateDynamicEffectState((NiNode *)(*(this + 0x54))->member.niNode); /*0x47b984*/
    }
  }
  return result; /*0x47b989*/
}
