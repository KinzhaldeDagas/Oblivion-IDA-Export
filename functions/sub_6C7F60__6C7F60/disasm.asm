0x6C7F60: push    esi
0x6C7F61: mov     esi, ecx
0x6C7F63: mov     eax, [esi+4]
0x6C7F66: test    eax, eax
0x6C7F68: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiInterpController@@@@@@6B@; const NiTArray<NiPointer<NiInterpController>>::`vftable'
0x6C7F6E: jz      short loc_6C7F8F
0x6C7F70: mov     ecx, [eax-4]
0x6C7F73: push    edi
0x6C7F74: lea     edi, [eax-4]
0x6C7F77: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6C7F7C: push    ecx; int
0x6C7F7D: push    4; unsigned int
0x6C7F7F: push    eax; void *
0x6C7F80: call    $LN21
0x6C7F85: push    edi
0x6C7F86: call    FormHeapFree
0x6C7F8B: add     esp, 4
0x6C7F8E: pop     edi
0x6C7F8F: test    [esp+4+arg_0], 1
0x6C7F94: jz      short loc_6C7F9F
0x6C7F96: push    esi
0x6C7F97: call    FormHeapFree
0x6C7F9C: add     esp, 4
0x6C7F9F: mov     eax, esi
0x6C7FA1: pop     esi
0x6C7FA2: retn    4
