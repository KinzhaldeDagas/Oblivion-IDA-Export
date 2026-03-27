void __thiscall sub_667420(TESObjectREFR *this, int a2)
{
  int v4; // esi
  float *NiNode; // eax
  double v6; // st7
  float v7; // [esp+8h] [ebp-1Ch]
  float v8; // [esp+Ch] [ebp-18h]
  float v9; // [esp+10h] [ebp-14h]
  float v10; // [esp+14h] [ebp-10h]
  float v11; // [esp+18h] [ebp-Ch]
  float v12; // [esp+1Ch] [ebp-8h]
  float v13; // [esp+20h] [ebp-4h]
  float v14; // [esp+28h] [ebp+4h]
  float v15; // [esp+28h] [ebp+4h]

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x190))(a2) )
  {
    if ( TESObjectREFR::GetNiNode(this) )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2);
      v10 = *(float *)(v4 + 0x20);
      v11 = *(float *)(v4 + 0x24);
      v12 = *(float *)(v4 + 0x28);
      v13 = *(float *)(v4 + 0x2C);
      NiNode = (float *)TESObjectREFR::GetNiNode(this);
      v6 = NiNode[0x15] - v10;
      NiNode += 0x15;
      v7 = v6;
      v8 = NiNode[1] - v11;
      v9 = NiNode[2] - v12;
      v14 = v8 * v8 + v7 * v7 + v9 * v9;
      v15 = sqrt(v14);
      if ( v15 < (double)v13 )
      {
        if ( sub_6670F0((MobileObject *)this, v4) )
        {
          *(_WORD *)(v4 + 0x18) |= 1u;
          sub_88CF20((_WORD *)v4, 0, 1, 0);
          BSSimpleList_PushBack(&dword_B3BB44, a2);
        }
      }
    }
  }
}
