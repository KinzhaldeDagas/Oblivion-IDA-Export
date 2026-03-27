0x54FF60: sub     esp, 20Ch
0x54FF66: mov     eax, ds:0B30AACh
0x54FF6B: xor     eax, esp
0x54FF6D: mov     [esp+20Ch+var_4], eax
0x54FF74: mov     eax, [esp+20Ch+arg_4]
0x54FF7B: test    eax, eax
0x54FF7D: push    esi
0x54FF7E: mov     esi, [esp+210h+arg_0]
0x54FF85: jnz     short loc_54FF9F
0x54FF87: xor     eax, eax
0x54FF89: pop     esi
0x54FF8A: mov     ecx, [esp+20Ch+var_4]
0x54FF91: xor     ecx, esp
0x54FF93: call    @__security_check_cookie@4; __security_check_cookie(x)
0x54FF98: add     esp, 20Ch
0x54FF9E: retn
0x54FF9F: lea     edx, [esp+210h+Str]
0x54FFA3: sub     edx, eax
0x54FFA5: mov     cl, [eax]
0x54FFA7: mov     [edx+eax], cl
0x54FFAA: add     eax, 1
0x54FFAD: test    cl, cl
0x54FFAF: jnz     short loc_54FFA5
0x54FFB1: lea     eax, [esp+210h+Str]
0x54FFB5: push    2Eh ; '.'; Ch
0x54FFB7: push    eax; Str
0x54FFB8: call    _strrchr
0x54FFBD: add     esp, 8
0x54FFC0: test    eax, eax
0x54FFC2: jz      short loc_54FF87
0x54FFC4: lea     ecx, [esp+210h+Str]
0x54FFC8: push    ecx
0x54FFC9: lea     edx, [esp+214h+a2]
0x54FFD0: push    offset aS_nif; "%s.nif"
0x54FFD5: push    edx
0x54FFD6: mov     byte ptr [eax], 0
0x54FFD9: call    __sprintf
0x54FFDE: add     esp, 0Ch
0x54FFE1: push    0; a3
0x54FFE3: lea     eax, [esp+214h+a2]
0x54FFEA: push    eax; a2
0x54FFEB: mov     ecx, esi; this
0x54FFED: call    BSStringT_Set
0x54FFF2: mov     eax, [esi]
0x54FFF4: mov     ecx, [esp+210h+var_4]
0x54FFFB: pop     esi
0x54FFFC: xor     ecx, esp
0x54FFFE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x550003: add     esp, 20Ch
0x550009: retn
