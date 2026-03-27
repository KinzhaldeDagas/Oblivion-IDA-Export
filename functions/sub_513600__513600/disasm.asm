0x513600: push    ebp
0x513601: mov     ebp, esp
0x513603: and     esp, 0FFFFFFC0h
0x513606: push    0FFFFFFFFh
0x513608: push    offset SEH_513600
0x51360D: mov     eax, large fs:0
0x513613: push    eax
0x513614: sub     esp, 2A8h
0x51361A: mov     eax, ds:0B30AACh
0x51361F: xor     eax, esp
0x513621: mov     [esp+2B4h+var_44], eax
0x513628: push    ebx
0x513629: push    esi
0x51362A: push    edi
0x51362B: mov     eax, ds:0B30AACh
0x513630: xor     eax, esp
0x513632: push    eax
0x513633: lea     eax, [esp+2C4h+var_C]
0x51363A: mov     large fs:0, eax
0x513640: mov     esi, [ebp+18h]
0x513643: mov     edx, [ebp+arg_C]
0x513646: mov     ecx, [ebp+a4]
0x513649: mov     edi, [ebp+0Ch]
0x51364C: mov     eax, [ebp+a1]
0x51364F: mov     [esp+2C4h+var_2A4], esi
0x513653: mov     esi, [ebp+arg_14]
0x513656: lea     ebx, [esp+2C4h+Format]
0x51365A: push    ebx; UInt16
0x51365B: mov     [esp+2C8h+l], esi
0x51365F: mov     ebx, [esp+2C8h+l]
0x513663: mov     esi, [ebp+a3]
0x513666: push    ebx; l
0x513667: mov     ebx, [esp+2CCh+var_2A4]
0x51366B: push    ebx; a6
0x51366C: push    edx; a5
0x51366D: push    ecx; a4
0x51366E: push    esi; a3
0x51366F: push    edi; a2
0x513670: push    eax; a1
0x513671: mov     [esp+2E4h+string], ecx
0x513675: mov     [esp+2E4h+var_29C], edx
0x513679: call    Script_ExtractArgs
0x51367E: add     esp, 20h
0x513681: test    al, al
0x513683: jnz     short loc_51368C
0x513685: xor     al, al
0x513687: jmp     loc_5137EB
0x51368C: mov     eax, [esi]
0x51368E: movzx   ecx, word ptr [eax+edi]
0x513692: push    50h ; 'P'
0x513694: lea     edx, [esp+2C8h+var_298]
0x513698: add     eax, 2
0x51369B: push    0
0x51369D: push    edx
0x51369E: mov     [esp+2D0h+var_2B0], ecx
0x5136A2: mov     [esi], eax
0x5136A4: call    __memset
0x5136A9: xor     eax, eax
0x5136AB: add     esp, 0Ch
0x5136AE: xor     ebx, ebx
0x5136B0: cmp     word ptr [esp+2C4h+var_2B0], ax
0x5136B5: jle     short loc_5136F5
0x5136B7: mov     ecx, [esp+2C4h+l]
0x5136BB: fldz
0x5136BD: mov     edx, [esp+2C4h+var_2A4]
0x5136C1: push    1
0x5136C3: push    ecx
0x5136C4: mov     ecx, [esp+2CCh+var_29C]
0x5136C8: push    edx
0x5136C9: mov     edx, [esp+2D0h+string]
0x5136CD: push    ecx
0x5136CE: push    edx
0x5136CF: movsx   eax, bx
0x5136D2: push    esi
0x5136D3: fstp    [esp+eax*8+2DCh+var_298]
0x5136D7: lea     eax, [esp+eax*8+2DCh+var_298]
0x5136DB: push    edi
0x5136DC: push    eax
0x5136DD: call    ExecuteScriptInstruction?
0x5136E2: add     esp, 20h
0x5136E5: test    al, al
0x5136E7: jz      short loc_513685
0x5136E9: add     ebx, 1
0x5136EC: cmp     bx, word ptr [esp+2C4h+var_2B0]
0x5136F1: jl      short loc_5136B7
0x5136F3: xor     eax, eax
0x5136F5: mov     [esp+2C4h+string], eax
0x5136F9: mov     word ptr [esp+2C4h+var_2A8], ax
0x5136FE: mov     word ptr [esp+2C4h+var_2A8+2], ax
0x513703: fld     [esp+2C4h+var_250]
0x513707: sub     esp, 50h
0x51370A: fstp    qword ptr [esp+314h+duration]
0x51370E: mov     [esp+314h+var_4], eax
0x513715: fld     [esp+314h+var_258]
0x51371C: lea     eax, [esp+314h+Format]
0x513723: fstp    [esp+314h+var_2D4]
0x513727: lea     ecx, [esp+314h+string]
0x51372B: fld     [esp+314h+var_260]
0x513732: fstp    [esp+314h+var_2DC]
0x513736: fld     [esp+314h+var_268]
0x51373D: fstp    [esp+314h+var_2E4]
0x513741: fld     [esp+314h+var_270]
0x513748: fstp    [esp+314h+var_2EC]
0x51374C: fld     [esp+314h+var_278]
0x513753: fstp    [esp+314h+var_2F4]
0x513757: fld     [esp+314h+var_280]
0x51375E: fstp    [esp+314h+var_2FC]
0x513762: fld     [esp+314h+var_288]
0x513769: fstp    [esp+314h+var_304]
0x51376D: fld     [esp+314h+var_290]
0x513774: fstp    [esp+314h+var_30C]
0x513778: fld     [esp+314h+var_298]
0x51377C: fstp    qword ptr [esp+314h+ArgList]; ArgList
0x51377F: push    eax; Format
0x513780: push    ecx; int
0x513781: call    BSStringT_Static_Format
0x513786: mov     eax, [esi]
0x513788: mov     edi, [eax+edi]
0x51378B: add     eax, 4
0x51378E: add     esp, 58h
0x513791: test    edi, edi
0x513793: mov     [esp+2C4h+var_2B0], edi
0x513797: mov     [esi], eax
0x513799: jnz     short loc_5137A3
0x51379B: mov     [esp+2C4h+var_2B0], 0Ah
0x5137A3: mov     ax, word ptr [esp+2C4h+var_2A8]
0x5137A8: cmp     ax, 0FFFFh
0x5137AC: mov     esi, [esp+2C4h+string]
0x5137B0: jnz     short loc_5137C4
0x5137B2: mov     eax, esi
0x5137B4: lea     edx, [eax+1]
0x5137B7: mov     cl, [eax]
0x5137B9: add     eax, 1
0x5137BC: test    cl, cl
0x5137BE: jnz     short loc_5137B7
0x5137C0: sub     eax, edx
0x5137C2: jmp     short loc_5137C7
0x5137C4: movzx   eax, ax
0x5137C7: test    eax, eax
0x5137C9: jz      short loc_5137E0
0x5137CB: fild    [esp+2C4h+var_2B0]
0x5137CF: push    ecx
0x5137D0: fstp    [esp+2C8h+duration+4]; duration
0x5137D3: push    1; unk2
0x5137D5: push    0; unk1
0x5137D7: push    esi; string
0x5137D8: call    GameUI_QueueMessage
0x5137DD: add     esp, 10h
0x5137E0: push    esi
0x5137E1: call    FormHeapFree
0x5137E6: add     esp, 4
0x5137E9: mov     al, 1
0x5137EB: mov     ecx, [esp+2C4h+var_C]
0x5137F2: mov     large fs:0, ecx
0x5137F9: pop     ecx
0x5137FA: pop     edi
0x5137FB: pop     esi
0x5137FC: pop     ebx
0x5137FD: mov     ecx, [esp+2B4h+var_44]
0x513804: xor     ecx, esp
0x513806: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51380B: mov     esp, ebp
0x51380D: pop     ebp
0x51380E: retn
