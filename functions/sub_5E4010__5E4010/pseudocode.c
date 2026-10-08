void __thiscall sub_5E4010(Actor *this, char a2)
{
  LowProcess *process; // ecx
  int v4; // eax
  int v5; // eax
  char v6; // cl
  double v7; // st7
  float delta; // [esp+4h] [ebp-Ch]
  float v9; // [esp+Ch] [ebp-4h]
  float v10; // [esp+14h] [ebp+4h]

  process = this->members.super.process; /*0x5e4014*/
  if ( process && (v4 = (int)process->GetEquippedWeaponData(process, 1)) != 0 ) /*0x5e4029*/
    v5 = *(_DWORD *)(v4 + 8); /*0x5e402b*/
  else
    v5 = 0; /*0x5e4030*/
  if ( !v5 ) /*0x5e4034*/
  {
    v7 = 0.0; /*0x5e404b*/
    goto LABEL_10; /*0x5e404b*/
  }
  v6 = *(_BYTE *)(v5 + 0x90); /*0x5e4036*/
  if ( v6 != 5 && v6 != 4 ) /*0x5e4044*/
  {
    v7 = *(float *)(v5 + 0x7C); /*0x5e4046*/
LABEL_10:
    v9 = v7; /*0x5e404d*/
    v10 = sub_547560(v9, a2); /*0x5e4063*/
    delta = -v10; /*0x5e4072*/
    Actor_ApplyNegativeFatigueDeltaClamped(this, delta); /*0x5e4075*/
  }
}
