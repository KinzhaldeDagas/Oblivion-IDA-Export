// positive sp value has been detected, the output may be wrong!
void __usercall Actor_MagicCaster_PlayCastingAnimation_::CastingFailure(PlayerCharacter *a1@<ebx>, int a2@<edi>)
{
  int SchoolAV; // eax
  int v3; // eax
  BSStringT *v4; // eax
  const char *m_data; // [esp-3Ch] [ebp-40h]
  float v6; // [esp-30h] [ebp-34h]
  int v7; // [esp-14h] [ebp-18h]
  BSStringT v8; // [esp-10h] [ebp-14h] BYREF
  float duration; // [esp+0h] [ebp-4h]

  if ( a1 == reference ) /*0x5f3e7d*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x30))(a2); /*0x5f3e8a*/
    SchoolAV = EffectItemList_GetSchoolAV(); /*0x5f3e91*/
    Magic_GetSchoolFromSkillAV(SchoolAV); /*0x5f3e97*/
    sub_6635E0(reference, v3); /*0x5f3ea6*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x30))(a2); /*0x5f3ebc*/
    v4 = Magic_CastFailureMsg(&v8, v7); /*0x5f3ec0*/
    v6 = kTerrainLODQuadRayDirectionZ; /*0x5f3ece*/
    m_data = v4->m_data; /*0x5f3ed5*/
    duration = 0.0; /*0x5f3ed6*/
    GameUI_QueueMessage(m_data, 0, 1u, v6); /*0x5f3ede*/
    FormHeapFree((unsigned int)v8.m_data); /*0x5f3ee8*/
  }
  else
  {
    Actor_MagicCaster_PlayCastingAnimation_::Done(); /*0x5f3e7d*/
  }
}
