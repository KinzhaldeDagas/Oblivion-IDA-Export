0x436830: push    esi
0x436831: mov     esi, ecx
0x436833: mov     eax, [esi+4]
0x436836: test    eax, eax
0x436838: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VQueuedFile@@@@@@6B@; const NiTArray<NiPointer<QueuedFile>>::`vftable'
0x43683E: jz      short loc_43685F
0x436840: mov     ecx, [eax-4]
0x436843: push    edi
0x436844: lea     edi, [eax-4]
0x436847: push    offset sub_4BDDC0; void (__thiscall *)(void *)
0x43684C: push    ecx; int
0x43684D: push    4; unsigned int
0x43684F: push    eax; void *
0x436850: call    $LN21
0x436855: push    edi
0x436856: call    FormHeapFree
0x43685B: add     esp, 4
0x43685E: pop     edi
0x43685F: test    [esp+4+arg_0], 1
0x436864: jz      short loc_43686F
0x436866: push    esi
0x436867: call    FormHeapFree
0x43686C: add     esp, 4
0x43686F: mov     eax, esi
0x436871: pop     esi
0x436872: retn    4
