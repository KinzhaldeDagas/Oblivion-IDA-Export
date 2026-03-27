int __usercall Actor_MagicTarget_CalcResFactor_::GetTargetMagicItemResistance@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        int a10)
{
  int v10; // eax
  int v11; // ebx
  int v13; // [esp+10h] [ebp+10h]

  if ( (_BYTE)a9 || (v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18))(a1), v11 = 0x40, v10 == 5) )
    v11 = 0x43;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x288))(a2, v11);
  *(float *)&v13 = a3;
  return Actor_MagicTarget_CalcResFactor_::GetTargetEffectItemResistance(v11, a2, a4, a5, a6, v13, a8, a9, a10);
}
