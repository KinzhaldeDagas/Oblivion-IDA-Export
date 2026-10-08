TESObjectREFR *__thiscall sub_6162D0(float *this, TESObjectREFR *a2)
{
  int *v3; // ecx
  char v4; // bl
  int v5; // eax
  unsigned int v6; // edi
  TESObjectREFR *result; // eax
  _DWORD *v8; // edi
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // eax

  v3 = *((int **)this + 0x10); /*0x6162d9*/
  v4 = 0; /*0x6162dc*/
  if ( v3 ) /*0x6162e1*/
  {
    do /*0x6162e3*/
    {
      v5 = v3[1]; /*0x6162e3*/
      if ( !v5 && !*v3 ) /*0x6162ea*/
        break; /*0x6162ea*/
      v6 = *v3; /*0x6162ee*/
      if ( *(TESObjectREFR **)*v3 == a2 ) /*0x6162f2*/
      {
        BSSimpleList_Remove(v3, *v3); /*0x6162fd*/
        if ( a2 == (TESObjectREFR *)reference ) /*0x616308*/
          sub_6136E0(); /*0x61630a*/
        FormHeapFree(v6);                       // Frees the removed TargetInfo with FormHeapFree after unlinking it from the target list. /*0x616310*/
        v4 = 1; /*0x616318*/
        break; /*0x616318*/
      }
      v3 = (int *)v3[1]; /*0x6162f4*/
    }
    while ( v5 ); /*0x6162e3*/
  }
  if ( sub_569E60(*((TargetData **)this + 0xA)).form == a2 /*0x616330*/
    || (result = (TESObjectREFR *)sub_5697E0(*((_DWORD **)this + 9)), result == a2) )
  {
    v8 = *((_DWORD **)this + 0xA); /*0x616332*/
    v9 = CombatController_GetCurrentTarget((int)this); /*0x616337*/
    TeSPackage_TargetData_SetTargetREFR(v8, v9); /*0x61633f*/
    v10 = *((_DWORD **)this + 9); /*0x616344*/
    v11 = CombatController_GetCurrentTarget((int)this); /*0x616349*/
    result = (TESObjectREFR *)TESPackage_LocationData_SetReference(v10, v11); /*0x616351*/
  }
  if ( v4 ) /*0x616358*/
  {
    result = (TESObjectREFR *)g_TESDataHandler; /*0x61635a*/
    if ( !*(_BYTE *)(g_TESDataHandler + 0xCD4) && !*((_BYTE *)this + 0x1A4) ) /*0x616368*/
    {
      *(this + 0x50) = *(this + 0x11); /*0x616374*/
      *(this + 0x51) = kFaceEarNormalMatchRadius; /*0x616380*/
      *(this + 0x52) = kTerrainLODQuadRayDirectionZ; /*0x61638c*/
    }
  }
  return result; /*0x616392*/
}
