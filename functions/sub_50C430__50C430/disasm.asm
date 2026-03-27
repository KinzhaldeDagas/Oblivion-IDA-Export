0x50C430: sub     esp, 8
0x50C433: mov     ecx, [esp+8+l]
0x50C437: mov     edx, [esp+8+arg_10]
0x50C43B: push    esi
0x50C43C: mov     esi, [esp+0Ch+a4]
0x50C440: lea     eax, [esp+0Ch+var_4]
0x50C444: push    eax; UInt16
0x50C445: mov     eax, [esp+10h+arg_C]
0x50C449: push    ecx; l
0x50C44A: mov     ecx, [esp+14h+a3]
0x50C44E: push    edx; a6
0x50C44F: mov     edx, [esp+18h+arg_4]
0x50C453: push    eax; a5
0x50C454: mov     eax, [esp+1Ch+a1]
0x50C458: push    esi; a4
0x50C459: push    ecx; a3
0x50C45A: push    edx; a2
0x50C45B: push    eax; a1
0x50C45C: mov     dword ptr [esp+2Ch+var_4], 0
0x50C464: call    Script_ExtractArgs
0x50C469: add     esp, 20h
0x50C46C: test    al, al
0x50C46E: jnz     short loc_50C475
0x50C470: pop     esi
0x50C471: add     esp, 8
0x50C474: retn
0x50C475: test    esi, esi
0x50C477: jz      loc_50C530
0x50C47D: push    8
0x50C47F: mov     ecx, esi
0x50C481: call    sub_4D8260
0x50C486: cmp     dword ptr [esp+0Ch+var_4], 0
0x50C48B: mov     [esp+0Ch+var_5], al
0x50C48F: push    8
0x50C491: mov     ecx, esi
0x50C493: jz      short loc_50C49C
0x50C495: call    sub_4D8270
0x50C49A: jmp     short loc_50C4A1
0x50C49C: call    sub_4D82E0
0x50C4A1: push    ebx
0x50C4A2: push    edi
0x50C4A3: push    8
0x50C4A5: mov     ecx, esi
0x50C4A7: call    sub_4D8260
0x50C4AC: mov     edx, [esi]
0x50C4AE: mov     bl, al
0x50C4B0: mov     eax, [edx+44h]
0x50C4B3: push    1000000h
0x50C4B8: mov     ecx, esi
0x50C4BA: call    eax
0x50C4BC: lea     edi, [esi+44h]
0x50C4BF: mov     ecx, edi
0x50C4C1: call    sub_4212F0
0x50C4C6: mov     ecx, edi
0x50C4C8: call    sub_420FF0
0x50C4CD: cmp     byte ptr [esp+10h+var_4+3], bl
0x50C4D1: jz      short loc_50C4FB
0x50C4D3: mov     ecx, ds:0B33B00h
0x50C4D9: push    0
0x50C4DB: push    esi
0x50C4DC: call    sub_4533F0
0x50C4E1: test    eax, 40000h
0x50C4E6: mov     edx, [esi]
0x50C4E8: push    40000h
0x50C4ED: mov     ecx, esi
0x50C4EF: jz      short loc_50C4F6
0x50C4F1: mov     eax, [edx+44h]
0x50C4F4: jmp     short loc_50C4F9
0x50C4F6: mov     eax, [edx+40h]
0x50C4F9: call    eax
0x50C4FB: mov     edx, [esi]
0x50C4FD: mov     eax, [edx+44h]
0x50C500: push    80000h
0x50C505: mov     ecx, esi
0x50C507: call    eax
0x50C509: push    0
0x50C50B: mov     ecx, esi
0x50C50D: call    sub_4D6E60
0x50C512: test    al, al
0x50C514: jz      short loc_50C51C
0x50C516: test    bl, bl
0x50C518: jnz     short loc_50C52E
0x50C51A: jmp     short loc_50C520
0x50C51C: test    bl, bl
0x50C51E: jz      short loc_50C52E
0x50C520: mov     edx, [esi]
0x50C522: mov     eax, [edx+40h]
0x50C525: push    80000h
0x50C52A: mov     ecx, esi
0x50C52C: call    eax
0x50C52E: pop     edi
0x50C52F: pop     ebx
0x50C530: cmp     byte ptr ds:0B361ACh, 0
0x50C537: jz      short loc_50C54B
0x50C539: mov     ecx, dword ptr [esp+0Ch+var_4]
0x50C53D: push    ecx
0x50C53E: push    offset aSetdoordefault; "SetDoorDefaultOpen >> %0.2f"
0x50C543: call    Interface_ConsolePrint
0x50C548: add     esp, 8
0x50C54B: mov     al, 1
0x50C54D: pop     esi
0x50C54E: add     esp, 8
0x50C551: retn
