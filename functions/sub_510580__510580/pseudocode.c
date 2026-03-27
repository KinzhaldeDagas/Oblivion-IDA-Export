char __usercall sub_510580@<al>(char a1@<bpl>, int a2, int a3, TESObjectREFR *a4)
{
  TESObjectREFR *v4; // ecx
  NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *ParentCell; // eax
  NiCamera *camera; // edx

  if ( a4 )
  {
    v4 = a4;
LABEL_6:
    ParentCell = (NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *)TESObjectREFR_GetParentCell(v4);
    goto LABEL_7;
  }
  if ( !TES->currentInteriorCell )
  {
    v4 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    goto LABEL_6;
  }
  ParentCell = (NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *)TES_GetCurrentCell(TES);
LABEL_7:
  camera = g_worldScenegraph->camera;
  NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>(
    ParentCell,
    a1,
    LODWORD(camera->members.super.m_worldTransform.pos.x),
    LODWORD(camera->members.super.m_worldTransform.pos.y),
    LODWORD(camera->members.super.m_worldTransform.pos.z),
    COERCE_INT(camera->members.super.m_worldTransform.rot.data[0][0]),
    camera->members.super.m_worldTransform.rot.data[1][0],
    camera->members.super.m_worldTransform.rot.data[2][0],
    COERCE_FLOAT("Effects\\blooddecal.dds"),
    *(float *)&a4,
    NAN,
    0);
  return 1;
}
