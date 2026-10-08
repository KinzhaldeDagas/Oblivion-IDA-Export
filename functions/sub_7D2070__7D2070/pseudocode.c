// CULLING documentation correction 2026-09-27, focused Oblivion observation: category-filtered shadow object list reaches NiAVObject_Render using the supplied culling process after native shader/pass-state setup. NiAVObject_Render or a geometry vtable is not intrinsically main-view-owned. This focused annotation does not resolve all property aliases or callback semantics in this decompile.
char __thiscall sub_7D2070(int ***this, NiCullingProcess *a2)
{
  int **v2; // ecx
  NiNode *v3; // ebp
  void **vtlb; // esi
  NiProperty *NiPropertyByID; // edi
  int v6; // eax
  bool v7; // bl
  bool v8; // zf
  int *v10; // [esp+0h] [ebp-4h]

  if ( ((_BYTE)(*(this + 0x40))[6] & 1) == 0 ) /*0x7d207b*/
  {
    v2 = *(this + 0x3A); /*0x7d2081*/
    if ( v2 ) /*0x7d2089*/
    {
      while ( 1 ) /*0x7d2099*/
      {
        v3 = (NiNode *)v2[2]; /*0x7d2099*/
        v10 = *v2; /*0x7d20a3*/
        if ( v3 ) /*0x7d20a7*/
        {
          vtlb = v3->members.effects.vtlb; /*0x7d20ad*/
          if ( vtlb ) /*0x7d20b5*/
          {
            NiPropertyByID = NiNode_GetNiPropertyByID(v3, 4); /*0x7d20c4*/
            if ( !NiPropertyByID[4].members.m_pcName ) /*0x7d20c6*/
            {
              if ( MEMORY[0xB42EB4] ) /*0x7d20cc*/
                v6 = MEMORY[0xB42EB4](v3); /*0x7d20d6*/
              else
                v6 = 0; /*0x7d20dd*/
              NiPropertyByID[4].members.m_pcName = (const char *)v6; /*0x7d20df*/
            }
            if ( ((1 << (int)NiPropertyByID[4].members.m_pcName) & g_ShadowCasterCategoryMask) != 0 ) /*0x7d20f2*/
              break;                            // Reject object-list entry when its category bit is clear. /*0x7d20f2*/
          }
        }
LABEL_26:
        if ( !v10 ) /*0x7d21d8*/
          return 1; /*0x7d21d8*/
        v2 = (int **)v10; /*0x7d2095*/
      }
      v7 = sub_733840((_DWORD *)renderer->member.super.accumulator); /*0x7d210f*/
      if ( (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) < 1 /*0x7d2129*/
        || (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) > 5 )
      {
        if ( (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) != 0x1B ) /*0x7d2175*/
          goto LABEL_26; /*0x7d2175*/
        if ( v7 ) /*0x7d2179*/
          goto LABEL_25; /*0x7d2179*/
        v8 = *(_DWORD *)&v3->members.children.numObjs == 0; /*0x7d217d*/
        MEMORY[0xB42EB8] = 0; /*0x7d2184*/
        if ( v8 ) /*0x7d2189*/
        {
          unk_B42E90 = 0x154; /*0x7d219c*/
          Lighting30Shader_SelectRenderPass(0x154u);// Object/category-list renderer selects retail pass 0x154 on this branch. /*0x7d21ab*/
        }
        else
        {
          unk_B42E90 = 0x155; /*0x7d218b*/
          Lighting30Shader_SelectRenderPass(0x155u);// Object/category-list renderer selects retail pass 0x155 on this branch. /*0x7d219a*/
        }
      }
      else
      {
        if ( v7 ) /*0x7d212d*/
        {
LABEL_25:
          NiAVObject_Render((NiAVObject *)v3, a2);// Category/object-list rendering draws the pre-collected NiGeometry leaf directly. /*0x7d21c7*/
          goto LABEL_26; /*0x7d21ce*/
        }
        v8 = *(_DWORD *)&v3->members.children.numObjs == 0; /*0x7d2135*/
        MEMORY[0xB42EB8] = 0; /*0x7d213c*/
        if ( v8 ) /*0x7d2141*/
        {
          unk_B42E90 = 0x10; /*0x7d2158*/
          sub_7D1320((int *)0x10); /*0x7d2162*/
        }
        else
        {
          unk_B42E90 = 0x14; /*0x7d2145*/
          sub_7D1320((int *)0x14); /*0x7d214f*/
        }
      }
      (*(void (__thiscall **)(void *))(*(_DWORD *)vtlb[0xC] + 0x48))(vtlb[0xC]); /*0x7d21bb*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)vtlb[0xB] + 0x48))(vtlb[0xB]); /*0x7d21c5*/
      goto LABEL_25; /*0x7d21c5*/
    }
  }
  return 1; /*0x7d21e5*/
}
