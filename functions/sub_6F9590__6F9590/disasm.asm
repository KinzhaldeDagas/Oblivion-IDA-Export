0x6F9590: push    esi
0x6F9591: mov     esi, ecx
0x6F9593: mov     eax, [esi+4]
0x6F9596: test    eax, eax
0x6F9598: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiRefObject@@@@@@6B@; const NiTArray<NiPointer<NiRefObject>>::`vftable'
0x6F959E: jz      short loc_6F95BF
0x6F95A0: mov     ecx, [eax-4]
0x6F95A3: push    edi
0x6F95A4: lea     edi, [eax-4]
0x6F95A7: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6F95AC: push    ecx; int
0x6F95AD: push    4; unsigned int
0x6F95AF: push    eax; void *
0x6F95B0: call    $LN21
0x6F95B5: push    edi
0x6F95B6: call    FormHeapFree
0x6F95BB: add     esp, 4
0x6F95BE: pop     edi
0x6F95BF: test    [esp+4+arg_0], 1
0x6F95C4: jz      short loc_6F95CF
0x6F95C6: push    esi
0x6F95C7: call    FormHeapFree
0x6F95CC: add     esp, 4
0x6F95CF: mov     eax, esi
0x6F95D1: pop     esi
0x6F95D2: retn    4
