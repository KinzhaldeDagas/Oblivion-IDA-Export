// Computes the absolute XY heading difference from actor to target, normalizes across the 360-degree boundary, optionally returns degrees, and tests it against the combat-facing threshold game setting.
char __cdecl Actor_IsFacingReferenceWithinCombatAngle(Actor *actor, TESObjectREFR *target, float *outAngleDegrees)
{
  char v4; // bl
  float *v5; // edi
  float *v6; // eax
  double v7; // st7
  bool v8; // c0
  bool v9; // c3
  double v10; // st7
  float v12[3]; // [esp+Ch] [ebp-Ch] BYREF
  float actora; // [esp+1Ch] [ebp+4h]
  float actorb; // [esp+1Ch] [ebp+4h]
  float actorc; // [esp+1Ch] [ebp+4h]
  float actord; // [esp+1Ch] [ebp+4h]
  float actore; // [esp+1Ch] [ebp+4h]
  float actorf; // [esp+1Ch] [ebp+4h]
  float actorg; // [esp+1Ch] [ebp+4h]
  float targeta; // [esp+20h] [ebp+8h]

  v4 = 0; /*0x6131e4*/
  v5 = actor->vtbl->super.super.GetPos(actor); /*0x6131ec*/
  v6 = target->vtbl->GetPos(target); /*0x6131f6*/
  actora = v6[1] - v5[1]; /*0x6131fe*/
  targeta = v6[2] - v5[2]; /*0x613208*/
  v12[0] = *v6 - *v5; /*0x613215*/
  v12[1] = actora; /*0x61321d*/
  v12[2] = targeta; /*0x613225*/
  actorb = Vector3_CalculateHeadingRadiansXY(v12); /*0x613230*/
  actorc = ((double (__thiscall *)(Actor *))actor->vtbl->super.GetZRotation)(actor) - actorb; /*0x613245*/
  actord = fabs(actorc); /*0x61324f*/
  actore = actord * dbl_A30DC8; /*0x61325d*/
  v7 = flt_A3F420; /*0x613261*/
  v8 = actore < v7; /*0x61326b*/
  v9 = actore == v7; /*0x61326b*/
  v10 = actore; /*0x61326f*/
  if ( !v8 && !v9 ) /*0x613271*/
  {
    actorf = v10 - dbl_A56CA0; /*0x61327c*/
    actorg = fabs(actorf); /*0x613286*/
    v10 = actorg; /*0x613292*/
  }
  if ( g_GameSettingStringPointers_B36CD8[0x94] > v10 ) /*0x6132a3*/
    v4 = 1; /*0x6132a5*/
  if ( outAngleDegrees ) /*0x6132ad*/
    *outAngleDegrees = v10; /*0x6132b0*/
  return v4; /*0x6132b2*/
}
