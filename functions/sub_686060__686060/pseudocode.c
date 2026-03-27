int __thiscall sub_686060(_DWORD *this, int a2)
{
  TES *v2; // eax
  bool v3; // zf
  Sky *v4; // esi
  NiNode *Health; // eax
  char *v6; // ecx
  int v7; // eax
  float v8; // ecx
  float v9; // edx
  int v10; // ebp
  UInt32 *p_unk78; // esi
  TESObjectCELL *v12; // edi
  int XCoordinate; // ebx
  int result; // eax
  char *v15; // [esp+0h] [ebp-18h] BYREF
  int v16; // [esp+4h] [ebp-14h]
  _DWORD *v17; // [esp+8h] [ebp-10h]
  float v18; // [esp+Ch] [ebp-Ch]
  float v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]

  v2 = TES;
  v3 = TES->unk7C == 0;
  v17 = this;
  if ( v3 && !v2->unk78 )
    JUMPOUT(0x68614A);
  v4 = (Sky *)(this + 5);
  v15 = 0;
  Health = TESHealthForm_GetHealth((Sky *)(this + 5));
  if ( !sub_68BF60(v4, Health, &v15) )
    JUMPOUT(0x686149);
  v6 = v15;
  if ( !v15 )
    v6 = (char *)TESHealthForm_GetHealth(v4);
  v7 = sub_6899C0(v6);
  v8 = *(float *)v7;
  v9 = *(float *)(v7 + 4);
  v20 = *(_DWORD *)(v7 + 8);
  v19 = v9;
  v18 = v8;
  v10 = (int)v8 >> 0xC;
  v16 = (int)v9;
  v3 = &TES->unk78 == 0;
  p_unk78 = &TES->unk78;
  v16 >>= 0xC;
  if ( v3 )
    JUMPOUT(0x686148);
  while ( 1 )
  {
    if ( !p_unk78[1] && !*p_unk78 )
      JUMPOUT(0x686146);
    v12 = (TESObjectCELL *)*p_unk78;
    XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)*p_unk78);
    result = TESObjectCELL_GetYCoordinate(v12);
    if ( XCoordinate == v10 && result == v16 )
      break;
    p_unk78 = (UInt32 *)p_unk78[1];
    if ( !p_unk78 )
      return result;
  }
  return sub_686141(a2);
}
