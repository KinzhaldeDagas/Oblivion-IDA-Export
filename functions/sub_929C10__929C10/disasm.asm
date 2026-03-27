0x929C10: push    ebp
0x929C11: mov     ebp, esp
0x929C13: and     esp, 0FFFFFFF0h
0x929C16: sub     esp, 224h
0x929C1C: mov     eax, ds:0B30AACh
0x929C21: push    ebx
0x929C22: push    esi
0x929C23: mov     esi, [ebp+arg_0]
0x929C26: push    edi
0x929C27: mov     edi, ecx
0x929C29: mov     edx, [edi+20h]
0x929C2C: mov     ecx, 20h ; ' '
0x929C31: sub     ecx, edx
0x929C33: mov     [esp+230h+var_4], eax
0x929C3A: mov     ebx, esi
0x929C3C: shr     ebx, cl
0x929C3E: or      eax, 0FFFFFFFFh
0x929C41: mov     ecx, edx
0x929C43: shr     eax, cl
0x929C45: lea     ecx, [ebx+ebx*2]
0x929C48: and     eax, esi
0x929C4A: shl     ecx, 4
0x929C4D: mov     dword ptr [esp+230h+var_215+1], ecx
0x929C51: mov     edx, [edi+24h]
0x929C54: mov     esi, [edx+ecx+18h]
0x929C58: inc     eax
0x929C59: cmp     eax, esi
0x929C5B: mov     [esp+230h+var_21C], eax
0x929C5F: jl      short loc_929C7C
0x929C61: mov     eax, [edi+28h]
0x929C64: inc     ebx
0x929C65: add     ecx, 30h ; '0'
0x929C68: cmp     ebx, eax
0x929C6A: mov     dword ptr [esp+230h+var_215+1], ecx
0x929C6E: jnb     short loc_929CCA
0x929C70: mov     [esp+230h+var_21C], 0
0x929C78: mov     eax, [esp+230h+var_21C]
0x929C7C: mov     esi, [edi+20h]
0x929C7F: mov     ecx, 20h ; ' '
0x929C84: sub     ecx, esi
0x929C86: mov     esi, ebx
0x929C88: shl     esi, cl
0x929C8A: lea     ecx, [esp+230h+var_210]
0x929C8E: push    ecx
0x929C8F: mov     ecx, edi
0x929C91: or      esi, eax
0x929C93: mov     eax, [edi]
0x929C95: push    esi
0x929C96: call    dword ptr [eax+28h]
0x929C99: mov     edx, ds:0B3060Ch
0x929C9F: push    edx; float
0x929CA0: lea     ecx, [eax+30h]
0x929CA3: push    ecx; int
0x929CA4: lea     edx, [eax+20h]
0x929CA7: push    edx; int
0x929CA8: add     eax, 10h
0x929CAB: push    eax; int
0x929CAC: lea     eax, [esp+240h+var_215]
0x929CB0: push    eax; int
0x929CB1: call    sub_950B10
0x929CB6: mov     cl, [eax]
0x929CB8: add     esp, 14h
0x929CBB: cmp     cl, 1
0x929CBE: jz      short loc_929CE2
0x929CC0: mov     eax, [esp+230h+var_21C]
0x929CC4: mov     ecx, dword ptr [esp+230h+var_215+1]
0x929CC8: jmp     short loc_929C51
0x929CCA: or      eax, 0FFFFFFFFh
0x929CCD: mov     ecx, [esp+230h+var_4]
0x929CD4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x929CD9: pop     edi
0x929CDA: pop     esi
0x929CDB: pop     ebx
0x929CDC: mov     esp, ebp
0x929CDE: pop     ebp
0x929CDF: retn    4
0x929CE2: mov     ecx, [esp+230h+var_4]
0x929CE9: mov     eax, esi
0x929CEB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x929CF0: pop     edi
0x929CF1: pop     esi
0x929CF2: pop     ebx
0x929CF3: mov     esp, ebp
0x929CF5: pop     ebp
0x929CF6: retn    4
