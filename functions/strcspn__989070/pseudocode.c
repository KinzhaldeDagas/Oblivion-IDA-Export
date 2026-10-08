size_t __cdecl strcspn(const char *Str, const char *Control)
{
  int v2; // ecx
  size_t result; // rax

  LODWORD(result) = strcspn_::listnext_0(v2, (char *)Control); /*0x989082*/
  return result;
}
