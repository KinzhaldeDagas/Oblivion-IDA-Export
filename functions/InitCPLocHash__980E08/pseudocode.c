int _InitCPLocHash()
{
  return atexit(_ReleaseCPLocHash) != 0 ? 0x18 : 0;
}
