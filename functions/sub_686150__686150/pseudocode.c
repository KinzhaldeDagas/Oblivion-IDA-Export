int __thiscall sub_686150(int this, TESObjectREFR *a2)
{
  int result; // eax
  char *v5; // ebx
  bhkCharacterProxy *CharProxy; // eax
  float *v7; // edi
  float *Head; // eax
  double v9; // st6
  char v10; // bl
  int v11; // [esp+14h] [ebp-10h]
  int v12[3]; // [esp+18h] [ebp-Ch] BYREF
  int v13; // [esp+28h] [ebp+4h]
  float v14; // [esp+28h] [ebp+4h]
  float v15; // [esp+28h] [ebp+4h]

  result = (int)TeleportData_GetLinkedDoor((TeleportData *)(this + 0x14)); /*0x68615b*/
  v5 = (char *)result; /*0x686166*/
  if ( a2 ) /*0x686168*/
  {
    if ( result ) /*0x686170*/
    {
      if ( !sub_5E3290(a2) /*0x68619a*/
        || (CharProxy = MobileObject_GetCharProxy((MobileObject *)a2)) == 0
        || (result = hkCharacterContext_GetStateId((_DWORD *)CharProxy + 0x78), result != 2) )
      {
        v7 = a2->vtbl->GetPos(a2); /*0x6861af*/
        Head = (float *)EmbeddedList_GetHead(v5); /*0x6861b1*/
        *(float *)&v13 = Head[1] - v7[1]; /*0x6861bc*/
        *(float *)&v11 = Head[2] - v7[2]; /*0x6861c6*/
        *(float *)v12 = *Head - *v7; /*0x6861d3*/
        v12[1] = v13; /*0x6861db*/
        v12[2] = v11; /*0x6861e3*/
        v14 = Vector3_CalculateHeadingRadiansXY((float *)v12); /*0x6861ec*/
        v15 = sub_683B90(this, (int)a2, v14); /*0x6861ff*/
        if ( ((*((int (__thiscall **)(TESObjectREFRVtbl *))a2[1].vtbl->super.super.InitializeComponent + 0xB0))(a2[1].vtbl) /*0x686213*/
            & 2) != 0 )
        {
          v15 = v15 + dbl_A3D5B8; /*0x68621f*/
          v9 = dbl_A3D5B0; /*0x686227*/
          if ( v9 < v15 ) /*0x686234*/
            v15 = v15 - v9; /*0x686238*/
        }
        v10 = bSnapToAngle; /*0x686248*/
        if ( sub_47F6F0((float *)v12, unk_B3A468) < 0 ) /*0x686261*/
          v10 = 1; /*0x686263*/
        *(_BYTE *)(this + 0x2C) &= ~0x20u; /*0x686265*/
        if ( v10 ) /*0x68626f*/
        {
          return ((int (__thiscall *)(TESObjectREFR *, _DWORD))a2->vtbl[1].super.MarkAsModified)(a2, LODWORD(v15)); /*0x68627f*/
        }
        else
        {
          sub_685530((Actor *)a2, v15, 0); /*0x686291*/
          result = (*((int (__thiscall **)(TESObjectREFRVtbl *))a2[1].vtbl->super.super.InitializeComponent + 0xB0))(a2[1].vtbl); /*0x6862a4*/
          if ( (result & 0x30) != 0 ) /*0x6862a8*/
            *(_BYTE *)(this + 0x2C) |= 0x20u; /*0x6862aa*/
        }
      }
    }
  }
  return result; /*0x686281*/
}
