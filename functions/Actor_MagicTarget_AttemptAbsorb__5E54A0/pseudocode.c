char __userpurge Actor_MagicTarget_AttemptAbsorb@<al>(int a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5, int a6)
{
  int *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  float v11; // [esp+4h] [ebp-14h]

  v6 = (int *)(a1 - 0x68);
  v7 = GetRandomLargeInteger_(0) % 0x64;
  v8 = (*(int (__thiscall **)(int *, int))(*v6 + 0x284))(v6, 0x34);
  if ( (_BYTE)a6 )
    v8 = Double_To_SInt32((double)v8 * fReflectedAbsorbChanceReduction);
  if ( v7 >= v8 )
    return Actor_MagicTarget_AttemptAbsorb_::Return_0(a3, a4, a5, a6);
  v9 = *v6;
  v11 = EffectItem_MagickaCostForCaster(*(_DWORD *)(a5 + 0xC), a2, 0);
  (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(v9 + 0x2A4))(v6, 9, LODWORD(v11), 0);
  return 1;
}
