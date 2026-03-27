0x661080: sub     esp, 8
0x661083: cmp     byte ptr ds:0B3BB06h, 0
0x66108A: push    esi
0x66108B: mov     esi, ecx
0x66108D: jz      short loc_661096
0x66108F: xor     al, al
0x661091: pop     esi
0x661092: add     esp, 8
0x661095: retn
0x661096: mov     eax, [esi]
0x661098: mov     edx, [eax+288h]
0x66109E: push    0Bh
0x6610A0: call    edx
0x6610A2: fstp    [esp+0Ch+var_C+4]
0x6610A6: mov     ecx, esi
0x6610A8: call    Actor_GetBaseEncumberance
0x6610AD: fcomp   [esp+0Ch+var_C+4]
0x6610B1: fnstsw  ax
0x6610B3: test    ah, 5
0x6610B6: jp      short loc_66108F
0x6610B8: push    ebx
0x6610B9: mov     ecx, esi
0x6610BB: mov     bl, 1
0x6610BD: call    sub_5E1030
0x6610C2: test    al, al
0x6610C4: jnz     short loc_6610E2
0x6610C6: fld     dword ptr ds:0A46C30h
0x6610CC: mov     eax, ds:0B38A48h
0x6610D1: push    ecx
0x6610D2: fstp    [esp+14h+duration]; duration
0x6610D5: push    1; unk2
0x6610D7: push    0; unk1
0x6610D9: push    eax; string
0x6610DA: call    GameUI_QueueMessage
0x6610DF: add     esp, 10h
0x6610E2: mov     al, bl
0x6610E4: pop     ebx
0x6610E5: pop     esi
0x6610E6: add     esp, 8
0x6610E9: retn
