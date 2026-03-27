void __stdcall sub_44CDF0(NiNode *a1, int a2)
{
  NiProperty *NiPropertyByID; // ebx
  NiObject *v4; // eax
  NiObject *v5; // eax
  NiObject *v6; // esi
  char v8; // bl
  unsigned int end; // ebx
  unsigned int i; // esi
  int v11; // eax
  unsigned int v12; // [esp+10h] [ebp+4h]
  int v13; // [esp+14h] [ebp+8h]

  if ( a1 )
  {
    if ( a1->vtbl->super.super.Unk_04((NiObject *)a1) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
      v4 = (NiObject *)NiNode_GetNiPropertyByID(a1, 6);
      v5 = NiRTTI_Cast((BSStringT *)dword_B3F96C, v4);
      v6 = v5;
      if ( v5 )
      {
        v8 = NiPropertyByID != 0;
        sub_44CD80((int)v5[4].__vftable->Unk_02, (int)a1, (int)"Detail Map", a2, v8);
        sub_44CD80((int)v6[4].__vftable->Unk_05, (int)a1, (int)"Bump Map", a2, v8);
        sub_44CD80((int)v6[4].__vftable->Unk_04, (int)a1, (int)"Glow Map", a2, v8);
        sub_44CD80((int)v6[4].__vftable->Unk_03, (int)a1, (int)"Gloss Map", a2, v8);
        sub_44CD80((int)v6[4].__vftable->GetType, (int)a1, (int)"Dark Map", a2, v8);
        v12 = 0;
        if ( ((int)v6[3].__vftable & 0xFF0) != 0 )
        {
          v13 = 0x18;
          do
          {
            sub_44CD80(*(int *)((char *)&v6[4].__vftable->super.Destructor + v13), (int)a1, (int)"Decal Map", a2, v8);
            v13 += 4;
            ++v12;
          }
          while ( v12 < (unsigned __int8)(LOWORD(v6[3].__vftable) >> 4) );
        }
      }
    }
    else if ( a1->vtbl->super.super.Unk_02((NiObject *)a1) )
    {
      end = a1->members.children.end;
      for ( i = 0; i < end; ++i )
      {
        if ( a1->members.children.end > i )
        {
          v11 = *((_DWORD *)&a1->members.children.data->vtbl + i);
          if ( v11 )
            sub_44CDF0(v11, a2);
        }
      }
    }
  }
}
