0x513280: push    ebp
0x513281: mov     ebp, esp
0x513283: and     esp, 0FFFFFFC0h
0x513286: push    0FFFFFFFFh
0x513288: push    offset SEH_513280
0x51328D: mov     eax, large fs:0
0x513293: push    eax
0x513294: sub     esp, 328h
0x51329A: mov     eax, ds:0B30AACh
0x51329F: xor     eax, esp
0x5132A1: mov     [esp+334h+var_44], eax
0x5132A8: push    ebx
0x5132A9: push    esi
0x5132AA: push    edi
0x5132AB: mov     eax, ds:0B30AACh
0x5132B0: xor     eax, esp
0x5132B2: push    eax
0x5132B3: lea     eax, [esp+344h+var_C]
0x5132BA: mov     large fs:0, eax
0x5132C0: mov     esi, [ebp+18h]
0x5132C3: mov     edx, [ebp+arg_C]
0x5132C6: mov     ecx, [ebp+a4]
0x5132C9: mov     eax, [ebp+a1]
0x5132CC: mov     edi, [ebp+0Ch]
0x5132CF: mov     [esp+344h+var_304], esi
0x5132D3: mov     esi, [ebp+arg_14]
0x5132D6: lea     ebx, [esp+344h+Format]
0x5132DD: push    ebx; UInt16
0x5132DE: mov     [esp+348h+l], esi
0x5132E2: mov     ebx, [esp+348h+l]
0x5132E6: mov     esi, [ebp+a3]
0x5132E9: push    ebx; l
0x5132EA: mov     ebx, [esp+34Ch+var_304]
0x5132EE: push    ebx; a6
0x5132EF: push    edx; a5
0x5132F0: push    ecx; a4
0x5132F1: push    esi; a3
0x5132F2: push    edi; a2
0x5132F3: push    eax; a1
0x5132F4: mov     [esp+364h+var_2EC], eax
0x5132F8: mov     [esp+364h+var_2FC], ecx
0x5132FC: mov     [esp+364h+var_2F0], edx
0x513300: call    Script_ExtractArgs
0x513305: add     esp, 20h
0x513308: test    al, al
0x51330A: jz      loc_5135DA
0x513310: mov     eax, [esi]
0x513312: movzx   ecx, word ptr [eax+edi]
0x513316: push    50h ; 'P'
0x513318: lea     edx, [esp+348h+var_298]
0x51331F: add     eax, 2
0x513322: push    0
0x513324: push    edx
0x513325: mov     [esp+350h+var_308], ecx
0x513329: mov     [esi], eax
0x51332B: call    __memset
0x513330: xor     eax, eax
0x513332: add     esp, 0Ch
0x513335: xor     ebx, ebx
0x513337: cmp     word ptr [esp+344h+var_308], ax
0x51333C: jle     short loc_513386
0x51333E: mov     ecx, [esp+344h+l]
0x513342: fldz
0x513344: mov     edx, [esp+344h+var_304]
0x513348: push    1
0x51334A: push    ecx
0x51334B: mov     ecx, [esp+34Ch+var_2F0]
0x51334F: push    edx
0x513350: mov     edx, [esp+350h+var_2FC]
0x513354: push    ecx
0x513355: push    edx
0x513356: movsx   eax, bx
0x513359: push    esi
0x51335A: fstp    [esp+eax*8+35Ch+var_298]
0x513361: lea     eax, [esp+eax*8+35Ch+var_298]
0x513368: push    edi
0x513369: push    eax
0x51336A: call    ExecuteScriptInstruction?
0x51336F: add     esp, 20h
0x513372: test    al, al
0x513374: jz      loc_5135DA
0x51337A: add     ebx, 1
0x51337D: cmp     bx, word ptr [esp+344h+var_308]
0x513382: jl      short loc_51333E
0x513384: xor     eax, eax
0x513386: mov     [esp+344h+var_2F8], eax
0x51338A: mov     [esp+344h+var_2F4], ax
0x51338F: mov     [esp+344h+var_2F2], ax
0x513394: fld     [esp+344h+var_250]
0x51339B: sub     esp, 50h
0x51339E: fstp    [esp+394h+var_34C]
0x5133A2: mov     [esp+394h+var_4], eax
0x5133A9: fld     [esp+394h+var_258]
0x5133B0: lea     eax, [esp+394h+Format]
0x5133B7: fstp    [esp+394h+var_354]
0x5133BB: lea     ecx, [esp+394h+var_2F8]
0x5133C2: fld     [esp+394h+var_260]
0x5133C9: fstp    [esp+394h+var_35C]
0x5133CD: fld     [esp+394h+var_268]
0x5133D4: fstp    [esp+394h+var_364]
0x5133D8: fld     [esp+394h+var_270]
0x5133DF: fstp    [esp+394h+var_36C]
0x5133E3: fld     [esp+394h+var_278]
0x5133EA: fstp    [esp+394h+var_374]
0x5133EE: fld     [esp+394h+var_280]
0x5133F5: fstp    [esp+394h+var_37C]
0x5133F9: fld     [esp+394h+var_288]
0x513400: fstp    [esp+394h+var_384]
0x513404: fld     [esp+394h+var_290]
0x51340B: fstp    [esp+394h+var_38C]
0x51340F: fld     [esp+394h+var_298]
0x513416: fstp    qword ptr [esp+394h+ArgList]; ArgList
0x513419: push    eax; Format
0x51341A: push    ecx; int
0x51341B: call    BSStringT_Static_Format
0x513420: mov     eax, [esi]
0x513422: movzx   edx, word ptr [eax+edi]
0x513426: add     esp, 58h
0x513429: push    offset BSStringT_Clear; a5
0x51342E: push    offset BSStringT_constr; a4
0x513433: add     eax, 2
0x513436: push    0Ah; size
0x513438: mov     [esi], eax
0x51343A: push    8; a2
0x51343C: lea     eax, [esp+354h+var_2E8]
0x513440: push    eax; a1
0x513441: mov     [esp+358h+var_308], edx
0x513445: call    ArrayConstructor
0x51344A: xor     ebx, ebx
0x51344C: cmp     word ptr [esp+344h+var_308], bx
0x513451: mov     byte ptr [esp+344h+var_4], 1
0x513459: jle     short loc_5134AF
0x51345B: jmp     short loc_513460
0x51345D: align 10h
0x513460: mov     edx, [esp+344h+l]
0x513464: mov     eax, [esp+344h+var_304]
0x513468: lea     ecx, [esp+344h+Format]
0x51346F: push    ecx; UInt16
0x513470: mov     ecx, [esp+348h+var_2F0]
0x513474: push    edx; l
0x513475: mov     edx, [esp+34Ch+var_2FC]
0x513479: push    eax; a6
0x51347A: mov     eax, [esp+350h+var_2EC]
0x51347E: push    ecx; a5
0x51347F: push    edx; a4
0x513480: push    esi; a3
0x513481: push    edi; a2
0x513482: push    eax; a1
0x513483: call    Script_ExtractArgs
0x513488: add     esp, 20h
0x51348B: test    al, al
0x51348D: jz      short loc_5134E6
0x51348F: push    0; a3
0x513491: lea     ecx, [esp+348h+Format]
0x513498: push    ecx; a2
0x513499: movsx   ecx, bx
0x51349C: lea     ecx, [esp+ecx*8+34Ch+var_2E8]; this
0x5134A0: call    BSStringT_Set
0x5134A5: add     ebx, 1
0x5134A8: cmp     bx, word ptr [esp+344h+var_308]
0x5134AD: jl      short loc_513460
0x5134AF: cmp     word ptr [esp+344h+var_308], 1
0x5134B5: jge     short loc_5134C9
0x5134B7: mov     ecx, ds:0B38D38h
0x5134BD: push    0; a3
0x5134BF: push    ecx; a2
0x5134C0: lea     ecx, [esp+34Ch+var_2E8]; this
0x5134C4: call    BSStringT_Set
0x5134C9: mov     eax, [esp+344h+var_2FC]
0x5134CD: test    eax, eax
0x5134CF: jz      short loc_51350B
0x5134D1: mov     edx, [eax+8]
0x5134D4: shr     edx, 0Eh
0x5134D7: test    dl, 1
0x5134DA: jnz     short loc_51350B
0x5134DC: mov     eax, [eax+0Ch]
0x5134DF: mov     ds:0B361C8h, eax
0x5134E4: jmp     short loc_513520
0x5134E6: push    offset BSStringT_Clear; void (__thiscall *)(void *)
0x5134EB: push    0Ah; int
0x5134ED: push    8; unsigned int
0x5134EF: lea     edx, [esp+350h+var_2E8]
0x5134F3: push    edx; void *
0x5134F4: mov     byte ptr [esp+354h+var_4], 0
0x5134FC: call    $LN21
0x513501: mov     eax, [esp+344h+var_2F8]
0x513505: push    eax
0x513506: jmp     loc_5135D2
0x51350B: mov     eax, [esp+344h+var_304]
0x51350F: test    eax, eax
0x513511: jz      loc_5135B2
0x513517: mov     ecx, [eax+0Ch]
0x51351A: mov     ds:0B361C8h, ecx
0x513520: mov     edx, [esp+344h+var_2A0]
0x513527: mov     eax, [esp+344h+var_2A8]
0x51352E: mov     ecx, [esp+344h+var_2B0]
0x513535: push    0
0x513537: push    edx
0x513538: mov     edx, [esp+34Ch+var_2B8]
0x51353F: push    eax
0x513540: mov     eax, [esp+350h+var_2C0]
0x513547: mov     esi, [esp+350h+var_2F8]
0x51354B: push    ecx
0x51354C: mov     ecx, [esp+354h+var_2C8]
0x513553: push    edx
0x513554: mov     edx, [esp+358h+var_2D0]
0x51355B: push    eax
0x51355C: mov     eax, [esp+35Ch+var_2D8]
0x513563: push    ecx
0x513564: mov     ecx, [esp+360h+var_2E0]
0x51356B: push    edx
0x51356C: mov     edx, [esp+364h+var_2E8.m_data]
0x513570: push    eax
0x513571: push    ecx
0x513572: push    edx
0x513573: push    0
0x513575: push    offset ShowMessageBox_Callback
0x51357A: push    esi
0x51357B: mov     byte ptr ds:0B09E24h, 0FFh
0x513582: call    ShowUIMessageBox
0x513587: add     esp, 38h
0x51358A: push    offset BSStringT_Clear; void (__thiscall *)(void *)
0x51358F: push    0Ah; int
0x513591: push    8; unsigned int
0x513593: lea     eax, [esp+350h+var_2E8]
0x513597: push    eax; void *
0x513598: mov     byte ptr [esp+354h+var_4], 0
0x5135A0: call    $LN21
0x5135A5: push    esi
0x5135A6: call    FormHeapFree
0x5135AB: add     esp, 4
0x5135AE: mov     al, 1
0x5135B0: jmp     short loc_5135DC
0x5135B2: push    offset BSStringT_Clear; void (__thiscall *)(void *)
0x5135B7: push    0Ah; int
0x5135B9: push    8; unsigned int
0x5135BB: lea     ecx, [esp+350h+var_2E8]
0x5135BF: push    ecx; void *
0x5135C0: mov     byte ptr [esp+354h+var_4], 0
0x5135C8: call    $LN21
0x5135CD: mov     edx, [esp+344h+var_2F8]
0x5135D1: push    edx
0x5135D2: call    FormHeapFree
0x5135D7: add     esp, 4
0x5135DA: xor     al, al
0x5135DC: mov     ecx, [esp+344h+var_C]
0x5135E3: mov     large fs:0, ecx
0x5135EA: pop     ecx
0x5135EB: pop     edi
0x5135EC: pop     esi
0x5135ED: pop     ebx
0x5135EE: mov     ecx, [esp+334h+var_44]
0x5135F5: xor     ecx, esp
0x5135F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5135FC: mov     esp, ebp
0x5135FE: pop     ebp
0x5135FF: retn
