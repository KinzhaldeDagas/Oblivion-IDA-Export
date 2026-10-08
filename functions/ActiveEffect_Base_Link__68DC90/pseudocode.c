// Verified ActiveEffect link stage resolves saved caster (+0x24), target (+0x20), bound object (+0x30), and hit-effect references (+0x34). The explicit linkContext is Probable TESObjectREFR*/Actor context: Player_LinkModifiedForm passes PlayerCharacter*, NightEyeEffect_Link requires PlayerCharacter*, and VampirismEffect_Link RTTI-casts it to Actor; modified-extra loading passes null.
int __thiscall ActiveEffect_Base_Link(ActiveEffect *this, TESObjectREFR *linkContext)
{
  int v3; // [esp+10h] [ebp+8h]
  int v4; // [esp+14h] [ebp+Ch]

  return ActiveEffect_Base_Link_::ResolveCaster((int)this, (int)linkContext, v3, v4);
}
