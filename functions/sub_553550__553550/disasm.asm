0x553550: push    0FFFFFFFFh; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x553552: push    offset SEH_8C8900
0x553557: mov     eax, large fs:0
0x55355D: push    eax
0x55355E: push    ecx
0x55355F: mov     eax, ds:0B30AACh
0x553564: xor     eax, esp
0x553566: push    eax
0x553567: lea     eax, [esp+14h+var_C]
0x55356B: mov     large fs:0, eax
0x553571: cmp     dword ptr ds:0B39B80h, 0
0x553578: jnz     short loc_5535BA
0x55357A: push    0DBCh; Size
0x55357F: call    FormHeapAlloc
0x553584: add     esp, 4
0x553587: mov     [esp+14h+var_10], eax
0x55358B: test    eax, eax
0x55358D: mov     [esp+14h+var_4], 0
0x553595: jz      short loc_5535B3
0x553597: mov     ecx, eax; this
0x553599: call    FaceGenManager_Construct; Constructs the 0xDBC-byte FaceGen manager, loads FaceGen\\si.ctl, initializes the four parameter basis lists and FanControls at +0xC8, then creates fallback face textures.
0x55359E: mov     ds:0B39B80h, eax
0x5535A3: mov     ecx, [esp+14h+var_C]
0x5535A7: mov     large fs:0, ecx
0x5535AE: pop     ecx
0x5535AF: add     esp, 10h
0x5535B2: retn
0x5535B3: xor     eax, eax
0x5535B5: mov     ds:0B39B80h, eax
0x5535BA: mov     ecx, [esp+14h+var_C]
0x5535BE: mov     large fs:0, ecx
0x5535C5: pop     ecx
0x5535C6: add     esp, 10h
0x5535C9: retn
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
