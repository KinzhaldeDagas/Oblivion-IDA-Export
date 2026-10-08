//
// Verified: calls 452C90 then assigns entry+4; does not free prior buffer. LoadGame caller 466829; LoadForm consumes +4 at 463854/46386D. Probable homolog Fallout 825EDDB0.
OblivionChangeData *__thiscall ChangesMap_SetChangeBuffer(
        ChangesMap *self,
        unsigned int formID,
        unsigned int flags,
        unsigned __int8 *buffer)
{
  OblivionChangeData *result; // eax

  result = ChangesMap_SetChangeFlags(self, formID, flags); /*0x452cfa*/
  result->savedFormBuffer = buffer; /*0x452d03*/
  return result; /*0x452d06*/
}
