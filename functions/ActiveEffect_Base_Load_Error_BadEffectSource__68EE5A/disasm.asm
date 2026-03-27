0x68EE5A: movzx   eax, [esp+arg_4]
0x68EE5F: mov     ecx, ds:0B33B00h
0x68EE65: push    eax
0x68EE66: call    SaveLoad_AdvanceBufferOffset
0x68EE6B: movzx   ecx, [esp+arg_8]
0x68EE70: mov     edx, dword ptr [esp+ArgList]
0x68EE74: push    ecx
0x68EE75: push    edx; ArgList
0x68EE76: push    offset aCouldNotLoadAc; "Could not load active effect with spell"...
0x68EE7B: call    PrintError
0x68EE80: add     esp, 0Ch
0x68EE83: pop     esi
0x68EE84: xor     eax, eax
0x68EE86: pop     ebx
0x68EE87: add     esp, 0Ch
0x68EE8A: retn
