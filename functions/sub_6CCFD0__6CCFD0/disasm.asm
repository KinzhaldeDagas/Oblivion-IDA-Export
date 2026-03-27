0x6CCFD0: push    0FFFFFFFFh
0x6CCFD2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x6CCFD7: mov     eax, large fs:0
0x6CCFDD: push    eax
0x6CCFDE: sub     esp, 8
0x6CCFE1: push    ebx
0x6CCFE2: push    esi
0x6CCFE3: push    edi
0x6CCFE4: mov     eax, ds:0B30AACh
0x6CCFE9: xor     eax, esp
0x6CCFEB: push    eax
0x6CCFEC: lea     eax, [esp+24h+var_C]
0x6CCFF0: mov     large fs:0, eax
0x6CCFF6: mov     esi, ecx
0x6CCFF8: mov     cl, ds:0B242A0h
0x6CCFFE: test    cl, cl
0x6CD000: jnz     short loc_6CD017
0x6CD002: xor     al, al
0x6CD004: mov     ecx, [esp+24h+var_C]
0x6CD008: mov     large fs:0, ecx
0x6CD00F: pop     ecx
0x6CD010: pop     edi
0x6CD011: pop     esi
0x6CD012: pop     ebx
0x6CD013: add     esp, 14h
0x6CD016: retn
0x6CD017: mov     al, [esi+0Dh]
0x6CD01A: add     al, cl
0x6CD01C: movzx   edi, al
0x6CD01F: mov     [esp+24h+var_11], al
0x6CD023: xor     ecx, ecx
0x6CD025: mov     eax, edi
0x6CD027: mov     edx, 18h
0x6CD02C: mul     edx
0x6CD02E: seto    cl
0x6CD031: neg     ecx
0x6CD033: or      ecx, eax
0x6CD035: xor     eax, eax
0x6CD037: add     ecx, 4
0x6CD03A: setb    al
0x6CD03D: neg     eax
0x6CD03F: or      eax, ecx
0x6CD041: push    eax; Size
0x6CD042: call    FormHeapAlloc
0x6CD047: add     esp, 4
0x6CD04A: mov     [esp+24h+var_10], eax
0x6CD04E: test    eax, eax
0x6CD050: mov     [esp+24h+var_4], 0
0x6CD058: jz      short loc_6CD076
0x6CD05A: push    offset sub_7016A0; a5
0x6CD05F: push    offset sub_6CCDE0; a4
0x6CD064: push    edi; size
0x6CD065: lea     ebx, [eax+4]
0x6CD068: push    18h; a2
0x6CD06A: push    ebx; a1
0x6CD06B: mov     [eax], edi
0x6CD06D: call    ArrayConstructor
0x6CD072: mov     edi, ebx
0x6CD074: jmp     short loc_6CD078
0x6CD076: xor     edi, edi
0x6CD078: xor     bl, bl
0x6CD07A: cmp     [esi+0Dh], bl
0x6CD07D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6CD085: jbe     short loc_6CD0A9
0x6CD087: mov     ecx, [esi+14h]
0x6CD08A: movzx   eax, bl
0x6CD08D: lea     eax, [eax+eax*2]
0x6CD090: add     eax, eax
0x6CD092: add     eax, eax
0x6CD094: add     eax, eax
0x6CD096: add     ecx, eax
0x6CD098: push    ecx
0x6CD099: lea     ecx, [eax+edi]
0x6CD09C: call    sub_6CC890
0x6CD0A1: add     bl, 1
0x6CD0A4: cmp     bl, [esi+0Dh]
0x6CD0A7: jb      short loc_6CD087
0x6CD0A9: mov     eax, [esi+14h]
0x6CD0AC: test    eax, eax
0x6CD0AE: jz      short loc_6CD0CD
0x6CD0B0: mov     edx, [eax-4]
0x6CD0B3: lea     ebx, [eax-4]
0x6CD0B6: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6CD0BB: push    edx; int
0x6CD0BC: push    18h; unsigned int
0x6CD0BE: push    eax; void *
0x6CD0BF: call    $LN21
0x6CD0C4: push    ebx
0x6CD0C5: call    FormHeapFree
0x6CD0CA: add     esp, 4
0x6CD0CD: mov     al, [esp+24h+var_11]
0x6CD0D1: mov     [esi+0Dh], al
0x6CD0D4: mov     [esi+14h], edi
0x6CD0D7: mov     al, 1
0x6CD0D9: mov     ecx, [esp+24h+var_C]
0x6CD0DD: mov     large fs:0, ecx
0x6CD0E4: pop     ecx
0x6CD0E5: pop     edi
0x6CD0E6: pop     esi
0x6CD0E7: pop     ebx
0x6CD0E8: add     esp, 14h
0x6CD0EB: retn
