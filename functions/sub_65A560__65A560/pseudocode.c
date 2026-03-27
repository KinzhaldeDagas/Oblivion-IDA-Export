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

  if ( a2->vtbl->IsActor(a2) && ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.Unk_0C)(a2) )
  {
    v3 = a2->vtbl->GetNiNode(a2);
    v4 = (float *)NiObjectNET_LookupObjectByName(v3, "Bip01 Head");
    v5 = this->vtbl->super.super.GetPos(this);
    v11 = v4[0x22] - *v5;
    v12 = v4[0x23] - v5[1];
    v6 = v4[0x24] - v5[2];
  }
  else
  {
    v7 = this->vtbl->super.super.GetPos(this);
    v8 = a2->vtbl->GetPos(a2);
    v11 = *v8 - *v7;
    v12 = v8[1] - v7[1];
    v6 = v8[2] - v7[2];
  }
  v13 = v6;
  v10[0] = v11;
  v10[2] = v13;
  v10[1] = v12;
  v14 = sub_683CB0(v10);
  return ((int (__thiscall *)(Actor *, _DWORD))this->vtbl->super.Unk_7A)(this, LODWORD(v14));
}
