bool __thiscall Archive_ContainsFile(
        void *this,
        unsigned int *a2,
        unsigned int *a3,
        signed int *a4,
        signed int *a5,
        const char *a6)
{
  return Archive_ContainsFolder((int)this, a2, a4, a6) && Archive_FolderContainFile((int)this, *a4, a3, a5, a6, 0);
}
