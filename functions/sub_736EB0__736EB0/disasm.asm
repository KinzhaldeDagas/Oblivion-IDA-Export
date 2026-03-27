0x736EB0: sub     esp, 258h
0x736EB6: mov     eax, ds:0B30AACh
0x736EBB: xor     eax, esp
0x736EBD: mov     [esp+258h+var_4], eax
0x736EC4: mov     eax, [esp+258h+arg_0]
0x736ECB: mov     edx, [esp+258h+arg_90]
0x736ED2: push    ebp
0x736ED3: push    esi
0x736ED4: mov     [esp+260h+var_20C], eax
0x736ED8: mov     eax, [esp+260h+arg_4]
0x736EDF: mov     ecx, [eax+5Ch]
0x736EE2: mov     esi, [eax+60h]
0x736EE5: mov     esi, [ecx+esi*4]
0x736EE8: imul    esi, [esp+260h+arg_94]
0x736EF0: add     esi, [ecx+edx*4]
0x736EF3: mov     ecx, [eax+58h]
0x736EF6: mov     ebp, [ecx+edx*4]
0x736EF9: add     esi, [eax+50h]
0x736EFC: mov     eax, [eax+54h]
0x736EFF: imul    ebp, [eax+edx*4]
0x736F03: lea     ecx, [esp+260h+arg_8]
0x736F0A: push    ecx
0x736F0B: add     ebp, ebp
0x736F0D: lea     ecx, [esp+264h+var_248]
0x736F11: mov     [esp+264h+var_210], ebp
0x736F15: call    sub_71B4D0
0x736F1A: test    ebp, ebp
0x736F1C: mov     [esp+260h+var_220], 0
0x736F24: jbe     loc_73730D
0x736F2A: push    ebx
0x736F2B: mov     bl, [esp+264h+var_234]
0x736F2F: push    edi
0x736F30: jmp     short loc_736F36
0x736F32: mov     ebp, [esp+268h+var_210]
0x736F36: sub     ebp, [esp+268h+var_220]
0x736F3A: mov     edi, 200h
0x736F3F: cmp     ebp, edi
0x736F41: mov     [esp+268h+var_224], edi
0x736F45: jnb     short loc_736F4D
0x736F47: mov     [esp+268h+var_224], ebp
0x736F4B: mov     edi, ebp
0x736F4D: push    1
0x736F4F: lea     edx, [esp+26Ch+var_254]
0x736F53: push    edx
0x736F54: push    edi
0x736F55: lea     eax, [esp+274h+var_204]
0x736F59: push    eax
0x736F5A: mov     eax, [esp+278h+var_20C]
0x736F5E: mov     ecx, [eax+4]
0x736F61: push    eax
0x736F62: mov     [esp+27Ch+var_254], 1
0x736F6A: call    ecx
0x736F6C: add     esp, 14h
0x736F6F: push    offset unk_B25E00
0x736F74: lea     ecx, [esp+26Ch+arg_4C]
0x736F7B: call    sub_71AD40
0x736F80: test    al, al
0x736F82: jz      loc_73716B
0x736F88: shr     edi, 1
0x736F8A: lea     ebp, [esp+268h+var_204]
0x736F8E: jz      loc_7372F5
0x736F94: movzx   eax, bl
0x736F97: mov     [esp+268h+var_22C], eax
0x736F9B: mov     ecx, 8
0x736FA0: sub     ecx, eax
0x736FA2: mov     al, 8
0x736FA4: sub     al, [esp+268h+var_233]
0x736FA8: mov     [esp+268h+var_21C], ecx
0x736FAC: mov     [esp+268h+var_257], al
0x736FB0: movzx   eax, [esp+268h+var_233]
0x736FB5: mov     [esp+268h+var_218], eax
0x736FB9: mov     ecx, 8
0x736FBE: sub     ecx, eax
0x736FC0: mov     al, 8
0x736FC2: sub     al, [esp+268h+var_232]
0x736FC6: mov     [esp+268h+var_214], ecx
0x736FCA: mov     [esp+268h+var_256], al
0x736FCE: movzx   eax, [esp+268h+var_232]
0x736FD3: mov     [esp+268h+var_230], eax
0x736FD7: mov     ecx, 8
0x736FDC: sub     ecx, eax
0x736FDE: mov     al, 8
0x736FE0: sub     al, [esp+268h+var_231]
0x736FE4: mov     [esp+268h+var_228], ecx
0x736FE8: mov     [esp+268h+var_258], al
0x736FEC: movzx   eax, [esp+268h+var_231]
0x736FF1: mov     dl, 8
0x736FF3: sub     dl, bl
0x736FF5: mov     ecx, 8
0x736FFA: sub     ecx, eax
0x736FFC: mov     [esp+268h+var_255], dl
0x737000: mov     [esp+268h+var_24C], eax
0x737004: mov     [esp+268h+var_208], ecx
0x737008: mov     [esp+268h+var_254], edi
0x73700C: jmp     short loc_737014
0x73700E: align 10h
0x737010: mov     dl, [esp+268h+var_255]
0x737014: movzx   eax, word ptr [ebp+0]
0x737018: and     eax, [esp+268h+var_248]
0x73701C: movzx   ecx, [esp+268h+var_238]
0x737021: shr     eax, cl
0x737023: xor     edi, edi
0x737025: cmp     dl, bl
0x737027: ja      short loc_73703D
0x737029: lea     esp, [esp+0]
0x737030: movzx   ecx, dl
0x737033: or      edi, eax
0x737035: sub     bl, dl
0x737037: shl     edi, cl
0x737039: cmp     bl, dl
0x73703B: jnb     short loc_737030
0x73703D: mov     ecx, [esp+268h+var_21C]
0x737041: sub     ecx, ebx
0x737043: mov     ebx, eax
0x737045: shr     ebx, cl
0x737047: mov     ecx, edi
0x737049: mov     [esp+268h+var_250], ecx
0x73704D: mov     cl, dl
0x73704F: mov     edx, edi
0x737051: shr     edx, cl
0x737053: mov     ecx, [esp+268h+var_22C]
0x737057: shl     al, cl
0x737059: movzx   ecx, [esp+268h+var_237]
0x73705E: or      bl, dl
0x737060: mov     dl, [esp+268h+var_257]
0x737064: or      bl, al
0x737066: mov     [esi], bl
0x737068: movzx   eax, word ptr [ebp+0]
0x73706C: and     eax, [esp+268h+var_244]
0x737070: add     esi, 1
0x737073: shr     eax, cl
0x737075: mov     cl, [esp+268h+var_233]
0x737079: xor     edi, edi
0x73707B: cmp     dl, cl
0x73707D: mov     bl, cl
0x73707F: ja      short loc_73708E
0x737081: movzx   ecx, dl
0x737084: or      edi, eax
0x737086: sub     bl, dl
0x737088: shl     edi, cl
0x73708A: cmp     bl, dl
0x73708C: jnb     short loc_737081
0x73708E: mov     ecx, [esp+268h+var_214]
0x737092: sub     ecx, ebx
0x737094: mov     ebx, eax
0x737096: shr     ebx, cl
0x737098: mov     ecx, edi
0x73709A: mov     [esp+268h+var_250], ecx
0x73709E: mov     cl, dl
0x7370A0: mov     edx, edi
0x7370A2: shr     edx, cl
0x7370A4: mov     ecx, [esp+268h+var_218]
0x7370A8: shl     al, cl
0x7370AA: movzx   ecx, [esp+268h+var_236]
0x7370AF: or      bl, dl
0x7370B1: mov     dl, [esp+268h+var_256]
0x7370B5: or      bl, al
0x7370B7: mov     [esi], bl
0x7370B9: movzx   eax, word ptr [ebp+0]
0x7370BD: and     eax, [esp+268h+var_240]
0x7370C1: mov     bl, [esp+268h+var_232]
0x7370C5: add     esi, 1
0x7370C8: shr     eax, cl
0x7370CA: xor     edi, edi
0x7370CC: cmp     dl, bl
0x7370CE: ja      short loc_7370DD
0x7370D0: movzx   ecx, dl
0x7370D3: or      edi, eax
0x7370D5: sub     bl, dl
0x7370D7: shl     edi, cl
0x7370D9: cmp     bl, dl
0x7370DB: jnb     short loc_7370D0
0x7370DD: mov     ecx, [esp+268h+var_228]
0x7370E1: sub     ecx, ebx
0x7370E3: mov     ebx, eax
0x7370E5: shr     ebx, cl
0x7370E7: mov     ecx, edi
0x7370E9: mov     [esp+268h+var_250], ecx
0x7370ED: mov     cl, dl
0x7370EF: mov     edx, edi
0x7370F1: shr     edx, cl
0x7370F3: mov     ecx, [esp+268h+var_230]
0x7370F7: shl     al, cl
0x7370F9: movzx   ecx, [esp+268h+var_235]
0x7370FE: or      bl, dl
0x737100: mov     dl, [esp+268h+var_258]
0x737104: or      bl, al
0x737106: mov     [esi], bl
0x737108: movzx   eax, word ptr [ebp+0]
0x73710C: and     eax, [esp+268h+var_23C]
0x737110: add     esi, 1
0x737113: shr     eax, cl
0x737115: mov     cl, [esp+268h+var_231]
0x737119: xor     edi, edi
0x73711B: cmp     dl, cl
0x73711D: mov     bl, cl
0x73711F: ja      short loc_73712E
0x737121: movzx   ecx, dl
0x737124: or      edi, eax
0x737126: sub     bl, dl
0x737128: shl     edi, cl
0x73712A: cmp     bl, dl
0x73712C: jnb     short loc_737121
0x73712E: mov     ecx, [esp+268h+var_208]
0x737132: sub     ecx, ebx
0x737134: mov     ebx, eax
0x737136: shr     ebx, cl
0x737138: mov     ecx, edi
0x73713A: mov     [esp+268h+var_250], ecx
0x73713E: mov     cl, dl
0x737140: mov     edx, edi
0x737142: shr     edx, cl
0x737144: mov     ecx, [esp+268h+var_24C]
0x737148: shl     al, cl
0x73714A: add     esi, 1
0x73714D: or      bl, dl
0x73714F: add     ebp, 2
0x737152: or      bl, al
0x737154: sub     [esp+268h+var_254], 1
0x737159: mov     [esi-1], bl
0x73715C: mov     bl, [esp+268h+var_234]
0x737160: jnz     loc_737010
0x737166: jmp     loc_7372F5
0x73716B: push    offset unk_B25E48
0x737170: lea     ecx, [esp+26Ch+arg_4C]
0x737177: call    sub_71AD40
0x73717C: test    al, al
0x73717E: jz      loc_73730B
0x737184: shr     edi, 1
0x737186: lea     ebp, [esp+268h+var_204]
0x73718A: jz      loc_7372F5
0x737190: movzx   eax, bl
0x737193: mov     [esp+268h+var_22C], eax
0x737197: mov     ecx, 8
0x73719C: sub     ecx, eax
0x73719E: mov     al, 8
0x7371A0: sub     al, [esp+268h+var_233]
0x7371A4: mov     [esp+268h+var_21C], ecx
0x7371A8: mov     [esp+268h+var_256], al
0x7371AC: movzx   eax, [esp+268h+var_233]
0x7371B1: mov     [esp+268h+var_218], eax
0x7371B5: mov     ecx, 8
0x7371BA: sub     ecx, eax
0x7371BC: mov     al, 8
0x7371BE: sub     al, [esp+268h+var_232]
0x7371C2: mov     [esp+268h+var_214], ecx
0x7371C6: mov     [esp+268h+var_257], al
0x7371CA: movzx   eax, [esp+268h+var_232]
0x7371CF: mov     dl, 8
0x7371D1: sub     dl, bl
0x7371D3: mov     ecx, 8
0x7371D8: sub     ecx, eax
0x7371DA: mov     [esp+268h+var_258], dl
0x7371DE: mov     [esp+268h+var_230], eax
0x7371E2: mov     [esp+268h+var_228], ecx
0x7371E6: mov     [esp+268h+var_254], edi
0x7371EA: jmp     short loc_7371F4
0x7371EC: align 10h
0x7371F0: mov     dl, [esp+268h+var_258]
0x7371F4: movzx   eax, word ptr [ebp+0]
0x7371F8: and     eax, [esp+268h+var_248]
0x7371FC: movzx   ecx, [esp+268h+var_238]
0x737201: shr     eax, cl
0x737203: xor     edi, edi
0x737205: cmp     dl, bl
0x737207: ja      short loc_73721D
0x737209: lea     esp, [esp+0]
0x737210: movzx   ecx, dl
0x737213: or      edi, eax
0x737215: sub     bl, dl
0x737217: shl     edi, cl
0x737219: cmp     bl, dl
0x73721B: jnb     short loc_737210
0x73721D: mov     ecx, [esp+268h+var_21C]
0x737221: sub     ecx, ebx
0x737223: mov     ebx, eax
0x737225: shr     ebx, cl
0x737227: mov     ecx, edi
0x737229: mov     [esp+268h+var_24C], ecx
0x73722D: mov     cl, dl
0x73722F: mov     edx, edi
0x737231: shr     edx, cl
0x737233: mov     ecx, [esp+268h+var_22C]
0x737237: shl     al, cl
0x737239: movzx   ecx, [esp+268h+var_237]
0x73723E: or      bl, dl
0x737240: mov     dl, [esp+268h+var_256]
0x737244: or      bl, al
0x737246: mov     [esi], bl
0x737248: movzx   eax, word ptr [ebp+0]
0x73724C: and     eax, [esp+268h+var_244]
0x737250: add     esi, 1
0x737253: shr     eax, cl
0x737255: mov     cl, [esp+268h+var_233]
0x737259: xor     edi, edi
0x73725B: cmp     dl, cl
0x73725D: mov     bl, cl
0x73725F: ja      short loc_73726E
0x737261: movzx   ecx, dl
0x737264: or      edi, eax
0x737266: sub     bl, dl
0x737268: shl     edi, cl
0x73726A: cmp     bl, dl
0x73726C: jnb     short loc_737261
0x73726E: mov     ecx, [esp+268h+var_214]
0x737272: sub     ecx, ebx
0x737274: mov     ebx, eax
0x737276: shr     ebx, cl
0x737278: mov     ecx, edi
0x73727A: mov     [esp+268h+var_24C], ecx
0x73727E: mov     cl, dl
0x737280: mov     edx, edi
0x737282: shr     edx, cl
0x737284: mov     ecx, [esp+268h+var_218]
0x737288: shl     al, cl
0x73728A: movzx   ecx, [esp+268h+var_236]
0x73728F: or      bl, dl
0x737291: mov     dl, [esp+268h+var_257]
0x737295: or      bl, al
0x737297: mov     [esi], bl
0x737299: movzx   eax, word ptr [ebp+0]
0x73729D: and     eax, [esp+268h+var_240]
0x7372A1: mov     bl, [esp+268h+var_232]
0x7372A5: add     esi, 1
0x7372A8: shr     eax, cl
0x7372AA: xor     edi, edi
0x7372AC: cmp     dl, bl
0x7372AE: ja      short loc_7372BD
0x7372B0: movzx   ecx, dl
0x7372B3: or      edi, eax
0x7372B5: sub     bl, dl
0x7372B7: shl     edi, cl
0x7372B9: cmp     bl, dl
0x7372BB: jnb     short loc_7372B0
0x7372BD: mov     ecx, [esp+268h+var_228]
0x7372C1: sub     ecx, ebx
0x7372C3: mov     ebx, eax
0x7372C5: shr     ebx, cl
0x7372C7: mov     ecx, edi
0x7372C9: mov     [esp+268h+var_24C], ecx
0x7372CD: mov     cl, dl
0x7372CF: mov     edx, edi
0x7372D1: shr     edx, cl
0x7372D3: mov     ecx, [esp+268h+var_230]
0x7372D7: shl     al, cl
0x7372D9: add     esi, 1
0x7372DC: or      bl, dl
0x7372DE: add     ebp, 2
0x7372E1: or      bl, al
0x7372E3: sub     [esp+268h+var_254], 1
0x7372E8: mov     [esi-1], bl
0x7372EB: mov     bl, [esp+268h+var_234]
0x7372EF: jnz     loc_7371F0
0x7372F5: mov     eax, [esp+268h+var_220]
0x7372F9: add     eax, [esp+268h+var_224]
0x7372FD: cmp     eax, [esp+268h+var_210]
0x737301: mov     [esp+268h+var_220], eax
0x737305: jb      loc_736F32
0x73730B: pop     edi
0x73730C: pop     ebx
0x73730D: mov     ecx, [esp+260h+var_4]
0x737314: pop     esi
0x737315: pop     ebp
0x737316: xor     ecx, esp
0x737318: call    @__security_check_cookie@4; __security_check_cookie(x)
0x73731D: add     esp, 258h
0x737323: retn
