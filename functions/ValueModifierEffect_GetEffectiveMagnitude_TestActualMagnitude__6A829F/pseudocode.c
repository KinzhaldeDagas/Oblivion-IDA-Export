// positive sp value has been detected, the output may be wrong!
void __userpurge ValueModifierEffect_GetEffectiveMagnitude_::TestActualMagnitude(
        int *a1@<edi>,
        int a2@<esi>,
        float a3,
        float a4,
        float a5)
{
  int v5; // ebx
  int v6; // eax
  float v7; // [esp+Ch] [ebp+Ch]

  v5 = *a1; /*0x6a82a4*/
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x44))(a2); /*0x6a82a8*/
  v7 = ((double (__thiscall *)(int *, int))*(_DWORD *)(v5 + 0x288))(a1, v6) + a5; /*0x6a82c1*/
  if ( v7 >= 0.0 ) /*0x6a82d4*/
    ValueModifierEffect_GetEffectiveMagnitude_::ReturnSameMagnitude(a3); /*0x6a82d4*/
  else
    ValueModifierEffect_GetEffectiveMagnitude_::ReturnReducedMagnitude(a3); /*0x6a82d5*/
}
