char __usercall sub_510580@<al>(char a1@<bpl>, int a2, int a3, TESObjectREFR *a4)
{
  TESObjectREFR *v4; // ecx
  ExtraDataList *ParentCell; // eax
  NiCamera *camera; // edx

  if ( a4 ) /*0x51058a*/
  {
    v4 = a4; /*0x51058c*/
LABEL_6:
    ParentCell = (ExtraDataList *)Shared_GetDwordAtOffset40(v4); /*0x5105a9*/
    goto LABEL_7; /*0x5105a9*/
  }
  if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x51059a*/
  {
    v4 = (TESObjectREFR *)reference; /*0x5105a3*/
    goto LABEL_6; /*0x5105a3*/
  }
  ParentCell = (ExtraDataList *)TES_GetCurrentCell(MEMORY[0xB333A0]); /*0x51059c*/
LABEL_7:
  camera = g_WorldSceneReceiverRoot->camera; /*0x5105ae*/
  Decal_ProjectToSceneGeometry( /*0x510613*/
    ParentCell,
    a1,
    LODWORD(camera->members.super.m_worldTransform.pos.x),
    LODWORD(camera->members.super.m_worldTransform.pos.y),
    LODWORD(camera->members.super.m_worldTransform.pos.z),
    COERCE_INT(camera->members.super.m_worldTransform.rot.data[0][0]),
    COERCE_INT(camera->members.super.m_worldTransform.rot.data[1][0]),
    COERCE_INT(camera->members.super.m_worldTransform.rot.data[2][0]),
    COERCE_FLOAT("Effects\\blooddecal.dds"),
    *(float *)&a4,
    NAN,
    0);
  return 1; /*0x51061a*/
}
