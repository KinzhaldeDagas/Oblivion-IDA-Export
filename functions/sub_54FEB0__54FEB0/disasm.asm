0x54FEB0: sub     esp, 20Ch
0x54FEB6: mov     eax, ds:0B30AACh
0x54FEBB: xor     eax, esp
0x54FEBD: mov     [esp+20Ch+var_4], eax
0x54FEC4: mov     eax, [esp+20Ch+arg_4]
0x54FECB: test    eax, eax
0x54FECD: push    esi
0x54FECE: mov     esi, [esp+210h+arg_0]
0x54FED5: jnz     short loc_54FEEF
0x54FED7: xor     eax, eax
0x54FED9: pop     esi
0x54FEDA: mov     ecx, [esp+20Ch+var_4]
0x54FEE1: xor     ecx, esp
0x54FEE3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x54FEE8: add     esp, 20Ch
0x54FEEE: retn
0x54FEEF: lea     edx, [esp+210h+Str]
0x54FEF3: sub     edx, eax
0x54FEF5: mov     cl, [eax]
0x54FEF7: mov     [edx+eax], cl
0x54FEFA: add     eax, 1
0x54FEFD: test    cl, cl
0x54FEFF: jnz     short loc_54FEF5
0x54FF01: lea     eax, [esp+210h+Str]
0x54FF05: push    2Eh ; '.'; Ch
0x54FF07: push    eax; Str
0x54FF08: call    _strrchr
0x54FF0D: add     esp, 8
0x54FF10: test    eax, eax
0x54FF12: jz      short loc_54FED7
0x54FF14: lea     ecx, [esp+210h+Str]
0x54FF18: push    ecx
0x54FF19: lea     edx, [esp+214h+a2]
0x54FF20: push    offset aS_egm; "%s.egm"
0x54FF25: push    edx
0x54FF26: mov     byte ptr [eax], 0
0x54FF29: call    __sprintf
0x54FF2E: add     esp, 0Ch
0x54FF31: push    0; a3
0x54FF33: lea     eax, [esp+214h+a2]
0x54FF3A: push    eax; a2
0x54FF3B: mov     ecx, esi; this
0x54FF3D: call    BSStringT_Set
0x54FF42: mov     eax, [esi]
0x54FF44: mov     ecx, [esp+210h+var_4]
0x54FF4B: pop     esi
0x54FF4C: xor     ecx, esp
0x54FF4E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x54FF53: add     esp, 20Ch
0x54FF59: retn
