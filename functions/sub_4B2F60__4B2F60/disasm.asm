0x4B2F60: push    esi
0x4B2F61: mov     esi, ecx
0x4B2F63: mov     eax, [esi+4]
0x4B2F66: test    eax, eax
0x4B2F68: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x4B2F6E: jz      short loc_4B2F8F
0x4B2F70: mov     ecx, [eax-4]
0x4B2F73: push    edi
0x4B2F74: lea     edi, [eax-4]
0x4B2F77: push    offset sub_7016A0; void (__thiscall *)(void *)
0x4B2F7C: push    ecx; int
0x4B2F7D: push    4; unsigned int
0x4B2F7F: push    eax; void *
0x4B2F80: call    $LN21
0x4B2F85: push    edi
0x4B2F86: call    FormHeapFree
0x4B2F8B: add     esp, 4
0x4B2F8E: pop     edi
0x4B2F8F: test    [esp+4+arg_0], 1
0x4B2F94: jz      short loc_4B2F9F
0x4B2F96: push    esi
0x4B2F97: call    FormHeapFree
0x4B2F9C: add     esp, 4
0x4B2F9F: mov     eax, esi
0x4B2FA1: pop     esi
0x4B2FA2: retn    4
