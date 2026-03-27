// attributes: thunk
int __cdecl j___vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return _vsnprintf(Dest, Count, Format, Args);
}
