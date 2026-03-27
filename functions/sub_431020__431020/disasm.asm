0x431020: sub     esp, 108h
0x431026: mov     eax, ___security_cookie
0x43102B: xor     eax, esp
0x43102D: mov     [esp+108h+var_4], eax
0x431034: push    ebx
0x431035: mov     ebx, [esp+10Ch+arg_C]
0x43103C: cmp     ebx, 0FFFFFFFFh
0x43103F: push    esi
0x431040: mov     esi, [esp+110h+arg_4]
0x431047: push    edi
0x431048: jnz     short loc_43104F
0x43104A: mov     ebx, 0FFFFh
0x43104F: mov     eax, [esp+114h+arg_0]
0x431056: mov     dl, [eax+1]
0x431059: cmp     dl, 3Ah ; ':'
0x43105C: jnz     short loc_431068
0x43105E: or      [esp+114h+arg_8], 5
0x431066: jmp     short loc_43107D
0x431068: cmp     byte ptr [eax], 2Eh ; '.'
0x43106B: jnz     short loc_43107D
0x43106D: cmp     dl, 5Ch ; '\'
0x431070: jnz     short loc_43107D
0x431072: or      [esp+114h+arg_8], 4
0x43107A: add     eax, 2
0x43107D: cmp     byte ptr [eax], 5Ch ; '\'
0x431080: lea     edi, [esp+114h+var_108]
0x431084: jnz     short loc_43109E
0x431086: add     eax, 1
0x431089: sub     edi, eax
0x43108B: jmp     short loc_431090
0x43108D: align 10h
0x431090: mov     dl, [eax]
0x431092: mov     [edi+eax], dl
0x431095: add     eax, 1
0x431098: test    dl, dl
0x43109A: jnz     short loc_431090
0x43109C: jmp     short loc_4310AC
0x43109E: sub     edi, eax
0x4310A0: mov     dl, [eax]
0x4310A2: mov     [edi+eax], dl
0x4310A5: add     eax, 1
0x4310A8: test    dl, dl
0x4310AA: jnz     short loc_4310A0
0x4310AC: mov     edx, [esp+114h+arg_8]
0x4310B3: mov     eax, [ecx]
0x4310B5: mov     eax, [eax+0Ch]
0x4310B8: push    ebx
0x4310B9: push    edx
0x4310BA: lea     edx, [esp+11Ch+var_108]
0x4310BE: push    edx
0x4310BF: call    eax
0x4310C1: test    eax, eax
0x4310C3: jnz     short loc_4310CD
0x4310C5: test    esi, esi
0x4310C7: jz      short loc_4310EC
0x4310C9: mov     [esi], al
0x4310CB: jmp     short loc_4310EC
0x4310CD: test    esi, esi
0x4310CF: jz      short loc_4310EC
0x4310D1: lea     ecx, [esp+114h+var_108]
0x4310D5: mov     edx, ecx
0x4310D7: sub     esi, edx
0x4310D9: lea     esp, [esp+0]
0x4310E0: mov     dl, [ecx]
0x4310E2: mov     [esi+ecx], dl
0x4310E5: add     ecx, 1
0x4310E8: test    dl, dl
0x4310EA: jnz     short loc_4310E0
0x4310EC: mov     ecx, [esp+114h+var_4]
0x4310F3: pop     edi
0x4310F4: pop     esi
0x4310F5: pop     ebx
0x4310F6: xor     ecx, esp
0x4310F8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4310FD: add     esp, 108h
0x431103: retn    10h
