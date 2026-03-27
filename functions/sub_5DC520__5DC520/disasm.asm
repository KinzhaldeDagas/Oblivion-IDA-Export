0x5DC520: push    0FFFFFFFFh
0x5DC522: push    offset SEH_5DC520
0x5DC527: mov     eax, large fs:0
0x5DC52D: push    eax
0x5DC52E: sub     esp, 8
0x5DC531: push    esi
0x5DC532: push    edi
0x5DC533: mov     eax, ds:0B30AACh
0x5DC538: xor     eax, esp
0x5DC53A: push    eax
0x5DC53B: lea     eax, [esp+20h+var_C]
0x5DC53F: mov     large fs:0, eax
0x5DC545: mov     edi, ecx
0x5DC547: push    3EBh
0x5DC54C: call    InterfaceManager_MenuModeHasFocus
0x5DC551: add     esp, 4
0x5DC554: test    al, al
0x5DC556: jz      loc_5DC618
0x5DC55C: xor     eax, eax
0x5DC55E: mov     [esp+20h+var_14], eax
0x5DC562: mov     [esp+20h+var_10], ax
0x5DC567: mov     [esp+20h+var_E], ax
0x5DC56C: fld     [esp+20h+arg_4]
0x5DC570: mov     esi, dword ptr [esp+20h+ArgList]
0x5DC574: sub     esp, 8
0x5DC577: fstp    [esp+28h+var_28]
0x5DC57A: push    esi; ArgList
0x5DC57B: mov     [esp+2Ch+var_4], eax
0x5DC57F: lea     eax, [esp+2Ch+var_14]
0x5DC583: push    offset aButtonI0_2f; "Button: %i   - %0.2f"
0x5DC588: push    eax; int
0x5DC589: call    BSStringT_Static_Format
0x5DC58E: mov     ecx, [edi+4]
0x5DC591: mov     edi, [esp+34h+var_14]
0x5DC595: add     esp, 14h
0x5DC598: push    edi
0x5DC599: push    0FBDh
0x5DC59E: call    Tile_SetString
0x5DC5A3: cmp     esi, 0Dh
0x5DC5A6: jnz     short loc_5DC5D9
0x5DC5A8: fld1
0x5DC5AA: fcomp   [esp+20h+arg_4]
0x5DC5AE: fnstsw  ax
0x5DC5B0: test    ah, 41h
0x5DC5B3: jp      short loc_5DC60F
0x5DC5B5: call    sub_5A5FD0
0x5DC5BA: push    edi
0x5DC5BB: call    FormHeapFree
0x5DC5C0: add     esp, 4
0x5DC5C3: mov     al, 1
0x5DC5C5: mov     ecx, [esp+20h+var_C]
0x5DC5C9: mov     large fs:0, ecx
0x5DC5D0: pop     ecx
0x5DC5D1: pop     edi
0x5DC5D2: pop     esi
0x5DC5D3: add     esp, 14h
0x5DC5D6: retn    8
0x5DC5D9: cmp     esi, 0Eh
0x5DC5DC: jnz     short loc_5DC60F
0x5DC5DE: fld1
0x5DC5E0: fcomp   [esp+20h+arg_4]
0x5DC5E4: fnstsw  ax
0x5DC5E6: test    ah, 41h
0x5DC5E9: jp      short loc_5DC60F
0x5DC5EB: call    sub_5A5EF0
0x5DC5F0: push    edi
0x5DC5F1: call    FormHeapFree
0x5DC5F6: add     esp, 4
0x5DC5F9: mov     al, 1
0x5DC5FB: mov     ecx, [esp+20h+var_C]
0x5DC5FF: mov     large fs:0, ecx
0x5DC606: pop     ecx
0x5DC607: pop     edi
0x5DC608: pop     esi
0x5DC609: add     esp, 14h
0x5DC60C: retn    8
0x5DC60F: push    edi
0x5DC610: call    FormHeapFree
0x5DC615: add     esp, 4
0x5DC618: xor     al, al
0x5DC61A: mov     ecx, [esp+20h+var_C]
0x5DC61E: mov     large fs:0, ecx
0x5DC625: pop     ecx
0x5DC626: pop     edi
0x5DC627: pop     esi
0x5DC628: add     esp, 14h
0x5DC62B: retn    8
