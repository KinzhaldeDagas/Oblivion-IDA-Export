0x73DEB0: push    0FFFFFFFFh; Pass225: NiScreenTexture destructor asks renderer to purge +0x1C buffer cache, then releases +0x14 texturing property and record array.
0x73DEB2: push    offset ??1NiScreenTexture@@UAE@XZ_SEH
0x73DEB7: mov     eax, large fs:0
0x73DEBD: push    eax
0x73DEBE: push    ecx
0x73DEBF: push    esi
0x73DEC0: push    edi
0x73DEC1: mov     eax, ds:0B30AACh
0x73DEC6: xor     eax, esp
0x73DEC8: push    eax
0x73DEC9: lea     eax, [esp+1Ch+var_C]
0x73DECD: mov     large fs:0, eax
0x73DED3: mov     esi, ecx
0x73DED5: mov     [esp+1Ch+var_10], esi
0x73DED9: mov     dword ptr [esi], offset ??_7NiScreenTexture@@6B@; const NiScreenTexture::`vftable'
0x73DEDF: push    esi
0x73DEE0: mov     [esp+20h+var_4], 2
0x73DEE8: call    sub_7014E0; Pass225: Dispatches live renderer vtable +0xC0 purge for NiScreenTexture before object teardown.
0x73DEED: mov     edi, [esi+14h]
0x73DEF0: add     esp, 4
0x73DEF3: test    edi, edi
0x73DEF5: mov     byte ptr [esp+1Ch+var_4], 1
0x73DEFA: jz      short loc_73DF18
0x73DEFC: lea     eax, [edi+4]
0x73DEFF: push    eax; lpAddend
0x73DF00: call    dword ptr ds:0A2807Ch
0x73DF06: test    eax, eax
0x73DF08: jnz     short loc_73DF18
0x73DF0A: test    edi, edi
0x73DF0C: jz      short loc_73DF18
0x73DF0E: mov     edx, [edi]
0x73DF10: mov     eax, [edx]
0x73DF12: push    1
0x73DF14: mov     ecx, edi
0x73DF16: call    eax
0x73DF18: mov     eax, [esi+8]
0x73DF1B: push    eax
0x73DF1C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x73DF21: add     esp, 4
0x73DF24: mov     ecx, esi
0x73DF26: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x73DF2E: call    NiRefObject_destr
0x73DF33: mov     ecx, dword ptr [esp+1Ch+var_C]
0x73DF37: mov     large fs:0, ecx
0x73DF3E: pop     ecx
0x73DF3F: pop     edi
0x73DF40: pop     esi
0x73DF41: add     esp, 10h
0x73DF44: retn
0x9CADD0: mov     ecx, [ebp-10h]
0x9CADD3: jmp     NiRefObject_destr
0x9CADD8: mov     ecx, [ebp-10h]
0x9CADDB: add     ecx, 8; void *
0x9CADDE: jmp     sub_6C4090
0x9CADE3: mov     ecx, [ebp-10h]
0x9CADE6: add     ecx, 14h; slot
0x9CADE9: jmp     NiPointerSlot_Release
0x9CADEE: mov     edx, [esp+arg_4]
0x9CADF2: lea     eax, [edx-0Ch]
0x9CADF5: mov     ecx, [edx-10h]
0x9CADF8: xor     ecx, eax
0x9CADFA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CADFF: mov     eax, offset stru_AF3400
0x9CAE04: jmp     ___CxxFrameHandler3
