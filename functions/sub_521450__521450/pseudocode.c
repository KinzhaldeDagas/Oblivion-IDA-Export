// Idle root lookup for actor model path; rejects final candidate when ANAM high bit is set but model path is not .kf.
unsigned __int8 **__thiscall sub_521450(TESObjectREFR *this, TESObjectREFR *refID, TESObjectREFR *a3)
{
  TESObjectREFR *v3; // ebp
  unsigned __int8 **v4; // edi
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // eax
  TESForm *v6; // eax
  char *FormModelPAth; // eax
  char *m_data; // esi
  TESObjectREFR *v9; // ebx
  UInt32 v10; // esi
  unsigned __int8 **v11; // eax
  BSStringT v14; // [esp+18h] [ebp-14h] BYREF
  unsigned int v15; // [esp+28h] [ebp-4h]

  v3 = refID; /*0x52147b*/
  v4 = 0; /*0x521481*/
  if ( !refID ) /*0x521485*/
    return v4; /*0x521485*/
  v14.m_data = 0; /*0x52148b*/
  v14.m_dataLen = 0; /*0x52148f*/
  v14.m_bufLen = 0; /*0x521494*/
  GetBaseForm = refID->vtbl->GetBaseForm; /*0x5214a1*/
  v15 = 0; /*0x5214a9*/
  v6 = GetBaseForm(refID); /*0x5214ad*/
  FormModelPAth = GetFormModelPAth(v6); /*0x5214b0*/
  TESIdleForm_BuildIdleAnimsRoot(FormModelPAth, &v14); /*0x5214b9*/
  m_data = v14.m_data; /*0x5214be*/
  if ( v14.m_data ) /*0x5214c7*/
  {
    if ( *v14.m_data ) /*0x5214c9*/
    {
      refID = 0; /*0x5214d8*/
      if ( NiTMap_GetAt(this, (int)v14.m_data, &refID) ) /*0x5214dc*/
      {
        v9 = refID; /*0x5214e5*/
        if ( refID ) /*0x5214eb*/
        {
          v10 = 0; /*0x5214f0*/
          refID = (TESObjectREFR *)refID->member.super.refID; /*0x5214f4*/
          if ( refID ) /*0x5214f8*/
          {
            do /*0x521526*/
            {
              v11 = (unsigned __int8 **)sub_494ED0(v9, v10); /*0x521503*/
              if ( v11 ) /*0x52150a*/
              {
                v4 = TESIdleForm_FindCandidateRecursive(v11, (Actor *)v3, a3); /*0x521519*/
                if ( v4 ) /*0x52151d*/
                  break; /*0x52151d*/
              }
              ++v10; /*0x52151f*/
            }
            while ( v10 < (unsigned int)refID ); /*0x521526*/
          }
          m_data = v14.m_data; /*0x521528*/
        }
      }
    }
  }
  v15 = 0xFFFFFFFF; /*0x52152f*/
  FormHeapFree((unsigned int)m_data); /*0x521537*/
  if ( v4 && TESIdleForm_GetHighBitFlag(v4) && !TESIdleForm_ModelPathIsKF(v4) ) /*0x521550*/
    return 0; /*0x521559*/
  else
    return v4; /*0x52155d*/
}
