// Destroys one NiTextKey by freeing its owned text pointer at +0x04.
void __thiscall NiTextKey_Destroy(unsigned int *this)
{
  if ( *(this + 1) ) /*0x6ec6b0*/
    FormHeapFree(*(this + 1)); /*0x6ec6b8*/
}
