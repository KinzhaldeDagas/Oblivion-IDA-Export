0x98B330: push    0Ch
0x98B332: push    offset stru_AFFD48
0x98B337: call    __SEH_prolog4
0x98B33C: xor     edx, edx
0x98B33E: mov     [ebp+var_1C], edx
0x98B341: mov     eax, [ebp+arg_8]
0x98B344: mov     ecx, [eax+4]
0x98B347: cmp     ecx, edx
0x98B349: jz      loc_98B4A7
0x98B34F: cmp     [ecx+8], dl
0x98B352: jz      loc_98B4A7
0x98B358: mov     ecx, [eax+8]
0x98B35B: cmp     ecx, edx
0x98B35D: jnz     short loc_98B36B
0x98B35F: test    dword ptr [eax], 80000000h
0x98B365: jz      loc_98B4A7
0x98B36B: mov     eax, [eax]
0x98B36D: mov     esi, [ebp+arg_4]
0x98B370: test    eax, eax
0x98B372: js      short loc_98B378
0x98B374: lea     esi, [ecx+esi+0Ch]
0x98B378: mov     [ebp+ms_exc.registration.TryLevel], edx
0x98B37B: xor     ebx, ebx
0x98B37D: inc     ebx
0x98B37E: push    ebx
0x98B37F: test    al, 8
0x98B381: jz      short loc_98B3C4
0x98B383: mov     edi, [ebp+arg_0]
0x98B386: push    dword ptr [edi+18h]
0x98B389: call    unknown_libname_193
0x98B38E: pop     ecx
0x98B38F: pop     ecx
0x98B390: test    eax, eax
0x98B392: jz      loc_98B48A
0x98B398: push    ebx
0x98B399: push    esi
0x98B39A: call    unknown_libname_193
0x98B39F: pop     ecx
0x98B3A0: pop     ecx
0x98B3A1: test    eax, eax
0x98B3A3: jz      loc_98B48A
0x98B3A9: mov     eax, [edi+18h]
0x98B3AC: mov     [esi], eax
0x98B3AE: mov     ecx, [ebp+arg_C]
0x98B3B1: add     ecx, 8
0x98B3B4: push    ecx
0x98B3B5: push    eax
0x98B3B6: call    ___AdjustPointer
0x98B3BB: pop     ecx
0x98B3BC: pop     ecx
0x98B3BD: mov     [esi], eax
0x98B3BF: jmp     loc_98B48F
0x98B3C4: mov     edi, [ebp+arg_C]
0x98B3C7: mov     eax, [ebp+arg_0]
0x98B3CA: push    dword ptr [eax+18h]
0x98B3CD: test    [edi], bl
0x98B3CF: jz      short loc_98B419
0x98B3D1: call    unknown_libname_193
0x98B3D6: pop     ecx
0x98B3D7: pop     ecx
0x98B3D8: test    eax, eax
0x98B3DA: jz      loc_98B48A
0x98B3E0: push    ebx
0x98B3E1: push    esi
0x98B3E2: call    unknown_libname_193
0x98B3E7: pop     ecx
0x98B3E8: pop     ecx
0x98B3E9: test    eax, eax
0x98B3EB: jz      loc_98B48A
0x98B3F1: push    dword ptr [edi+14h]
0x98B3F4: mov     eax, [ebp+arg_0]
0x98B3F7: push    dword ptr [eax+18h]
0x98B3FA: push    esi
0x98B3FB: call    unknown_libname_16
0x98B400: add     esp, 0Ch
0x98B403: cmp     dword ptr [edi+14h], 4
0x98B407: jnz     loc_98B48F
0x98B40D: mov     eax, [esi]
0x98B40F: test    eax, eax
0x98B411: jz      short loc_98B48F
0x98B413: add     edi, 8
0x98B416: push    edi
0x98B417: jmp     short loc_98B3B5
0x98B419: cmp     [edi+18h], edx
0x98B41C: jnz     short loc_98B456
0x98B41E: call    unknown_libname_193
0x98B423: pop     ecx
0x98B424: pop     ecx
0x98B425: test    eax, eax
0x98B427: jz      short loc_98B48A
0x98B429: push    ebx
0x98B42A: push    esi
0x98B42B: call    unknown_libname_193
0x98B430: pop     ecx
0x98B431: pop     ecx
0x98B432: test    eax, eax
0x98B434: jz      short loc_98B48A
0x98B436: push    dword ptr [edi+14h]
0x98B439: add     edi, 8
0x98B43C: push    edi
0x98B43D: mov     eax, [ebp+arg_0]
0x98B440: push    dword ptr [eax+18h]
0x98B443: call    ___AdjustPointer
0x98B448: pop     ecx
0x98B449: pop     ecx
0x98B44A: push    eax
0x98B44B: push    esi
0x98B44C: call    unknown_libname_16
0x98B451: add     esp, 0Ch
0x98B454: jmp     short loc_98B48F
0x98B456: call    unknown_libname_193
0x98B45B: pop     ecx
0x98B45C: pop     ecx
0x98B45D: test    eax, eax
0x98B45F: jz      short loc_98B48A
0x98B461: push    ebx
0x98B462: push    esi
0x98B463: call    unknown_libname_193
0x98B468: pop     ecx
0x98B469: pop     ecx
0x98B46A: test    eax, eax
0x98B46C: jz      short loc_98B48A
0x98B46E: push    dword ptr [edi+18h]
0x98B471: call    unknown_libname_193
0x98B476: pop     ecx
0x98B477: test    eax, eax
0x98B479: jz      short loc_98B48A
0x98B47B: test    byte ptr [edi], 4
0x98B47E: push    0
0x98B480: pop     eax
0x98B481: setnz   al
0x98B484: inc     eax
0x98B485: mov     [ebp+var_1C], eax
0x98B488: jmp     short loc_98B48F
0x98B48A: call    ?_inconsistency@@YAXXZ
0x98B48F: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98B496: mov     eax, [ebp+var_1C]
0x98B499: jmp     short loc_98B4A9
0x98B49B: xor     eax, eax
0x98B49D: inc     eax
0x98B49E: retn
0x98B49F: mov     esp, [ebp+ms_exc.old_esp]
0x98B4A2: jmp     ?terminate@@YAXXZ
0x98B4A7: xor     eax, eax
0x98B4A9: call    __SEH_epilog4
0x98B4AE: retn
