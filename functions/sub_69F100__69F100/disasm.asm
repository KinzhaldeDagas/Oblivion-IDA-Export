0x69F100: push    0FFFFFFFFh
0x69F102: push    offset SEH_8C62B0
0x69F107: mov     eax, large fs:0
0x69F10D: push    eax
0x69F10E: push    ecx
0x69F10F: push    esi
0x69F110: mov     eax, ds:0B30AACh
0x69F115: xor     eax, esp
0x69F117: push    eax
0x69F118: lea     eax, [esp+18h+var_C]
0x69F11C: mov     large fs:0, eax
0x69F122: mov     eax, ds:0B3C0CCh
0x69F127: xor     esi, esi
0x69F129: cmp     eax, esi
0x69F12B: jnz     short loc_69F17E
0x69F12D: push    84h ; '„'; Size
0x69F132: call    FormHeapAlloc
0x69F137: add     esp, 4
0x69F13A: mov     [esp+18h+var_10], eax
0x69F13E: cmp     eax, esi
0x69F140: mov     [esp+18h+var_4], esi
0x69F144: jz      short loc_69F14F
0x69F146: mov     ecx, eax; this
0x69F148: call    ??0TESAmmo@@QAE@XZ; TESAmmo::TESAmmo(void)
0x69F14D: mov     esi, eax
0x69F14F: mov     eax, [esi+30h]
0x69F152: mov     edx, [eax+18h]
0x69F155: lea     ecx, [esi+30h]
0x69F158: push    offset aMarker_error_n; "marker_error.nif"
0x69F15D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x69F165: call    edx
0x69F167: mov     ecx, ds:0B33A98h; self
0x69F16D: push    esi; form
0x69F16E: mov     ds:0B3C0CCh, esi
0x69F174: call    TESDataHandler_AddForm; Verified registration path: switches on TESForm+4 type byte. TESGlobal ctor 4F9604 writes type 4; case 4 pushes the form into TESDataHandler.listGlobals at self+0x74 (self+0x1D pointers) and returns success. Called from TESDataHandler_LoadFormRecord 44E596; this list is consumed by TESSaveLoadGame_LoadGlobalValues.
0x69F179: mov     eax, ds:0B3C0CCh
0x69F17E: mov     ecx, dword ptr [esp+18h+var_C]
0x69F182: mov     large fs:0, ecx
0x69F189: pop     ecx
0x69F18A: pop     esi
0x69F18B: add     esp, 10h
0x69F18E: retn
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
