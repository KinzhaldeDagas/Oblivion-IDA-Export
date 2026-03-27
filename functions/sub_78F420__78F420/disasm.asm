0x78F420: sub     esp, 0Ch
0x78F423: push    edi
0x78F424: mov     edi, ecx
0x78F426: movzx   eax, word ptr [edi+20h]
0x78F42A: cmp     ax, 2
0x78F42E: jb      loc_78F5F1
0x78F434: push    ebx
0x78F435: push    ebp
0x78F436: push    esi
0x78F437: movzx   esi, ax
0x78F43A: test    esi, esi
0x78F43C: mov     [esp+1Ch+var_8], esi
0x78F440: mov     [esp+1Ch+var_C], esi
0x78F444: jnz     short loc_78F44A
0x78F446: fld1
0x78F448: jmp     short loc_78F452
0x78F44A: fild    [esp+1Ch+var_8]
0x78F44E: fidiv   [esp+1Ch+var_C]
0x78F452: mov     ebp, [edi+1Ch]
0x78F455: fstp    [esp+1Ch+var_4]
0x78F459: add     esi, 2
0x78F45C: add     ebp, 0FFFFFFFFh
0x78F45F: imul    esi, ebp
0x78F462: add     esi, esi
0x78F464: xor     ecx, ecx
0x78F466: mov     eax, esi
0x78F468: mov     edx, 2
0x78F46D: mul     edx
0x78F46F: seto    cl
0x78F472: neg     ecx
0x78F474: or      ecx, eax
0x78F476: push    ecx; Size
0x78F477: call    FormHeapAlloc
0x78F47C: mov     ecx, [esp+20h+arg_4]
0x78F480: add     esp, 4
0x78F483: mov     ebx, eax
0x78F485: mov     eax, [esp+1Ch+arg_0]
0x78F489: push    esi
0x78F48A: push    ebx
0x78F48B: push    eax
0x78F48C: call    sub_796100
0x78F491: fldz
0x78F493: xor     esi, esi
0x78F495: fstp    [esp+1Ch+arg_0]
0x78F499: test    ebp, ebp
0x78F49B: jle     loc_78F5E5
0x78F4A1: fld     [esp+1Ch+var_4]
0x78F4A5: mov     [esp+1Ch+var_8], ebp
0x78F4A9: fld     [esp+1Ch+arg_0]
0x78F4AD: fld     st
0x78F4AF: call    Double_To_SInt32
0x78F4B4: fnstcw  word ptr [esp+1Ch+arg_0]
0x78F4B8: movzx   edx, word ptr [edi+24h]
0x78F4BC: fld     st
0x78F4BE: mov     ecx, eax
0x78F4C0: movzx   eax, word ptr [esp+1Ch+arg_0]
0x78F4C5: or      eax, 0C00h
0x78F4CA: mov     [esp+1Ch+var_4], eax
0x78F4CE: add     esi, 1
0x78F4D1: add     esi, 1
0x78F4D4: fldcw   word ptr [esp+1Ch+var_4]
0x78F4D8: fistp   [esp+1Ch+var_4]
0x78F4DC: mov     ax, word ptr [esp+1Ch+var_4]
0x78F4E1: add     dx, ax
0x78F4E4: add     dx, [edi+20h]
0x78F4E8: fldcw   word ptr [esp+1Ch+arg_0]
0x78F4EC: add     dx, 1
0x78F4F0: mov     [ebx+esi*2-4], dx
0x78F4F5: movzx   edx, word ptr [edi+24h]
0x78F4F9: add     dx, ax
0x78F4FC: mov     [ebx+esi*2-2], dx
0x78F501: mov     edx, [esp+1Ch+var_C]
0x78F505: cmp     edx, 1
0x78F508: fadd    st, st(1)
0x78F50A: fstp    [esp+1Ch+arg_0]
0x78F50E: jle     short loc_78F56D
0x78F510: add     edx, 0FFFFFFFFh
0x78F513: fld     [esp+1Ch+arg_0]
0x78F517: mov     bp, [edi+24h]
0x78F51B: fnstcw  word ptr [esp+1Ch+arg_0]
0x78F51F: add     esi, 1
0x78F522: movzx   eax, word ptr [esp+1Ch+arg_0]
0x78F527: fld     st
0x78F529: or      eax, 0C00h
0x78F52E: mov     [esp+1Ch+var_4], eax
0x78F532: add     esi, 1
0x78F535: fldcw   word ptr [esp+1Ch+var_4]
0x78F539: fistp   [esp+1Ch+var_4]
0x78F53D: mov     ax, word ptr [esp+1Ch+var_4]
0x78F542: add     bp, ax
0x78F545: add     bp, [edi+20h]
0x78F549: fldcw   word ptr [esp+1Ch+arg_0]
0x78F54D: add     bp, 1
0x78F551: mov     [ebx+esi*2-4], bp
0x78F556: mov     bp, [edi+24h]
0x78F55A: add     bp, ax
0x78F55D: sub     edx, 1
0x78F560: mov     [ebx+esi*2-2], bp
0x78F565: fadd    st, st(1)
0x78F567: fstp    [esp+1Ch+arg_0]
0x78F56B: jnz     short loc_78F513
0x78F56D: movzx   eax, word ptr [edi+20h]
0x78F571: add     ax, ax
0x78F574: add     ax, cx
0x78F577: add     ax, [edi+24h]
0x78F57B: add     esi, 1
0x78F57E: add     ax, 1
0x78F582: mov     [ebx+esi*2-2], ax
0x78F587: mov     dx, [edi+24h]
0x78F58B: add     dx, cx
0x78F58E: add     dx, [edi+20h]
0x78F592: add     esi, 1
0x78F595: mov     [ebx+esi*2-2], dx
0x78F59A: movzx   eax, word ptr [edi+20h]
0x78F59E: movzx   edx, ax
0x78F5A1: add     eax, ecx
0x78F5A3: add     ax, [edi+24h]
0x78F5A7: lea     edx, [edx+ecx+1]
0x78F5AB: add     ax, 1
0x78F5AF: mov     [ebx+esi*2], ax
0x78F5B3: movzx   eax, word ptr [edi+24h]
0x78F5B7: add     ax, cx
0x78F5BA: add     ax, [edi+20h]
0x78F5BE: mov     [esp+1Ch+arg_0], edx
0x78F5C2: add     esi, 1
0x78F5C5: add     ax, 1
0x78F5C9: fild    [esp+1Ch+arg_0]
0x78F5CD: mov     [ebx+esi*2], ax
0x78F5D1: add     esi, 1
0x78F5D4: sub     [esp+1Ch+var_8], 1
0x78F5D9: fstp    [esp+1Ch+arg_0]
0x78F5DD: jnz     loc_78F4A9
0x78F5E3: fstp    st
0x78F5E5: mov     eax, [esp+1Ch+arg_4]
0x78F5E9: add     word ptr [eax+26h], 1
0x78F5EE: pop     esi
0x78F5EF: pop     ebp
0x78F5F0: pop     ebx
0x78F5F1: pop     edi
0x78F5F2: add     esp, 0Ch
0x78F5F5: retn    8
