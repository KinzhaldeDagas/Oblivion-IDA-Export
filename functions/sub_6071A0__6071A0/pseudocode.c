// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
// Verified RTTI fixup:08 -> TESObjectREFR,0C -> Actor,14 -> TESBoundObject,24 -> TESForm. Witness IDs -> Actor pointers; unresolved witnesses removed. Pointer fields transiently contain encoded/resolved FormIDs after LoadGame.
void __thiscall Crime_InitLoadGame(Crime *self)
{
  TESObjectREFR *target; // eax
  TESForm *v3; // eax
  Actor *criminal; // eax
  TESForm *v5; // eax
  TESBoundObject *object14; // eax
  TESForm *v7; // eax
  UInt32 *p_witnesses; // esi
  int *v9; // ebx
  int v10; // edi
  TESForm *v11; // eax
  void *v12; // eax
  UInt32 *v13; // eax

  target = self->target; /*0x6071a4*/
  if ( target ) /*0x6071a9*/
  {
    v3 = TESForm_LookupByFormID((UInt32)target); /*0x6071ba*/
    self->target = (TESObjectREFR *)OblivionDynamicCast( /*0x6071cb*/
                                      v3,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                      (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                      0);
  }
  criminal = self->criminal; /*0x6071ce*/
  if ( criminal ) /*0x6071d3*/
  {
    v5 = TESForm_LookupByFormID((UInt32)criminal); /*0x6071e4*/
    self->criminal = (Actor *)OblivionDynamicCast( /*0x6071f5*/
                                v5,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &Actor `RTTI Type Descriptor',
                                0);
  }
  object14 = self->object14; /*0x6071f8*/
  if ( object14 ) /*0x6071fd*/
  {
    v7 = TESForm_LookupByFormID((UInt32)object14); /*0x60720e*/
    self->object14 = (TESBoundObject *)OblivionDynamicCast( /*0x60721f*/
                                         v7,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                                         0);
  }
  if ( self->form24 ) /*0x607222*/
    self->form24 = TESForm_LookupByFormID((UInt32)self->form24); /*0x607232*/
  p_witnesses = (UInt32 *)&self->witnesses; /*0x607235*/
  v9 = 0; /*0x607238*/
  while ( p_witnesses ) /*0x60723c*/
  {
    if ( !p_witnesses[1] && !*p_witnesses ) /*0x607246*/
      break; /*0x607249*/
    v10 = *p_witnesses; /*0x60724f*/
    if ( *p_witnesses /*0x607275*/
      && (v11 = TESForm_LookupByFormID(*p_witnesses),
          (v12 = OblivionDynamicCast(
                   v11,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0)) != 0) )
    {
      *p_witnesses = (UInt32)v12; /*0x6072ac*/
      v9 = (int *)p_witnesses; /*0x6072ae*/
      p_witnesses = (UInt32 *)p_witnesses[1]; /*0x6072b0*/
    }
    else if ( v9 ) /*0x607279*/
    {
      BSSimpleList_Remove(v9, v10); /*0x6072a2*/
      p_witnesses = (UInt32 *)v9[1]; /*0x6072a7*/
    }
    else
    {
      v13 = (UInt32 *)p_witnesses[1]; /*0x60727b*/
      if ( v13 ) /*0x607280*/
      {
        p_witnesses[1] = v13[1]; /*0x607285*/
        *p_witnesses = *v13; /*0x60728b*/
        FormHeapFree((unsigned int)v13); /*0x60728d*/
      }
      else
      {
        *p_witnesses = 0; /*0x607297*/
      }
    }
  }
}
