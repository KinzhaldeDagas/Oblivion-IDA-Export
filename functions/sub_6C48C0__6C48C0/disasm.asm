0x6C48C0: push    esi
0x6C48C1: mov     esi, ecx
0x6C48C3: mov     eax, [esi+4]
0x6C48C6: test    eax, eax
0x6C48C8: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiControllerSequence@@@@@@6B@; const NiTArray<NiPointer<NiControllerSequence>>::`vftable'
0x6C48CE: jz      short loc_6C48EF
0x6C48D0: mov     ecx, [eax-4]
0x6C48D3: push    edi
0x6C48D4: lea     edi, [eax-4]
0x6C48D7: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6C48DC: push    ecx; int
0x6C48DD: push    4; unsigned int
0x6C48DF: push    eax; void *
0x6C48E0: call    $LN21
0x6C48E5: push    edi
0x6C48E6: call    FormHeapFree
0x6C48EB: add     esp, 4
0x6C48EE: pop     edi
0x6C48EF: test    [esp+4+arg_0], 1
0x6C48F4: jz      short loc_6C48FF
0x6C48F6: push    esi
0x6C48F7: call    FormHeapFree
0x6C48FC: add     esp, 4
0x6C48FF: mov     eax, esi
0x6C4901: pop     esi
0x6C4902: retn    4
