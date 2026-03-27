0x7201B0: sub     esp, 8
0x7201B3: push    ebx
0x7201B4: mov     ebx, [esp+0Ch+arg_0]
0x7201B8: push    ebp
0x7201B9: push    esi
0x7201BA: push    edi
0x7201BB: push    ebx
0x7201BC: mov     edi, ecx
0x7201BE: call    sub_732EB0
0x7201C3: mov     eax, [ebx+220h]
0x7201C9: mov     edx, [eax+8]
0x7201CC: push    1
0x7201CE: lea     ecx, [esp+1Ch+var_8]
0x7201D2: push    ecx
0x7201D3: push    4
0x7201D5: lea     esi, [edi+44h]
0x7201D8: push    esi
0x7201D9: push    eax
0x7201DA: mov     [esp+2Ch+var_8], 4
0x7201E2: call    edx
0x7201E4: cmp     dword ptr [edi+48h], 0
0x7201E8: push    1
0x7201EA: lea     ecx, [esp+30h+var_8]
0x7201EE: push    ecx
0x7201EF: setnz   al
0x7201F2: mov     byte ptr [esp+34h+arg_0], al
0x7201F6: mov     eax, [ebx+220h]
0x7201FC: push    1
0x7201FE: lea     edx, [esp+38h+arg_0]
0x720202: push    edx
0x720203: push    eax
0x720204: mov     eax, [eax+8]
0x720207: mov     [esp+40h+var_8], 1
0x72020F: call    eax
0x720211: add     esp, 28h
0x720214: cmp     byte ptr [esp+18h+arg_0], 0
0x720219: jz      short loc_720242
0x72021B: mov     edx, [esi]
0x72021D: mov     eax, [ebx+220h]
0x720223: push    1
0x720225: lea     ecx, [esp+1Ch+var_8]
0x720229: push    ecx
0x72022A: mov     ecx, [edi+48h]
0x72022D: add     edx, edx
0x72022F: push    edx
0x720230: mov     edx, [eax+8]
0x720233: push    ecx
0x720234: push    eax
0x720235: mov     [esp+2Ch+var_8], 2
0x72023D: call    edx
0x72023F: add     esp, 14h
0x720242: mov     eax, [ebx+220h]
0x720248: mov     edx, [eax+8]
0x72024B: push    1
0x72024D: lea     ecx, [esp+1Ch+var_8]
0x720251: push    ecx
0x720252: push    2
0x720254: lea     esi, [edi+50h]
0x720257: push    esi
0x720258: push    eax
0x720259: mov     [esp+2Ch+var_8], 2
0x720261: call    edx
0x720263: xor     ebp, ebp
0x720265: add     esp, 14h
0x720268: cmp     [esi], bp
0x72026B: jbe     short loc_7202E7
0x72026D: lea     ecx, [ecx+0]
0x720270: mov     eax, [edi+4Ch]
0x720273: movzx   esi, bp
0x720276: add     esi, esi
0x720278: add     esi, esi
0x72027A: add     esi, esi
0x72027C: movzx   ecx, word ptr [esi+eax]
0x720280: mov     eax, [ebx+220h]
0x720286: push    1
0x720288: lea     edx, [esp+1Ch+var_4]
0x72028C: push    edx
0x72028D: mov     [esp+20h+var_8], ecx
0x720291: mov     edx, [eax+8]
0x720294: push    2
0x720296: lea     ecx, [esp+24h+var_8]
0x72029A: push    ecx
0x72029B: push    eax
0x72029C: mov     [esp+2Ch+var_4], 2
0x7202A4: call    edx
0x7202A6: mov     ecx, [esp+2Ch+var_8]
0x7202AA: add     esp, 14h
0x7202AD: test    cx, cx
0x7202B0: jz      short loc_7202DE
0x7202B2: mov     eax, [ebx+220h]
0x7202B8: movzx   ecx, cx
0x7202BB: push    1
0x7202BD: lea     edx, [esp+1Ch+var_4]
0x7202C1: push    edx
0x7202C2: mov     edx, [edi+4Ch]
0x7202C5: add     ecx, ecx
0x7202C7: push    ecx
0x7202C8: mov     ecx, [edx+esi+4]
0x7202CC: mov     edx, [eax+8]
0x7202CF: push    ecx
0x7202D0: push    eax
0x7202D1: mov     [esp+2Ch+var_4], 2
0x7202D9: call    edx
0x7202DB: add     esp, 14h
0x7202DE: add     ebp, 1
0x7202E1: cmp     bp, [edi+50h]
0x7202E5: jb      short loc_720270
0x7202E7: pop     edi
0x7202E8: pop     esi
0x7202E9: pop     ebp
0x7202EA: pop     ebx
0x7202EB: add     esp, 8
0x7202EE: retn    4
