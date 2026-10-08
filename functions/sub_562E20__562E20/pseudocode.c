//
// [2026-10-06 directional billboard] Verified comparison: Fallout 0x8246C6E0 also builds a single billboard, but uses SpeedTreeBillboardShaderProperty/texture sets. Oblivion uses NiTexturingProperty and AssignShadersRecursive shader 1. Do not transplant Fallout renderer layouts.
void __thiscall BSTreeModel_CreateBillboardGeometry(
        BSTreeModel_OblivionLayout_058 *this,
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *tree)
{
  bool v3; // zf
  NiTriShape *v4; // eax
  Ni2DBuffer *v5; // eax
  NiNode **p_billboardShape_STBB; // esi
  BSShaderProperty *AlphaProperty; // ebp
  NiTexturingProperty *billboardTexturingProperty; // edi
  NiProperty *NiPropertyByID; // eax
  NiObject *v10; // eax
  LONG (__stdcall *v11)(volatile LONG *); // edi
  NiScreenElementsData *v12; // esi
  NiScreenElementsData *a2; // [esp+14h] [ebp-170h] BYREF
  void *v14; // [esp+18h] [ebp-16Ch]
  float position3[3]; // [esp+1Ch] [ebp-168h] BYREF
  float direction3[3]; // [esp+28h] [ebp-15Ch] BYREF
  float directionOut3[3]; // [esp+34h] [ebp-150h] BYREF
  float positionOut3[3]; // [esp+40h] [ebp-144h] BYREF
  OB_SpeedTreeGeometryOutput_010201A0 v19; // [esp+4Ch] [ebp-138h] BYREF
  unsigned int v20; // [esp+180h] [ebp-4h]

  OB_SpeedTreeGeometryOutput_init_010201A0(&v19); /*0x562e59*/
  v3 = this->speedTree == 0; /*0x562e60*/
  position3[0] = 0.0; /*0x562e64*/
  position3[1] = 0.0; /*0x562e68*/
  v20 = 0; /*0x562e6c*/
  position3[2] = 0.0; /*0x562e77*/
  direction3[0] = 0.0; /*0x562e7b*/
  direction3[1] = flt_A30634; /*0x562e85*/
  direction3[2] = 0.0; /*0x562e89*/
  if ( !v3 && this->modelState_0_uninit_1_base_2_instance != 2 ) /*0x562e97*/
  {
    if ( tree ) /*0x562e9f*/
    {
      CSpeedTreeRT__GetCamera(positionOut3, directionOut3); /*0x562eaf*/
      CSpeedTreeRT__SetCamera(position3, direction3); /*0x562ebe*/
      CSpeedTreeRT__SetLodLevel(this->speedTree, 0.0); /*0x562ecf*/
      TESObjectTREE_BuildBillboardQuadData((TESObjectTREE_BillboardTail *)tree, (NiTriShapeData **)&a2, 0); /*0x562edd*/
      a2->member.super.super.super.m_usDirtyFlags = a2->member.super.super.super.m_usDirtyFlags & 0xFFF | 0x4000; /*0x562ef4*/
      a2->member.super.super.super.m_ucKeepFlags = 0x11; /*0x562efc*/
      LOBYTE(v20) = 1; /*0x562f09*/
      a2->member.super.super.super.m_ucCompressFlags = 0x1F; /*0x562f11*/
      v4 = (NiTriShape *)FormHeapAlloc(0xC0u); /*0x562f15*/
      v14 = v4; /*0x562f1d*/
      LOBYTE(v20) = 2; /*0x562f23*/
      if ( v4 ) /*0x562f2b*/
        v5 = (Ni2DBuffer *)OB_NiTriShape_ctorWithData_010201A0(v4, (NiTriShapeData *)a2);// Verified: OB_NiTriShape_ctorWithData constructs the NiTriShape stored as model.billboardShape_STBB (+0x1C); it is named STBB and later attached through BSTreeNode_SetBillboard. /*0x562f34*/
      else
        v5 = 0; /*0x562f3b*/
      p_billboardShape_STBB = (NiNode **)&this->billboardShape_STBB;// Verified STBB model field producer: BSTreeModel_CreateBillboardGeometry creates a NiTriShape from TESObjectTREE_BuildBillboardQuadData, stores it in BSTreeModel.billboardShape_STBB (+0x1C), and names it STBB. /*0x562f3d*/
      LOBYTE(v20) = 1; /*0x562f43*/
      NiSmartPointer_Set__((Ni2DBuffer **)&this->billboardShape_STBB, v5);// Verified: assigns the newly constructed NiTriShape to billboardShape_STBB via an owning smart pointer. /*0x562f4b*/
      NiObjectNET_SetName((NiObjectNET *)this->billboardShape_STBB, "STBB"); /*0x562f57*/
      AlphaProperty = (BSShaderProperty *)BSTreeModel_CreateAlphaProperty(); /*0x562f61*/
      v14 = AlphaProperty; /*0x562f65*/
      if ( AlphaProperty ) /*0x562f69*/
        InterlockedIncrement((volatile LONG *)&AlphaProperty->member); /*0x562f6f*/
      LOBYTE(v20) = 3; /*0x562f77*/
      if ( AlphaProperty ) /*0x562f7f*/
        sub_405680(*p_billboardShape_STBB, AlphaProperty); /*0x562f84*/
      billboardTexturingProperty = this->billboardTexturingProperty; /*0x562f89*/
      if ( billboardTexturingProperty ) /*0x562f8e*/
        sub_405680(*p_billboardShape_STBB, (BSShaderProperty *)billboardTexturingProperty); /*0x562f93*/
      BSShaderManager_AssignShadersRecursive((NiAVObject *)*p_billboardShape_STBB, 1u, 1, 1); /*0x562fa1*/
      NiPropertyByID = NiNode_GetNiPropertyByID(*p_billboardShape_STBB, 4); /*0x562fad*/
      if ( NiPropertyByID ) /*0x562fb4*/
      {
        NiPropertyByID[1].members.super.m_uiRefCount |= (unsigned int)&loc_402000; /*0x562fb6*/
        NiPropertyByID[1].members.m_controller = 0; /*0x562fbd*/
      }
      v10 = NiRTTI_Cast((BSStringT *)&stru_B44F90, (NiObject *)(*p_billboardShape_STBB)->members.effects.vtlb); /*0x562fd2*/
      if ( v10 ) /*0x562fdc*/
      {
        renderer->__vftable->super.NiRenderer::PrecacheGeometryData( /*0x562ff7*/
          (NiRenderer *)renderer,
          (UInt32)*p_billboardShape_STBB,
          0,
          0,
          v10[0xF].members.m_uiRefCount);
        sub_769030(renderer); /*0x562fff*/
      }
      CSpeedTreeRT__SetCamera(positionOut3, directionOut3); /*0x56300e*/
      v11 = InterlockedDecrement; /*0x563013*/
      LOBYTE(v20) = 1; /*0x56301e*/
      if ( AlphaProperty ) /*0x563026*/
      {
        if ( !v11((volatile LONG *)&AlphaProperty->member) ) /*0x56302c*/
          (*(void (__thiscall **)(BSShaderProperty *, int))AlphaProperty->vtbl)(AlphaProperty, 1); /*0x56303b*/
      }
      v12 = a2; /*0x56303d*/
      LOBYTE(v20) = 0; /*0x563043*/
      if ( a2 ) /*0x56304b*/
      {
        if ( !v11((volatile LONG *)&a2->member) ) /*0x563051*/
        {
          if ( v12 ) /*0x563059*/
            (*(void (__thiscall **)(NiScreenElementsData *, int))v12->__vftable)(v12, 1); /*0x563063*/
        }
      }
    }
  }
  v20 = 0xFFFFFFFF; /*0x563069*/
  OB_SpeedTreeGeometryOutput_Dtor_010201A0(&v19); /*0x563074*/
}
