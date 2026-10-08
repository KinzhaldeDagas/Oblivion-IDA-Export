int __usercall Actor_MagicTarget_CalcResFactor_::GetCasterSkill@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        double a4@<st0>,
        int a5,
        float a6,
        int a7,
        float a8,
        void *a9,
        int a10,
        int a11)
{
  int *v11; // eax
  int v12; // esi
  int v13; // edi
  _DWORD *v14; // ecx
  int v15; // ebp
  int School; // eax
  int v17; // eax
  int v18; // ebp

  v11 = (int *)OblivionDynamicCast( /*0x5e5308*/
                 a9,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&MagicCaster `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
  v12 = (int)v11; /*0x5e530d*/
  v13 = a3 - 0x68; /*0x5e5312*/
  if ( !v11 ) /*0x5e5317*/
    return Actor_MagicTarget_CalcResFactor_::GetTargetMagicItemResistance( /*0x5e533c*/
             a1,
             v13,
             a4,
             0x64,
             0,
             a5,
             a6,
             a7,
             a8,
             (int)a9,
             a10,
             a11);
  v14 = *(_DWORD **)(a2 + 0xC); /*0x5e5319*/
  v15 = *v11; /*0x5e531c*/
  School = EffectItem_GetSchool(v14); /*0x5e531e*/
  Magic_GetSkillAVFromSchool(School); /*0x5e5324*/
  v18 = (*(int (__thiscall **)(int, int))(v15 + 0x284))(v12, v17); /*0x5e5337*/
  return Actor_MagicTarget_CalcResFactor_::GetTargetMagicItemResistance(
           a1,
           v13,
           a4,
           v18,
           v12,
           a5,
           a6,
           a7,
           a8,
           (int)a9,
           a10,
           a11);
}
