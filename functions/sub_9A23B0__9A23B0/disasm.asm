0x9A23B0: push    esi
0x9A23B1: mov     esi, ecx
0x9A23B3: mov     eax, [esi+1Ch]
0x9A23B6: push    eax
0x9A23B7: mov     dword ptr [esi], offset ??_7NiSCMExtraData@@6B@; const NiSCMExtraData::`vftable'
0x9A23BD: call    FormHeapFree
0x9A23C2: mov     ecx, [esi+20h]
0x9A23C5: push    ecx
0x9A23C6: call    FormHeapFree
0x9A23CB: add     esp, 8
0x9A23CE: mov     ecx, esi
0x9A23D0: call    NiExtraData_dtor
0x9A23D5: test    [esp+4+arg_0], 1
0x9A23DA: jz      short loc_9A23E5
0x9A23DC: push    esi
0x9A23DD: call    FormHeapFree
0x9A23E2: add     esp, 4
0x9A23E5: mov     eax, esi
0x9A23E7: pop     esi
0x9A23E8: retn    4
