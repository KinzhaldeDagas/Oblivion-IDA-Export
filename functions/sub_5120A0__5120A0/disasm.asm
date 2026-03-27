0x5120A0: sub     esp, 114h
0x5120A6: mov     eax, ds:0B30AACh
0x5120AB: xor     eax, esp
0x5120AD: mov     [esp+114h+var_4], eax
0x5120B4: mov     edx, [esp+114h+a4]
0x5120BB: mov     ecx, [esp+114h+arg_4]
0x5120C2: mov     eax, [esp+114h+a1]
0x5120C9: push    ebx
0x5120CA: mov     ebx, [esp+118h+l]
0x5120D1: push    ebp
0x5120D2: mov     ebp, [esp+11Ch+arg_1C]
0x5120D9: push    esi
0x5120DA: mov     esi, [esp+120h+arg_C]
0x5120E1: push    edi
0x5120E2: mov     edi, [esp+124h+arg_10]
0x5120E9: mov     [esp+124h+a3], ebp
0x5120ED: lea     ebp, [esp+124h+var_10C]
0x5120F1: push    ebp; UInt16
0x5120F2: push    ebx; l
0x5120F3: push    edi; a6
0x5120F4: push    esi; a5
0x5120F5: push    edx; a4
0x5120F6: mov     edx, [esp+138h+a3]
0x5120FA: push    edx; a3
0x5120FB: push    ecx; a2
0x5120FC: push    eax; a1
0x5120FD: mov     dword ptr [esp+144h+var_10C], 0
0x512105: call    Script_ExtractArgs
0x51210A: add     esp, 20h
0x51210D: test    al, al
0x51210F: jz      loc_512202
0x512115: xor     eax, eax
0x512117: cmp     dword ptr [esp+124h+var_10C], eax
0x51211B: push    eax
0x51211C: setnz   cl
0x51211F: lea     edx, [esp+128h+a3]
0x512123: mov     [esp+128h+a3], eax
0x512127: mov     [esp+128h+var_110], eax
0x51212B: push    ecx
0x51212C: push    eax
0x51212D: push    edx
0x51212E: call    sub_52A8A0
0x512133: add     esp, 10h
0x512136: lea     ebx, [esp+124h+a3]
0x51213A: lea     ebx, [ebx+0]
0x512140: cmp     dword ptr [ebx], 0
0x512143: jz      loc_512200
0x512149: mov     esi, [ebx]
0x51214B: mov     edi, [esi+68h]
0x51214E: mov     ebx, [ebx+4]
0x512151: push    104h
0x512156: lea     eax, [esp+128h+var_108]
0x51215A: push    0
0x51215C: push    eax
0x51215D: call    __memset
0x512162: add     esp, 0Ch
0x512165: push    edi
0x512166: mov     ecx, esi
0x512168: call    QuestStageItem_GetLogText
0x51216D: push    103h; size_t
0x512172: push    eax; unsigned __int8 *
0x512173: lea     ecx, [esp+12Ch+var_108]
0x512177: push    ecx; unsigned __int8 *
0x512178: call    __mbsnbcpy
0x51217D: mov     edi, [esi+64h]
0x512180: push    offset asc_A4D4CC; "---------------------------------------"...
0x512185: call    Interface_ConsolePrint
0x51218A: add     esp, 10h
0x51218D: mov     ecx, edi
0x51218F: call    QuestStageItem_GetMonth
0x512194: mov     eax, ds:0B06FA4h[eax*4]
0x51219B: test    eax, eax
0x51219D: jz      short loc_5121A3
0x51219F: mov     ebp, [eax]
0x5121A1: jmp     short loc_5121A5
0x5121A3: xor     ebp, ebp
0x5121A5: mov     ecx, edi
0x5121A7: call    QuestStageItem_GetYear
0x5121AC: movzx   edx, ax
0x5121AF: push    edx
0x5121B0: push    ebp
0x5121B1: mov     ecx, edi
0x5121B3: call    QuestStageItem_GetDay
0x5121B8: movzx   eax, ax
0x5121BB: push    eax
0x5121BC: push    offset aDOfSD; "%d of %s, %d"
0x5121C1: call    Interface_ConsolePrint
0x5121C6: mov     esi, [esi+68h]
0x5121C9: add     esi, 30h ; '0'
0x5121CC: mov     esi, [esi+4]
0x5121CF: add     esp, 10h
0x5121D2: test    esi, esi
0x5121D4: jnz     short loc_5121DB
0x5121D6: mov     esi, offset EmptyString
0x5121DB: push    esi
0x5121DC: push    offset aS; "%s"
0x5121E1: call    Interface_ConsolePrint
0x5121E6: lea     ecx, [esp+12Ch+var_108]
0x5121EA: push    ecx
0x5121EB: push    offset aS; "%s"
0x5121F0: call    Interface_ConsolePrint
0x5121F5: add     esp, 10h
0x5121F8: test    ebx, ebx
0x5121FA: jnz     loc_512140
0x512200: mov     al, 1
0x512202: mov     ecx, [esp+124h+var_4]
0x512209: pop     edi
0x51220A: pop     esi
0x51220B: pop     ebp
0x51220C: pop     ebx
0x51220D: xor     ecx, esp
0x51220F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x512214: add     esp, 114h
0x51221A: retn
