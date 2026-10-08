// attributes: thunk
int __cdecl j_CRT_strcmp(const char *left, const char *right)
{
  return CRT_StricmpLocaleDispatch(left, right);
}
