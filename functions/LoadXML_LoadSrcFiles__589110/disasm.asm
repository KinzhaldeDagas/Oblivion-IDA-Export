0x589110: sub     esp, 238h
0x589116: mov     eax, ds:0B30AACh
0x58911B: xor     eax, esp
0x58911D: mov     [esp+238h+var_4], eax
0x589124: mov     ecx, [esp+238h+arg_0]
0x58912B: push    ebx
0x58912C: push    ebp
0x58912D: mov     ebp, [ecx]
0x58912F: push    esi
0x589130: xor     eax, eax
0x589132: xor     esi, esi
0x589134: cmp     ebp, esi
0x589136: push    edi
0x589137: mov     edi, [ecx+4]
0x58913A: mov     [esp+248h+var_224], ecx
0x58913E: mov     [esp+248h+var_22C], esi
0x589142: mov     [esp+248h+var_234], edi
0x589146: mov     [esp+248h+var_235], 0
0x58914B: mov     dword ptr [esp+248h+Str1+1], eax
0x58914F: mov     dword ptr [esp+248h+Str1+5], eax
0x589153: mov     [esp+248h+var_20F], al
0x589157: jle     loc_58936F
0x58915D: lea     ecx, [ecx+0]
0x589160: movzx   eax, [esp+248h+Str1+1]
0x589165: movzx   ecx, [esp+248h+Str1+2]
0x58916A: movzx   edx, [esp+248h+Str1+3]
0x58916F: mov     [esp+248h+Str1], al
0x589173: movzx   eax, [esp+248h+Str1+4]
0x589178: mov     [esp+248h+Str1+1], cl
0x58917C: movzx   ecx, [esp+248h+Str1+5]
0x589181: mov     [esp+248h+Str1+2], dl
0x589185: movzx   edx, [esp+248h+Str1+6]
0x58918A: mov     [esp+248h+Str1+3], al
0x58918E: movzx   eax, [esp+248h+Str1+7]
0x589193: mov     [esp+248h+Str1+4], cl
0x589197: mov     [esp+248h+Str1+5], dl
0x58919B: mov     [esp+248h+Str1+6], al
0x58919F: mov     al, [esi+edi]
0x5891A2: cmp     al, 60h ; '`'
0x5891A4: mov     [esp+248h+Str1+7], al
0x5891A8: jle     short loc_5891B0
0x5891AA: add     al, 0E0h ; 'à'
0x5891AC: mov     [esp+248h+Str1+7], al
0x5891B0: lea     ecx, [esp+248h+Str1]
0x5891B4: push    offset aInclude; "<INCLUDE"
0x5891B9: push    ecx; Str1
0x5891BA: call    __strcmp
0x5891BF: add     esp, 8
0x5891C2: test    eax, eax
0x5891C4: jnz     loc_589355
0x5891CA: lea     edx, [esi-7]
0x5891CD: xor     ecx, ecx
0x5891CF: cmp     esi, ebp
0x5891D1: mov     [esp+248h+var_235], 1
0x5891D6: mov     [esp+248h+var_230], edx
0x5891DA: jge     short loc_5891ED
0x5891DC: lea     esp, [esp+0]
0x5891E0: cmp     byte ptr [esi+edi], 22h ; '"'
0x5891E4: jz      short loc_589209
0x5891E6: add     esi, 1
0x5891E9: cmp     esi, ebp
0x5891EB: jl      short loc_5891E0
0x5891ED: push    8; Size
0x5891EF: call    FormHeapAlloc
0x5891F4: add     esp, 4
0x5891F7: test    eax, eax
0x5891F9: jz      loc_589373
0x5891FF: mov     [eax], ebp
0x589201: mov     [eax+4], edi
0x589204: jmp     loc_589375
0x589209: cmp     esi, ebp
0x58920B: jge     short loc_5891ED
0x58920D: add     esi, 1
0x589210: cmp     esi, ebp
0x589212: jge     short loc_5891ED
0x589214: cmp     ecx, 103h
0x58921A: jge     short loc_589237
0x58921C: mov     al, [esi+edi]
0x58921F: cmp     al, 20h ; ' '
0x589221: jle     short loc_589237
0x589223: cmp     al, 22h ; '"'
0x589225: jz      short loc_589237
0x589227: mov     [esp+ecx+248h+var_20C], al
0x58922B: add     esi, 1
0x58922E: add     ecx, 1
0x589231: cmp     esi, ebp
0x589233: jl      short loc_589214
0x589235: jmp     short loc_5891ED
0x589237: cmp     esi, ebp
0x589239: jge     short loc_5891ED
0x58923B: cmp     ecx, 104h
0x589241: jge     short loc_5891ED
0x589243: mov     [esp+ecx+248h+var_20C], 0
0x589248: cmp     byte ptr [esi+edi], 3Eh ; '>'
0x58924C: jz      short loc_589255
0x58924E: add     esi, 1
0x589251: cmp     esi, ebp
0x589253: jl      short loc_589248
0x589255: lea     eax, [esp+248h+var_20C]
0x589259: push    eax
0x58925A: lea     ecx, [esp+24Ch+Str]
0x589261: push    offset aDataMenusPrefa; "Data\\Menus\\Prefabs\\%s"
0x589266: push    ecx
0x589267: add     esi, 1
0x58926A: call    __sprintf
0x58926F: lea     edx, [esp+254h+Str]
0x589276: push    0; char
0x589278: push    edx; Str
0x589279: call    sub_585220
0x58927E: mov     ebx, [eax]
0x589280: mov     ecx, [eax+4]
0x589283: lea     edx, [ebx+ebp+1]
0x589287: push    edx; Size
0x589288: mov     [esp+260h+var_220], eax
0x58928C: mov     [esp+260h+var_228], ecx
0x589290: call    FormHeapAlloc
0x589295: mov     edx, [esp+260h+var_230]
0x589299: mov     edi, eax
0x58929B: add     esp, 18h
0x58929E: xor     eax, eax
0x5892A0: test    edx, edx
0x5892A2: jle     short loc_5892C9
0x5892A4: mov     eax, [esp+248h+var_234]
0x5892A8: sub     eax, edi
0x5892AA: mov     [esp+248h+var_21C], eax
0x5892AE: mov     ecx, edi
0x5892B0: mov     [esp+248h+var_230], edx
0x5892B4: mov     eax, edx
0x5892B6: mov     edx, [esp+248h+var_21C]
0x5892BA: mov     dl, [edx+ecx]
0x5892BD: mov     [ecx], dl
0x5892BF: add     ecx, 1
0x5892C2: sub     [esp+248h+var_230], 1
0x5892C7: jnz     short loc_5892B6
0x5892C9: xor     ecx, ecx
0x5892CB: test    ebx, ebx
0x5892CD: jbe     short loc_5892E4
0x5892CF: nop
0x5892D0: mov     edx, [esp+248h+var_228]
0x5892D4: mov     dl, [ecx+edx]
0x5892D7: mov     [eax+edi], dl
0x5892DA: add     ecx, 1
0x5892DD: add     eax, 1
0x5892E0: cmp     ecx, ebx
0x5892E2: jb      short loc_5892D0
0x5892E4: cmp     esi, ebp
0x5892E6: mov     ecx, esi
0x5892E8: jge     short loc_589304
0x5892EA: lea     ebx, [ebx+0]
0x5892F0: mov     edx, [esp+248h+var_234]
0x5892F4: mov     dl, [ecx+edx]
0x5892F7: mov     [eax+edi], dl
0x5892FA: add     ecx, 1
0x5892FD: add     eax, 1
0x589300: cmp     ecx, ebp
0x589302: jl      short loc_5892F0
0x589304: mov     byte ptr [eax+edi], 0
0x589308: mov     ebp, eax
0x58930A: mov     eax, [esp+248h+var_22C]
0x58930E: test    eax, eax
0x589310: jz      short loc_58931B
0x589312: push    eax
0x589313: call    FormHeapFree
0x589318: add     esp, 4
0x58931B: cmp     [esp+248h+arg_4], 0
0x589323: mov     [esp+248h+var_22C], edi
0x589327: mov     [esp+248h+var_234], edi
0x58932B: jz      short loc_589351
0x58932D: mov     edi, [esp+248h+var_220]
0x589331: mov     eax, [edi+4]
0x589334: test    eax, eax
0x589336: jz      short loc_589341
0x589338: push    eax
0x589339: call    FormHeapFree
0x58933E: add     esp, 4
0x589341: push    edi
0x589342: mov     dword ptr [edi+4], 0
0x589349: call    FormHeapFree
0x58934E: add     esp, 4
0x589351: mov     edi, [esp+248h+var_234]
0x589355: add     esi, 1
0x589358: cmp     esi, ebp
0x58935A: jl      loc_589160
0x589360: cmp     [esp+248h+var_235], 0
0x589365: jnz     loc_5891ED
0x58936B: mov     ecx, [esp+248h+var_224]
0x58936F: mov     eax, ecx
0x589371: jmp     short loc_589375
0x589373: xor     eax, eax
0x589375: mov     ecx, [esp+248h+var_4]
0x58937C: pop     edi
0x58937D: pop     esi
0x58937E: pop     ebp
0x58937F: pop     ebx
0x589380: xor     ecx, esp
0x589382: call    @__security_check_cookie@4; __security_check_cookie(x)
0x589387: add     esp, 238h
0x58938D: retn
