0x77CEA0: push    esi
0x77CEA1: mov     esi, ecx
0x77CEA3: call    ??1?$NiTStringPointerMap@V?$NiPointer@VNiShaderLibrary@@@@@@UAE@XZ; NiTStringPointerMap<NiPointer<NiShaderLibrary>>::~NiTStringPointerMap<NiPointer<NiShaderLibrary>>(void)
0x77CEA8: test    [esp+4+arg_0], 1
0x77CEAD: jz      short loc_77CEB8
0x77CEAF: push    esi
0x77CEB0: call    FormHeapFree
0x77CEB5: add     esp, 4
0x77CEB8: mov     eax, esi
0x77CEBA: pop     esi
0x77CEBB: retn    4
