0x6CD720: push    0FFFFFFFFh
0x6CD722: push    offset SEH_6B9010
0x6CD727: mov     eax, large fs:0
0x6CD72D: push    eax
0x6CD72E: sub     esp, 14h
0x6CD731: push    ebx
0x6CD732: push    ebp
0x6CD733: push    esi
0x6CD734: push    edi
0x6CD735: mov     eax, ds:0B30AACh
0x6CD73A: xor     eax, esp
0x6CD73C: push    eax
0x6CD73D: lea     eax, [esp+34h+var_C]
0x6CD741: mov     large fs:0, eax
0x6CD747: mov     edi, ecx
0x6CD749: mov     esi, [esp+34h+size]
0x6CD74D: push    esi
0x6CD74E: call    sub_6EBA80
0x6CD753: mov     eax, [esi+0D8h]
0x6CD759: cmp     eax, 0A010070h
0x6CD75E: jb      short loc_6CD787
0x6CD760: mov     eax, [esi+21Ch]
0x6CD766: mov     edx, [eax+4]
0x6CD769: push    1
0x6CD76B: lea     ecx, [esp+38h+size]
0x6CD76F: push    ecx
0x6CD770: push    1
0x6CD772: lea     ebx, [edi+0Ch]
0x6CD775: push    ebx
0x6CD776: push    eax
0x6CD777: mov     [esp+48h+size], 1
0x6CD77F: call    edx
0x6CD781: add     esp, 14h
0x6CD784: and     byte ptr [ebx], 0FBh
0x6CD787: mov     eax, [esi+0D8h]
0x6CD78D: cmp     eax, 0A01006Eh
0x6CD792: mov     eax, [esi+21Ch]
0x6CD798: push    1
0x6CD79A: jnb     short loc_6CD7E2
0x6CD79C: lea     ecx, [esp+38h+var_1C]
0x6CD7A0: push    ecx
0x6CD7A1: mov     ebx, 2
0x6CD7A6: push    ebx
0x6CD7A7: lea     edx, [esp+40h+size]
0x6CD7AB: push    edx
0x6CD7AC: push    eax
0x6CD7AD: mov     eax, [eax+4]
0x6CD7B0: mov     [esp+48h+var_1C], ebx
0x6CD7B4: call    eax
0x6CD7B6: mov     cl, byte ptr [esp+48h+size]
0x6CD7BA: push    1
0x6CD7BC: lea     edx, [esp+4Ch+var_1C]
0x6CD7C0: push    edx
0x6CD7C1: mov     [edi+0Dh], cl
0x6CD7C4: mov     eax, [esi+21Ch]
0x6CD7CA: mov     edx, [eax+4]
0x6CD7CD: lea     ebp, [edi+0Dh]
0x6CD7D0: push    ebx
0x6CD7D1: lea     ecx, [esp+54h+var_18]
0x6CD7D5: push    ecx
0x6CD7D6: push    eax
0x6CD7D7: mov     [esp+5Ch+var_1C], ebx
0x6CD7DB: call    edx
0x6CD7DD: add     esp, 28h
0x6CD7E0: jmp     short loc_6CD7FE
0x6CD7E2: mov     edx, [eax+4]
0x6CD7E5: lea     ecx, [esp+38h+size]
0x6CD7E9: push    ecx
0x6CD7EA: push    1
0x6CD7EC: lea     ebp, [edi+0Dh]
0x6CD7EF: push    ebp
0x6CD7F0: push    eax
0x6CD7F1: mov     [esp+48h+size], 1
0x6CD7F9: call    edx
0x6CD7FB: add     esp, 14h
0x6CD7FE: movzx   eax, byte ptr [ebp+0]
0x6CD802: mov     [esp+34h+size], eax
0x6CD806: xor     ecx, ecx
0x6CD808: mov     edx, 18h
0x6CD80D: mul     edx
0x6CD80F: seto    cl
0x6CD812: mov     ebx, 4
0x6CD817: neg     ecx
0x6CD819: or      ecx, eax
0x6CD81B: xor     eax, eax
0x6CD81D: add     ecx, ebx
0x6CD81F: setb    al
0x6CD822: neg     eax
0x6CD824: or      eax, ecx
0x6CD826: push    eax; Size
0x6CD827: call    FormHeapAlloc
0x6CD82C: add     esp, 4
0x6CD82F: mov     [esp+34h+var_10], eax
0x6CD833: test    eax, eax
0x6CD835: mov     [esp+34h+var_4], 0
0x6CD83D: jz      short loc_6CD864
0x6CD83F: mov     ecx, [esp+34h+size]
0x6CD843: push    offset sub_7016A0; a5
0x6CD848: push    offset sub_6CCDE0; a4
0x6CD84D: push    ecx; size
0x6CD84E: mov     [eax], ecx
0x6CD850: add     eax, ebx
0x6CD852: push    18h; a2
0x6CD854: push    eax; a1
0x6CD855: mov     [esp+48h+size], eax
0x6CD859: call    ArrayConstructor
0x6CD85E: mov     eax, [esp+34h+size]
0x6CD862: jmp     short loc_6CD866
0x6CD864: xor     eax, eax
0x6CD866: mov     [edi+14h], eax
0x6CD869: cmp     dword ptr [esi+0D8h], 0A010070h
0x6CD873: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6CD87B: jnb     loc_6CDA9A
0x6CD881: xor     bl, bl
0x6CD883: cmp     [ebp+0], bl
0x6CD886: jbe     short loc_6CD8AA
0x6CD888: jmp     short loc_6CD890
0x6CD88A: align 10h
0x6CD890: mov     edx, [edi+14h]
0x6CD893: movzx   eax, bl
0x6CD896: lea     ecx, [eax+eax*2]
0x6CD899: push    esi
0x6CD89A: lea     ecx, [edx+ecx*8]
0x6CD89D: call    sub_6CD570
0x6CD8A2: add     bl, 1
0x6CD8A5: cmp     bl, [ebp+0]
0x6CD8A8: jb      short loc_6CD890
0x6CD8AA: mov     eax, [esi+21Ch]
0x6CD8B0: mov     ebp, 1
0x6CD8B5: push    ebp
0x6CD8B6: lea     ecx, [esp+38h+var_18]
0x6CD8BA: push    ecx
0x6CD8BB: push    ebp
0x6CD8BC: lea     edx, [esp+40h+size]
0x6CD8C0: push    edx
0x6CD8C1: push    eax
0x6CD8C2: mov     eax, [eax+4]
0x6CD8C5: mov     [esp+48h+var_18], ebp
0x6CD8C9: call    eax
0x6CD8CB: add     esp, 14h
0x6CD8CE: cmp     byte ptr [esp+34h+size], 0
0x6CD8D3: jz      short loc_6CD8DB
0x6CD8D5: or      byte ptr [edi+0Ch], 1
0x6CD8D9: jmp     short loc_6CD8DF
0x6CD8DB: and     byte ptr [edi+0Ch], 0FEh
0x6CD8DF: mov     eax, [esi+21Ch]
0x6CD8E5: push    ebp
0x6CD8E6: lea     ecx, [esp+38h+var_18]
0x6CD8EA: push    ecx
0x6CD8EB: mov     ebx, 4
0x6CD8F0: push    ebx
0x6CD8F1: lea     edx, [edi+1Ch]
0x6CD8F4: push    edx
0x6CD8F5: push    eax
0x6CD8F6: mov     eax, [eax+4]
0x6CD8F9: mov     [esp+48h+var_18], ebx
0x6CD8FD: call    eax
0x6CD8FF: mov     eax, [esi+21Ch]
0x6CD905: push    ebp
0x6CD906: lea     ecx, [esp+4Ch+var_18]
0x6CD90A: push    ecx
0x6CD90B: push    ebp
0x6CD90C: lea     edx, [esp+54h+var_1D]
0x6CD910: push    edx
0x6CD911: push    eax
0x6CD912: mov     eax, [eax+4]
0x6CD915: mov     [esp+5Ch+var_18], ebp
0x6CD919: call    eax
0x6CD91B: add     esp, 28h
0x6CD91E: cmp     [esp+34h+var_1D], 0
0x6CD923: jz      short loc_6CD92B
0x6CD925: or      byte ptr [edi+0Ch], 2
0x6CD929: jmp     short loc_6CD92F
0x6CD92B: and     byte ptr [edi+0Ch], 0FDh
0x6CD92F: cmp     dword ptr [esi+0D8h], 0A01006Eh
0x6CD939: mov     eax, [esi+21Ch]
0x6CD93F: push    ebp
0x6CD940: lea     ecx, [esp+38h+var_14]
0x6CD944: push    ecx
0x6CD945: jnb     short loc_6CD98D
0x6CD947: mov     ebx, 2
0x6CD94C: push    ebx
0x6CD94D: lea     edx, [esp+40h+var_1C]
0x6CD951: push    edx
0x6CD952: push    eax
0x6CD953: mov     eax, [eax+4]
0x6CD956: mov     [esp+48h+var_14], ebx
0x6CD95A: call    eax
0x6CD95C: mov     cl, byte ptr [esp+48h+var_1C]
0x6CD960: push    ebp
0x6CD961: lea     edx, [esp+4Ch+var_14]
0x6CD965: push    edx
0x6CD966: mov     [edi+0Eh], cl
0x6CD969: mov     eax, [esi+21Ch]
0x6CD96F: mov     edx, [eax+4]
0x6CD972: push    ebx
0x6CD973: lea     ecx, [esp+54h+var_18]
0x6CD977: push    ecx
0x6CD978: push    eax
0x6CD979: mov     [esp+5Ch+var_14], ebx
0x6CD97D: call    edx
0x6CD97F: mov     al, byte ptr [esp+5Ch+var_18]
0x6CD983: mov     [edi+0Fh], al
0x6CD986: mov     ebx, 4
0x6CD98B: jmp     short loc_6CD9B7
0x6CD98D: push    ebp
0x6CD98E: lea     edx, [edi+0Eh]
0x6CD991: push    edx
0x6CD992: push    eax
0x6CD993: mov     eax, [eax+4]
0x6CD996: mov     [esp+48h+var_14], ebp
0x6CD99A: call    eax
0x6CD99C: mov     eax, [esi+21Ch]
0x6CD9A2: push    ebp
0x6CD9A3: lea     ecx, [esp+4Ch+var_14]
0x6CD9A7: push    ecx
0x6CD9A8: push    ebp
0x6CD9A9: lea     edx, [edi+0Fh]
0x6CD9AC: push    edx
0x6CD9AD: push    eax
0x6CD9AE: mov     eax, [eax+4]
0x6CD9B1: mov     [esp+5Ch+var_14], ebp
0x6CD9B5: call    eax
0x6CD9B7: add     esp, 28h
0x6CD9BA: cmp     dword ptr [esi+0D8h], 0A01006Ch
0x6CD9C4: jb      short loc_6CD9EE
0x6CD9C6: mov     ecx, esi
0x6CD9C8: call    sub_712A90
0x6CD9CD: push    ebp
0x6CD9CE: lea     ecx, [esp+38h+var_14]
0x6CD9D2: push    ecx
0x6CD9D3: mov     [edi+18h], eax
0x6CD9D6: mov     eax, [esi+21Ch]
0x6CD9DC: push    ebx
0x6CD9DD: lea     edx, [edi+20h]
0x6CD9E0: push    edx
0x6CD9E1: push    eax
0x6CD9E2: mov     eax, [eax+4]
0x6CD9E5: mov     [esp+48h+var_14], ebx
0x6CD9E9: call    eax
0x6CD9EB: add     esp, 14h
0x6CD9EE: cmp     dword ptr [esi+0D8h], 0A01006Eh
0x6CD9F8: mov     eax, [esi+21Ch]
0x6CD9FE: push    ebp
0x6CD9FF: lea     ecx, [esp+38h+var_14]
0x6CDA03: push    ecx
0x6CDA04: jnb     short loc_6CDA68
0x6CDA06: push    ebx
0x6CDA07: lea     edx, [esp+40h+var_18]
0x6CDA0B: push    edx
0x6CDA0C: push    eax
0x6CDA0D: mov     eax, [eax+4]
0x6CDA10: mov     [esp+48h+var_14], ebx
0x6CDA14: call    eax
0x6CDA16: mov     eax, [esp+48h+var_18]
0x6CDA1A: add     esp, 14h
0x6CDA1D: cmp     eax, 80000000h
0x6CDA22: jnz     short loc_6CDA2A
0x6CDA24: mov     byte ptr [edi+10h], 80h ; '€'
0x6CDA28: jmp     short loc_6CDA2D
0x6CDA2A: mov     [edi+10h], al
0x6CDA2D: mov     esi, [esi+21Ch]
0x6CDA33: mov     eax, [esi+4]
0x6CDA36: push    ebp
0x6CDA37: lea     ecx, [esp+38h+var_14]
0x6CDA3B: push    ecx
0x6CDA3C: push    ebx
0x6CDA3D: lea     edx, [esp+40h+var_1C]
0x6CDA41: push    edx
0x6CDA42: push    esi
0x6CDA43: mov     [esp+48h+var_14], ebx
0x6CDA47: call    eax
0x6CDA49: mov     eax, [esp+48h+var_1C]
0x6CDA4D: add     esp, 14h
0x6CDA50: cmp     eax, 80000000h
0x6CDA55: jnz     short loc_6CDA60
0x6CDA57: mov     byte ptr [edi+11h], 80h ; '€'
0x6CDA5B: jmp     loc_6CDBEB
0x6CDA60: mov     [edi+11h], al
0x6CDA63: jmp     loc_6CDBEB
0x6CDA68: push    ebp
0x6CDA69: lea     edx, [edi+10h]
0x6CDA6C: push    edx
0x6CDA6D: push    eax
0x6CDA6E: mov     eax, [eax+4]
0x6CDA71: mov     [esp+48h+var_14], ebp
0x6CDA75: call    eax
0x6CDA77: mov     esi, [esi+21Ch]
0x6CDA7D: mov     edx, [esi+4]
0x6CDA80: push    ebp
0x6CDA81: lea     ecx, [esp+4Ch+var_14]
0x6CDA85: push    ecx
0x6CDA86: push    ebp
0x6CDA87: add     edi, 11h
0x6CDA8A: push    edi
0x6CDA8B: push    esi
0x6CDA8C: mov     [esp+5Ch+var_14], ebp
0x6CDA90: call    edx
0x6CDA92: add     esp, 28h
0x6CDA95: jmp     loc_6CDBEB
0x6CDA9A: mov     eax, [esi+21Ch]
0x6CDAA0: push    1
0x6CDAA2: lea     ecx, [esp+38h+size]
0x6CDAA6: push    ecx
0x6CDAA7: push    ebx
0x6CDAA8: lea     edx, [edi+1Ch]
0x6CDAAB: push    edx
0x6CDAAC: push    eax
0x6CDAAD: mov     eax, [eax+4]
0x6CDAB0: mov     [esp+48h+size], ebx
0x6CDAB4: call    eax
0x6CDAB6: add     esp, 14h
0x6CDAB9: test    byte ptr [edi+0Ch], 1
0x6CDABD: jnz     loc_6CDBEB
0x6CDAC3: mov     eax, [esi+21Ch]
0x6CDAC9: push    1
0x6CDACB: lea     ecx, [esp+38h+size]
0x6CDACF: push    ecx
0x6CDAD0: push    1
0x6CDAD2: lea     edx, [edi+0Eh]
0x6CDAD5: push    edx
0x6CDAD6: push    eax
0x6CDAD7: mov     eax, [eax+4]
0x6CDADA: mov     [esp+48h+size], 1
0x6CDAE2: call    eax
0x6CDAE4: mov     eax, [esi+21Ch]
0x6CDAEA: push    1
0x6CDAEC: lea     ecx, [esp+4Ch+size]
0x6CDAF0: push    ecx
0x6CDAF1: push    1
0x6CDAF3: lea     edx, [edi+0Fh]
0x6CDAF6: push    edx
0x6CDAF7: push    eax
0x6CDAF8: mov     eax, [eax+4]
0x6CDAFB: mov     [esp+5Ch+size], 1
0x6CDB03: call    eax
0x6CDB05: mov     eax, [esi+21Ch]
0x6CDB0B: push    1
0x6CDB0D: lea     ecx, [esp+60h+size]
0x6CDB11: push    ecx
0x6CDB12: push    1
0x6CDB14: lea     edx, [edi+10h]
0x6CDB17: push    edx
0x6CDB18: push    eax
0x6CDB19: mov     eax, [eax+4]
0x6CDB1C: mov     [esp+70h+size], 1
0x6CDB24: call    eax
0x6CDB26: mov     eax, [esi+21Ch]
0x6CDB2C: push    1
0x6CDB2E: lea     ecx, [esp+74h+size]
0x6CDB32: push    ecx
0x6CDB33: push    1
0x6CDB35: lea     edx, [edi+11h]
0x6CDB38: push    edx
0x6CDB39: push    eax
0x6CDB3A: mov     eax, [eax+4]
0x6CDB3D: mov     [esp+84h+size], 1
0x6CDB48: call    eax
0x6CDB4A: mov     eax, [esi+21Ch]
0x6CDB50: add     esp, 50h
0x6CDB53: push    1
0x6CDB55: lea     ecx, [esp+38h+size]
0x6CDB59: push    ecx
0x6CDB5A: push    ebx
0x6CDB5B: lea     edx, [edi+20h]
0x6CDB5E: push    edx
0x6CDB5F: push    eax
0x6CDB60: mov     eax, [eax+4]
0x6CDB63: mov     [esp+48h+size], ebx
0x6CDB67: call    eax
0x6CDB69: mov     eax, [esi+21Ch]
0x6CDB6F: push    1
0x6CDB71: lea     ecx, [esp+4Ch+size]
0x6CDB75: push    ecx
0x6CDB76: push    ebx
0x6CDB77: lea     edx, [edi+24h]
0x6CDB7A: push    edx
0x6CDB7B: push    eax
0x6CDB7C: mov     eax, [eax+4]
0x6CDB7F: mov     [esp+5Ch+size], ebx
0x6CDB83: call    eax
0x6CDB85: mov     eax, [esi+21Ch]
0x6CDB8B: push    1
0x6CDB8D: lea     ecx, [esp+60h+size]
0x6CDB91: push    ecx
0x6CDB92: push    ebx
0x6CDB93: lea     edx, [edi+28h]
0x6CDB96: push    edx
0x6CDB97: push    eax
0x6CDB98: mov     eax, [eax+4]
0x6CDB9B: mov     [esp+70h+size], ebx
0x6CDB9F: call    eax
0x6CDBA1: mov     eax, [esi+21Ch]
0x6CDBA7: mov     [esp+70h+var_10], ebx
0x6CDBAB: push    1
0x6CDBAD: lea     ecx, [esp+74h+var_10]
0x6CDBB1: push    ecx
0x6CDBB2: push    ebx
0x6CDBB3: lea     edx, [edi+2Ch]
0x6CDBB6: push    edx
0x6CDBB7: push    eax
0x6CDBB8: mov     eax, [eax+4]
0x6CDBBB: call    eax
0x6CDBBD: xor     bl, bl
0x6CDBBF: add     esp, 50h
0x6CDBC2: cmp     [ebp+0], bl
0x6CDBC5: jbe     short loc_6CDBE1
0x6CDBC7: mov     edx, [edi+14h]
0x6CDBCA: movzx   eax, bl
0x6CDBCD: lea     ecx, [eax+eax*2]
0x6CDBD0: push    esi
0x6CDBD1: lea     ecx, [edx+ecx*8]
0x6CDBD4: call    sub_6CD570
0x6CDBD9: add     bl, 1
0x6CDBDC: cmp     bl, [ebp+0]
0x6CDBDF: jb      short loc_6CDBC7
0x6CDBE1: mov     ecx, esi
0x6CDBE3: call    sub_712A90
0x6CDBE8: mov     [edi+18h], eax
0x6CDBEB: mov     ecx, [esp+34h+var_C]
0x6CDBEF: mov     large fs:0, ecx
0x6CDBF6: pop     ecx
0x6CDBF7: pop     edi
0x6CDBF8: pop     esi
0x6CDBF9: pop     ebp
0x6CDBFA: pop     ebx
0x6CDBFB: add     esp, 20h
0x6CDBFE: retn    4
