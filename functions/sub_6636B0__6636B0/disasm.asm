0x6636B0: mov     eax, ds:0B333C4h
0x6636B5: push    esi
0x6636B6: push    edi
0x6636B7: push    0
0x6636B9: push    0Ch
0x6636BB: push    eax
0x6636BC: mov     ecx, (offset qword_B3BB2C+1D4h)
0x6636C1: call    sub_6758E0
0x6636C6: mov     ecx, ds:0B333C4h
0x6636CC: mov     edi, eax
0x6636CE: test    edi, edi
0x6636D0: mov     esi, edi
0x6636D2: mov     byte ptr [ecx+738h], 0
0x6636D9: jz      short loc_66373A
0x6636DB: jmp     short loc_6636E0
0x6636E0: mov     ecx, [esi]
0x6636E2: test    ecx, ecx
0x6636E4: jz      short loc_663703
0x6636E6: mov     edx, [ecx]
0x6636E8: mov     eax, [edx+190h]
0x6636EE: call    eax
0x6636F0: test    al, al
0x6636F2: jz      short loc_663703
0x6636F4: mov     ecx, [esi]; this
0x6636F6: test    ecx, ecx
0x6636F8: jz      short loc_663703
0x6636FA: call    Actor_IsGuardClass; Actor_IsGuardClass: true only for NPCs whose base TESClass is a guard class. StartCombat uses this to decide alarm/guard handling.
0x6636FF: test    al, al
0x663701: jnz     short loc_66371D
0x663703: mov     esi, [esi+4]
0x663706: test    esi, esi
0x663708: jnz     short loc_6636E0
0x66370A: mov     ecx, edi
0x66370C: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x663711: push    edi
0x663712: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x663717: add     esp, 4
0x66371A: pop     edi
0x66371B: pop     esi
0x66371C: retn
0x66371D: mov     ecx, ds:0B333C4h
0x663723: mov     byte ptr [ecx+738h], 1
0x66372A: mov     ecx, edi
0x66372C: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x663731: push    edi
0x663732: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x663737: add     esp, 4
0x66373A: pop     edi
0x66373B: pop     esi
0x66373C: retn
