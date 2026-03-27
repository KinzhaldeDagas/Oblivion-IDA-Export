0x71DBD0: mov     eax, [esp+arg_4]
0x71DBD4: sub     esp, 8
0x71DBD7: test    eax, eax
0x71DBD9: push    esi
0x71DBDA: mov     esi, [esp+0Ch+arg_C]
0x71DBDE: jbe     loc_71DC9E
0x71DBE4: mov     ecx, [esp+0Ch+arg_0]
0x71DBE8: mov     edx, [esp+0Ch+arg_18]
0x71DBEC: push    ebx
0x71DBED: push    ebp
0x71DBEE: push    edi
0x71DBEF: mov     [esp+18h+var_4], eax
0x71DBF3: mov     eax, [esp+18h+arg_14]
0x71DBF7: mov     edi, 1
0x71DBFC: lea     esp, [esp+0]
0x71DC00: test    ecx, ecx
0x71DC02: jbe     loc_71DC91
0x71DC08: mov     [esp+18h+var_8], ecx
0x71DC0C: lea     esp, [esp+0]
0x71DC10: mov     cl, [edx]
0x71DC12: movzx   ebx, byte ptr [edx+edi]
0x71DC16: add     edx, edi
0x71DC18: add     edx, edi
0x71DC1A: mov     byte ptr [esp+18h+arg_4], bl
0x71DC1E: movzx   ebx, byte ptr [edx]
0x71DC21: add     edx, edi
0x71DC23: mov     byte ptr [esp+18h+arg_C], bl
0x71DC27: mov     bl, [edx]
0x71DC29: movzx   ebp, byte ptr [esp+18h+arg_C]
0x71DC2E: add     edx, edi
0x71DC30: movzx   edi, cl
0x71DC33: movzx   ecx, byte ptr [eax+14h]
0x71DC37: shr     edi, cl
0x71DC39: movzx   ecx, byte ptr [eax+10h]
0x71DC3D: shl     edi, cl
0x71DC3F: movzx   ecx, byte ptr [eax+16h]
0x71DC43: and     edi, [eax]
0x71DC45: shr     ebp, cl
0x71DC47: movzx   ecx, byte ptr [eax+12h]
0x71DC4B: shl     ebp, cl
0x71DC4D: movzx   ecx, byte ptr [eax+15h]
0x71DC51: and     ebp, [eax+8]
0x71DC54: movzx   ebx, bl
0x71DC57: or      edi, ebp
0x71DC59: movzx   ebp, byte ptr [esp+18h+arg_4]
0x71DC5E: shr     ebp, cl
0x71DC60: movzx   ecx, byte ptr [eax+11h]
0x71DC64: shl     ebp, cl
0x71DC66: movzx   ecx, byte ptr [eax+17h]
0x71DC6A: and     ebp, [eax+4]
0x71DC6D: shr     ebx, cl
0x71DC6F: movzx   ecx, byte ptr [eax+13h]
0x71DC73: shl     ebx, cl
0x71DC75: or      edi, ebp
0x71DC77: add     esi, 4
0x71DC7A: and     ebx, [eax+0Ch]
0x71DC7D: or      edi, ebx
0x71DC7F: mov     [esi-4], edi
0x71DC82: mov     edi, 1
0x71DC87: sub     [esp+18h+var_8], edi
0x71DC8B: jnz     short loc_71DC10
0x71DC8D: mov     ecx, [esp+18h+arg_0]
0x71DC91: sub     [esp+18h+var_4], edi
0x71DC95: jnz     loc_71DC00
0x71DC9B: pop     edi
0x71DC9C: pop     ebp
0x71DC9D: pop     ebx
0x71DC9E: pop     esi
0x71DC9F: add     esp, 8
0x71DCA2: retn
