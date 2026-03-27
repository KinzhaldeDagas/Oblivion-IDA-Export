0x45D920: push    0FFFFFFFFh
0x45D922: push    offset SEH_45D920
0x45D927: mov     eax, large fs:0
0x45D92D: push    eax
0x45D92E: sub     esp, 230h
0x45D934: mov     eax, ds:0B30AACh
0x45D939: xor     eax, esp
0x45D93B: mov     [esp+23Ch+var_10], eax
0x45D942: push    ebx
0x45D943: push    ebp
0x45D944: push    esi
0x45D945: push    edi
0x45D946: mov     eax, ds:0B30AACh
0x45D94B: xor     eax, esp
0x45D94D: push    eax
0x45D94E: lea     eax, [esp+250h+var_C]
0x45D955: mov     large fs:0, eax
0x45D95B: mov     eax, [esp+250h+arg_0]
0x45D962: xor     edi, edi
0x45D964: cmp     eax, edi
0x45D966: mov     ebx, ecx
0x45D968: mov     [esp+250h+var_224], ebx
0x45D96C: mov     [esp+250h+var_22C], eax
0x45D970: jz      loc_45DB89
0x45D976: mov     [esp+250h+var_234], edi
0x45D97A: mov     [esp+250h+var_230], di
0x45D97F: mov     [esp+250h+var_22E], di
0x45D984: mov     ecx, ds:0B333C4h; this
0x45D98A: xor     esi, esi
0x45D98C: mov     [esp+250h+var_4], edi
0x45D993: mov     [esp+250h+var_23C], esi
0x45D997: call    TESObjectREFR_GetName
0x45D99C: mov     ecx, ds:0B333C4h
0x45D9A2: mov     [esp+250h+var_228], eax
0x45D9A6: lea     eax, [esp+250h+var_234]
0x45D9AA: push    eax
0x45D9AB: call    GetTeleportCellName
0x45D9B0: mov     eax, [esp+250h+var_234]
0x45D9B4: cmp     eax, edi
0x45D9B6: mov     [esp+250h+var_238], eax
0x45D9BA: jnz     short loc_45D9FC
0x45D9BC: mov     ecx, ds:0B333C4h; this
0x45D9C2: call    TESObjectREFR_GetParentCell
0x45D9C7: test    eax, eax
0x45D9C9: jz      short loc_45D9E8
0x45D9CB: mov     ecx, ds:0B333C4h; this
0x45D9D1: call    TESObjectREFR_GetParentCell
0x45D9D6: mov     edx, [eax]
0x45D9D8: mov     ecx, eax
0x45D9DA: mov     eax, [edx+0D4h]
0x45D9E0: call    eax
0x45D9E2: mov     [esp+250h+var_238], eax
0x45D9E6: jmp     short loc_45D9FC
0x45D9E8: mov     [esp+250h+var_238], offset EmptyString
0x45D9F0: jmp     short loc_45D9FC
0x45D9F2: mov     ebx, [esp+250h+var_224]
0x45D9F6: mov     esi, [esp+250h+var_23C]
0x45D9FA: xor     edi, edi
0x45D9FC: cmp     esi, edi
0x45D9FE: jnz     short loc_45DA07
0x45DA00: mov     [esp+250h+var_220], 0
0x45DA05: jmp     short loc_45DA1D
0x45DA07: add     esi, 1
0x45DA0A: push    esi
0x45DA0B: lea     ecx, [esp+254h+var_220]
0x45DA0F: push    offset aD; " #%d"
0x45DA14: push    ecx
0x45DA15: call    __sprintf
0x45DA1A: add     esp, 0Ch
0x45DA1D: mov     edi, ds:0A280D0h
0x45DA23: mov     esi, ds:0B333C4h
0x45DA29: call    edi ; GetTickCount
0x45DA2B: sub     eax, [esi+710h]
0x45DA31: add     [esi+714h], eax
0x45DA37: call    edi ; GetTickCount
0x45DA39: mov     [esi+710h], eax
0x45DA3F: mov     esi, [esi+714h]
0x45DA45: mov     eax, 95217CB1h
0x45DA4A: mul     esi
0x45DA4C: mov     edi, edx
0x45DA4E: shr     edi, 15h
0x45DA51: mov     edx, edi
0x45DA53: imul    edx, 0FFC91180h
0x45DA59: add     esi, edx
0x45DA5B: mov     eax, 45E7B273h
0x45DA60: mul     esi
0x45DA62: mov     ebp, edx
0x45DA64: shr     ebp, 0Eh
0x45DA67: mov     eax, ebp
0x45DA69: imul    eax, 0FFFF15A0h
0x45DA6F: add     esi, eax
0x45DA71: mov     eax, 10624DD3h
0x45DA76: mul     esi
0x45DA78: mov     esi, edx
0x45DA7A: shr     esi, 6
0x45DA7D: cmp     dword ptr [ebx+88h], 0
0x45DA84: jnz     short loc_45DA8D
0x45DA86: mov     ecx, ebx
0x45DA88: call    sub_464320
0x45DA8D: mov     ebx, [ebx+88h]
0x45DA93: lea     ecx, [esp+250h+var_220]
0x45DA97: push    ecx
0x45DA98: mov     ecx, ds:0B333C4h
0x45DA9E: push    esi
0x45DA9F: push    ebp
0x45DAA0: push    edi
0x45DAA1: call    Actor_GetLevel
0x45DAA6: mov     ecx, [esp+260h+var_228]
0x45DAAA: movzx   edx, ax
0x45DAAD: mov     eax, [esp+260h+var_238]
0x45DAB1: push    edx
0x45DAB2: push    eax
0x45DAB3: push    ecx
0x45DAB4: push    ebx
0x45DAB5: lea     edx, [esp+270h+Str]
0x45DAB9: push    offset aSaveISSLevelIP; "Save %i - %s - %s, Level %i, Playing Ti"...
0x45DABE: push    edx
0x45DABF: call    __sprintf
0x45DAC4: lea     eax, [esp+278h+Str]
0x45DAC8: push    offset Control; "\\/:*<>?|\""
0x45DACD: push    eax; Str
0x45DACE: call    _strpbrk
0x45DAD3: add     esp, 30h
0x45DAD6: test    eax, eax
0x45DAD8: jz      short loc_45DB06
0x45DADA: lea     ebx, [ebx+0]
0x45DAE0: cmp     byte ptr [eax], 22h ; '"'
0x45DAE3: push    offset Control; "\\/:*<>?|\""
0x45DAE8: setnz   cl
0x45DAEB: sub     cl, 1
0x45DAEE: and     cl, 7
0x45DAF1: add     cl, 20h ; ' '
0x45DAF4: mov     [eax], cl
0x45DAF6: add     eax, 1
0x45DAF9: push    eax; Str
0x45DAFA: call    _strpbrk
0x45DAFF: add     esp, 8
0x45DB02: test    eax, eax
0x45DB04: jnz     short loc_45DAE0
0x45DB06: mov     eax, ds:0B05564h
0x45DB0B: lea     edx, [esp+250h+Str]
0x45DB0F: push    edx
0x45DB10: push    eax
0x45DB11: push    offset word_B3F280
0x45DB16: lea     ecx, [esp+25Ch+var_114]
0x45DB1D: push    offset aSSS_ess; "%s%s%s.ess"
0x45DB22: push    ecx
0x45DB23: call    __sprintf
0x45DB28: mov     ecx, ds:0B33A04h
0x45DB2E: add     esp, 14h
0x45DB31: test    ecx, ecx
0x45DB33: jz      short loc_45DB4C
0x45DB35: mov     edx, [ecx]
0x45DB37: mov     edx, [edx+4]
0x45DB3A: push    0FFFFFFFFh
0x45DB3C: push    0
0x45DB3E: push    0
0x45DB40: lea     eax, [esp+25Ch+var_114]
0x45DB47: push    eax
0x45DB48: call    edx
0x45DB4A: jmp     short loc_45DB4E
0x45DB4C: xor     eax, eax
0x45DB4E: test    eax, eax
0x45DB50: setz    al
0x45DB53: add     [esp+250h+var_23C], 1
0x45DB58: test    al, al
0x45DB5A: jz      loc_45D9F2
0x45DB60: mov     edx, [esp+250h+var_22C]
0x45DB64: lea     eax, [esp+250h+Str]
0x45DB68: mov     ecx, eax
0x45DB6A: sub     edx, ecx
0x45DB6C: lea     esp, [esp+0]
0x45DB70: mov     cl, [eax]
0x45DB72: mov     [edx+eax], cl
0x45DB75: add     eax, 1
0x45DB78: test    cl, cl
0x45DB7A: jnz     short loc_45DB70
0x45DB7C: mov     edx, [esp+250h+var_234]
0x45DB80: push    edx
0x45DB81: call    FormHeapFree
0x45DB86: add     esp, 4
0x45DB89: mov     ecx, [esp+250h+var_C]
0x45DB90: mov     large fs:0, ecx
0x45DB97: pop     ecx
0x45DB98: pop     edi
0x45DB99: pop     esi
0x45DB9A: pop     ebp
0x45DB9B: pop     ebx
0x45DB9C: mov     ecx, [esp+23Ch+var_10]
0x45DBA3: xor     ecx, esp
0x45DBA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45DBAA: add     esp, 23Ch
0x45DBB0: retn    4
