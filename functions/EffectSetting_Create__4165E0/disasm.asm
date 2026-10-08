0x4165E0: push    0FFFFFFFFh
0x4165E2: push    offset SEH_8C8900
0x4165E7: mov     eax, large fs:0
0x4165ED: push    eax
0x4165EE: push    ecx
0x4165EF: mov     eax, ___security_cookie
0x4165F4: xor     eax, esp
0x4165F6: push    eax
0x4165F7: lea     eax, [esp+14h+var_C]
0x4165FB: mov     large fs:0, eax
0x416601: push    0A8h ; '¨'; Size
0x416606: call    FormHeapAlloc
0x41660B: add     esp, 4
0x41660E: mov     [esp+14h+var_10], eax
0x416612: test    eax, eax
0x416614: mov     [esp+14h+var_4], 0
0x41661C: jz      short loc_416627
0x41661E: mov     ecx, eax; this
0x416620: call    ??0EffectSetting@@QAE@XZ; EffectSetting::EffectSetting(void)
0x416625: jmp     short loc_416629
0x416627: xor     eax, eax
0x416629: mov     dword ptr [eax+58h], 0
0x416630: mov     dword ptr [eax+64h], 6
0x416637: mov     ecx, [esp+14h+var_C]
0x41663B: mov     large fs:0, ecx
0x416642: pop     ecx
0x416643: add     esp, 10h
0x416646: retn
0x9C74D0: mov     eax, [ebp-10h]
0x9C74D3: push    eax
0x9C74D4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C74D9: pop     ecx
0x9C74DA: retn
0x9C74DB: mov     edx, [esp+arg_4]
0x9C74DF: lea     eax, [edx-4]
0x9C74E2: mov     ecx, [edx-8]
0x9C74E5: xor     ecx, eax
0x9C74E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C74EC: mov     eax, offset stru_AEF928
0x9C74F1: jmp     ___CxxFrameHandler3
