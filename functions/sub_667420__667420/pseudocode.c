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

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x190))(a2) ) /*0x667435*/
  {
    if ( TESObjectREFR::GetNiNode(this) ) /*0x667441*/
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2); /*0x66745b*/
      v10 = *(float *)(v4 + 0x20); /*0x667466*/
      v11 = *(float *)(v4 + 0x24); /*0x66746d*/
      v12 = *(float *)(v4 + 0x28); /*0x667473*/
      v13 = *(float *)(v4 + 0x2C); /*0x667477*/
      NiNode = (float *)TESObjectREFR::GetNiNode(this); /*0x66747b*/
      v6 = NiNode[0x15] - v10; /*0x667483*/
      NiNode += 0x15; /*0x667487*/
      v7 = v6; /*0x66748a*/
      v8 = NiNode[1] - v11; /*0x667495*/
      v9 = NiNode[2] - v12; /*0x6674a0*/
      v14 = v8 * v8 + v7 * v7 + v9 * v9; /*0x6674c8*/
      v15 = sqrt(v14); /*0x6674d5*/
      if ( v15 < (double)v13 ) /*0x6674e6*/
      {
        if ( sub_6670F0((MobileObject *)this, v4) ) /*0x6674eb*/
        {
          *(_WORD *)(v4 + 0x18) |= 1u; /*0x6674f4*/
          sub_88CF20((NiObjectNET *)v4, 0, 1, 0); /*0x667500*/
          BSSimpleList_PushBack(&qword_B3BB2C[6], a2); /*0x66750e*/
        }
      }
    }
  }
}
