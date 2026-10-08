void __thiscall sub_686060(NiDX92DBufferData **this, int a2)
{
  TES *v2; // eax
  bool v3; // zf
  NiDX92DBufferData **v4; // esi
  NiDX92DBufferData *Health; // eax
  char *v6; // ecx
  char *Head; // eax
  float v8; // ecx
  float v9; // edx
  int v10; // ebp
  UInt32 *p_unk78; // esi
  TESObjectCELL *v12; // edi
  int XCoordinate; // ebx
  int YCoordinate; // eax
  NiDX92DBufferData *v15; // [esp+0h] [ebp-18h] BYREF
  int v16; // [esp+4h] [ebp-14h]
  NiDX92DBufferData **v17; // [esp+8h] [ebp-10h]
  float v18; // [esp+Ch] [ebp-Ch]
  float v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]

  v2 = MEMORY[0xB333A0]; /*0x686063*/
  v3 = MEMORY[0xB333A0]->unk7C == 0; /*0x686068*/
  v17 = this; /*0x68606c*/
  if ( v3 && !v2->unk78 ) /*0x686076*/
    JUMPOUT(0x68614A); /*0x68614a*/
  v4 = this + 5; /*0x68607d*/
  v15 = 0; /*0x686087*/
  Health = (NiDX92DBufferData *)TESHealthForm_GetHealth((TESHealthForm *)(this + 5)); /*0x68608f*/
  if ( !sub_68BF60(v4, Health, &v15) ) /*0x68609e*/
    JUMPOUT(0x686149); /*0x686149*/
  v6 = (char *)v15; /*0x6860a4*/
  if ( !v15 ) /*0x6860aa*/
    v6 = (char *)TESHealthForm_GetHealth((TESHealthForm *)v4); /*0x6860b3*/
  Head = EmbeddedList_GetHead(v6); /*0x6860b5*/
  v8 = *(float *)Head; /*0x6860ba*/
  v9 = *((float *)Head + 1); /*0x6860bc*/
  v20 = *((_DWORD *)Head + 2); /*0x6860c2*/
  v19 = v9; /*0x6860c6*/
  v18 = v8; /*0x6860ca*/
  v10 = (int)v8 >> 0xC; /*0x6860db*/
  v16 = (int)v9; /*0x6860e2*/
  v3 = &MEMORY[0xB333A0]->unk78 == 0; /*0x6860f3*/
  p_unk78 = &MEMORY[0xB333A0]->unk78; /*0x6860f3*/
  v16 >>= 0xC; /*0x6860f6*/
  if ( v3 ) /*0x6860fa*/
    JUMPOUT(0x686148); /*0x686148*/
  while ( 1 ) /*0x686100*/
  {
    if ( !p_unk78[1] && !*p_unk78 ) /*0x686109*/
      JUMPOUT(0x686146); /*0x686146*/
    v12 = (TESObjectCELL *)*p_unk78; /*0x68610b*/
    XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)*p_unk78); /*0x686116*/
    YCoordinate = TESObjectCELL_GetYCoordinate(v12); /*0x686118*/
    if ( XCoordinate == v10 && YCoordinate == v16 ) /*0x686125*/
      break; /*0x686125*/
    p_unk78 = (UInt32 *)p_unk78[1]; /*0x686127*/
    if ( !p_unk78 ) /*0x68612c*/
      return; /*0x68612c*/
  }
  sub_686141(v17, a2); /*0x68613e*/
}
