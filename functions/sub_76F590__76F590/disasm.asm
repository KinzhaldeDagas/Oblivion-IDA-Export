0x76F590: sub     esp, 28h
0x76F593: mov     ax, [esp+28h+arg_0]
0x76F598: mov     ecx, [esp+28h+arg_14]
0x76F59C: mov     edx, [esp+28h+arg_18]
0x76F5A0: push    ebx
0x76F5A1: mov     ebx, [esp+2Ch+arg_10]
0x76F5A5: mov     [esp+2Ch+var_20], ax
0x76F5AA: mov     eax, [ebx+0Ch]
0x76F5AD: cmp     eax, 11h
0x76F5B0: mov     [esp+2Ch+var_8], ecx
0x76F5B4: mov     [esp+2Ch+var_4], edx
0x76F5B8: jz      loc_76F890
0x76F5BE: mov     ecx, ds:0B42708h[eax*4]
0x76F5C5: mov     edx, ds:0B42700h
0x76F5CB: mov     [esp+2Ch+var_C], ecx
0x76F5CF: mov     ecx, [edx+4]
0x76F5D2: push    ebp
0x76F5D3: mov     ebp, [ecx+eax*4]
0x76F5D6: test    ebp, ebp
0x76F5D8: jnz     short loc_76F5E4
0x76F5DA: pop     ebp
0x76F5DB: xor     eax, eax
0x76F5DD: pop     ebx
0x76F5DE: add     esp, 28h
0x76F5E1: retn    1Ch
0x76F5E4: mov     edx, [ebx+8]
0x76F5E7: mov     eax, [esp+30h+arg_4]
0x76F5EB: mov     ecx, [eax+34h]
0x76F5EE: push    esi
0x76F5EF: lea     esi, [edx+1]; switch 16 cases
0x76F5F2: cmp     esi, 0Fh
0x76F5F5: push    edi
0x76F5F6: mov     edi, [esp+38h+arg_C]
0x76F5FA: ja      def_76F600
0x76F600: jmp     ds:jpt_76F600[esi*4]; switch jump
0x76F607: pop     edi; jumptable 0076F600 case -1
0x76F608: pop     esi
0x76F609: pop     ebp
0x76F60A: xor     eax, eax
0x76F60C: pop     ebx
0x76F60D: add     esp, 28h
0x76F610: retn    1Ch
0x76F613: mov     edx, [eax+1Ch]; jumptable 0076F600 case 0
0x76F616: mov     [esp+38h+var_18], edx
0x76F61A: mov     eax, 0Ch
0x76F61F: mov     [esp+38h+arg_14], 3
0x76F627: jmp     loc_76F82C
0x76F62C: mov     eax, [eax+20h]; jumptable 0076F600 case 3
0x76F62F: mov     [esp+38h+var_18], eax
0x76F633: mov     eax, 0Ch
0x76F638: mov     [esp+38h+arg_14], 3
0x76F640: jmp     loc_76F82C
0x76F645: test    edi, edi; jumptable 0076F600 case 1
0x76F647: jz      short loc_76F607; jumptable 0076F600 case -1
0x76F649: movzx   eax, word ptr [edi+24h]
0x76F64D: add     eax, 0FFFFFFFFh; switch 4 cases
0x76F650: mov     edx, 3
0x76F655: cmp     eax, edx
0x76F657: ja      short def_76F659
0x76F659: jmp     ds:jpt_76F659[eax*4]; switch jump
0x76F660: mov     ecx, [edi+8]; jumptable 0076F659 case 1
0x76F663: mov     eax, 4
0x76F668: mov     [esp+38h+arg_14], 1
0x76F670: mov     [esp+38h+var_14], eax
0x76F674: mov     [esp+38h+var_10], eax
0x76F678: mov     [esp+38h+var_18], ecx
0x76F67C: jmp     loc_76F834
0x76F681: mov     ecx, [edi+8]; jumptable 0076F659 case 2
0x76F684: mov     eax, 8
0x76F689: mov     [esp+38h+arg_14], 2
0x76F691: mov     [esp+38h+var_14], eax
0x76F695: mov     [esp+38h+var_10], eax
0x76F699: mov     [esp+38h+var_18], ecx
0x76F69D: jmp     loc_76F834
0x76F6A2: mov     ecx, [edi+8]; jumptable 0076F659 case 3
0x76F6A5: mov     eax, 0Ch
0x76F6AA: mov     [esp+38h+var_14], eax
0x76F6AE: mov     [esp+38h+var_10], eax
0x76F6B2: mov     [esp+38h+arg_14], edx
0x76F6B6: mov     [esp+38h+var_18], ecx
0x76F6BA: jmp     loc_76F834
0x76F6BF: mov     [esp+38h+var_14], 0Ch; jumptable 0076F659 case 4
0x76F6C7: mov     [esp+38h+var_10], 10h
0x76F6CF: mov     [esp+38h+arg_14], edx
