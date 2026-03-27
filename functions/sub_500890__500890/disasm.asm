0x500890: sub     esp, 208h
0x500896: mov     eax, ds:0B30AACh
0x50089B: xor     eax, esp
0x50089D: mov     [esp+208h+var_4], eax
0x5008A4: push    ebx
0x5008A5: push    ebp
0x5008A6: mov     ebp, [esp+210h+arg_1C]
0x5008AD: mov     ebx, [esp+210h+l]
0x5008B4: mov     [esp+210h+a3], ebp
0x5008B8: mov     ebp, ds:0A4B818h
0x5008BE: mov     edx, [esp+210h+a4]
0x5008C5: mov     dword ptr [esp+210h+Str], ebp
0x5008C9: mov     ebp, ds:0A4B81Ch
0x5008CF: mov     ecx, [esp+210h+arg_4]
0x5008D6: mov     eax, [esp+210h+a1]
0x5008DD: mov     [esp+210h+var_200], ebp
0x5008E1: mov     ebp, ds:0A4B820h
0x5008E7: mov     [esp+210h+var_1FC], ebp
0x5008EB: mov     ebp, ds:0A4B824h
0x5008F1: push    esi
0x5008F2: mov     esi, [esp+214h+arg_C]
0x5008F9: mov     [esp+214h+var_1F8], ebp
0x5008FD: mov     ebp, ds:0A4B828h
0x500903: push    edi
0x500904: mov     edi, [esp+218h+arg_10]
0x50090B: mov     [esp+218h+var_1F4], ebp
0x50090F: mov     bp, ds:0A4B82Ch
0x500916: mov     [esp+218h+var_1F0], bp
0x50091B: lea     ebp, [esp+218h+Str]
0x50091F: push    ebp; UInt16
0x500920: push    ebx; l
0x500921: push    edi; a6
0x500922: push    esi; a5
0x500923: push    edx; a4
0x500924: mov     edx, [esp+22Ch+a3]
0x500928: push    edx; a3
0x500929: push    ecx; a2
0x50092A: push    eax; a1
0x50092B: call    Script_ExtractArgs
0x500930: add     esp, 20h
0x500933: test    al, al
0x500935: pop     edi
0x500936: pop     esi
0x500937: pop     ebp
0x500938: pop     ebx
0x500939: jnz     short loc_500977
0x50093B: mov     eax, ds:0A4B818h
0x500940: mov     ecx, ds:0A4B81Ch
0x500946: mov     edx, ds:0A4B820h
0x50094C: mov     dword ptr [esp+208h+Str], eax
0x500950: mov     eax, ds:0A4B824h
0x500955: mov     [esp+208h+var_200], ecx
0x500959: mov     ecx, ds:0A4B828h
0x50095F: mov     [esp+208h+var_1FC], edx
0x500963: mov     dx, ds:0A4B82Ch
0x50096A: mov     [esp+208h+var_1F8], eax
0x50096E: mov     [esp+208h+var_1F4], ecx
0x500972: mov     [esp+208h+var_1F0], dx
0x500977: lea     eax, [esp+208h+Str]
0x50097B: push    offset a_xls; ".xls"
0x500980: push    eax; Str
0x500981: call    _strstr
0x500986: add     esp, 8
0x500989: test    eax, eax
0x50098B: jnz     short loc_5009AF
0x50098D: lea     eax, [esp+208h+Str]
0x500991: add     eax, 0FFFFFFFFh
0x500994: mov     cl, [eax+1]
0x500997: add     eax, 1
0x50099A: test    cl, cl
0x50099C: jnz     short loc_500994
0x50099E: mov     ecx, ds:0A4B810h
0x5009A4: mov     dl, ds:0A4B814h
0x5009AA: mov     [eax], ecx
0x5009AC: mov     [eax+4], dl
0x5009AF: push    offset aThisFunctionOn; "This function only works in MEM_DEBUG"
0x5009B4: call    Interface_ConsolePrint
0x5009B9: mov     ecx, [esp+20Ch+var_4]
0x5009C0: add     esp, 4
0x5009C3: xor     ecx, esp
0x5009C5: mov     al, 1
0x5009C7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5009CC: add     esp, 208h
0x5009D2: retn
