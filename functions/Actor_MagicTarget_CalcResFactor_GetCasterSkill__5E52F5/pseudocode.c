int __usercall Actor_MagicTarget_CalcResFactor_::GetCasterSkill@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        float a8,
        void *a9,
        int a10,
        int a11)
{
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  int v13; // edi
  _DWORD *v14; // ecx
  int v15; // ebp
  int School; // eax
  int SkillAVFromSchool; // eax

  v11 = OblivionDynamicCast(
          a9,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicCaster `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0);
  v12 = v11;
  v13 = a3 - 0x68;
  if ( v11 )
  {
    v14 = *(_DWORD **)(a2 + 0xC);
    v15 = *v11;
    School = EffectItem_GetSchool(v14);
    SkillAVFromSchool = Magic_GetSkillAVFromSchool(School);
    (*(void (__thiscall **)(_DWORD *, int))(v15 + 0x284))(v12, SkillAVFromSchool);
  }
  return Actor_MagicTarget_CalcResFactor_::GetTargetMagicItemResistance(a1, v13, a4, a5, a6, a7, a8, (int)a9, a10, a11);
}
