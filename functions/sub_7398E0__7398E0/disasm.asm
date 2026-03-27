0x7398E0: push    esi
0x7398E1: mov     esi, ecx
0x7398E3: mov     eax, [esi+4]
0x7398E6: test    eax, eax
0x7398E8: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiScreenTexture@@@@@@6B@; const NiTArray<NiPointer<NiScreenTexture>>::`vftable'
0x7398EE: jz      short loc_73990F
0x7398F0: mov     ecx, [eax-4]
0x7398F3: push    edi
0x7398F4: lea     edi, [eax-4]
0x7398F7: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7398FC: push    ecx; int
0x7398FD: push    4; unsigned int
0x7398FF: push    eax; void *
0x739900: call    $LN21
0x739905: push    edi
0x739906: call    FormHeapFree
0x73990B: add     esp, 4
0x73990E: pop     edi
0x73990F: test    [esp+4+arg_0], 1
0x739914: jz      short loc_73991F
0x739916: push    esi
0x739917: call    FormHeapFree
0x73991C: add     esp, 4
0x73991F: mov     eax, esi
0x739921: pop     esi
0x739922: retn    4
