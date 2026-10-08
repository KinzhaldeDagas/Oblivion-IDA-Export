void __stdcall sub_44CDF0(NiNode *a1, int a2)
{
  NiProperty *NiPropertyByID; // ebx
  NiObject *v4; // eax
  NiObject *v5; // eax
  NiObject *v6; // esi
  char v8; // bl
  unsigned int end; // ebx
  unsigned int i; // esi
  NiNode *v11; // eax
  unsigned int v12; // [esp+10h] [ebp+4h]
  int v13; // [esp+14h] [ebp+8h]

  if ( a1 ) /*0x44cdff*/
  {
    if ( a1->vtbl->super.super.Unk_04((NiObject *)a1) ) /*0x44ce0e*/
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4); /*0x44ce25*/
      v4 = (NiObject *)NiNode_GetNiPropertyByID(a1, 6); /*0x44ce27*/
      v5 = NiRTTI_Cast((BSStringT *)&stru_B3F96C, v4); /*0x44ce32*/
      v6 = v5; /*0x44ce37*/
      if ( v5 ) /*0x44ce3e*/
      {
        v8 = NiPropertyByID != 0; /*0x44ce50*/
        sub_44CD80((int)v5[4].__vftable->Unk_02, (int)a1, (int)"Detail Map", a2, v8); /*0x44ce60*/
        sub_44CD80((int)v6[4].__vftable->Unk_05, (int)a1, (int)"Bump Map", a2, v8); /*0x44ce78*/
        sub_44CD80((int)v6[4].__vftable->Unk_04, (int)a1, (int)"Glow Map", a2, v8); /*0x44ce90*/
        sub_44CD80((int)v6[4].__vftable->Unk_03, (int)a1, (int)"Gloss Map", a2, v8); /*0x44cea8*/
        sub_44CD80((int)v6[4].__vftable->GetType, (int)a1, (int)"Dark Map", a2, v8); /*0x44cec0*/
        v12 = 0; /*0x44cecb*/
        if ( ((int)v6[3].__vftable & 0xFF0) != 0 ) /*0x44ced3*/
        {
          v13 = 0x18; /*0x44ced9*/
          do /*0x44cf1c*/
          {
            sub_44CD80(*(int *)((char *)&v6[4].__vftable->super.Destructor + v13), (int)a1, (int)"Decal Map", a2, v8); /*0x44cef8*/
            v13 += 4; /*0x44cf05*/
            ++v12; /*0x44cf18*/
          }
          while ( v12 < (unsigned __int8)(LOWORD(v6[3].__vftable) >> 4) ); /*0x44cf1c*/
        }
      }
    }
    else if ( a1->vtbl->super.super.Unk_02(a1) ) /*0x44cf2b*/
    {
      end = a1->members.children.end; /*0x44cf31*/
      for ( i = 0; i < end; ++i ) /*0x44cf31*/
      {
        if ( a1->members.children.end > i ) /*0x44cf49*/
        {
          v11 = (NiNode *)a1->members.children.data[i]; /*0x44cf51*/
          if ( v11 ) /*0x44cf56*/
            sub_44CDF0(v11, a2); /*0x44cf60*/
        }
      }
    }
  }
}
