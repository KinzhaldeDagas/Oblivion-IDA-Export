// positive sp value has been detected, the output may be wrong!
int __userpurge ValueModifierEffect_GetEffectiveMagnitude_::TestActualMagnitude@<eax>(
        int *a1@<edi>,
        int a2@<esi>,
        float a3,
        float a4,
        float a5)
{
  int v5; // ebx
  int v6; // eax
  float v8; // [esp+Ch] [ebp+Ch]

  v5 = *a1;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x44))(a2);
  v8 = ((double (__thiscall *)(int *, int))*(_DWORD *)(v5 + 0x288))(a1, v6) + a5;
  if ( v8 >= 0.0 )
    return ValueModifierEffect_GetEffectiveMagnitude_::ReturnSameMagnitude(a3);
  else
    return ValueModifierEffect_GetEffectiveMagnitude_::ReturnReducedMagnitude(a3);
}
