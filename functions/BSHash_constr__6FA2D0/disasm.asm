0x6FA2D0: sub     esp, 22Ch
0x6FA2D6: mov     eax, ds:0B30AACh
0x6FA2DB: xor     eax, esp
0x6FA2DD: mov     [esp+22Ch+var_4], eax
0x6FA2E4: mov     eax, [esp+22Ch+FullPath]
0x6FA2EB: push    ebx
0x6FA2EC: push    ebp
0x6FA2ED: push    esi
0x6FA2EE: mov     esi, [esp+238h+arg_4]
0x6FA2F5: xor     ebx, ebx
0x6FA2F7: cmp     esi, 2
0x6FA2FA: mov     ebp, ecx
0x6FA2FC: jz      loc_6FA3BE
0x6FA302: lea     ecx, [esp+238h+Ext]
0x6FA306: push    ecx; Ext
0x6FA307: lea     edx, [esp+23Ch+Filename]
0x6FA30B: push    edx; Filename
0x6FA30C: lea     ecx, [esp+240h+Dir]
0x6FA313: push    ecx; Dir
0x6FA314: lea     edx, [esp+244h+Drive]
0x6FA318: push    edx; Drive
0x6FA319: push    eax; FullPath
0x6FA31A: mov     [esp+24Ch+Drive], bl
0x6FA31E: mov     [esp+24Ch+Dir], bl
0x6FA325: mov     [esp+24Ch+Filename], bl
0x6FA329: mov     [esp+24Ch+Ext], bl
0x6FA32D: call    __splitpath
0x6FA332: add     esp, 14h
0x6FA335: cmp     esi, ebx
0x6FA337: jnz     short loc_6FA33F
0x6FA339: lea     ebx, [esp+238h+Ext]
0x6FA33D: jmp     short loc_6FA3BA
0x6FA33F: xor     eax, eax
0x6FA341: mov     cl, [esp+eax+238h+Drive]
0x6FA345: mov     [esp+eax+238h+Filename], cl
0x6FA349: add     eax, 1
0x6FA34C: cmp     cl, bl
0x6FA34E: jnz     short loc_6FA341
0x6FA350: lea     eax, [esp+238h+Dir]
0x6FA357: mov     edx, eax
0x6FA359: lea     esp, [esp+0]
0x6FA360: mov     cl, [eax]
0x6FA362: add     eax, 1
0x6FA365: cmp     cl, bl
0x6FA367: jnz     short loc_6FA360
0x6FA369: push    edi
0x6FA36A: lea     edi, [esp+23Ch+Filename]
0x6FA36E: sub     eax, edx
0x6FA370: add     edi, 0FFFFFFFFh
0x6FA373: mov     cl, [edi+1]
0x6FA376: add     edi, 1
0x6FA379: cmp     cl, bl
0x6FA37B: jnz     short loc_6FA373
0x6FA37D: mov     ecx, eax
0x6FA37F: shr     ecx, 2
0x6FA382: mov     esi, edx
0x6FA384: rep movsd
0x6FA386: mov     ecx, eax
0x6FA388: and     ecx, 3
0x6FA38B: rep movsb
0x6FA38D: cmp     [esp+23Ch+Filename], bl
0x6FA391: pop     edi
0x6FA392: jnz     short loc_6FA39B
0x6FA394: mov     word ptr [esp+238h+Filename], 2Eh ; '.'
0x6FA39B: lea     eax, [esp+238h+Filename]
0x6FA39F: lea     edx, [eax+1]
0x6FA3A2: mov     cl, [eax]
0x6FA3A4: add     eax, 1
0x6FA3A7: cmp     cl, bl
0x6FA3A9: jnz     short loc_6FA3A2
0x6FA3AB: sub     eax, edx
0x6FA3AD: cmp     [esp+eax+238h+var_20D], 5Ch ; '\'
0x6FA3B2: lea     eax, [esp+eax+238h+var_20D]
0x6FA3B6: jnz     short loc_6FA3BA
0x6FA3B8: mov     [eax], bl
0x6FA3BA: lea     eax, [esp+238h+Filename]
0x6FA3BE: push    ebp
0x6FA3BF: push    ebx
0x6FA3C0: push    eax
0x6FA3C1: call    sub_6FA080
0x6FA3C6: mov     ecx, [esp+244h+var_4]
0x6FA3CD: add     esp, 0Ch
0x6FA3D0: pop     esi
0x6FA3D1: mov     eax, ebp
0x6FA3D3: pop     ebp
0x6FA3D4: pop     ebx
0x6FA3D5: xor     ecx, esp
0x6FA3D7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6FA3DC: add     esp, 22Ch
0x6FA3E2: retn    8
