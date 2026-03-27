0x507470: sub     esp, 8
0x507473: mov     edx, [esp+8+l]
0x507477: push    esi
0x507478: mov     esi, [esp+0Ch+a4]
0x50747C: lea     eax, [esp+0Ch+var_4]
0x507480: push    eax
0x507481: mov     eax, [esp+10h+arg_10]
0x507485: lea     ecx, [esp+10h+var_8]
0x507489: push    ecx; UInt16
0x50748A: mov     ecx, [esp+14h+arg_C]
0x50748E: push    edx; l
0x50748F: mov     edx, [esp+18h+a3]
0x507493: push    eax; a6
0x507494: mov     eax, [esp+1Ch+arg_4]
0x507498: push    ecx; a5
0x507499: mov     ecx, [esp+20h+a1]
0x50749D: push    esi; a4
0x50749E: push    edx; a3
0x50749F: push    eax; a2
0x5074A0: push    ecx; a1
0x5074A1: mov     dword ptr [esp+30h+var_8], 0
0x5074A9: mov     [esp+30h+var_4], 0
0x5074B1: call    Script_ExtractArgs
0x5074B6: add     esp, 24h
0x5074B9: test    al, al
0x5074BB: jnz     short loc_5074C2
0x5074BD: pop     esi
0x5074BE: add     esp, 8
0x5074C1: retn
0x5074C2: test    esi, esi
0x5074C4: jz      short loc_5074E3
0x5074C6: lea     ecx, [esi+44h]; this
0x5074C9: test    ecx, ecx
0x5074CB: jz      short loc_5074E3
0x5074CD: call    ExtraDataList_GetContainerChanges
0x5074D2: test    eax, eax
0x5074D4: jz      short loc_5074E3
0x5074D6: mov     edx, dword ptr [esp+0Ch+var_8]
0x5074DA: push    edx
0x5074DB: push    esi
0x5074DC: mov     ecx, eax
0x5074DE: call    sub_48DA00
0x5074E3: mov     al, 1
0x5074E5: pop     esi
0x5074E6: add     esp, 8
0x5074E9: retn
