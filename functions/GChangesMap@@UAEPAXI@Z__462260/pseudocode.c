//
// Verified: scalar deleting destructor: calls 45F030, frees self only when deleteFlags bit0 set, returns self.
ChangesMap *__thiscall ChangesMap::`scalar deleting destructor'(ChangesMap *self, unsigned int deleteFlags)
{
  ChangesMap::~ChangesMap(self); /*0x462263*/
  if ( (deleteFlags & 1) != 0 ) /*0x46226d*/
    FormHeapFree((unsigned int)self); /*0x462270*/
  return self; /*0x46227a*/
}
