0x8C62B0: push    0FFFFFFFFh
0x8C62B2: push    offset SEH_8C62B0
0x8C62B7: mov     eax, large fs:0
0x8C62BD: push    eax
0x8C62BE: push    ecx
0x8C62BF: push    esi
0x8C62C0: mov     eax, ds:0B30AACh
0x8C62C5: xor     eax, esp
0x8C62C7: push    eax
0x8C62C8: lea     eax, [esp+18h+var_C]
0x8C62CC: mov     large fs:0, eax
0x8C62D2: push    14h; Size
0x8C62D4: call    FormHeapAlloc
0x8C62D9: mov     esi, eax
0x8C62DB: add     esp, 4
0x8C62DE: mov     [esp+18h+var_10], esi
0x8C62E2: test    esi, esi
0x8C62E4: mov     [esp+18h+var_4], 0
0x8C62EC: jz      short loc_8C633F
0x8C62EE: mov     ecx, esi; this
0x8C62F0: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C62F5: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C62FB: mov     eax, 1
0x8C6300: mov     dword ptr [esi+0Ch], 0
0x8C6307: mov     dword ptr [esi+10h], 0
0x8C630E: add     ds:0BA7D70h, eax
0x8C6314: mov     dword ptr [esi], offset ??_7bhkShapeCollection@@6B@; const bhkShapeCollection::`vftable'
0x8C631A: add     ds:0BA816Ch, eax
0x8C6320: mov     dword ptr [esi], offset ??_7bhkNiTriStripsShape@@6B@; const bhkNiTriStripsShape::`vftable'
0x8C6326: add     ds:0BA812Ch, eax
0x8C632C: mov     eax, esi
0x8C632E: mov     ecx, [esp+18h+var_C]
0x8C6332: mov     large fs:0, ecx
0x8C6339: pop     ecx
0x8C633A: pop     esi
0x8C633B: add     esp, 10h
0x8C633E: retn
0x8C633F: xor     eax, eax
0x8C6341: mov     ecx, [esp+18h+var_C]
0x8C6345: mov     large fs:0, ecx
0x8C634C: pop     ecx
0x8C634D: pop     esi
0x8C634E: add     esp, 10h
0x8C6351: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
