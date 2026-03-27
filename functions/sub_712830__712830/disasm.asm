0x712830: push    esi
0x712831: mov     esi, ecx
0x712833: mov     eax, [esi+4]
0x712836: test    eax, eax
0x712838: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@V?$NiPointer@VNiObject@@@@@@6B@; const NiTLargeArray<NiPointer<NiObject>>::`vftable'
0x71283E: jz      short loc_71285F
0x712840: mov     ecx, [eax-4]
0x712843: push    edi
0x712844: lea     edi, [eax-4]
0x712847: push    offset sub_7016A0; void (__thiscall *)(void *)
0x71284C: push    ecx; int
0x71284D: push    4; unsigned int
0x71284F: push    eax; void *
0x712850: call    $LN21
0x712855: push    edi
0x712856: call    FormHeapFree
0x71285B: add     esp, 4
0x71285E: pop     edi
0x71285F: test    [esp+4+arg_0], 1
0x712864: jz      short loc_71286F
0x712866: push    esi
0x712867: call    FormHeapFree
0x71286C: add     esp, 4
0x71286F: mov     eax, esi
0x712871: pop     esi
0x712872: retn    4
