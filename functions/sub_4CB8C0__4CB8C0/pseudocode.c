char __userpurge sub_4CB8C0@<al>(
        TESObjectCELL *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        char a5,
        char a6)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  bool v9; // zf
  char v11; // [esp+Bh] [ebp-5h]
  TESObjectCELL *ParentCell; // [esp+Ch] [ebp-4h]

  v11 = 0;
  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    while ( 1 )
    {
      refr = p_objectList->refr;
      v9 = p_objectList->refr == 0;
      p_objectList = p_objectList->next;
      if ( !v9
        && (a5 || refr->vtbl->GetNiNode(refr) || (refr->member.super.flags & 0x800) != 0)
        && (!refr->vtbl->IsActor(refr) || !a6)
        && (RunScripts(refr, st5_0, st6_0, a4) && !a5
         || ParentCell != TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef)) )
      {
        break;
      }
      if ( !p_objectList )
        goto LABEL_14;
    }
    v11 = 1;
  }
LABEL_14:
  sub_496F50(&stru_B35C80, this);
  return v11;
}
