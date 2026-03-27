0x984040: push    ebp
0x984041: mov     ebp, esp
0x984043: mov     eax, dword ptr [ebp+X+6]
0x984046: mov     ecx, 7FF0h
0x98404B: mov     edx, eax
0x98404D: and     edx, ecx
0x98404F: cmp     dx, cx
0x984052: jnz     short loc_984081
0x984054: fld     [ebp+X]
0x984057: push    ecx
0x984058: push    ecx
0x984059: fstp    [esp+8+var_8]
0x98405C: call    __sptype
0x984061: dec     eax
0x984062: pop     ecx
0x984063: pop     ecx
0x984064: jz      short loc_98407A
0x984066: dec     eax
0x984067: jz      short loc_984075
0x984069: dec     eax
0x98406A: jz      short loc_984071
0x98406C: xor     eax, eax
0x98406E: inc     eax
0x98406F: pop     ebp
0x984070: retn
0x984071: push    2
0x984073: jmp     short loc_984077
0x984075: push    4
0x984077: pop     eax
0x984078: pop     ebp
0x984079: retn
0x98407A: mov     eax, 200h
0x98407F: pop     ebp
0x984080: retn
0x984081: and     eax, 8000h
0x984086: test    dx, dx
0x984089: mov     ecx, eax
0x98408B: jnz     short loc_9840AA
0x98408D: test    dword ptr [ebp+X+4], 0FFFFFh
0x984094: jnz     short loc_98409C
0x984096: cmp     dword ptr [ebp+X], 0
0x98409A: jz      short loc_9840AA
0x98409C: neg     eax
0x98409E: sbb     eax, eax
0x9840A0: and     eax, 0FFFFFF90h
0x9840A3: add     eax, 80h ; '€'
0x9840A8: pop     ebp
0x9840A9: retn
0x9840AA: fldz
0x9840AC: fcomp   [ebp+X]
0x9840AF: fnstsw  ax
0x9840B1: test    ah, 44h
0x9840B4: mov     eax, ecx
0x9840B6: jp      short loc_9840C4
0x9840B8: neg     eax
0x9840BA: sbb     eax, eax
0x9840BC: and     eax, 0FFFFFFE0h
0x9840BF: add     eax, 40h ; '@'
0x9840C2: pop     ebp
0x9840C3: retn
0x9840C4: neg     eax
0x9840C6: sbb     eax, eax
0x9840C8: and     eax, 0FFFFFF08h
0x9840CD: add     eax, 100h
0x9840D2: pop     ebp
0x9840D3: retn
