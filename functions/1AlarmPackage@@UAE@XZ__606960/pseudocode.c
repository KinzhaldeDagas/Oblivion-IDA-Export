// Verified ownership: destructor releases AlarmPackage list nodes and sentinel head, not Crime payloads. Before that, conditionally calls675090 to detach package references from actor processes (suppressed by data-handler flag+CD4). Paired constructor606860 and factory463EC0 establish complete object size40.
// Verified continuation: ordinary deferred forms are ultimately destroyed by manager459870, which unlinks before destructor and orders TESBoundObject/SpellItem last. Queue insertion453910, removal453940 and load-completion call4668BA close ownership chain; prior queue-drain Unknown superseded for these anchors.
void __thiscall AlarmPackage::~AlarmPackage(AlarmPackage *this)
{
  CrimeListNode *crimes; // esi
  CrimeListNode *next; // ebp

  this->base.__vftable = &AlarmPackage::`vftable'; /*0x60698a*/
  if ( !*(_BYTE *)(g_TESDataHandler + 0xCD4) ) /*0x606995*/
    sub_675090((ActorProcessManager *)&qword_B3BB2C[0x75], (BSExtraDataVtbl *)this); /*0x6069ac*/
  crimes = this->crimes; /*0x6069b1*/
  if ( crimes->next ) /*0x6069b4*/
  {
    do /*0x6069d4*/
    {
      next = crimes->next->next; /*0x6069c3*/
      FormHeapFree((unsigned int)crimes->next); /*0x6069c7*/
      crimes->next = next; /*0x6069d1*/
    }
    while ( next ); /*0x6069d4*/
  }
  crimes->crime = 0; /*0x6069d6*/
  FormHeapFree((unsigned int)this->crimes); /*0x6069e0*/
  this->crimes = 0; /*0x6069ea*/
  TESPackage::~TESPackage(&this->base); /*0x6069f9*/
}
