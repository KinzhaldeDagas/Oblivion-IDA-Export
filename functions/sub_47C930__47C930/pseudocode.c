//
// GPU world census audit 2026-09-27: assembly confirms local property-list head at object+9C, entry next+0 and property+8; property controller at +0C; object controller at +0C and next controller at +34. Collect both object/property chains and detect cycles under the same externally proved native read scope.
void __thiscall NiAVObject_UpdatePropertiesAndControllers(
        NiAVObject *this,
        float applicationTime,
        bool updateProperties)
{
  NiTList_Entry_NiProperty *propertyEntry; // esi
  NiProperty *property; // ecx
  NiInterpController *controller; // esi

  if ( updateProperties ) /*0x47c939*/
  {
    propertyEntry = this->members.m_propertyList.start; /*0x47c93b*/
    while ( propertyEntry ) /*0x47c943*/
    {
      property = propertyEntry->data; /*0x47c945*/
      propertyEntry = propertyEntry->next; /*0x47c94d*/
      if ( property ) /*0x47c94f*/
      {
        if ( property->members.m_controller ) /*0x47c951*/
          (*((void (__stdcall **)(_DWORD))property->vtbl + 0x14))(LODWORD(applicationTime)); /*0x47c964*/
      }
    }
  }
  for ( controller = this->members.super.m_controller; /*0x47c96f*/
        controller;
        controller = (NiInterpController *)controller->member.next )
  {
    ((void (__thiscall *)(NiInterpController *, _DWORD))controller->vtbl->super.Update)( /*0x47c980*/
      controller,
      LODWORD(applicationTime));                // Unconditional controller-chain Update dispatch. Traversal does not test NiTimeController.flags Active bit before calling virtual +0x54.
  }
}
