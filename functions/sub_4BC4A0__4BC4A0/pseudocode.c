// Verified: scans SubSpace reference candidates, keeps only references whose local scaled bounds contain the query, and returns the containing reference with the smallest base-form bound radius (+0x2C). This is smallest-volume/radius selection, not nearest reference-center selection.
TESObjectREFR *__cdecl TESSubSpace_FindSmallestContainingPosition(
        float *worldPosition,
        TESSubSpaceReferenceList *candidateList)
{
  float v2; // st7
  TESSubSpaceReferenceList *v3; // edi
  TESObjectREFR *i; // ebp
  TESObjectREFR *firstReference; // esi

  __asm { fld     dword ptr ds:0A32048h } /*0x4bc4a1*/
  __asm { fstp    [esp+0Ch+var_4] }
  v3 = candidateList; /*0x4bc4ad*/
  for ( i = 0; v3; v3 = (TESSubSpaceReferenceList *)v3->overflowNodes ) /*0x4bc4b5*/
  {
    firstReference = v3->firstReference; /*0x4bc4c0*/
    if ( v3->firstReference ) /*0x4bc4c0*/
    {
      if ( firstReference->vtbl->GetBaseForm(v3->firstReference) ) /*0x4bc4d0*/
      {
        if ( firstReference->vtbl->GetBaseForm(firstReference)->member.type == kFormType_SubSpace ) /*0x4bc4e6*/
        {
          if ( TESSubSpace_ContainsPosition(worldPosition, firstReference, v2) ) /*0x4bc4ea*/
          {
            _ECX = (int)firstReference->vtbl->GetBaseForm(firstReference); /*0x4bc502*/
            __asm /*0x4bc504*/
            {
              fld     dword ptr [ecx+2Ch]
              fld     [esp+14h+var_4]
              fcompp
              fnstsw  ax
            }
            if ( (_AX & 0x4100) == 0 ) /*0x4bc512*/
            {
              __asm { fld     dword ptr [ecx+2Ch] } /*0x4bc514*/
              i = firstReference; /*0x4bc517*/
              __asm { fstp    [esp+14h+var_4] } /*0x4bc519*/
            }
          }
        }
      }
    }
  }
  return i; /*0x4bc526*/
}
