bool __stdcall sub_43E2B0(const char *a1, const char *a2)
{
  int v2; // kr00_4

  v2 = strcmp(a1, a2);
  return !v2 || -(v2 < 0) - ((v2 < 0) - 1) >= 0;
}
