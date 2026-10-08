0x6D9310: push    0FFFFFFFFh
0x6D9312: push    offset SEH_8C62B0
0x6D9317: mov     eax, large fs:0
0x6D931D: push    eax
0x6D931E: push    ecx
0x6D931F: push    esi
0x6D9320: mov     eax, ds:0B30AACh
0x6D9325: xor     eax, esp
0x6D9327: push    eax
0x6D9328: lea     eax, [esp+18h+var_C]
0x6D932C: mov     large fs:0, eax
0x6D9332: push    44h ; 'D'; Size
0x6D9334: call    FormHeapAlloc
0x6D9339: mov     esi, eax
0x6D933B: add     esp, 4
0x6D933E: mov     [esp+18h+var_10], esi
0x6D9342: test    esi, esi
0x6D9344: mov     [esp+18h+var_4], 0
0x6D934C: jz      short loc_6D937C
0x6D934E: mov     ecx, esi; this
0x6D9350: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x6D9355: mov     dword ptr [esi+40h], 0
0x6D935C: mov     dword ptr [esi+3Ch], 0
0x6D9363: mov     dword ptr [esi], offset ??_7NiRollController@@6B@; const NiRollController::`vftable'
0x6D9369: mov     eax, esi
0x6D936B: mov     ecx, [esp+18h+var_C]
0x6D936F: mov     large fs:0, ecx
0x6D9376: pop     ecx
0x6D9377: pop     esi
0x6D9378: add     esp, 10h
0x6D937B: retn
0x6D937C: xor     eax, eax
0x6D937E: mov     ecx, [esp+18h+var_C]
0x6D9382: mov     large fs:0, ecx
0x6D9389: pop     ecx
0x6D938A: pop     esi
0x6D938B: add     esp, 10h
0x6D938E: retn
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
