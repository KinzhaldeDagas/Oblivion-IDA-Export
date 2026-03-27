0x530620: push    esi
0x530621: push    edi
0x530622: mov     esi, ds:0B36580h
0x530628: mov     edi, ds:0B36584h
0x53062E: mov     edi, edi
0x530630: mov     ecx, offset dword_B36580
0x530635: call    BSSimpleList_IsEmpty
0x53063A: test    al, al
0x53063C: jnz     short loc_530684
0x53063E: test    esi, esi
0x530640: jz      short loc_530658
0x530642: mov     ecx, esi
0x530644: call    sub_52E1C0
0x530649: push    esi
0x53064A: call    FormHeapFree
0x53064F: mov     edi, ds:0B36584h
0x530655: add     esp, 4
0x530658: test    edi, edi
0x53065A: jz      short loc_53067A
0x53065C: mov     ecx, [edi+4]
0x53065F: mov     eax, edi
0x530661: mov     ds:0B36584h, ecx
0x530667: mov     edx, [eax]
0x530669: push    eax
0x53066A: mov     ds:0B36580h, edx
0x530670: call    FormHeapFree
0x530675: add     esp, 4
0x530678: jmp     short loc_530622
0x53067A: xor     esi, esi
0x53067C: mov     ds:0B36580h, esi
0x530682: jmp     short loc_530630
0x530684: pop     edi
0x530685: pop     esi
0x530686: retn
