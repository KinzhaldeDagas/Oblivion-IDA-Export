0x46E600: push    esi
0x46E601: mov     esi, ecx
0x46E603: mov     eax, [esi+4]
0x46E606: test    eax, eax
0x46E608: jz      short loc_46E644
0x46E60A: lea     ebx, [ebx+0]
0x46E610: push    eax
0x46E611: call    FormHeapFree
0x46E616: mov     eax, [esi+8]
0x46E619: add     esp, 4
0x46E61C: test    eax, eax
0x46E61E: jz      short loc_46E636
0x46E620: mov     ecx, [eax+4]
0x46E623: mov     [esi+8], ecx
0x46E626: mov     edx, [eax]
0x46E628: push    eax
0x46E629: mov     [esi+4], edx
0x46E62C: call    FormHeapFree
0x46E631: add     esp, 4
0x46E634: jmp     short loc_46E63D
0x46E636: mov     dword ptr [esi+4], 0
0x46E63D: mov     eax, [esi+4]
0x46E640: test    eax, eax
0x46E642: jnz     short loc_46E610
0x46E644: pop     esi
0x46E645: retn
