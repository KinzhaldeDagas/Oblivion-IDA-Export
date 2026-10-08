char __cdecl sub_46B5C0(char a1)
{
  int v1; // ecx
  char result; // al

  v1 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4])); /*0x46b5cc*/
  result = *(_BYTE *)(v1 + 0x185); /*0x46b5d3*/
  *(_BYTE *)(v1 + 0x185) = a1; /*0x46b5d9*/
  return result; /*0x46b5df*/
}
