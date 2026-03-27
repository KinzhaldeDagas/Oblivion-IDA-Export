0x45A380: push    ebx
0x45A381: push    ebp
0x45A382: mov     ebp, ecx
0x45A384: xor     bl, bl
0x45A386: cmp     [ebp+0A9h], bl
0x45A38C: jz      short loc_45A39C
0x45A38E: mov     byte ptr [ebp+0A8h], 1
0x45A395: pop     ebp
0x45A396: xor     al, al
0x45A398: pop     ebx
0x45A399: retn    14h
0x45A39C: push    esi
0x45A39D: mov     esi, [esp+0Ch+arg_10]
0x45A3A1: test    esi, esi
0x45A3A3: push    edi
0x45A3A4: jz      short loc_45A3C9
0x45A3A6: fld     dword ptr [esp+10h+arg_0+4]
0x45A3AA: call    Double_To_SInt32
0x45A3AF: fld     dword ptr [esp+10h+arg_0]
0x45A3B3: sar     eax, 0Ch
0x45A3B6: push    eax; signed int
0x45A3B7: call    Double_To_SInt32
0x45A3BC: sar     eax, 0Ch
0x45A3BF: push    eax; signed int
0x45A3C0: mov     ecx, esi; this
0x45A3C2: call    TESWorldSpace__GetCellAtCellCoord
0x45A3C7: jmp     short loc_45A3CD
0x45A3C9: mov     eax, [esp+10h+arg_C]
0x45A3CD: test    eax, eax
0x45A3CF: jz      short loc_45A3E3
0x45A3D1: mov     ecx, ds:0B333A0h
0x45A3D7: push    0; a2
0x45A3D9: push    eax; a1
0x45A3DA: call    TESObjectCELL_IsProcessLevel?LowHigh
0x45A3DF: test    al, al
0x45A3E1: jnz     short loc_45A3E5
0x45A3E3: mov     bl, 1
0x45A3E5: mov     ecx, ds:0B333C4h; this
0x45A3EB: lea     eax, [ebp+0B0h]
0x45A3F1: push    eax; Str2
0x45A3F2: call    TESObjectREFR_GetName
0x45A3F7: push    eax; Str1
0x45A3F8: call    __strcmp
0x45A3FD: add     esp, 8
0x45A400: test    eax, eax
0x45A402: jz      short loc_45A406
0x45A404: mov     bl, 1
0x45A406: mov     ecx, ds:0B333C4h
0x45A40C: call    Actor_GetLevel
0x45A411: movzx   ecx, word ptr [ebp+1B4h]
0x45A418: movzx   eax, ax
0x45A41B: sub     eax, ecx
0x45A41D: cdq
0x45A41E: xor     eax, edx
0x45A420: sub     eax, edx
0x45A422: cmp     eax, 2
0x45A425: jle     short loc_45A429
0x45A427: mov     bl, 1
0x45A429: mov     edi, ds:0A280D0h
0x45A42F: mov     esi, ds:0B333C4h
0x45A435: call    edi ; GetTickCount
0x45A437: sub     eax, [esi+710h]
0x45A43D: add     [esi+714h], eax
0x45A443: call    edi ; GetTickCount
0x45A445: mov     [esi+710h], eax
0x45A44B: mov     eax, [esi+714h]
0x45A451: sub     eax, [ebp+1BCh]
0x45A457: pop     edi
0x45A458: cdq
0x45A459: xor     eax, edx
0x45A45B: sub     eax, edx
0x45A45D: cmp     eax, 36EE80h
0x45A462: pop     esi
0x45A463: jle     short loc_45A467
0x45A465: mov     bl, 1
0x45A467: mov     ecx, offset TimeGlobals
0x45A46C: call    TimeGlobals_GetGameHour
0x45A471: fdiv    qword ptr ds:0A2F920h
0x45A477: mov     ecx, offset TimeGlobals
0x45A47C: fstp    [esp+8+arg_0]
0x45A480: call    TimeGlobals_GetGameDaysPassed
0x45A485: test    eax, eax
0x45A487: mov     [esp+8+arg_10], eax
0x45A48B: fild    [esp+8+arg_10]
0x45A48F: jge     short loc_45A497
0x45A491: fadd    dword ptr ds:0A2FC78h
0x45A497: fadd    [esp+8+arg_0]
0x45A49B: fstp    [esp+8+arg_10]
0x45A49F: fld     [esp+8+arg_10]
0x45A4A3: fsub    dword ptr [ebp+1B8h]
0x45A4A9: fstp    [esp+8+arg_10]
0x45A4AD: fld     [esp+8+arg_10]
0x45A4B1: fabs
0x45A4B3: fstp    [esp+8+arg_10]
0x45A4B7: fld     [esp+8+arg_10]
0x45A4BB: fcomp   dword ptr ds:0A379B4h
0x45A4C1: fnstsw  ax
0x45A4C3: test    ah, 41h
0x45A4C6: jnz     short loc_45A4CA
0x45A4C8: mov     bl, 1
0x45A4CA: pop     ebp
0x45A4CB: mov     al, bl
0x45A4CD: pop     ebx
0x45A4CE: retn    14h
