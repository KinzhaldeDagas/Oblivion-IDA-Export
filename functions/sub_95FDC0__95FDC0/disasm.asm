0x95FDC0: push    ebx
0x95FDC1: push    ebp
0x95FDC2: push    esi
0x95FDC3: push    edi
0x95FDC4: mov     edi, [esp+10h+arg_4]
0x95FDC8: xor     esi, esi
0x95FDCA: cmp     [edi+0Eh], si
0x95FDCE: jbe     short loc_95FE30
0x95FDD0: mov     ebx, [esp+10h+arg_2C]
0x95FDD4: mov     ebp, [esp+10h+arg_28]
0x95FDD8: jmp     short loc_95FDE0
0x95FDDA: align 10h
0x95FDE0: mov     ecx, [esp+10h+arg_24]
0x95FDE4: fld     [esp+10h+arg_0]
0x95FDE8: mov     edx, [esp+10h+arg_20]
0x95FDEC: mov     eax, [edi+8]
0x95FDEF: mov     eax, [eax+esi*4]
0x95FDF2: push    ebx; int
0x95FDF3: push    ebp; int
0x95FDF4: push    ecx; int
0x95FDF5: mov     ecx, [esp+1Ch+arg_1C]
0x95FDF9: push    edx; int
0x95FDFA: mov     edx, [esp+20h+arg_18]
0x95FDFE: push    ecx; int
0x95FDFF: mov     ecx, [esp+24h+arg_14]
0x95FE03: push    edx; int
0x95FE04: mov     edx, [esp+28h+arg_10]
0x95FE08: push    ecx; int
0x95FE09: mov     ecx, [esp+2Ch+arg_C]
0x95FE0D: push    edx; int
0x95FE0E: mov     edx, [esp+30h+arg_8]
0x95FE12: push    ecx; int
0x95FE13: push    edx; int
0x95FE14: push    eax; int
0x95FE15: push    ecx
0x95FE16: fstp    [esp+40h+var_40]; float
0x95FE19: call    sub_95DAB0
0x95FE1E: add     esp, 30h
0x95FE21: test    al, al
0x95FE23: jnz     short loc_95FE37
0x95FE25: movzx   eax, word ptr [edi+0Eh]
0x95FE29: add     esi, 1
0x95FE2C: cmp     esi, eax
0x95FE2E: jb      short loc_95FDE0
0x95FE30: pop     edi
0x95FE31: pop     esi
0x95FE32: pop     ebp
0x95FE33: xor     al, al
0x95FE35: pop     ebx
0x95FE36: retn
0x95FE37: mov     [edi+14h], esi
0x95FE3A: pop     edi
0x95FE3B: pop     esi
0x95FE3C: pop     ebp
0x95FE3D: mov     al, 1
0x95FE3F: pop     ebx
0x95FE40: retn
