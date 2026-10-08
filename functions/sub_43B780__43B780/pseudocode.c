// QueuedTreeModel allocation wrapper. Allocates 0x40-byte entry, calls 0x4376A0, attaches queued children, then schedules via vtable slot +0x20.
QueuedTreeModel_OblivionLayout **__stdcall QueuedTreeModel_CreateAndQueue(
        QueuedTreeModel_OblivionLayout **outTask,
        TESObjectREFR *reference,
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *tree,
        unsigned __int8 priority,
        IOTask *parent,
        int unknownArg)
{
  QueuedTreeModel_OblivionLayout *v6; // eax
  QueuedTreeModel_OblivionLayout *v7; // eax

  v6 = (QueuedTreeModel_OblivionLayout *)FormHeapAlloc(0x40u);// Verified: queued tree model task allocation is 0x40 bytes and uses the local QueuedTreeModel_OblivionLayout. Fallout's task implementation follows the same scheduling role but its layout is PPC-specific and must not share Oblivion offsets. /*0x43b7b6*/
  if ( v6 ) /*0x43b7cc*/
    v7 = QueuedTreeModel_ctor(v6, reference, tree, priority, unknownArg); /*0x43b7e4*/
  else
    v7 = 0; /*0x43b7eb*/
  *outTask = v7; /*0x43b7f3*/
  if ( v7 ) /*0x43b7f5*/
    InterlockedIncrement((volatile LONG *)&v7->queuedBase_000_02B[8]); /*0x43b7fb*/
  sub_43AC40((QueuedChildren **)*outTask, (volatile LONG *)parent); /*0x43b818*/
  (*(void (__thiscall **)(QueuedTreeModel_OblivionLayout *))(*(_DWORD *)(*outTask)->queuedBase_000_02B + 0x20))(*outTask); /*0x43b824*/
  return outTask; /*0x43b828*/
}
