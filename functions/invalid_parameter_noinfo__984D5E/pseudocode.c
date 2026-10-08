//
// [2026-10-03 ABI audit] Verified no register or stack inputs: XOR EAX,EAX; pushes five zero arguments to __invalid_parameter; cleans0x14 and RET. Previous usercall EBX/EDI/ESI inputs were spurious and contaminated CBranch::Compute decompilation.
void __cdecl _invalid_parameter_noinfo()
{
  int v0; // ebx
  int v1; // edi
  int v2; // esi

  _invalid_parameter(v0, v1, v2); /*0x984d65*/
}
