void __thiscall sub_68B440(int *this, TESObjectREFR *a2, float *a3, int a4)
{
  int *v4; // edi
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  float *v6; // eax
  float v7[6]; // [esp+Ch] [ebp-38h] BYREF
  char v8; // [esp+24h] [ebp-20h]
  unsigned int v9; // [esp+40h] [ebp-4h]

  v4 = this + 5;
  sub_68C6E0(this + 5);
  if ( TESObjectREFR_GetParentCell(a2) )
  {
    sub_67D760(v7);
    GetPos = a2->vtbl->GetPos;
    v9 = 0;
    v8 = 1;
    v6 = GetPos(a2);
    sub_67EB60(v7, v6, a3, a2, 0.0);
    sub_67E3D0((char *)v7, v4, a2);
    v9 = 0xFFFFFFFF;
    TESTexture::ClearComponentReferences(v7);
  }
}
