void __thiscall sub_58A020(BSStringT *this, char *a2, int a3)
{
  BSStringT_Set(this + 1, a2, 0); /*0x58a053*/
  FormHeapFree((unsigned int)a2); /*0x58a059*/
}
