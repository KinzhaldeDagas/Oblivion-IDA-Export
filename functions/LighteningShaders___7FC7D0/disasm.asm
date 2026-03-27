0x7FC7D0: push    0FFFFFFFFh
0x7FC7D2: push    offset SEH_7FC7D0
0x7FC7D7: mov     eax, large fs:0
0x7FC7DD: push    eax
0x7FC7DE: sub     esp, 8
0x7FC7E1: push    ebx
0x7FC7E2: push    ebp
0x7FC7E3: push    esi
0x7FC7E4: push    edi
0x7FC7E5: mov     eax, ds:0B30AACh
0x7FC7EA: xor     eax, esp
0x7FC7EC: push    eax
0x7FC7ED: lea     eax, [esp+28h+var_C]
0x7FC7F1: mov     large fs:0, eax
0x7FC7F7: push    8; Size
0x7FC7F9: call    FormHeapAlloc
0x7FC7FE: add     esp, 4
0x7FC801: mov     [esp+28h+var_14], eax
0x7FC805: test    eax, eax
0x7FC807: mov     [esp+28h+var_4], 0
0x7FC80F: jz      short loc_7FC81C
0x7FC811: mov     ecx, eax
0x7FC813: call    ShaderDefinition__Init
0x7FC818: mov     ebp, eax
0x7FC81A: jmp     short loc_7FC81E
0x7FC81C: xor     ebp, ebp
0x7FC81E: mov     eax, ds:0B43104h
0x7FC823: push    1; StreamCount
0x7FC825: push    6; a2
0x7FC827: push    eax; a1
0x7FC828: mov     [esp+34h+var_4], 0FFFFFFFFh
0x7FC830: call    CreateDX9ShaderDeclaration
0x7FC835: mov     esi, [ebp+0]
0x7FC838: mov     edi, eax
0x7FC83A: add     esp, 0Ch
0x7FC83D: cmp     esi, edi
0x7FC83F: jz      short loc_7FC872
0x7FC841: test    esi, esi
0x7FC843: jz      short loc_7FC861
0x7FC845: lea     ecx, [esi+4]
0x7FC848: push    ecx; lpAddend
0x7FC849: call    dword ptr ds:0A2807Ch
0x7FC84F: test    eax, eax
0x7FC851: jnz     short loc_7FC861
0x7FC853: test    esi, esi
0x7FC855: jz      short loc_7FC861
0x7FC857: mov     edx, [esi]
0x7FC859: mov     eax, [edx]
0x7FC85B: push    1
0x7FC85D: mov     ecx, esi
0x7FC85F: call    eax
0x7FC861: test    edi, edi
0x7FC863: mov     [ebp+0], edi
0x7FC866: jz      short loc_7FC872
0x7FC868: add     edi, 4
0x7FC86B: push    edi; lpAddend
0x7FC86C: call    dword ptr ds:0A28078h
0x7FC872: mov     ecx, ds:0B43104h
0x7FC878: push    1; StreamCount
0x7FC87A: push    8; a2
0x7FC87C: push    ecx; a1
0x7FC87D: call    CreateDX9ShaderDeclaration
0x7FC882: mov     edx, ds:0B43104h
0x7FC888: push    1; StreamCount
0x7FC88A: push    4; a2
0x7FC88C: push    edx; a1
0x7FC88D: mov     esi, eax
0x7FC88F: call    CreateDX9ShaderDeclaration
0x7FC894: push    1; StreamCount
0x7FC896: mov     ebx, eax
0x7FC898: mov     eax, ds:0B43104h
0x7FC89D: push    8; a2
0x7FC89F: push    eax; a1
0x7FC8A0: call    CreateDX9ShaderDeclaration
0x7FC8A5: mov     ecx, [ebp+0]
0x7FC8A8: mov     edx, [ecx]
0x7FC8AA: add     esp, 24h
0x7FC8AD: push    0
0x7FC8AF: push    2
0x7FC8B1: push    0
0x7FC8B3: push    0
0x7FC8B5: mov     edi, eax
0x7FC8B7: mov     eax, [edx+50h]
0x7FC8BA: push    0
0x7FC8BC: call    eax
0x7FC8BE: mov     ecx, [ebp+0]
0x7FC8C1: mov     edx, [ecx]
0x7FC8C3: mov     eax, [edx+50h]
0x7FC8C6: push    0
0x7FC8C8: push    2
0x7FC8CA: push    3
0x7FC8CC: push    3
0x7FC8CE: push    1
0x7FC8D0: call    eax
0x7FC8D2: mov     ecx, [ebp+0]
0x7FC8D5: mov     edx, [ecx]
0x7FC8D7: mov     eax, [edx+50h]
0x7FC8DA: push    0
0x7FC8DC: push    3
0x7FC8DE: push    4
0x7FC8E0: push    5
0x7FC8E2: push    2
0x7FC8E4: call    eax
0x7FC8E6: mov     ecx, [ebp+0]
0x7FC8E9: mov     edx, [ecx]
0x7FC8EB: mov     eax, [edx+50h]
0x7FC8EE: push    0
0x7FC8F0: push    1
0x7FC8F2: push    5
0x7FC8F4: push    7
0x7FC8F6: push    3
0x7FC8F8: call    eax
0x7FC8FA: mov     ecx, [ebp+0]
0x7FC8FD: mov     edx, [ecx]
0x7FC8FF: mov     eax, [edx+4Ch]
0x7FC902: push    0
0x7FC904: push    0
0x7FC906: push    6
0x7FC908: push    2
0x7FC90A: push    80000000h
0x7FC90F: push    0Eh
0x7FC911: push    4
0x7FC913: push    0
0x7FC915: call    eax
0x7FC917: mov     ecx, [ebp+0]
0x7FC91A: mov     edx, [ecx]
0x7FC91C: mov     eax, [edx+4Ch]
0x7FC91F: push    0
0x7FC921: push    0
0x7FC923: push    7
0x7FC925: push    2
0x7FC927: push    80000001h
0x7FC92C: push    0Fh
0x7FC92E: push    5
0x7FC930: push    0
0x7FC932: call    eax
0x7FC934: mov     edx, [esi]
0x7FC936: push    0
0x7FC938: mov     eax, [edx+50h]
0x7FC93B: push    2
0x7FC93D: push    0
0x7FC93F: push    0
0x7FC941: push    0
0x7FC943: mov     ecx, esi
0x7FC945: call    eax
0x7FC947: mov     edx, [esi]
0x7FC949: mov     eax, [edx+50h]
0x7FC94C: push    0
0x7FC94E: push    3
0x7FC950: push    1
0x7FC952: push    1
0x7FC954: push    1
0x7FC956: mov     ecx, esi
0x7FC958: call    eax
0x7FC95A: mov     edx, [esi]
0x7FC95C: mov     eax, [edx+50h]
0x7FC95F: push    0
0x7FC961: push    4
0x7FC963: push    2
0x7FC965: push    2
0x7FC967: push    2
0x7FC969: mov     ecx, esi
0x7FC96B: call    eax
0x7FC96D: mov     edx, [esi]
0x7FC96F: mov     eax, [edx+50h]
0x7FC972: push    0
0x7FC974: push    2
0x7FC976: push    3
0x7FC978: push    3
0x7FC97A: push    3
0x7FC97C: mov     ecx, esi
0x7FC97E: call    eax
0x7FC980: mov     edx, [esi]
0x7FC982: mov     eax, [edx+50h]
0x7FC985: push    0
0x7FC987: push    3
0x7FC989: push    4
0x7FC98B: push    5
0x7FC98D: push    4
0x7FC98F: mov     ecx, esi
0x7FC991: call    eax
0x7FC993: mov     edx, [esi]
0x7FC995: mov     eax, [edx+50h]
0x7FC998: push    0
0x7FC99A: push    1
0x7FC99C: push    5
0x7FC99E: push    7
0x7FC9A0: push    5
0x7FC9A2: mov     ecx, esi
0x7FC9A4: call    eax
0x7FC9A6: mov     edx, [esi]
0x7FC9A8: mov     eax, [edx+4Ch]
0x7FC9AB: push    0
0x7FC9AD: push    0
0x7FC9AF: push    6
0x7FC9B1: push    2
0x7FC9B3: push    80000000h
0x7FC9B8: push    0Eh
0x7FC9BA: push    6
0x7FC9BC: push    0
0x7FC9BE: mov     ecx, esi
0x7FC9C0: call    eax
0x7FC9C2: mov     edx, [esi]
0x7FC9C4: mov     eax, [edx+4Ch]
0x7FC9C7: push    0
0x7FC9C9: push    0
0x7FC9CB: push    7
0x7FC9CD: push    2
0x7FC9CF: push    80000001h
0x7FC9D4: push    0Fh
0x7FC9D6: push    7
0x7FC9D8: push    0
0x7FC9DA: mov     ecx, esi
0x7FC9DC: call    eax
0x7FC9DE: mov     edx, [ebx]
0x7FC9E0: push    0
0x7FC9E2: push    2
0x7FC9E4: push    0
0x7FC9E6: push    0
0x7FC9E8: mov     eax, [edx+50h]
0x7FC9EB: push    0
0x7FC9ED: mov     ecx, ebx
0x7FC9EF: call    eax
0x7FC9F1: mov     edx, [ebx]
0x7FC9F3: mov     eax, [edx+50h]
0x7FC9F6: push    0
0x7FC9F8: push    2
0x7FC9FA: push    3
0x7FC9FC: push    3
0x7FC9FE: push    1
0x7FCA00: mov     ecx, ebx
0x7FCA02: call    eax
0x7FCA04: mov     edx, [ebx]
0x7FCA06: mov     eax, [edx+50h]
0x7FCA09: push    0
0x7FCA0B: push    3
0x7FCA0D: push    4
0x7FCA0F: push    5
0x7FCA11: push    2
0x7FCA13: mov     ecx, ebx
0x7FCA15: call    eax
0x7FCA17: mov     edx, [ebx]
0x7FCA19: mov     eax, [edx+50h]
0x7FCA1C: push    0
0x7FCA1E: push    1
0x7FCA20: push    5
0x7FCA22: push    7
0x7FCA24: push    3
0x7FCA26: mov     ecx, ebx
0x7FCA28: call    eax
0x7FCA2A: mov     edx, [edi]
0x7FCA2C: mov     eax, [edx+50h]
0x7FCA2F: push    0
0x7FCA31: push    2
0x7FCA33: push    0
0x7FCA35: push    0
0x7FCA37: push    0
0x7FCA39: mov     ecx, edi
0x7FCA3B: call    eax
0x7FCA3D: mov     edx, [edi]
0x7FCA3F: mov     eax, [edx+50h]
0x7FCA42: push    0
0x7FCA44: push    2
0x7FCA46: push    3
0x7FCA48: push    3
0x7FCA4A: push    1
0x7FCA4C: mov     ecx, edi
0x7FCA4E: call    eax
0x7FCA50: mov     edx, [edi]
0x7FCA52: mov     eax, [edx+50h]
0x7FCA55: push    0
0x7FCA57: push    3
0x7FCA59: push    4
0x7FCA5B: push    5
0x7FCA5D: push    2
0x7FCA5F: mov     ecx, edi
0x7FCA61: call    eax
0x7FCA63: mov     edx, [edi]
0x7FCA65: mov     eax, [edx+50h]
0x7FCA68: push    0
0x7FCA6A: push    1
0x7FCA6C: push    5
0x7FCA6E: push    7
0x7FCA70: push    3
0x7FCA72: mov     ecx, edi
0x7FCA74: call    eax
0x7FCA76: mov     edx, [edi]
0x7FCA78: mov     eax, [edx+4Ch]
0x7FCA7B: push    0
0x7FCA7D: push    0
0x7FCA7F: push    6
0x7FCA81: push    2
0x7FCA83: push    80000000h
0x7FCA88: push    0Eh
0x7FCA8A: push    4
0x7FCA8C: push    0
0x7FCA8E: mov     ecx, edi
0x7FCA90: call    eax
0x7FCA92: mov     edx, [edi]
0x7FCA94: push    0
0x7FCA96: mov     eax, [edx+4Ch]
0x7FCA99: push    0
0x7FCA9B: push    7
0x7FCA9D: push    2
0x7FCA9F: push    80000001h
0x7FCAA4: push    0Fh
0x7FCAA6: push    5
0x7FCAA8: push    0
0x7FCAAA: mov     ecx, edi
0x7FCAAC: call    eax
0x7FCAAE: mov     edx, [edi]
0x7FCAB0: mov     eax, [edx+4Ch]
0x7FCAB3: push    0
0x7FCAB5: push    1
0x7FCAB7: push    5
0x7FCAB9: push    3
0x7FCABB: push    80000002h
0x7FCAC0: push    8
0x7FCAC2: push    6
0x7FCAC4: push    0
0x7FCAC6: mov     ecx, edi
0x7FCAC8: call    eax
0x7FCACA: mov     edx, [edi]
0x7FCACC: mov     eax, [edx+4Ch]
0x7FCACF: push    0
0x7FCAD1: push    2
0x7FCAD3: push    5
0x7FCAD5: push    3
0x7FCAD7: push    80000003h
0x7FCADC: push    9
0x7FCADE: push    7
0x7FCAE0: push    0
0x7FCAE2: mov     ecx, edi
0x7FCAE4: call    eax
0x7FCAE6: mov     ecx, [ebp+0]
0x7FCAE9: test    ecx, ecx
0x7FCAEB: mov     [esp+28h+var_14], ecx
0x7FCAEF: jnz     short loc_7FCAF7
0x7FCAF1: mov     [esp+28h+var_14], ecx
0x7FCAF5: jmp     short loc_7FCB22
0x7FCAF7: mov     edx, [ecx]
0x7FCAF9: mov     eax, [edx+4]
0x7FCAFC: call    eax
0x7FCAFE: test    eax, eax
0x7FCB00: jz      short loc_7FCB14
0x7FCB02: cmp     eax, offset dword_B3F684
0x7FCB07: jz      loc_7FCBCD
0x7FCB0D: mov     eax, [eax+4]
0x7FCB10: test    eax, eax
0x7FCB12: jnz     short loc_7FCB02
0x7FCB14: xor     al, al
0x7FCB16: neg     al
0x7FCB18: sbb     eax, eax
0x7FCB1A: and     eax, [esp+28h+var_14]
0x7FCB1E: mov     [esp+28h+var_14], eax
0x7FCB22: mov     edx, [esi]
0x7FCB24: mov     eax, [edx+4]
0x7FCB27: mov     ecx, esi
0x7FCB29: call    eax
0x7FCB2B: test    eax, eax
0x7FCB2D: jz      short loc_7FCB42
0x7FCB2F: nop
0x7FCB30: cmp     eax, offset dword_B3F684
0x7FCB35: jz      loc_7FCBD4
0x7FCB3B: mov     eax, [eax+4]
0x7FCB3E: test    eax, eax
0x7FCB40: jnz     short loc_7FCB30
0x7FCB42: xor     al, al
0x7FCB44: mov     edx, [ebx]
0x7FCB46: neg     al
0x7FCB48: mov     ecx, ebx
0x7FCB4A: sbb     eax, eax
0x7FCB4C: and     eax, esi
0x7FCB4E: mov     esi, eax
0x7FCB50: mov     eax, [edx+4]
0x7FCB53: call    eax
0x7FCB55: test    eax, eax
0x7FCB57: jz      short loc_7FCB6E
0x7FCB59: lea     esp, [esp+0]
0x7FCB60: cmp     eax, offset dword_B3F684
0x7FCB65: jz      short loc_7FCBDB
0x7FCB67: mov     eax, [eax+4]
0x7FCB6A: test    eax, eax
0x7FCB6C: jnz     short loc_7FCB60
0x7FCB6E: xor     al, al
0x7FCB70: mov     edx, [edi]
0x7FCB72: neg     al
0x7FCB74: mov     ecx, edi
0x7FCB76: sbb     eax, eax
0x7FCB78: and     eax, ebx
0x7FCB7A: mov     ebx, eax
0x7FCB7C: mov     eax, [edx+4]
0x7FCB7F: call    eax
0x7FCB81: test    eax, eax
0x7FCB83: jz      short loc_7FCB93
0x7FCB85: cmp     eax, offset dword_B3F684
0x7FCB8A: jz      short loc_7FCBDF
0x7FCB8C: mov     eax, [eax+4]
0x7FCB8F: test    eax, eax
0x7FCB91: jnz     short loc_7FCB85
0x7FCB93: xor     al, al
0x7FCB95: neg     al
0x7FCB97: push    0A0h ; ' '; Size
0x7FCB9C: sbb     eax, eax
0x7FCB9E: and     eax, edi
0x7FCBA0: mov     edi, eax
0x7FCBA2: call    FormHeapAlloc
0x7FCBA7: add     esp, 4
0x7FCBAA: mov     [esp+28h+var_10], eax
0x7FCBAE: test    eax, eax
0x7FCBB0: mov     [esp+28h+var_4], 1
0x7FCBB8: jz      short loc_7FCBE3
0x7FCBBA: mov     ecx, [esp+28h+var_14]
0x7FCBBE: push    edi
0x7FCBBF: push    ebx
0x7FCBC0: push    esi
0x7FCBC1: push    ecx
0x7FCBC2: mov     ecx, eax; this
0x7FCBC4: call    ??0Lighting30Shader@@QAE@XZ; Lighting30Shader::Lighting30Shader(void)
0x7FCBC9: mov     esi, eax
0x7FCBCB: jmp     short loc_7FCBE5
0x7FCBCD: mov     al, 1
0x7FCBCF: jmp     loc_7FCB16
0x7FCBD4: mov     al, 1
0x7FCBD6: jmp     loc_7FCB44
0x7FCBDB: mov     al, 1
0x7FCBDD: jmp     short loc_7FCB70
0x7FCBDF: mov     al, 1
0x7FCBE1: jmp     short loc_7FCB95
0x7FCBE3: xor     esi, esi
0x7FCBE5: mov     edx, [esi]
0x7FCBE7: mov     eax, [edx+84h]
0x7FCBED: mov     ecx, esi
0x7FCBEF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7FCBF7: call    eax
0x7FCBF9: mov     edx, [esi]
0x7FCBFB: mov     eax, [edx+0A8h]
0x7FCC01: mov     ecx, esi
0x7FCC03: call    eax
0x7FCC05: mov     edx, [esi]
0x7FCC07: mov     eax, [edx+0B4h]
0x7FCC0D: mov     ecx, esi
0x7FCC0F: call    eax
0x7FCC11: mov     edx, [esi]
0x7FCC13: mov     eax, [edx+88h]
0x7FCC19: mov     ecx, esi
0x7FCC1B: call    eax
0x7FCC1D: mov     edi, [ebp+4]
0x7FCC20: cmp     edi, esi
0x7FCC22: jz      short loc_7FCC51
0x7FCC24: test    edi, edi
0x7FCC26: jz      short loc_7FCC44
0x7FCC28: lea     ecx, [edi+4]
0x7FCC2B: push    ecx; lpAddend
0x7FCC2C: call    dword ptr ds:0A2807Ch
0x7FCC32: test    eax, eax
0x7FCC34: jnz     short loc_7FCC44
0x7FCC36: test    edi, edi
0x7FCC38: jz      short loc_7FCC44
0x7FCC3A: mov     edx, [edi]
0x7FCC3C: mov     eax, [edx]
0x7FCC3E: push    1
0x7FCC40: mov     ecx, edi
0x7FCC42: call    eax
0x7FCC44: mov     [ebp+4], esi
0x7FCC47: add     esi, 4
0x7FCC4A: push    esi; lpAddend
0x7FCC4B: call    dword ptr ds:0A28078h
0x7FCC51: mov     ecx, [ebp+4]
0x7FCC54: mov     edx, [ecx]
0x7FCC56: mov     eax, [ebp+0]
0x7FCC59: mov     edx, [edx+54h]
0x7FCC5C: push    eax
0x7FCC5D: call    edx
0x7FCC5F: mov     eax, ebp
0x7FCC61: mov     ecx, dword ptr [esp+28h+var_C]
0x7FCC65: mov     large fs:0, ecx
0x7FCC6C: pop     ecx
0x7FCC6D: pop     edi
0x7FCC6E: pop     esi
0x7FCC6F: pop     ebp
0x7FCC70: pop     ebx
0x7FCC71: add     esp, 14h
0x7FCC74: retn
