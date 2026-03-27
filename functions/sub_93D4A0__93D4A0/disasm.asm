0x93D4A0: push    ebp
0x93D4A1: mov     ebp, esp
0x93D4A3: and     esp, 0FFFFFFF0h
0x93D4A6: sub     esp, 194h
0x93D4AC: push    ebx
0x93D4AD: push    esi
0x93D4AE: mov     esi, [ebp+arg_0]
0x93D4B1: mov     ecx, [esi+8]
0x93D4B4: mov     ebx, [esi+0Ch]
0x93D4B7: push    edi
0x93D4B8: mov     edi, [ebp+arg_4]
0x93D4BB: movsx   edx, byte ptr [edi+9]
0x93D4BF: movsx   eax, byte ptr [edi+8]
0x93D4C3: mov     [esp+1A0h+var_17C], edx
0x93D4C7: movsx   edx, byte ptr [edi+0Bh]
0x93D4CB: mov     dword ptr [esp+1A0h+var_178+4], edx
0x93D4CF: mov     [esp+1A0h+var_180], eax
0x93D4D3: movsx   eax, byte ptr [edi+0Ah]
0x93D4D7: lea     edx, [esp+1A0h+var_160]
0x93D4DB: push    edx
0x93D4DC: mov     edx, [esp+1A4h+var_180]
0x93D4E0: push    edx
0x93D4E1: mov     byte ptr [esp+1A8h+var_178+8], 0
0x93D4E6: mov     dword ptr [esp+1A8h+var_178], eax
0x93D4EA: mov     dword ptr [esp+1A8h+var_178+0Ch], 0
0x93D4F2: mov     eax, [ecx]
0x93D4F4: push    edi
0x93D4F5: call    dword ptr [eax+28h]
0x93D4F8: mov     edx, [esp+1A0h+var_17C]
0x93D4FC: mov     eax, [ebx]
0x93D4FE: lea     ecx, [esp+1A0h+var_A0]
0x93D505: push    ecx
0x93D506: mov     ecx, [esp+1A4h+var_180]
0x93D50A: push    edx
0x93D50B: lea     edx, [edi+ecx*2]
0x93D50E: push    edx
0x93D50F: mov     ecx, ebx
0x93D511: call    dword ptr [eax+28h]
0x93D514: mov     ecx, [esi]
0x93D516: mov     edx, [esi+0Ch]
0x93D519: lea     eax, [esp+1A0h+var_190]
0x93D51D: push    eax
0x93D51E: mov     eax, [esi+8]
0x93D521: push    ecx
0x93D522: push    edx
0x93D523: push    eax
0x93D524: lea     ecx, [esp+1B0h+var_180]
0x93D528: call    sub_93C690
0x93D52D: mov     eax, dword ptr [esp+1A0h+var_178+0Ch]
0x93D531: test    eax, eax
0x93D533: jz      short loc_93D53F
0x93D535: push    edi
0x93D536: lea     ecx, [esp+1A4h+var_180]
0x93D53A: call    sub_93B660
0x93D53F: mov     eax, [esi+4]
0x93D542: fld     dword ptr [esp+1A0h+var_190+0Ch]
0x93D546: movaps  xmm0, [esp+1A0h+var_190]
0x93D54B: movaps  xmm2, xmmword ptr [eax+20h]
0x93D54F: movaps  xmm3, xmmword ptr [eax+10h]
0x93D553: mov     ecx, [esi+8]
0x93D556: fsub    dword ptr [ecx+0Ch]
0x93D559: movaps  xmm4, xmmword ptr [eax]
0x93D55C: mov     edx, [esi+0Ch]
0x93D55F: mov     eax, [ebp+arg_8]
0x93D562: fsub    dword ptr [edx+0Ch]
0x93D565: movaps  xmm1, xmm0
0x93D568: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x93D56C: mulps   xmm2, xmm1
0x93D56F: movaps  xmm1, xmm0
0x93D572: shufps  xmm1, xmm0, 55h ; 'U'
0x93D576: mulps   xmm3, xmm1
0x93D579: movaps  xmm1, xmm0
0x93D57C: shufps  xmm1, xmm0, 0
0x93D580: mulps   xmm4, xmm1
0x93D583: addps   xmm4, xmm3
0x93D586: addps   xmm4, xmm2
0x93D589: movaps  xmmword ptr [eax], xmm4
0x93D58C: fst     dword ptr [eax+0Ch]
0x93D58F: fcomp   dword ptr [esi+10h]
0x93D592: fnstsw  ax
0x93D594: test    ah, 5
0x93D597: mov     eax, 1
0x93D59C: jp      loc_93D661
0x93D5A2: cmp     [esp+1A0h+var_180], eax
0x93D5A6: jnz     short loc_93D5CD
0x93D5A8: mov     eax, [esi+0Ch]
0x93D5AB: fld     dword ptr [eax+0Ch]
0x93D5AE: fsub    dword ptr [esp+1A0h+var_190+0Ch]
0x93D5B2: fstp    [esp+1A0h+var_194]
0x93D5B6: movss   xmm1, [esp+1A0h+var_194]
0x93D5BC: movaps  xmm2, xmm1
0x93D5BF: shufps  xmm2, xmm1, 0
0x93D5C3: mulps   xmm2, xmm0
0x93D5C6: movaps  xmm0, [esp+1A0h+var_160]
0x93D5CB: jmp     short loc_93D61D
0x93D5CD: cmp     [esp+1A0h+var_17C], eax
0x93D5D1: jnz     short loc_93D5F7
0x93D5D3: mov     ecx, [esi+0Ch]
0x93D5D6: mov     edx, [ecx+0Ch]
0x93D5D9: mov     [esp+1A0h+var_194], edx
0x93D5DD: movss   xmm1, [esp+1A0h+var_194]
0x93D5E3: movaps  xmm2, xmm1
0x93D5E6: shufps  xmm2, xmm1, 0
0x93D5EA: mulps   xmm2, xmm0
0x93D5ED: movaps  xmm0, [esp+1A0h+var_E0]
0x93D5F5: jmp     short loc_93D61D
0x93D5F7: mov     eax, [esi+0Ch]
0x93D5FA: fld     dword ptr [eax+0Ch]
0x93D5FD: fsub    dword ptr [esp+1A0h+var_190+0Ch]
0x93D601: fstp    [esp+1A0h+var_194]
0x93D605: movss   xmm1, [esp+1A0h+var_194]
0x93D60B: movaps  xmm2, xmm1
0x93D60E: shufps  xmm2, xmm1, 0
0x93D612: mulps   xmm2, xmm0
0x93D615: movaps  xmm0, [esp+1A0h+var_50]
0x93D61D: mov     esi, [esi+4]
0x93D620: movaps  xmm1, xmmword ptr [esi+30h]
0x93D624: movaps  xmm3, xmmword ptr [esi+20h]
0x93D628: mov     ecx, [ebp+arg_C]
0x93D62B: addps   xmm0, xmm2
0x93D62E: movaps  xmm2, xmm0
0x93D631: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93D635: mulps   xmm3, xmm2
0x93D638: movaps  xmm2, xmmword ptr [esi+10h]
0x93D63C: addps   xmm3, xmm1
0x93D63F: movaps  xmm1, xmm0
0x93D642: shufps  xmm1, xmm0, 55h ; 'U'
0x93D646: mulps   xmm2, xmm1
0x93D649: movaps  xmm1, xmm0
0x93D64C: shufps  xmm1, xmm0, 0
0x93D650: movaps  xmm0, xmmword ptr [esi]
0x93D653: mulps   xmm0, xmm1
0x93D656: addps   xmm0, xmm2
0x93D659: addps   xmm0, xmm3
0x93D65C: movaps  xmmword ptr [ecx], xmm0
0x93D65F: xor     eax, eax
0x93D661: pop     edi
0x93D662: pop     esi
0x93D663: pop     ebx
0x93D664: mov     esp, ebp
0x93D666: pop     ebp
0x93D667: retn
