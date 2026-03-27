0x47D400: push    0FFFFFFFFh
0x47D402: push    offset SEH_47D400
0x47D407: mov     eax, large fs:0
0x47D40D: push    eax
0x47D40E: sub     esp, 28h
0x47D411: mov     eax, ds:0B30AACh
0x47D416: xor     eax, esp
0x47D418: mov     [esp+34h+var_10], eax
0x47D41C: push    ebx
0x47D41D: push    ebp
0x47D41E: push    esi
0x47D41F: push    edi
0x47D420: mov     eax, ds:0B30AACh
0x47D425: xor     eax, esp
0x47D427: push    eax
0x47D428: lea     eax, [esp+48h+var_C]
0x47D42C: mov     large fs:0, eax
0x47D432: mov     esi, [esp+48h+arg_0]
0x47D436: xor     eax, eax
0x47D438: mov     [esp+48h+var_2C], eax
0x47D43C: mov     edi, ecx
0x47D43E: mov     [esp+48h+var_28], esi
0x47D442: mov     [esi], eax
0x47D444: mov     [esi+4], ax
0x47D448: mov     [esi+6], ax
0x47D44C: movzx   ecx, byte ptr ds:0A3D192h
0x47D453: mov     dx, ds:0A3D18Ch
0x47D45A: movzx   ebp, word ptr [edi]
0x47D45D: mov     [esp+48h+var_4], eax
0x47D461: movzx   eax, word ptr ds:0A3D190h
0x47D468: mov     [esp+48h+var_1C], ax
0x47D46D: mov     al, ds:0A3D18Eh
0x47D472: mov     [esp+48h+var_1A], cl
0x47D476: mov     cx, ds:0A3D188h
0x47D47D: mov     [esp+48h+var_17], al
0x47D481: movzx   eax, word ptr ds:0A3D184h
0x47D488: mov     [esp+48h+var_16], cx
0x47D48D: movzx   ecx, byte ptr ds:0A3D186h
0x47D494: mov     [esp+48h+var_19], dx
0x47D499: mov     dl, ds:0A3D18Ah
0x47D49F: push    ebp
0x47D4A0: mov     [esp+4Ch+var_2C], 1
0x47D4A8: mov     [esp+4Ch+var_14], dl
0x47D4AC: mov     [esp+4Ch+var_13], ax
0x47D4B1: mov     [esp+4Ch+var_11], cl
0x47D4B5: call    sub_47D330
0x47D4BA: mov     ebx, edx
0x47D4BC: add     esp, 4
0x47D4BF: cmp     bl, 1
0x47D4C2: mov     [esp+48h+var_34], eax
0x47D4C6: jl      short loc_47D4D6
0x47D4C8: cmp     bl, 3
0x47D4CB: jg      short loc_47D4D6
0x47D4CD: movsx   edx, bl
0x47D4D0: mov     [esp+48h+var_34], edx
0x47D4D4: jmp     short loc_47D4DE
0x47D4D6: mov     [esp+48h+var_34], 0
0x47D4DE: movzx   edi, word ptr [edi+2]
0x47D4E2: push    ebp
0x47D4E3: call    sub_47D330
0x47D4E8: mov     eax, ds:0B06FA4h[eax*4]
0x47D4EF: add     esp, 4
0x47D4F2: test    eax, eax
0x47D4F4: mov     [esp+48h+var_20], edx
0x47D4F8: jz      short loc_47D4FE
0x47D4FA: mov     eax, [eax]
0x47D4FC: jmp     short loc_47D500
0x47D4FE: xor     eax, eax
0x47D500: movzx   ecx, di
0x47D503: push    ecx
0x47D504: push    eax
0x47D505: mov     eax, [esp+50h+var_34]
0x47D509: lea     edx, [esp+eax+50h+var_1C]
0x47D50D: lea     eax, [edx+eax*2]
0x47D510: push    eax
0x47D511: movsx   ecx, bl
0x47D514: push    ecx; ArgList
0x47D515: push    offset aDSOfS3eD; "%d%s of %s, 3E%d"
0x47D51A: push    esi; int
0x47D51B: call    BSStringT_Static_Format
0x47D520: add     esp, 18h
0x47D523: mov     eax, esi
0x47D525: mov     ecx, [esp+48h+var_C]
0x47D529: mov     large fs:0, ecx
0x47D530: pop     ecx
0x47D531: pop     edi
0x47D532: pop     esi
0x47D533: pop     ebp
0x47D534: pop     ebx
0x47D535: mov     ecx, [esp+34h+var_10]
0x47D539: xor     ecx, esp
0x47D53B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x47D540: add     esp, 34h
0x47D543: retn    4
