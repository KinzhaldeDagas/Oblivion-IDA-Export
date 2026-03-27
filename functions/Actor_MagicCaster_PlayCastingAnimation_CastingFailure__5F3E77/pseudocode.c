// positive sp value has been detected, the output may be wrong!
void __usercall Actor_MagicCaster_PlayCastingAnimation_::CastingFailure(
        PlayerCharacter *a1@<ebx>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int SchoolAV; // eax
  int SchoolFromSkillAV; // eax
  BSStringT *v13; // eax
  const char *m_data; // [esp-3Ch] [ebp-40h]
  float v15; // [esp-30h] [ebp-34h]
  int v16; // [esp-14h] [ebp-18h]
  BSStringT v17; // [esp-10h] [ebp-14h] BYREF
  float duration; // [esp+0h] [ebp-4h]

  if ( a1 == TESDataHandler_g_PlayerRef )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x30))(a2);
    SchoolAV = EffectItemList_GetSchoolAV();
    SchoolFromSkillAV = Magic_GetSchoolFromSkillAV(SchoolAV);
    sub_6635E0(TESDataHandler_g_PlayerRef, SchoolFromSkillAV);
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x30))(a2);
    v13 = Magic_CastFailureMsg(&v17, v16);
    v15 = flt_A30634;
    m_data = v13->m_data;
    duration = 0.0;
    GameUI_QueueMessage(m_data, 0, 1u, v15);
    FormHeapFree((unsigned int)v17.m_data);
  }
  else
  {
    Actor_MagicCaster_PlayCastingAnimation_::Done(a3, a4, a5, a6, a7, a8, a9, a10, a11);
  }
}
