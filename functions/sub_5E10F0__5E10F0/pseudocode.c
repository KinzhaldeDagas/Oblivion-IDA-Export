bool __thiscall sub_5E10F0(void *this, float a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp+Ch] [ebp-1Ch]
  int v9; // [esp+10h] [ebp-18h]
  int v10; // [esp+14h] [ebp-14h]
  int v11; // [esp+14h] [ebp-14h]
  float v12; // [esp+20h] [ebp-8h]
  float v13; // [esp+24h] [ebp-4h]
  void *retaddr; // [esp+28h] [ebp+0h]
  float unk11C; // [esp+2Ch] [ebp+4h]

  v10 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x284))(this, 7);
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x284))(this);
  v12 = Calc_LuckModifiedSkill(v3, 0x1D);
  v11 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)retaddr + 0x284))(retaddr, 7, v10);
  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)retaddr + 0x284))(retaddr);
  Calc_LuckModifiedSkill(v4, 0x1D);
  v5 = (*(int (__thiscall **)(void *, void *, int))(*(_DWORD *)this + 0x224))(this, retaddr, v11);
  unk11C = (float)(int)TESDataHandler_g_PlayerRef->unk11C;
  v9 = v5;
  v8 = Double_To_SInt32(v12);
  v6 = Double_To_SInt32(v13);
  return sub_548130(v6, v8, v9, unk11C);
}
