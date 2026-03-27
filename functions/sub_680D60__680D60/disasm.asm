0x680D60: sub     esp, 108h
0x680D66: mov     eax, ds:0B30AACh
0x680D6B: xor     eax, esp
0x680D6D: mov     [esp+108h+var_4], eax
0x680D74: xor     eax, eax
0x680D76: cmp     [ecx+4], eax
0x680D79: jz      short loc_680DA5
0x680D7B: fldz
0x680D7D: push    ebx
0x680D7E: mov     [ecx+4], eax
0x680D81: fstp    dword ptr [ecx+8]
0x680D84: lea     eax, [esp+10Ch+Format]
0x680D88: push    offset aClearingLastDo; "Clearing last door."
0x680D8D: push    eax
0x680D8E: mov     bl, 1
0x680D90: call    __sprintf
0x680D95: lea     ecx, [esp+114h+Format]
0x680D99: push    ecx; Format
0x680D9A: call    Interface_ConsolePrint
0x680D9F: add     esp, 0Ch
0x680DA2: mov     al, bl
0x680DA4: pop     ebx
0x680DA5: mov     ecx, [esp+108h+var_4]
0x680DAC: xor     ecx, esp
0x680DAE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x680DB3: add     esp, 108h
0x680DB9: retn
