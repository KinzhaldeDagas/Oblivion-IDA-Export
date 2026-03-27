PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = _encode_pointer(terminate);
  dword_BA9E28 = (int)result;
  return result;
}
