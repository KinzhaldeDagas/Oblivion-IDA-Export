0x4699C0: push    0FFFFFFFFh
0x4699C2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x4699C7: mov     eax, large fs:0
0x4699CD: push    eax
0x4699CE: sub     esp, 8
0x4699D1: push    ebp
0x4699D2: push    esi
0x4699D3: push    edi
0x4699D4: mov     eax, ds:0B30AACh
0x4699D9: xor     eax, esp
0x4699DB: push    eax
0x4699DC: lea     eax, [esp+24h+var_C]
0x4699E0: mov     large fs:0, eax
0x4699E6: cmp     [esp+24h+arg_4], 0
0x4699EB: mov     [esp+24h+var_11], 0
0x4699F0: jz      TESContainer_CopyContentsAsLevItem___Done
0x4699F6: lea     ebp, [ecx+8]
0x4699F9: test    ebp, ebp
0x4699FB: jz      TESContainer_CopyContentsAsLevItem___Done
0x9CAD70: mov     eax, [ebp-10h]
0x9CAD73: push    eax
0x9CAD74: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CAD79: pop     ecx
0x9CAD7A: retn
0x9CAD7B: mov     edx, [esp+arg_4]
0x9CAD7F: lea     eax, [edx-14h]
0x9CAD82: mov     ecx, [edx-18h]
0x9CAD85: xor     ecx, eax
0x9CAD87: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CAD8C: mov     eax, offset stru_AF3390
0x9CAD91: jmp     ___CxxFrameHandler3
