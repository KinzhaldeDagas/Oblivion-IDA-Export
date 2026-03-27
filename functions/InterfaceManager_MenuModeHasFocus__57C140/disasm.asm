0x57C140: push    1; arg1
0x57C142: push    0; canCreate
0x57C144: call    InterfaceManager_GetSingleton
0x57C149: add     esp, 8
0x57C14C: test    eax, eax
0x57C14E: jz      loc_57C1F6
0x57C154: push    1; arg1
0x57C156: push    0; canCreate
0x57C158: call    InterfaceManager_GetSingleton
0x57C15D: add     esp, 8
0x57C160: cmp     dword ptr [eax+1Ch], 0
0x57C164: jz      loc_57C1F6
0x57C16A: push    1; arg1
0x57C16C: push    0; canCreate
0x57C16E: call    InterfaceManager_GetSingleton
0x57C173: add     esp, 8
0x57C176: cmp     dword ptr [eax+68h], 0
0x57C17A: jz      short loc_57C1F6
0x57C17C: push    1; arg1
0x57C17E: push    0; canCreate
0x57C180: call    InterfaceManager_GetSingleton
0x57C185: mov     eax, [eax+68h]
0x57C188: add     esp, 8
0x57C18B: push    0FAEh
0x57C190: mov     ecx, eax
0x57C192: call    Tile_GetFloat
0x57C197: fcomp   dword ptr ds:0A379B4h
0x57C19D: fnstsw  ax
0x57C19F: test    ah, 44h
0x57C1A2: jp      short loc_57C1F6
0x57C1A4: push    1; arg1
0x57C1A6: push    0; canCreate
0x57C1A8: call    InterfaceManager_GetSingleton
0x57C1AD: add     esp, 8
0x57C1B0: mov     ecx, eax
0x57C1B2: call    InterfaceManager__GetTopVisibleMenuID
0x57C1B7: cmp     eax, 1
0x57C1BA: mov     ecx, [esp+arg_0]
0x57C1BE: jnz     short loc_57C1EC
0x57C1C0: cmp     ecx, 3EBh
0x57C1C6: jz      short loc_57C1E0
0x57C1C8: cmp     ecx, 3EAh
0x57C1CE: jz      short loc_57C1E0
0x57C1D0: cmp     ecx, 3FEh
0x57C1D6: jz      short loc_57C1E0
0x57C1D8: cmp     ecx, 3FFh
0x57C1DE: jnz     short loc_57C1EC
0x57C1E0: push    0
0x57C1E2: push    ecx
0x57C1E3: call    sub_5790E0
0x57C1E8: add     esp, 8
0x57C1EB: retn
0x57C1EC: xor     edx, edx
0x57C1EE: cmp     eax, ecx
0x57C1F0: setz    dl
0x57C1F3: mov     al, dl
0x57C1F5: retn
0x57C1F6: xor     al, al
0x57C1F8: retn
