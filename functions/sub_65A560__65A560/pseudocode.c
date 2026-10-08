int __thiscall sub_65A560(Actor *this, TESObjectREFR *a2)
{
  NiNode *v3; // eax
  float *v4; // esi
  float *v5; // eax
  double v6; // st7
  float *v7; // ebx
  float *v8; // eax
  float v10[3]; // [esp+Ch] [ebp-18h] BYREF
  float v11; // [esp+18h] [ebp-Ch]
  float v12; // [esp+1Ch] [ebp-8h]
  float v13; // [esp+20h] [ebp-4h]
  float v14; // [esp+28h] [ebp+4h]

  if ( a2->vtbl->IsActor(a2) && ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.Unk_0C)(a2) ) /*0x65a585*/
  {
    v3 = a2->vtbl->GetNiNode(a2); /*0x65a59a*/
    v4 = (float *)NiObjectNET_LookupObjectByName(v3, "Bip01 Head"); /*0x65a5a2*/
    v5 = this->vtbl->super.super.GetPos(this); /*0x65a5b1*/
    v11 = v4[0x22] - *v5; /*0x65a5bb*/
    v12 = v4[0x23] - v5[1]; /*0x65a5c8*/
    v6 = v4[0x24] - v5[2]; /*0x65a5d2*/
  }
  else
  {
    v7 = this->vtbl->super.super.GetPos(this); /*0x65a5e4*/
    v8 = a2->vtbl->GetPos(a2); /*0x65a5f0*/
    v11 = *v8 - *v7; /*0x65a5f6*/
    v12 = v8[1] - v7[1]; /*0x65a600*/
    v6 = v8[2] - v7[2]; /*0x65a607*/
  }
  v13 = v6; /*0x65a60f*/
  v10[0] = v11; /*0x65a61b*/
  v10[2] = v13; /*0x65a624*/
  v10[1] = v12; /*0x65a628*/
  v14 = Vector3_CalculateHeadingRadiansXY(v10); /*0x65a631*/
  return ((int (__thiscall *)(Actor *, _DWORD))this->vtbl->super.Unk_7A)(this, LODWORD(v14)); /*0x65a648*/
}
