0x72F420: push    0FFFFFFFFh
0x72F422: push    offset SEH_72F420
0x72F427: mov     eax, large fs:0
0x72F42D: push    eax
0x72F42E: sub     esp, 21Ch
0x72F434: mov     eax, ds:0B30AACh
0x72F439: xor     eax, esp
0x72F43B: mov     [esp+228h+var_10], eax
0x72F442: push    ebx
0x72F443: push    ebp
0x72F444: push    esi
0x72F445: push    edi
0x72F446: mov     eax, ds:0B30AACh
0x72F44B: xor     eax, esp
0x72F44D: push    eax
0x72F44E: lea     eax, [esp+23Ch+var_C]
0x72F455: mov     large fs:0, eax
0x72F45B: mov     esi, [esp+23Ch+a2]
0x72F462: mov     ebx, ecx
0x72F464: push    esi; a2
0x72F465: mov     [esp+240h+var_214], ebx
0x72F469: call    sub_7008A0
0x72F46E: push    esi
0x72F46F: lea     ecx, [ebx+0Ch]
0x72F472: call    sub_718B70
0x72F477: mov     eax, [esi+21Ch]
0x72F47D: mov     edx, [eax+4]
0x72F480: push    1
0x72F482: lea     ecx, [esp+240h+var_224]
0x72F486: push    ecx
0x72F487: push    4
0x72F489: lea     edi, [ebx+40h]
0x72F48C: push    edi
0x72F48D: push    eax
0x72F48E: mov     [esp+250h+var_224], 4
0x72F496: call    edx
0x72F498: mov     ebp, [edi]
0x72F49A: xor     ecx, ecx
0x72F49C: mov     eax, ebp
0x72F49E: mov     edx, 4Ch ; 'L'
0x72F4A3: mul     edx
0x72F4A5: seto    cl
0x72F4A8: neg     ecx
0x72F4AA: or      ecx, eax
0x72F4AC: push    ecx; Size
0x72F4AD: call    FormHeapAlloc
0x72F4B2: mov     edi, eax
0x72F4B4: add     esp, 18h
0x72F4B7: mov     [esp+23Ch+var_220], edi
0x72F4BB: test    edi, edi
0x72F4BD: mov     [esp+23Ch+var_4], 0
0x72F4C8: jz      short loc_72F4DA
0x72F4CA: push    offset sub_72EF90
0x72F4CF: push    ebp
0x72F4D0: push    4Ch ; 'L'
0x72F4D2: push    edi
0x72F4D3: call    sub_401080
0x72F4D8: jmp     short loc_72F4DC
0x72F4DA: xor     edi, edi
0x72F4DC: mov     [ebx+44h], edi
0x72F4DF: mov     eax, [esi+0D8h]
0x72F4E5: cmp     eax, 4000001h
0x72F4EA: mov     [esp+23Ch+var_4], 0FFFFFFFFh
0x72F4F5: jb      short loc_72F505
0x72F4F7: cmp     eax, 0A010065h
0x72F4FC: jnb     short loc_72F505
0x72F4FE: mov     ecx, esi
0x72F500: call    sub_712A20
0x72F505: cmp     dword ptr [esi+0D8h], 401000Dh
0x72F50F: jb      short loc_72F538
0x72F511: mov     eax, [esi+21Ch]
0x72F517: push    1
0x72F519: lea     ecx, [esp+240h+var_224]
0x72F51D: push    ecx
0x72F51E: push    1
0x72F520: lea     edx, [esp+248h+var_225]
0x72F524: push    edx
0x72F525: push    eax
0x72F526: mov     eax, [eax+4]
0x72F529: mov     [esp+250h+var_224], 1
0x72F531: call    eax
0x72F533: add     esp, 14h
0x72F536: jmp     short loc_72F53D
0x72F538: mov     [esp+23Ch+var_225], 1
0x72F53D: cmp     dword ptr [esi+0DCh], 0Bh
0x72F544: jnb     short loc_72F5C1
0x72F546: cmp     dword ptr [esi+380h], 0
0x72F54D: jnz     short loc_72F5C1
0x72F54F: cmp     dword ptr [ebx+40h], 0
0x72F553: jz      short loc_72F5C1
0x72F555: lea     edi, [esi+0E0h]
0x72F55B: push    offset aMeshesCreature; "Meshes\\Creatures\\Rat\\mange.NIF"
0x72F560: push    edi; Str1
0x72F561: call    __strcmp
0x72F566: add     esp, 8
0x72F569: test    eax, eax
0x72F56B: jz      short loc_72F5C1
0x72F56D: push    3
0x72F56F: mov     ecx, esi
0x72F571: call    sub_711FB0
0x72F576: cmp     byte ptr [esi+8], 0
0x72F57A: lea     eax, [esi+8]
0x72F57D: push    edi
0x72F57E: jz      short loc_72F595
0x72F580: push    eax
0x72F581: lea     ecx, [esp+244h+Text]
0x72F585: push    offset aSSContainsOldS; "%s: %s contains old skin info and needs"...
0x72F58A: push    ecx
0x72F58B: call    __sprintf
0x72F590: add     esp, 10h
0x72F593: jmp     short loc_72F5A7
0x72F595: lea     edx, [esp+240h+Text]
0x72F599: push    offset aSContainsOldSk; "%s contains old skin info and needs to "...
0x72F59E: push    edx
0x72F59F: call    __sprintf
0x72F5A4: add     esp, 0Ch
0x72F5A7: mov     eax, ds:0B27E60h
0x72F5AC: test    eax, eax
0x72F5AE: jz      short loc_72F5C1
0x72F5B0: push    0
0x72F5B2: lea     ecx, [esp+240h+Text]
0x72F5B6: push    offset aOldVersion; "Old Version"
0x72F5BB: push    ecx; lpText
0x72F5BC: call    eax ; sub_7485D0
0x72F5BE: add     esp, 0Ch
0x72F5C1: xor     eax, eax
0x72F5C3: cmp     [ebx+40h], eax
0x72F5C6: mov     [esp+23Ch+var_224], eax
0x72F5CA: jbe     loc_72F6E9
0x72F5D0: mov     [esp+23Ch+var_21C], eax
0x72F5D4: mov     edi, [ebx+44h]
0x72F5D7: add     edi, [esp+23Ch+var_21C]
0x72F5DB: push    esi
0x72F5DC: mov     ecx, edi
0x72F5DE: call    sub_718B70
0x72F5E3: push    esi
0x72F5E4: lea     ecx, [edi+34h]
0x72F5E7: call    sub_716EA0
0x72F5EC: mov     eax, [esi+21Ch]
0x72F5F2: push    1
0x72F5F4: lea     edx, [esp+240h+var_220]
0x72F5F8: push    edx
0x72F5F9: push    2
0x72F5FB: lea     ebp, [edi+48h]
0x72F5FE: push    ebp
0x72F5FF: push    eax
0x72F600: mov     eax, [eax+4]
0x72F603: mov     [esp+250h+var_220], 2
0x72F60B: call    eax
0x72F60D: add     esp, 14h
0x72F610: cmp     [esp+23Ch+var_225], 0
0x72F615: jz      loc_72F6C9
0x72F61B: movzx   ebp, word ptr [ebp+0]
0x72F61F: xor     ecx, ecx
0x72F621: mov     eax, ebp
0x72F623: mov     edx, 8
0x72F628: mul     edx
0x72F62A: seto    cl
0x72F62D: neg     ecx
0x72F62F: or      ecx, eax
0x72F631: push    ecx; Size
0x72F632: call    FormHeapAlloc
0x72F637: add     esp, 4
0x72F63A: test    eax, eax
0x72F63C: jz      short loc_72F65F
0x72F63E: lea     edx, [ebp-1]
0x72F641: test    edx, edx
0x72F643: mov     ecx, eax
0x72F645: jl      short loc_72F661
0x72F647: jmp     short loc_72F650
0x72F649: align 10h
0x72F650: mov     word ptr [ecx], 0
0x72F655: add     ecx, 8
0x72F658: sub     edx, 1
0x72F65B: jns     short loc_72F650
0x72F65D: jmp     short loc_72F661
0x72F65F: xor     eax, eax
0x72F661: xor     ebp, ebp
0x72F663: cmp     [edi+48h], bp
0x72F667: mov     [edi+44h], eax
0x72F66A: jbe     short loc_72F6D0
0x72F66C: lea     esp, [esp+0]
0x72F670: mov     eax, [edi+44h]
0x72F673: push    1
0x72F675: lea     ecx, [esp+240h+var_220]
0x72F679: push    ecx
0x72F67A: lea     ebx, [eax+ebp*8]
0x72F67D: mov     eax, [esi+21Ch]
0x72F683: mov     edx, [eax+4]
0x72F686: push    2
0x72F688: push    ebx
0x72F689: push    eax
0x72F68A: mov     [esp+250h+var_220], 2
0x72F692: call    edx
0x72F694: mov     eax, [esi+21Ch]
0x72F69A: mov     edx, [eax+4]
0x72F69D: push    1
0x72F69F: lea     ecx, [esp+254h+var_220]
0x72F6A3: push    ecx
0x72F6A4: push    4
0x72F6A6: add     ebx, 4
0x72F6A9: push    ebx
0x72F6AA: push    eax
0x72F6AB: mov     [esp+264h+var_220], 4
0x72F6B3: call    edx
0x72F6B5: movzx   eax, word ptr [edi+48h]
0x72F6B9: add     ebp, 1
0x72F6BC: add     esp, 28h
0x72F6BF: cmp     ebp, eax
0x72F6C1: jb      short loc_72F670
0x72F6C3: mov     ebx, [esp+23Ch+var_214]
0x72F6C7: jmp     short loc_72F6D0
0x72F6C9: mov     dword ptr [edi+44h], 0
0x72F6D0: mov     eax, [esp+23Ch+var_224]
0x72F6D4: add     [esp+23Ch+var_21C], 4Ch ; 'L'
0x72F6D9: add     eax, 1
0x72F6DC: cmp     eax, [ebx+40h]
0x72F6DF: mov     [esp+23Ch+var_224], eax
0x72F6E3: jb      loc_72F5D4
0x72F6E9: cmp     dword ptr [esi+0D8h], 4010009h
0x72F6F3: jnz     short loc_72F71A
0x72F6F5: mov     esi, [esi+21Ch]
0x72F6FB: mov     eax, [esi+4]
0x72F6FE: push    1
0x72F700: lea     ecx, [esp+240h+var_21C]
0x72F704: push    ecx
0x72F705: push    1
0x72F707: lea     edx, [esp+248h+var_215]
0x72F70B: push    edx
0x72F70C: push    esi
0x72F70D: mov     [esp+250h+var_21C], 1
0x72F715: call    eax
0x72F717: add     esp, 14h
0x72F71A: mov     ecx, [esp+23Ch+var_C]
0x72F721: mov     large fs:0, ecx
0x72F728: pop     ecx
0x72F729: pop     edi
0x72F72A: pop     esi
0x72F72B: pop     ebp
0x72F72C: pop     ebx
0x72F72D: mov     ecx, [esp+228h+var_10]
0x72F734: xor     ecx, esp
0x72F736: call    @__security_check_cookie@4; __security_check_cookie(x)
0x72F73B: add     esp, 228h
0x72F741: retn    4
