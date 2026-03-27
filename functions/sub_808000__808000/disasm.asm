0x808000: and     al, 28h
0x808002: or      al, [eax]
0x808004: add     al, ch
0x808006: xchg    eax, esi
0x808008: pop     ss
0x808009: add     [edx+34h], ch
0x80800C: mov     [esp-4+arg_A5C], ebp
0x808013: mov     [esp-4+arg_A60], offset aPoint; "POINT"
0x80801E: mov     [esp-4+arg_A64], esi
0x808025: mov     [esp-4+arg_A68], edi
0x80802C: mov     [esp-4+arg_A6C], esi
0x808033: mov     [esp-4+arg_A70], ebx
0x80803A: push    ebx
0x80803B: lea     eax, [esp+arg_A74]
0x808042: push    eax
0x808043: call    __memset
0x808048: push    2Ch ; ','
0x80804A: lea     ecx, [esp+8+arg_AC8]
0x808051: push    ebx
0x808052: push    ecx
0x808053: mov     [esp+10h+arg_AA8], ebp
0x80805A: mov     [esp+10h+arg_AAC], offset aPoint; "POINT"
0x808065: mov     [esp+10h+arg_AB0], esi
0x80806C: mov     [esp+10h+arg_AB4], offset aSkin_1; "SKIN"
0x808077: mov     [esp+10h+arg_AB8], esi
0x80807E: mov     [esp+10h+arg_ABC], edi
0x808085: mov     [esp+10h+arg_AC0], esi
0x80808C: mov     [esp+10h+arg_AC4], ebx
0x808093: call    __memset
0x808098: add     esp, 3Ch
0x80809B: cmp     dword ptr ds:0B42F48h, 2
0x8080A2: jl      loc_808168
0x8080A8: mov     edx, [esp-2Ch+arg_40]
0x8080AC: add     edx, 9Ch ; 'œ'
0x8080B2: mov     [esp-2Ch+arg_3C], ebx
0x8080B6: lea     ebp, [esp-2Ch+arg_48]
0x8080BA: mov     [esp-2Ch+arg_38], edx
0x8080BE: mov     edi, edi
0x8080C0: mov     ecx, [ebp-4]
0x8080C3: lea     eax, [esp-2Ch+FileName]
0x8080CA: push    eax; int
0x8080CB: push    ecx; FullPath
0x8080CC: call    sub_801030
0x8080D1: mov     edx, [esp-24h+arg_3C]
0x8080D5: push    edx
0x8080D6: lea     eax, [esp-20h+arg_BF8]
0x8080DD: push    offset aPar203i_vso; "PAR2%03i.vso"
0x8080E2: push    eax
0x8080E3: call    __sprintf
0x8080E8: add     esp, 14h
0x8080EB: push    ebx; int
0x8080EC: push    ebx; int
0x8080ED: lea     ecx, [esp-24h+arg_BF8]
0x8080F4: push    ecx; int
0x8080F5: mov     ecx, [esp-20h+arg_40]
0x8080F9: push    offset aVs_2_0; "vs_2_0"
0x8080FE: push    ebp; int
0x8080FF: lea     edx, [esp-18h+FileName]
0x808106: push    edx; lpFileName
0x808107: call    CreateVertexShader
0x80810C: mov     edi, eax
0x80810E: mov     eax, [esp-2Ch+arg_38]
0x808112: mov     esi, [eax]
0x808114: cmp     esi, edi
0x808116: jz      short loc_80814C
0x808118: cmp     esi, ebx
0x80811A: jz      short loc_808138
0x80811C: lea     ecx, [esi+4]
0x80811F: push    ecx; lpAddend
0x808120: call    dword ptr ds:0A2807Ch
0x808126: test    eax, eax
0x808128: jnz     short loc_808138
0x80812A: cmp     esi, ebx
0x80812C: jz      short loc_808138
0x80812E: mov     edx, [esi]
0x808130: mov     eax, [edx]
0x808132: push    1
0x808134: mov     ecx, esi
0x808136: call    eax
0x808138: cmp     edi, ebx
0x80813A: mov     ecx, [esp-28h+arg_34]
0x80813E: mov     [ecx], edi
0x808140: jz      short loc_80814C
0x808142: add     edi, 4
0x808145: push    edi; lpAddend
0x808146: call    dword ptr ds:0A28078h
0x80814C: mov     eax, [esp-28h+arg_38]
0x808150: add     [esp-28h+arg_34], 4
0x808155: add     eax, 1
0x808158: add     ebp, 4Ch ; 'L'
0x80815B: cmp     eax, 24h ; '$'
0x80815E: mov     [esp-28h+arg_38], eax
0x808162: jl      loc_8080C0
0x808168: mov     ecx, [esp-28h+arg_CF8]
0x80816F: pop     edi
0x808170: pop     esi
0x808171: pop     ebp
0x808172: pop     ebx
0x808173: xor     ecx, esp
0x808175: call    @__security_check_cookie@4; __security_check_cookie(x)
0x80817A: add     esp, 0CC8h
0x808180: retn
