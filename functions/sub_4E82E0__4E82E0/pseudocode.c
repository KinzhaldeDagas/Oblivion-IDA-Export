// Verified per-point render builder. Allocates a NiNode into TESPathGridPoint+0x28 at the point position (with a small Z offset), clones the even/odd-Z shared marker template, creates adjacency-edge geometry, and adds wireframe when linkedPointsDisabled is set. includeAllNeighbors=true renders all listed edges; false keeps only neighbor indices greater than this point's index. At the end, if TESObjectREFR_GetBaseForm(secondArgument) succeeds, it invokes that form's vtable Unk_21 with the generated node; because the only caller passes the owning TESPathGrid, the meaning of this base-form/virtual interaction remains Unknown.
void __thiscall TESPathGridPoint_RebuildRenderGeometry(
        TESPathGridPoint *this,
        TESPathGrid *grid,
        bool includeAllNeighbors)
{
  TESPathGrid *v4; // edi
  int v5; // ebx
  NiNode *v6; // eax
  NiNode *v7; // eax
  double x; // st7
  double v9; // st7
  NiAVObject *v10; // ecx
  NiObject *v11; // eax
  NiObject *v12; // eax
  float v13; // esi
  BSSimpleList_VoidPtr *p_connections; // esi
  BSSimpleList_VoidPtr *next; // eax
  int data; // edi
  TESPathGridPoint *v17; // edi
  NiNode *v18; // eax
  NiColorAlpha *v19; // ebx
  int v20; // eax
  float *p_x; // ecx
  _BYTE *v22; // edx
  float *v23; // eax
  float v24; // ebx
  float y; // ebx
  float v26; // ebx
  float v27; // ebx
  double v28; // st5
  double v29; // st5
  NiAVObject *v30; // eax
  NiAVObject *v31; // eax
  int renderNode; // ecx
  void (__thiscall *v33)(int, NiNode **, int, NiAVObject *); // edx
  NiNode *v34; // esi
  NiObjectNET *v35; // eax
  BSShaderProperty *v36; // esi
  BSShaderProperty *v37; // eax
  NiNode *v38; // ecx
  TESForm *BaseForm; // eax
  float v40; // [esp+14h] [ebp-5Ch]
  NiColorAlpha *v41; // [esp+14h] [ebp-5Ch]
  float v42; // [esp+18h] [ebp-58h]
  NiPoint3 *v43; // [esp+18h] [ebp-58h]
  float z; // [esp+1Ch] [ebp-54h] BYREF
  float v45; // [esp+20h] [ebp-50h]
  float v46; // [esp+24h] [ebp-4Ch]
  NiNode *v47; // [esp+28h] [ebp-48h] BYREF
  float v48; // [esp+2Ch] [ebp-44h] BYREF
  float v49; // [esp+30h] [ebp-40h]
  float v50; // [esp+34h] [ebp-3Ch]
  float v51; // [esp+38h] [ebp-38h]
  float v52; // [esp+3Ch] [ebp-34h]
  float v53; // [esp+40h] [ebp-30h]
  float v54; // [esp+44h] [ebp-2Ch]
  float v55; // [esp+48h] [ebp-28h]
  float v56; // [esp+4Ch] [ebp-24h]
  float v57; // [esp+50h] [ebp-20h]
  float v58; // [esp+54h] [ebp-1Ch]
  float v59; // [esp+58h] [ebp-18h]
  float v60; // [esp+5Ch] [ebp-14h]
  float v61; // [esp+60h] [ebp-10h]
  int v62; // [esp+6Ch] [ebp-4h]
  int includeAllNeighborsa; // [esp+78h] [ebp+8h]
  __int16 includeAllNeighborsb; // [esp+78h] [ebp+8h]

  v4 = grid; /*0x4e8309*/
  v5 = 0; /*0x4e830d*/
  if ( grid )
  {
    if ( this->renderNode ) /*0x4e8317*/
      TESPathGridPoint_ClearRenderNode(this); /*0x4e831c*/
    v6 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4e8326*/
    v47 = v6; /*0x4e832e*/
    v62 = 0; /*0x4e8334*/
    if ( v6 ) /*0x4e8338*/
      v7 = NiNode::NiNode(v6, 0); /*0x4e833d*/
    else
      v7 = 0; /*0x4e8344*/
    this->renderNode = (int)v7; /*0x4e8346*/
    x = this->position.x; /*0x4e8349*/
    v62 = 0xFFFFFFFF; /*0x4e834e*/
    v42 = x + 0.0; /*0x4e835a*/
    v40 = this->position.y + 0.0; /*0x4e8361*/
    z = this->position.z + dbl_A3F3F0; /*0x4e836e*/
    v48 = v42; /*0x4e8376*/
    v7->members.super.m_localTransform.pos.x = v42; /*0x4e8382*/
    v49 = v40; /*0x4e8385*/
    v9 = z; /*0x4e838d*/
    v7->members.super.m_localTransform.pos.y = v40; /*0x4e8391*/
    v50 = v9; /*0x4e8394*/
    v7->members.super.m_localTransform.pos.z = v50; /*0x4e839c*/
    z = this->position.z; /*0x4e83a2*/
    v10 = g_PathGridPointMarkerTemplateOddZ;    // Verified per-point geometry chooses the shared octahedron template by integerized Z parity: even selects g_PathGridPointMarkerTemplateEvenZ, odd selects g_PathGridPointMarkerTemplateOddZ, then clones the template with NiObject_CloneWithPointerMap. /*0x4e83b3*/
    if ( ((int)z & 1) == 0 ) /*0x4e83b9*/
      v10 = g_PathGridPointMarkerTemplateEvenZ; /*0x4e83bb*/
    v11 = NiObject_CloneWithPointerMap((NiObject *)v10); /*0x4e83c1*/
    v12 = NiRTTI_Cast((BSStringT *)&stru_B3FCD4, v11); /*0x4e83cc*/
    (*(void (__thiscall **)(int, float *, _DWORD, NiObject *))(*(_DWORD *)this->renderNode + 0x90))( /*0x4e83e6*/
      this->renderNode,
      &z,
      0,
      v12);
    if ( z != 0.0 ) /*0x4e83ee*/
    {
      v13 = z; /*0x4e83f0*/
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(z) + 4)) ) /*0x4e83f6*/
        (**(void (__thiscall ***)(float, int))LODWORD(v13))(COERCE_FLOAT(LODWORD(v13)), 1); /*0x4e840c*/
    }
    p_connections = &this->connections; /*0x4e8411*/
    if ( this->connections.firstNode.next || p_connections->firstNode.data )
    {
      v48 = 0.0; /*0x4e8423*/
      v49 = 0.0; /*0x4e8427*/
      if ( includeAllNeighbors ) /*0x4e842b*/
      {
        next = &this->connections; /*0x4e842f*/
        if ( this != (TESPathGridPoint *)0xFFFFFFE0 ) /*0x4e8431*/
        {
          do /*0x4e8440*/
          {
            if ( next->firstNode.data ) /*0x4e8433*/
              ++v5; /*0x4e8438*/
            next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x4e843b*/
          }
          while ( next ); /*0x4e8440*/
        }
      }
      else
      {
        includeAllNeighborsa = TESPathGrid_GetPointIndex(grid, this); /*0x4e844e*/
        if ( this != (TESPathGridPoint *)0xFFFFFFE0 ) /*0x4e8452*/
        {
          do /*0x4e8483*/
          {
            if ( !p_connections->firstNode.next && !p_connections->firstNode.data ) /*0x4e845a*/
              break; /*0x4e845d*/
            data = (int)p_connections->firstNode.data; /*0x4e845f*/
            if ( TESPathGrid_GetPointIndex(grid, (TESPathGridPoint *)p_connections->firstNode.data) > includeAllNeighborsa ) /*0x4e846f*/
            {
              ++v5; /*0x4e8476*/
              BSSimpleList_PushFront(&v48, data); /*0x4e8479*/
            }
            p_connections = (BSSimpleList_VoidPtr *)p_connections->firstNode.next; /*0x4e847e*/
          }
          while ( p_connections ); /*0x4e8483*/
        }
        p_connections = (BSSimpleList_VoidPtr *)&v48; /*0x4e8485*/
      }
      if ( v5 )
      {
        v17 = (TESPathGridPoint *)(2 * v5); /*0x4e8491*/
        includeAllNeighborsb = 2 * v5; /*0x4e84a2*/
        v43 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)(2 * v5)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * v5);
        v18 = (NiNode *)FormHeapAlloc((unsigned __int64)(unsigned int)(2 * v5) >> 0x1C != 0 ? 0xFFFFFFFF : 0x20 * v5);
        v19 = (NiColorAlpha *)v18; /*0x4e84cc*/
        v47 = v18; /*0x4e84d1*/
        v62 = 1; /*0x4e84d7*/
        if ( v18 ) /*0x4e84df*/
          sub_401080(v18, 0x10, (int)v17, (void *(__thiscall *)(void *))sub_47EA50); /*0x4e84ea*/
        else
          v19 = 0; /*0x4e84f1*/
        v41 = v19; /*0x4e84f4*/
        v62 = 0xFFFFFFFF; /*0x4e84f8*/
        v20 = FormHeapAlloc((unsigned int)v17); /*0x4e8500*/
        v47 = (NiNode *)v20; /*0x4e850a*/
        if ( p_connections ) /*0x4e850e*/
        {
          p_x = &v43->x; /*0x4e8516*/
          v22 = (_BYTE *)v20; /*0x4e851c*/
          v23 = (float *)v19; /*0x4e851e*/
          do /*0x4e8617*/
          {
            if ( !p_connections->firstNode.next && !p_connections->firstNode.data ) /*0x4e8526*/
              break; /*0x4e8529*/
            v17 = (TESPathGridPoint *)p_connections->firstNode.data; /*0x4e852f*/
            v24 = g_zeroNiPoint3.x; /*0x4e8533*/
            v54 = 1.0; /*0x4e8539*/
            *p_x = v24; /*0x4e853d*/
            v55 = 1.0; /*0x4e853f*/
            y = g_zeroNiPoint3.y; /*0x4e8543*/
            v57 = 1.0; /*0x4e8549*/
            p_x[1] = y; /*0x4e854d*/
            v26 = g_zeroNiPoint3.z; /*0x4e8552*/
            v56 = 0.0; /*0x4e8558*/
            p_x[2] = v26; /*0x4e855c*/
            v27 = v54; /*0x4e855f*/
            *v22 = 1; /*0x4e8563*/
            *v23 = v27; /*0x4e8566*/
            v23[1] = v55; /*0x4e856c*/
            v23[2] = v56; /*0x4e8573*/
            v23[3] = v57; /*0x4e857a*/
            z = v17->position.x - this->position.x; /*0x4e858c*/
            p_x += 6; /*0x4e8590*/
            v22 += 2; /*0x4e8596*/
            v23 += 8; /*0x4e859c*/
            v45 = v17->position.y - this->position.y; /*0x4e859f*/
            v46 = v17->position.z - this->position.z; /*0x4e85a9*/
            v51 = z; /*0x4e85b1*/
            v28 = v45; /*0x4e85b9*/
            p_x[0xFFFFFFFD] = z; /*0x4e85bd*/
            v52 = v28; /*0x4e85c0*/
            v29 = v46; /*0x4e85c8*/
            p_x[0xFFFFFFFE] = v52; /*0x4e85cc*/
            v53 = v29; /*0x4e85cf*/
            p_x[0xFFFFFFFF] = v53; /*0x4e85d7*/
            v22[0xFFFFFFFF] = 0; /*0x4e85dc*/
            v58 = 1.0; /*0x4e85e0*/
            v59 = 1.0; /*0x4e85e8*/
            v23[0xFFFFFFFC] = 1.0; /*0x4e85ec*/
            v61 = 1.0; /*0x4e85ef*/
            v23[0xFFFFFFFD] = v59; /*0x4e85f9*/
            v60 = 0.0; /*0x4e85fc*/
            v23[0xFFFFFFFE] = 0.0; /*0x4e8604*/
            v23[0xFFFFFFFF] = v61; /*0x4e860b*/
            p_connections = (BSSimpleList_VoidPtr *)p_connections->firstNode.next; /*0x4e860e*/
            LOWORD(v17) = includeAllNeighborsb; /*0x4e8613*/
          }
          while ( p_connections ); /*0x4e8617*/
        }
        v30 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x4e8626*/
        v62 = 2; /*0x4e8634*/
        if ( v30 ) /*0x4e863c*/
          v31 = NiLines_ctorWithGeometryData(v30, (unsigned __int16)v17, v43, v41, 0, 0, 0, (int)v47); /*0x4e8656*/
        else
          v31 = 0; /*0x4e865d*/
        renderNode = this->renderNode; /*0x4e865f*/
        v33 = *(void (__thiscall **)(int, NiNode **, int, NiAVObject *))(*(_DWORD *)renderNode + 0x90); /*0x4e8664*/
        v62 = 0xFFFFFFFF; /*0x4e8672*/
        v33(renderNode, &v47, 1, v31); /*0x4e867a*/
        if ( v47 ) /*0x4e8682*/
        {
          v34 = v47; /*0x4e8684*/
          if ( !InterlockedDecrement((volatile LONG *)&v47->members) ) /*0x4e868a*/
            v34->vtbl->super.super.super.Destructor((NiRefObject *)v34, 1); /*0x4e86a0*/
        }
      }
      BSSimpleList_Clear(&v48); /*0x4e86a6*/
      v4 = grid; /*0x4e86ab*/
    }
    if ( PathGraphNode_IsLinkedPointsDisabled(this) ) /*0x4e86b3*/
    {
      v35 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x4e86be*/
      v36 = (BSShaderProperty *)v35; /*0x4e86c3*/
      v62 = 3; /*0x4e86ce*/
      if ( v35 ) /*0x4e86d6*/
      {
        NiObjectNET::NiObjectNET(v35); /*0x4e86da*/
        v36->vtbl = &NiWireframeProperty::`vftable'; /*0x4e86df*/
        v36->member.super.flags = 0; /*0x4e86e5*/
        v37 = v36; /*0x4e86e9*/
      }
      else
      {
        v37 = 0; /*0x4e86ed*/
      }
      v37->member.super.flags |= 1u; /*0x4e86ef*/
      v38 = (NiNode *)this->renderNode; /*0x4e86f4*/
      v62 = 0xFFFFFFFF; /*0x4e86f8*/
      sub_405680(v38, v37); /*0x4e8700*/
    }
    if ( TESObjectREFR_GetBaseForm((TESObjectREFR *)v4) ) /*0x4e8707*/
    {
      BaseForm = TESObjectREFR_GetBaseForm((TESObjectREFR *)v4); /*0x4e8712*/
      ((void (__thiscall *)(TESForm *, int, int))BaseForm->vtbl->Unk_21)(BaseForm, this->renderNode, 1); /*0x4e8727*/
    }
  }
}
