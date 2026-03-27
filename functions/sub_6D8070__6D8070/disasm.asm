0x6D8070: push    esi
0x6D8071: mov     esi, ecx
0x6D8073: mov     eax, [esi+4]
0x6D8076: test    eax, eax
0x6D8078: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiTransformController@@@@@@6B@; const NiTArray<NiPointer<NiTransformController>>::`vftable'
0x6D807E: jz      short loc_6D809F
0x6D8080: mov     ecx, [eax-4]
0x6D8083: push    edi
0x6D8084: lea     edi, [eax-4]
0x6D8087: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6D808C: push    ecx; int
0x6D808D: push    4; unsigned int
0x6D808F: push    eax; void *
0x6D8090: call    $LN21
0x6D8095: push    edi
0x6D8096: call    FormHeapFree
0x6D809B: add     esp, 4
0x6D809E: pop     edi
0x6D809F: test    [esp+4+arg_0], 1
0x6D80A4: jz      short loc_6D80AF
0x6D80A6: push    esi
0x6D80A7: call    FormHeapFree
0x6D80AC: add     esp, 4
0x6D80AF: mov     eax, esi
0x6D80B1: pop     esi
0x6D80B2: retn    4
