char sub_4C9FF0()
{
  return *(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer /*0x4ca005*/
                    + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4]))
                  + 0x186);
}
