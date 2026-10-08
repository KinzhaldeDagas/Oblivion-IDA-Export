PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = _encode_pointer(terminate); /*0x98c43a*/
  dword_BA9E10[6] = result; /*0x98c440*/
  return result; /*0x98c445*/
}
