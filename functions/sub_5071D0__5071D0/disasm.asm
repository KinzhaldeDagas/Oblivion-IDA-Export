0x5071D0: sub     esp, 208h
0x5071D6: mov     eax, ds:0B30AACh
0x5071DB: xor     eax, esp
0x5071DD: mov     [esp+208h+var_4], eax
0x5071E4: mov     edx, [esp+208h+a4]
0x5071EB: mov     ecx, [esp+208h+arg_4]
0x5071F2: mov     eax, [esp+208h+a1]
0x5071F9: push    ebx
0x5071FA: mov     ebx, [esp+20Ch+l]
0x507201: push    ebp
0x507202: mov     ebp, [esp+210h+arg_1C]
0x507209: push    esi
0x50720A: mov     esi, [esp+214h+arg_C]
0x507211: push    edi
0x507212: mov     edi, [esp+218h+arg_10]
0x507219: mov     [esp+218h+a3], ebp
0x50721D: lea     ebp, [esp+218h+var_204]
0x507221: push    ebp; UInt16
0x507222: push    ebx; l
0x507223: push    edi; a6
0x507224: push    esi; a5
0x507225: push    edx; a4
0x507226: mov     edx, [esp+22Ch+a3]
0x50722A: push    edx; a3
0x50722B: push    ecx; a2
0x50722C: push    eax; a1
0x50722D: call    Script_ExtractArgs
0x507232: add     esp, 20h
0x507235: test    al, al
0x507237: pop     edi
0x507238: pop     esi
0x507239: pop     ebp
0x50723A: pop     ebx
0x50723B: jnz     short loc_507252
0x50723D: mov     ecx, [esp+208h+var_4]
0x507244: xor     ecx, esp
0x507246: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50724B: add     esp, 208h
0x507251: retn
0x507252: mov     eax, ds:0B33B00h
0x507257: cmp     dword ptr [eax+1C0h], 0
0x50725E: push    0
0x507260: jz      short loc_507277
0x507262: mov     ecx, ds:0B38CF0h
0x507268: push    ecx
0x507269: push    1
0x50726B: push    offset sub_65DC00
0x507270: lea     edx, [esp+218h+var_204]
0x507274: push    edx
0x507275: jmp     short loc_507289
0x507277: mov     eax, ds:0B38CF0h
0x50727C: push    eax
0x50727D: push    1
0x50727F: push    offset sub_662ED0
0x507284: lea     ecx, [esp+218h+var_204]
0x507288: push    ecx
0x507289: call    ShowUIMessageBox
0x50728E: mov     ecx, [esp+21Ch+var_4]
0x507295: add     esp, 14h
0x507298: xor     ecx, esp
0x50729A: mov     al, 1
0x50729C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5072A1: add     esp, 208h
0x5072A7: retn
