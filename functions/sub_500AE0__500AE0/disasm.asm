0x500AE0: sub     esp, 208h
0x500AE6: mov     eax, ds:0B30AACh
0x500AEB: xor     eax, esp
0x500AED: mov     [esp+208h+var_4], eax
0x500AF4: push    ebx
0x500AF5: mov     ebx, [esp+20Ch+arg_1C]
0x500AFC: mov     edx, [esp+20Ch+l]
0x500B03: mov     [esp+20Ch+a3], ebx
0x500B07: mov     ebx, ds:0A4B88Ch
0x500B0D: mov     dword ptr [esp+20Ch+Str], ebx
0x500B11: mov     ebx, ds:0A4B890h
0x500B17: mov     ecx, [esp+20Ch+arg_4]
0x500B1E: mov     eax, [esp+20Ch+a1]
0x500B25: mov     [esp+20Ch+var_200], ebx
0x500B29: mov     ebx, ds:0A4B894h
0x500B2F: push    ebp
0x500B30: mov     ebp, [esp+210h+arg_10]
0x500B37: mov     [esp+210h+var_1FC], ebx
0x500B3B: mov     ebx, ds:0A4B898h
0x500B41: push    esi
0x500B42: mov     esi, [esp+214h+a4]
0x500B49: mov     [esp+214h+var_1F8], ebx
0x500B4D: mov     bx, ds:0A4B89Ch
0x500B54: push    edi
0x500B55: mov     edi, [esp+218h+arg_C]
0x500B5C: mov     [esp+218h+var_1F4], bx
0x500B61: mov     bl, ds:0A4B89Eh
0x500B67: mov     [esp+218h+var_1F2], bl
0x500B6B: lea     ebx, [esp+218h+Str]
0x500B6F: push    ebx; UInt16
0x500B70: push    edx; l
0x500B71: mov     edx, [esp+220h+a3]
0x500B75: push    ebp; a6
0x500B76: push    edi; a5
0x500B77: push    esi; a4
0x500B78: push    edx; a3
0x500B79: push    ecx; a2
0x500B7A: push    eax; a1
0x500B7B: call    Script_ExtractArgs
0x500B80: add     esp, 20h
0x500B83: test    al, al
0x500B85: pop     edi
0x500B86: pop     esi
0x500B87: pop     ebp
0x500B88: pop     ebx
0x500B89: jnz     short loc_500BC7
0x500B8B: mov     eax, ds:0A4B88Ch
0x500B90: mov     ecx, ds:0A4B890h
0x500B96: mov     edx, ds:0A4B894h
0x500B9C: mov     dword ptr [esp+208h+Str], eax
0x500BA0: mov     eax, ds:0A4B898h
0x500BA5: mov     [esp+208h+var_200], ecx
0x500BA9: mov     cx, ds:0A4B89Ch
0x500BB0: mov     [esp+208h+var_1FC], edx
0x500BB4: mov     dl, ds:0A4B89Eh
0x500BBA: mov     [esp+208h+var_1F8], eax
0x500BBE: mov     [esp+208h+var_1F4], cx
0x500BC3: mov     [esp+208h+var_1F2], dl
0x500BC7: lea     eax, [esp+208h+Str]
0x500BCB: push    offset a_txt; ".txt"
0x500BD0: push    eax; Str
0x500BD1: call    _strstr
0x500BD6: add     esp, 8
0x500BD9: test    eax, eax
0x500BDB: jnz     short loc_500BFF
0x500BDD: lea     eax, [esp+208h+Str]
0x500BE1: add     eax, 0FFFFFFFFh
0x500BE4: mov     cl, [eax+1]
0x500BE7: add     eax, 1
0x500BEA: test    cl, cl
0x500BEC: jnz     short loc_500BE4
0x500BEE: mov     ecx, ds:0A3A4D4h
0x500BF4: mov     dl, ds:0A3A4D8h
0x500BFA: mov     [eax], ecx
0x500BFC: mov     [eax+4], dl
0x500BFF: lea     eax, [esp+208h+Str]
0x500C03: push    eax
0x500C04: call    nullsub_returnFalse_0arg
0x500C09: add     esp, 4
0x500C0C: test    al, al
0x500C0E: jz      short loc_500C39
0x500C10: lea     ecx, [esp+208h+Str]
0x500C14: push    ecx
0x500C15: push    offset aOutputtingArch; "Outputting Archive profile to file %s"
0x500C1A: call    Interface_ConsolePrint
0x500C1F: add     esp, 8
0x500C22: mov     al, 1
0x500C24: mov     ecx, [esp+208h+var_4]
0x500C2B: xor     ecx, esp
0x500C2D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x500C32: add     esp, 208h
0x500C38: retn
0x500C39: push    offset aArchiveProfili; "Archive profiling is not enabled"
0x500C3E: call    Interface_ConsolePrint
0x500C43: mov     ecx, [esp+20Ch+var_4]
0x500C4A: add     esp, 4
0x500C4D: xor     ecx, esp
0x500C4F: mov     al, 1
0x500C51: call    @__security_check_cookie@4; __security_check_cookie(x)
0x500C56: add     esp, 208h
0x500C5C: retn
