0x6113B0: push    0FFFFFFFFh
0x6113B2: push    offset SEH_6113B0
0x6113B7: mov     eax, large fs:0
0x6113BD: push    eax
0x6113BE: sub     esp, 148h
0x6113C4: mov     eax, ds:0B30AACh
0x6113C9: xor     eax, esp
0x6113CB: mov     [esp+154h+var_10], eax
0x6113D2: push    ebx
0x6113D3: push    ebp
0x6113D4: push    esi
0x6113D5: push    edi
0x6113D6: mov     eax, ds:0B30AACh
0x6113DB: xor     eax, esp
0x6113DD: push    eax
0x6113DE: lea     eax, [esp+168h+var_C]
0x6113E5: mov     large fs:0, eax
0x6113EB: mov     edi, [esp+168h+arg_0]
0x6113F2: mov     ebp, [esp+168h+arg_4]
0x6113F9: mov     ebx, ecx
0x6113FB: mov     [esp+168h+var_144], edi
0x6113FF: mov     [esp+168h+var_140], ebp
0x611403: call    Actor__GetRaceIfNPC
0x611408: test    byte ptr [eax+70h], 1
0x61140C: jz      loc_6116A1
0x611412: mov     esi, [esp+168h+arg_8]
0x611419: cmp     esi, 0FFFFFFFFh
0x61141C: jnz     short loc_611463
0x61141E: push    30h ; '0'; Size
0x611420: call    FormHeapAlloc
0x611425: add     esp, 4
0x611428: mov     [esp+168h+var_150], eax
0x61142C: test    eax, eax
0x61142E: mov     [esp+168h+var_4], 0
0x611439: jz      short loc_611454
0x61143B: push    ebp
0x61143C: push    0
0x61143E: push    0
0x611440: push    ebx
0x611441: push    edi
0x611442: push    2
0x611444: mov     ecx, eax
0x611446: call    sub_6070B0
0x61144B: mov     [esp+168h+var_4], esi
0x611452: jmp     short loc_611470
0x611454: xor     eax, eax
0x611456: mov     [esp+168h+var_4], 0FFFFFFFFh
0x611461: jmp     short loc_611470
0x611463: push    esi
0x611464: push    2
0x611466: mov     ecx, offset ActorProcessManager_ptr
0x61146B: call    sub_675BB0
0x611470: mov     edi, eax
0x611472: test    edi, edi
0x611474: jz      loc_6116A1
0x61147A: cmp     ebx, ds:0B333C4h
0x611480: jz      short loc_6114C4
0x611482: mov     eax, [ebx]
0x611484: mov     edx, [eax+284h]
0x61148A: push    1Fh
0x61148C: mov     ecx, ebx
0x61148E: call    edx
0x611490: cmp     eax, 64h ; 'd'
0x611493: jnz     short loc_6114C4
0x611495: mov     ecx, ebx
0x611497: call    Actor_IsSneaking
0x61149C: test    al, al
0x61149E: jz      short loc_6114C4
0x6114A0: push    esi
0x6114A1: mov     ecx, offset ActorProcessManager_ptr
0x6114A6: push    2
0x6114A8: call    sub_675BB0
0x6114AD: mov     esi, eax
0x6114AF: cmp     esi, edi
0x6114B1: jz      loc_61168D
0x6114B7: mov     ecx, edi
0x6114B9: call    sub_605E80
0x6114BE: push    edi
0x6114BF: jmp     loc_611699
0x6114C4: push    edi
0x6114C5: mov     ecx, offset ActorProcessManager_ptr
0x6114CA: call    sub_67A290
0x6114CF: mov     ebp, eax
0x6114D1: test    ebp, ebp
0x6114D3: mov     [esp+168h+var_154], ebp
0x6114D7: mov     [esp+168h+var_148], ebp
0x6114DB: jz      short loc_6114A0
0x6114DD: lea     ecx, [ecx+0]
0x6114E0: mov     esi, [ebp+0]
0x6114E3: test    esi, esi
0x6114E5: jz      loc_611646
0x6114EB: mov     ecx, [edi+8]; this
0x6114EE: cmp     esi, ecx
0x6114F0: mov     byte ptr [esp+168h+var_14C], 0
0x6114F5: jz      short loc_611500
0x6114F7: call    TESObjectREFR_GetOwner
0x6114FC: cmp     eax, esi
0x6114FE: jnz     short loc_611505
0x611500: mov     byte ptr [esp+168h+var_14C], 1
0x611505: mov     ecx, [esp+168h+var_144]
0x611509: call    sub_4DB760
0x61150E: test    al, al
0x611510: jz      short loc_611521
0x611512: mov     ecx, esi
0x611514: call    sub_4DB760
0x611519: test    al, al
0x61151B: jz      loc_611635
0x611521: mov     eax, [esp+168h+var_14C]
0x611525: push    eax
0x611526: push    esi
0x611527: mov     ecx, edi
0x611529: call    sub_605F60
0x61152E: mov     [esp+168h+var_150], eax
0x611532: fild    [esp+168h+var_150]
0x611536: mov     ecx, esi; this
0x611538: fstp    [esp+168h+var_150]
0x61153C: call    sub_5E6C60
0x611541: test    al, al
0x611543: jnz     short loc_61155D
0x611545: mov     edx, [esi]
0x611547: fld     [esp+168h+var_150]
0x61154B: mov     eax, [edi+0Ch]
0x61154E: mov     edx, [edx+374h]
0x611554: push    ecx
0x611555: fstp    [esp+16Ch+var_16C]
0x611558: push    eax
0x611559: mov     ecx, esi
0x61155B: call    edx
0x61155D: mov     eax, [esi]
0x61155F: mov     edx, [eax+224h]
0x611565: push    esi
0x611566: push    ebx
0x611567: mov     ecx, esi
0x611569: call    edx
0x61156B: push    eax
0x61156C: mov     ecx, edi
0x61156E: call    sub_605E20
0x611573: test    al, al
0x611575: jz      short loc_61159F
0x611577: mov     eax, [esi]
0x611579: mov     edx, [eax+310h]
0x61157F: push    0
0x611581: push    1
0x611583: push    0
0x611585: push    edi
0x611586: mov     ecx, esi
0x611588: call    edx
0x61158A: mov     ecx, ebx
0x61158C: call    sub_4DB760
0x611591: test    al, al
0x611593: jnz     short loc_611611
0x611595: push    ebx
0x611596: mov     ecx, edi
0x611598: call    sub_605F00
0x61159D: jmp     short loc_611611
0x61159F: mov     eax, [esp+168h+var_140]
0x6115A3: mov     ds:0B361C4h, eax
0x6115A8: mov     ecx, [edi+0Ch]
0x6115AB: push    0Fh
0x6115AD: push    2
0x6115AF: mov     [esi+0E4h], ecx
0x6115B5: call    TESTopic__GEtTopic
0x6115BA: mov     ebp, eax
0x6115BC: mov     eax, [edi+0Ch]
0x6115BF: add     esp, 8
0x6115C2: test    eax, eax
0x6115C4: jz      short loc_6115EE
0x6115C6: push    eax
0x6115C7: mov     ecx, esi
0x6115C9: call    sub_5EA050
0x6115CE: test    al, al
0x6115D0: jz      short loc_6115EE
0x6115D2: mov     edx, [esi]
0x6115D4: mov     eax, [edi+0Ch]
0x6115D7: mov     edx, [edx+32Ch]
0x6115DD: push    1
0x6115DF: push    0
0x6115E1: push    0
0x6115E3: push    0
0x6115E5: push    0
0x6115E7: push    eax
0x6115E8: mov     ecx, esi
0x6115EA: call    edx
0x6115EC: jmp     short loc_611603
0x6115EE: mov     ecx, [esi+58h]
0x6115F1: mov     eax, [ecx]
0x6115F3: mov     edx, [eax+1A4h]
0x6115F9: push    1
0x6115FB: push    0
0x6115FD: push    0
0x6115FF: push    ebp
0x611600: push    esi
0x611601: call    edx
0x611603: mov     ebp, [esp+168h+var_154]
0x611607: mov     dword ptr ds:0B361C4h, 0
0x611611: mov     ecx, esi; this
0x611613: call    TESObjectREFR_GetName
0x611618: push    eax
0x611619: lea     eax, [esp+16Ch+Format]
0x61161D: push    offset aAlarmTrespassS; "alarm Trespass sent to  %s "
0x611622: push    eax
0x611623: call    __sprintf
0x611628: lea     ecx, [esp+174h+Format]
0x61162C: push    ecx; Format
0x61162D: call    Interface_ConsolePrint
0x611632: add     esp, 10h
0x611635: mov     eax, [ebp+4]
0x611638: test    eax, eax
0x61163A: mov     [esp+168h+var_154], eax
0x61163E: mov     ebp, eax
0x611640: jnz     loc_6114E0
0x611646: mov     ecx, [esp+168h+var_148]
0x61164A: call    BSSimpleList_Clear
0x61164F: mov     edx, [esp+168h+var_148]
0x611653: push    edx
0x611654: call    FormHeapFree
0x611659: add     esp, 4
0x61165C: mov     ecx, edi
0x61165E: call    sub_605F30
0x611663: test    eax, eax
0x611665: mov     ecx, offset ActorProcessManager_ptr
0x61166A: jnz     short loc_611679
0x61166C: mov     eax, [esp+168h+arg_8]
0x611673: push    eax
0x611674: jmp     loc_6114A6
0x611679: push    edi
0x61167A: call    sub_675B30
0x61167F: push    ebp
0x611680: call    FormHeapFree
0x611685: mov     eax, [edi+28h]
0x611688: add     esp, 4
0x61168B: jmp     short loc_6116A4
0x61168D: test    esi, esi
0x61168F: jz      short loc_6116A1
0x611691: mov     ecx, esi
0x611693: call    sub_605E80
0x611698: push    esi
0x611699: call    FormHeapFree
0x61169E: add     esp, 4
0x6116A1: or      eax, 0FFFFFFFFh
0x6116A4: mov     ecx, dword ptr [esp+168h+var_C]
0x6116AB: mov     large fs:0, ecx
0x6116B2: pop     ecx
0x6116B3: pop     edi
0x6116B4: pop     esi
0x6116B5: pop     ebp
0x6116B6: pop     ebx
0x6116B7: mov     ecx, [esp+154h+var_10]
0x6116BE: xor     ecx, esp
0x6116C0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6116C5: add     esp, 154h
0x6116CB: retn    0Ch
