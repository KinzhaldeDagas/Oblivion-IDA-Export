struct CAS_AnimGroupInfoRecord_Decoded
{
const char *name;
CAS_u32 allowMultiple;
CAS_u32 defaultSlot;
AnimGroupRequiredNoteTemplateClass noteTemplateClass; ///< Selects one of the eight authoritative required-note columns in AnimGroupRequiredNoteNameTemplates.
CAS_u32 requiredNoteIndexes[5];
};
