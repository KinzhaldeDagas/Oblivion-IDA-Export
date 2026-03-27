0x98C3B2: push    8
0x98C3B4: push    offset stru_AFFE08
0x98C3B9: call    __SEH_prolog4
0x98C3BE: call    __getptd
0x98C3C3: mov     eax, [eax+78h]
0x98C3C6: test    eax, eax
0x98C3C8: jz      short loc_98C3E0
0x98C3CA: and     [ebp+ms_exc.registration.TryLevel], 0
0x98C3CE: call    eax
0x98C3D0: jmp     short loc_98C3D9
0x98C3D2: xor     eax, eax
0x98C3D4: inc     eax
0x98C3D5: retn
0x98C3D6: mov     esp, [ebp+ms_exc.old_esp]
0x98C3D9: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98C3E0: call    _abort
