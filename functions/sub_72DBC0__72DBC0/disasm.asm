0x72DBC0: sub     esp, 0Ch
0x72DBC3: push    ebx
0x72DBC4: push    ebp
0x72DBC5: push    esi
0x72DBC6: push    edi
0x72DBC7: mov     edi, [esp+1Ch+arg_0]
0x72DBCB: mov     eax, [edi+220h]
0x72DBD1: mov     edx, [eax+8]
0x72DBD4: mov     esi, ecx
0x72DBD6: push    1
0x72DBD8: lea     ecx, [esp+20h+var_8]
0x72DBDC: push    ecx
0x72DBDD: mov     ebx, 2
0x72DBE2: push    ebx
0x72DBE3: lea     ebp, [esi+1Ch]
0x72DBE6: push    ebp
0x72DBE7: push    eax
0x72DBE8: mov     [esp+30h+var_8], ebx
0x72DBEC: call    edx
0x72DBEE: mov     eax, [edi+220h]
0x72DBF4: push    1
0x72DBF6: lea     edx, [esp+34h+var_8]
0x72DBFA: push    edx
0x72DBFB: lea     ecx, [esi+1Eh]
0x72DBFE: push    ebx
0x72DBFF: push    ecx
0x72DC00: push    eax
0x72DC01: mov     eax, [eax+8]
0x72DC04: mov     [esp+44h+var_8], ebx
0x72DC08: call    eax
0x72DC0A: mov     eax, [edi+220h]
0x72DC10: mov     edx, [eax+8]
0x72DC13: push    1
0x72DC15: lea     ecx, [esp+48h+var_8]
0x72DC19: push    ecx
0x72DC1A: mov     [esp+4Ch+var_8], ebx
0x72DC1E: push    2
0x72DC20: lea     ebx, [esi+20h]
0x72DC23: push    ebx
0x72DC24: push    eax
0x72DC25: call    edx
0x72DC27: mov     eax, [edi+220h]
0x72DC2D: push    1
0x72DC2F: lea     edx, [esp+5Ch+var_8]
0x72DC33: push    edx
0x72DC34: lea     ecx, [esi+22h]
0x72DC37: push    2
0x72DC39: push    ecx
0x72DC3A: push    eax
0x72DC3B: mov     eax, [eax+8]
0x72DC3E: mov     [esp+6Ch+var_8], 2
0x72DC46: call    eax
0x72DC48: mov     eax, [edi+220h]
0x72DC4E: add     esp, 50h
0x72DC51: push    1
0x72DC53: lea     edx, [esp+20h+var_8]
0x72DC57: push    edx
0x72DC58: lea     ecx, [esi+24h]
0x72DC5B: push    2
0x72DC5D: push    ecx
0x72DC5E: push    eax
0x72DC5F: mov     eax, [eax+8]
0x72DC62: mov     [esp+30h+var_8], 2
0x72DC6A: call    eax
0x72DC6C: movzx   edx, word ptr [ebx]
0x72DC6F: mov     eax, [edi+220h]
0x72DC75: push    1
0x72DC77: lea     ecx, [esp+34h+var_8]
0x72DC7B: push    ecx
0x72DC7C: mov     ecx, [esi+4]
0x72DC7F: add     edx, edx
0x72DC81: push    edx
0x72DC82: mov     edx, [eax+8]
0x72DC85: push    ecx
0x72DC86: push    eax
0x72DC87: mov     [esp+44h+var_8], 2
0x72DC8F: call    edx
0x72DC91: cmp     dword ptr [esi+0Ch], 0
0x72DC95: mov     ebx, 1
0x72DC9A: setnz   al
0x72DC9D: mov     byte ptr [esp+44h+arg_0], al
0x72DCA1: mov     eax, [edi+220h]
0x72DCA7: push    ebx
0x72DCA8: lea     ecx, [esp+48h+var_8]
0x72DCAC: push    ecx
0x72DCAD: push    ebx
0x72DCAE: lea     edx, [esp+50h+arg_0]
0x72DCB2: push    edx
0x72DCB3: push    eax
0x72DCB4: mov     eax, [eax+8]
0x72DCB7: mov     [esp+58h+var_8], ebx
0x72DCBB: call    eax
0x72DCBD: add     esp, 3Ch
0x72DCC0: cmp     byte ptr [esp+1Ch+arg_0], 0
0x72DCC5: jz      short loc_72DCEF
0x72DCC7: movzx   edx, word ptr [ebp+0]
0x72DCCB: mov     eax, [edi+220h]
0x72DCD1: push    ebx
0x72DCD2: lea     ecx, [esp+20h+var_8]
0x72DCD6: push    ecx
0x72DCD7: mov     ecx, [esi+0Ch]
0x72DCDA: add     edx, edx
0x72DCDC: push    edx
0x72DCDD: mov     edx, [eax+8]
0x72DCE0: push    ecx
0x72DCE1: push    eax
0x72DCE2: mov     [esp+30h+var_8], 2
0x72DCEA: call    edx
0x72DCEC: add     esp, 14h
0x72DCEF: movzx   ecx, word ptr [ebp+0]
0x72DCF3: movzx   eax, word ptr [esi+24h]
0x72DCF7: imul    eax, ecx
0x72DCFA: cmp     dword ptr [esi+8], 0
0x72DCFE: push    ebx
0x72DCFF: setnz   dl
0x72DD02: lea     ecx, [esp+20h+var_4]
0x72DD06: push    ecx
0x72DD07: mov     [esp+24h+var_B], dl
0x72DD0B: mov     [esp+24h+var_8], eax
0x72DD0F: mov     eax, [edi+220h]
0x72DD15: push    ebx
0x72DD16: lea     edx, [esp+28h+var_B]
0x72DD1A: push    edx
0x72DD1B: push    eax
0x72DD1C: mov     eax, [eax+8]
0x72DD1F: mov     [esp+30h+var_4], ebx
0x72DD23: call    eax
0x72DD25: add     esp, 14h
0x72DD28: cmp     [esp+1Ch+var_B], 0
0x72DD2D: jz      short loc_72DD5C
0x72DD2F: mov     edx, [esp+1Ch+var_8]
0x72DD33: mov     eax, [edi+220h]
0x72DD39: push    ebx
0x72DD3A: lea     ecx, [esp+20h+var_4]
0x72DD3E: push    ecx
0x72DD3F: lea     ecx, ds:0[edx*4]
0x72DD46: mov     edx, [esi+8]
0x72DD49: push    ecx
0x72DD4A: push    edx
0x72DD4B: push    eax
0x72DD4C: mov     eax, [eax+8]
0x72DD4F: mov     [esp+30h+var_4], 4
0x72DD57: call    eax
0x72DD59: add     esp, 14h
0x72DD5C: movzx   ecx, word ptr [esi+22h]
0x72DD60: test    cx, cx
0x72DD63: jnz     short loc_72DD6E
0x72DD65: movzx   eax, word ptr [esi+1Eh]
0x72DD69: lea     ebp, [eax+eax*2]
0x72DD6C: jmp     short loc_72DDB0
0x72DD6E: mov     eax, [edi+220h]
0x72DD74: push    ebx
0x72DD75: movzx   ecx, cx
0x72DD78: lea     edx, [esp+20h+var_4]
0x72DD7C: push    edx
0x72DD7D: mov     edx, [esi+18h]
0x72DD80: add     ecx, ecx
0x72DD82: push    ecx
0x72DD83: push    edx
0x72DD84: push    eax
0x72DD85: mov     eax, [eax+8]
0x72DD88: mov     [esp+30h+var_4], 2
0x72DD90: call    eax
0x72DD92: movzx   ecx, word ptr [esi+22h]
0x72DD96: add     esp, 14h
0x72DD99: xor     edx, edx
0x72DD9B: test    ecx, ecx
0x72DD9D: jbe     short loc_72DDAE
0x72DD9F: mov     eax, [esi+18h]
0x72DDA2: movzx   ebp, word ptr [eax]
0x72DDA5: add     edx, ebp
0x72DDA7: add     eax, 2
0x72DDAA: sub     ecx, ebx
0x72DDAC: jnz     short loc_72DDA2
0x72DDAE: mov     ebp, edx
0x72DDB0: cmp     dword ptr [esi+14h], 0
0x72DDB4: mov     eax, [edi+220h]
0x72DDBA: push    ebx
0x72DDBB: setnz   cl
0x72DDBE: lea     edx, [esp+20h+var_4]
0x72DDC2: push    edx
0x72DDC3: mov     [esp+24h+var_A], cl
0x72DDC7: mov     edx, [eax+8]
0x72DDCA: push    ebx
0x72DDCB: lea     ecx, [esp+28h+var_A]
0x72DDCF: push    ecx
0x72DDD0: push    eax
0x72DDD1: mov     [esp+30h+var_4], ebx
0x72DDD5: call    edx
0x72DDD7: add     esp, 14h
0x72DDDA: cmp     [esp+1Ch+var_A], 0
0x72DDDF: jz      short loc_72DE07
0x72DDE1: mov     eax, [edi+220h]
0x72DDE7: push    ebx
0x72DDE8: lea     ecx, [esp+20h+var_4]
0x72DDEC: push    ecx
0x72DDED: mov     ecx, [esi+14h]
0x72DDF0: lea     edx, [ebp+ebp+0]
0x72DDF4: push    edx
0x72DDF5: mov     edx, [eax+8]
0x72DDF8: push    ecx
0x72DDF9: push    eax
0x72DDFA: mov     [esp+30h+var_4], 2
0x72DE02: call    edx
0x72DE04: add     esp, 14h
0x72DE07: cmp     dword ptr [esi+10h], 0
0x72DE0B: push    ebx
0x72DE0C: lea     ecx, [esp+20h+var_4]
0x72DE10: push    ecx
0x72DE11: setnz   al
0x72DE14: mov     [esp+24h+var_9], al
0x72DE18: mov     eax, [edi+220h]
0x72DE1E: push    ebx
0x72DE1F: lea     edx, [esp+28h+var_9]
0x72DE23: push    edx
0x72DE24: push    eax
0x72DE25: mov     eax, [eax+8]
0x72DE28: mov     [esp+30h+var_4], ebx
0x72DE2C: call    eax
0x72DE2E: add     esp, 14h
0x72DE31: cmp     [esp+1Ch+var_9], 0
0x72DE36: jz      short loc_72DE5A
0x72DE38: mov     edx, [esp+1Ch+var_8]
0x72DE3C: mov     eax, [esi+10h]
0x72DE3F: mov     edi, [edi+220h]
0x72DE45: push    ebx
0x72DE46: lea     ecx, [esp+20h+var_4]
0x72DE4A: push    ecx
0x72DE4B: mov     ecx, [edi+8]
0x72DE4E: push    edx
0x72DE4F: push    eax
0x72DE50: push    edi
0x72DE51: mov     [esp+30h+var_4], ebx
0x72DE55: call    ecx
0x72DE57: add     esp, 14h
0x72DE5A: pop     edi
0x72DE5B: pop     esi
0x72DE5C: pop     ebp
0x72DE5D: pop     ebx
0x72DE5E: add     esp, 0Ch
0x72DE61: retn    4
