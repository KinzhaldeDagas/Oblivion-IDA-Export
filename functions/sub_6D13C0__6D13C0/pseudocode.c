// NiGeomMorpherController::Update. Requires morphData +0x50. Native timing reads NiTimeController.flags at +0x08: bit 0x20 forces cachedScaledTime +0x28 to the sentinel and weightsDirty +0x58; otherwise NiTimeController_IsUpdateUnchanged may recompute +0x28, with +0x5A able to force sampling. If target +0x30 exists and weights are dirty, interpolators are sampled at cachedScaledTime and geometry is queued/committed. Deployed Crossbow meshes prove Base/weight0=released and BowMorph/weight1=cocked, hence Cocked=.333333 and Release=.366667. Critical external Crossbow contrast: controller->flags resolves derived morphFlags +0x3C, not base timing flags +0x08, so current source clears unrelated morpher bits while native timing can overwrite its custom +0x28. If corrected to the base field, clearing 0x20 prevents the manager sentinel and clearing Active 0x08 makes IsUpdateUnchanged reuse the custom time; source-set weightsDirty still causes sampling. Oblivion 0x47C930 dispatches attached-controller Update without an A
void __thiscall NiGeomMorpherController_Update(NiGeomMorpherController *this, float applicationTime)
{
  _DWORD *v3; // edi

  if ( this->morphData ) /*0x6d13c3*/
  {                                             // Test NiTimeController.flags at object +0x08 for bit 0x20 (interpolator/manager-controlled). This is not NiGeomMorpherController.morphFlags at +0x3C.
    if ( (this->super.members.flags & 0x20) != 0 ) /*0x6d13d5*/
    {
      this->weightsDirty = 1; /*0x6d13d7*/
      this->super.members.cachedScaledTime = flt_A7A164;// Manager-controlled path overwrites cachedScaledTime +0x28 with the native sentinel before morph interpolation. /*0x6d13e1*/
    }
    else if ( !NiTimeController_IsUpdateUnchanged(&this->super, applicationTime) || this->forceSampleUnchangedTime )// Ordinary path asks NiTimeController_IsUpdateUnchanged; for an active controller whose application time changed, it can recompute and overwrite cachedScaledTime +0x28 before this Update samples weights. /*0x6d13f7*/
    {
      this->weightsDirty = 1; /*0x6d13fd*/
    }
    if ( this->super.members.m_pTarget ) /*0x6d1401*/
    {
      if ( this->weightsDirty ) /*0x6d1407*/
      {
        NiGeomMorpherController_SampleInterpolators(this, this->super.members.cachedScaledTime); /*0x6d1416*/
        if ( unk_B3CE19 ) /*0x6d141b*/
        {
          if ( NiParallelUpdateTaskManager_HasPendingSignal() ) /*0x6d1424*/
          {
            if ( *(_DWORD *)(*(_DWORD *)&this->super.members.m_pTarget->members.children.capacity + 4) == 1 ) /*0x6d143a*/
            {
              v3 = (_DWORD *)sub_6EBF20(); /*0x6d1442*/
              if ( v3 ) /*0x6d1446*/
              {
                sub_6EBC20(v3, (int)this, (int)this->super.members.m_pTarget); /*0x6d144f*/
                if ( !(unsigned __int8)NiParallelUpdateTaskManager_SubmitTaskWrapper( /*0x6d145d*/
                                         (void *)g_NiParallelUpdateTaskManager,
                                         (int)v3,
                                         2) )   // 3DTheft decode 2026-05-16: pending manager path submits a NiGeomMorpherUpdateTask through wrapper around manager vfunc +0x60; fallback calls task cleanup vfunc +0x54 if submission fails.
                  (*(void (__thiscall **)(_DWORD *))(*v3 + 0x54))(v3); /*0x6d146d*/
              }
            }
          }
        }
      }
    }
  }
}
