// AVU decode: MagicTarget::AttemptAbsorb. ECX is MagicTarget subobject; owning Actor is ECX-0x68. Rolls Game_RandomLargeInteger()%100 against current AV 0x34 SpellAbsorbChance.
char __userpurge Actor_MagicTarget_AttemptAbsorb@<al>(int a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5, int a6)
{
  int *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  float v11; // [esp+4h] [ebp-14h]

  v6 = (int *)(a1 - 0x68); /*0x5e54b4*/
  v7 = Game_RandomLargeInteger(0) % 0x64; /*0x5e54be*/
  v8 = (*(int (__thiscall **)(int *, int))(*v6 + 0x284))(v6, 0x34); /*0x5e54c8*/
  if ( (_BYTE)a6 )                              // AVU hook site: EAX holds current SpellAbsorbChance from actor vtbl+0x284, EDI holds 0..99 roll. Original code checks reflected flag at stack arg_C before comparing. /*0x5e54d3*/
    v8 = Double_To_SInt32((double)v8 * flt_B37ED0[0xF0]);// If reflected flag is set, vanilla multiplies the integer absorb chance by fReflectedAbsorbChanceReduction, then calls Double_To_SInt32 before the roll compare. /*0x5e54df*/
  if ( v7 >= v8 ) /*0x5e54e6*/
    return Actor_MagicTarget_AttemptAbsorb_::Return_0(a3, a4, a5, a6);// Spell absorption succeeds when the 0..99 engine roll is below current actor value 0x34; success negates the effect and refunds its magicka cost. /*0x5e54e6*/
  v9 = *v6; /*0x5e54ef*/
  v11 = EffectItem_MagickaCostForCaster(*(_DWORD *)(a5 + 0xC), a2, 0); /*0x5e5501*/
  (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(v9 + 0x2A4))(v6, 9, LODWORD(v11), 0); /*0x5e5508*/
  return 1; /*0x5e550a*/
}
