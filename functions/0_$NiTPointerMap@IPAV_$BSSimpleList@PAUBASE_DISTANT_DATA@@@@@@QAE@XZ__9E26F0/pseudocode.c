int NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>()
{
  dword_B08308 = FormHeapAlloc(0x94u);
  _memset(dword_B08308, 0, 4 * dword_B08304);
  off_B08300 = &NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable';
  return atexit(sub_A1B670);
}
