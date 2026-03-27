0x73F950: sub     esp, 8
0x73F953: push    ebx
0x73F954: push    ebp
0x73F955: push    esi
0x73F956: push    edi
0x73F957: mov     edi, [esp+18h+arg_0]
0x73F95B: push    edi
0x73F95C: mov     esi, ecx
0x73F95E: call    sub_7299A0
0x73F963: cmp     dword ptr [esi+44h], 0
0x73F967: mov     ebp, 1
0x73F96C: push    ebp
0x73F96D: lea     ecx, [esp+1Ch+var_4]
0x73F971: push    ecx
0x73F972: setnz   al
0x73F975: mov     byte ptr [esp+20h+arg_0], al
0x73F979: mov     eax, [edi+220h]
0x73F97F: push    ebp
0x73F980: lea     edx, [esp+24h+arg_0]
0x73F984: push    edx
0x73F985: push    eax
0x73F986: mov     eax, [eax+8]
0x73F989: mov     [esp+2Ch+var_4], ebp
0x73F98D: call    eax
0x73F98F: add     esp, 14h
0x73F992: cmp     byte ptr [esp+18h+arg_0], 0
0x73F997: jz      short loc_73F9C3
0x73F999: movzx   edx, word ptr [esi+8]
0x73F99D: mov     eax, [edi+220h]
0x73F9A3: push    ebp
0x73F9A4: add     edx, edx
0x73F9A6: lea     ecx, [esp+1Ch+var_4]
0x73F9AA: push    ecx
0x73F9AB: mov     ecx, [esi+44h]
0x73F9AE: add     edx, edx
0x73F9B0: push    edx
0x73F9B1: mov     edx, [eax+8]
0x73F9B4: push    ecx
0x73F9B5: push    eax
0x73F9B6: mov     [esp+2Ch+var_4], 4
0x73F9BE: call    edx
0x73F9C0: add     esp, 14h
0x73F9C3: mov     eax, [edi+220h]
0x73F9C9: push    ebp
0x73F9CA: lea     ecx, [esp+1Ch+var_4]
0x73F9CE: push    ecx
0x73F9CF: push    2
0x73F9D1: lea     edx, [esi+48h]
0x73F9D4: push    edx
0x73F9D5: push    eax
0x73F9D6: mov     eax, [eax+8]
0x73F9D9: mov     [esp+2Ch+var_4], 2
0x73F9E1: call    eax
0x73F9E3: cmp     dword ptr [esi+4Ch], 0
0x73F9E7: mov     eax, [edi+220h]
0x73F9ED: push    ebp
0x73F9EE: setnz   cl
0x73F9F1: lea     edx, [esp+30h+var_4]
0x73F9F5: push    edx
0x73F9F6: mov     [esp+34h+var_8], cl
0x73F9FA: mov     edx, [eax+8]
0x73F9FD: push    ebp
0x73F9FE: lea     ecx, [esp+38h+var_8]
0x73FA02: push    ecx
0x73FA03: push    eax
0x73FA04: mov     [esp+40h+var_4], ebp
0x73FA08: call    edx
0x73FA0A: add     esp, 28h
0x73FA0D: cmp     [esp+18h+var_8], 0
0x73FA12: jz      short loc_73FA3E
0x73FA14: movzx   edx, word ptr [esi+8]
0x73FA18: mov     eax, [edi+220h]
0x73FA1E: push    ebp
0x73FA1F: add     edx, edx
0x73FA21: lea     ecx, [esp+1Ch+var_4]
0x73FA25: push    ecx
0x73FA26: mov     ecx, [esi+4Ch]
0x73FA29: add     edx, edx
0x73FA2B: push    edx
0x73FA2C: mov     edx, [eax+8]
0x73FA2F: push    ecx
0x73FA30: push    eax
0x73FA31: mov     [esp+2Ch+var_4], 4
0x73FA39: call    edx
0x73FA3B: add     esp, 14h
0x73FA3E: cmp     dword ptr [esi+50h], 0
0x73FA42: push    ebp
0x73FA43: lea     ecx, [esp+1Ch+var_4]
0x73FA47: push    ecx
0x73FA48: setnz   al
0x73FA4B: mov     [esp+20h+var_7], al
0x73FA4F: mov     eax, [edi+220h]
0x73FA55: push    ebp
0x73FA56: lea     edx, [esp+24h+var_7]
0x73FA5A: push    edx
0x73FA5B: push    eax
0x73FA5C: mov     eax, [eax+8]
0x73FA5F: mov     [esp+2Ch+var_4], ebp
0x73FA63: call    eax
0x73FA65: add     esp, 14h
0x73FA68: cmp     [esp+18h+var_7], 0
0x73FA6D: jz      short loc_73FA9E
0x73FA6F: xor     ebx, ebx
0x73FA71: cmp     [esi+8], bx
0x73FA75: jbe     short loc_73FA9E
0x73FA77: xor     ebp, ebp
0x73FA79: lea     esp, [esp+0]
0x73FA80: mov     ecx, [esi+50h]
0x73FA83: push    edi
0x73FA84: add     ecx, ebp
0x73FA86: call    sub_7154B0
0x73FA8B: movzx   ecx, word ptr [esi+8]
0x73FA8F: add     ebx, 1
0x73FA92: add     ebp, 10h
0x73FA95: cmp     ebx, ecx
0x73FA97: jb      short loc_73FA80
0x73FA99: mov     ebp, 1
0x73FA9E: cmp     dword ptr [esi+54h], 0
0x73FAA2: mov     eax, [edi+220h]
0x73FAA8: push    ebp
0x73FAA9: setnz   dl
0x73FAAC: lea     ecx, [esp+1Ch+var_4]
0x73FAB0: push    ecx
0x73FAB1: mov     [esp+20h+var_6], dl
0x73FAB5: push    ebp
0x73FAB6: lea     edx, [esp+24h+var_6]
0x73FABA: push    edx
0x73FABB: push    eax
0x73FABC: mov     eax, [eax+8]
0x73FABF: mov     [esp+2Ch+var_4], ebp
0x73FAC3: call    eax
0x73FAC5: add     esp, 14h
0x73FAC8: cmp     [esp+18h+var_6], 0
0x73FACD: jz      short loc_73FB10
0x73FACF: xor     ebx, ebx
0x73FAD1: cmp     [esi+8], bx
0x73FAD5: jbe     short loc_73FB10
0x73FAD7: jmp     short loc_73FAE0
0x73FAD9: align 10h
0x73FAE0: mov     edx, [esi+54h]
0x73FAE3: mov     eax, [edi+220h]
0x73FAE9: push    ebp
0x73FAEA: lea     ecx, [esp+1Ch+var_4]
0x73FAEE: push    ecx
0x73FAEF: lea     ecx, [edx+ebx*4]
0x73FAF2: mov     edx, [eax+8]
0x73FAF5: push    4
0x73FAF7: push    ecx
0x73FAF8: push    eax
0x73FAF9: mov     [esp+2Ch+var_4], 4
0x73FB01: call    edx
0x73FB03: movzx   eax, word ptr [esi+8]
0x73FB07: add     ebx, ebp
0x73FB09: add     esp, 14h
0x73FB0C: cmp     ebx, eax
0x73FB0E: jb      short loc_73FAE0
0x73FB10: cmp     dword ptr [esi+58h], 0
0x73FB14: mov     eax, [edi+220h]
0x73FB1A: push    ebp
0x73FB1B: setnz   cl
0x73FB1E: lea     edx, [esp+1Ch+var_4]
0x73FB22: push    edx
0x73FB23: mov     [esp+20h+var_5], cl
0x73FB27: mov     edx, [eax+8]
0x73FB2A: push    ebp
0x73FB2B: lea     ecx, [esp+24h+var_5]
0x73FB2F: push    ecx
0x73FB30: push    eax
0x73FB31: mov     [esp+2Ch+var_4], ebp
0x73FB35: call    edx
0x73FB37: add     esp, 14h
0x73FB3A: cmp     [esp+18h+var_5], 0
0x73FB3F: jz      short loc_73FB69
0x73FB41: xor     ebx, ebx
0x73FB43: cmp     [esi+8], bx
0x73FB47: jbe     short loc_73FB69
0x73FB49: xor     ebp, ebp
0x73FB4B: jmp     short loc_73FB50
0x73FB4D: align 10h
0x73FB50: mov     ecx, [esi+58h]
0x73FB53: push    edi
0x73FB54: add     ecx, ebp
0x73FB56: call    sub_7094A0
0x73FB5B: movzx   eax, word ptr [esi+8]
0x73FB5F: add     ebx, 1
0x73FB62: add     ebp, 0Ch
0x73FB65: cmp     ebx, eax
0x73FB67: jb      short loc_73FB50
0x73FB69: pop     edi
0x73FB6A: pop     esi
0x73FB6B: pop     ebp
0x73FB6C: pop     ebx
0x73FB6D: add     esp, 8
0x73FB70: retn    4
