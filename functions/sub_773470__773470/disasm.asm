0x773470: push    esi
0x773471: mov     esi, ecx
0x773473: mov     eax, [esi]
0x773475: test    eax, eax
0x773477: jz      short loc_773485
0x773479: add     eax, 0FFFFFFFCh
0x77347C: push    eax
0x77347D: call    FormHeapFree
0x773482: add     esp, 4
0x773485: mov     esi, [esi+8]
0x773488: test    esi, esi
0x77348A: jz      short loc_77349C
0x77348C: mov     ecx, esi
0x77348E: call    sub_773470
0x773493: push    esi
0x773494: call    FormHeapFree
0x773499: add     esp, 4
0x77349C: pop     esi
0x77349D: retn
