0x79E2E0: mov     ecx, [esp+arg_4]
0x79E2E4: push    ebx
0x79E2E5: push    ebp
0x79E2E6: push    esi
0x79E2E7: mov     esi, [esp+0Ch+arg_0]
0x79E2EB: sub     ecx, esi
0x79E2ED: mov     eax, 2AAAAAABh
0x79E2F2: imul    ecx
0x79E2F4: sar     edx, 3
0x79E2F7: mov     ebp, edx
0x79E2F9: shr     ebp, 1Fh
0x79E2FC: add     ebp, edx
0x79E2FE: mov     eax, ebp
0x79E300: cdq
0x79E301: sub     eax, edx
0x79E303: mov     ebx, eax
0x79E305: sar     ebx, 1
0x79E307: test    ebx, ebx
0x79E309: push    edi
0x79E30A: jle     short loc_79E377
0x79E30C: lea     eax, [ebx+ebx*2]
0x79E30F: shl     eax, 4
0x79E312: lea     esi, [eax+esi+14h]
0x79E316: mov     ecx, [esp+10h+arg_8]
0x79E31A: push    ecx; int
0x79E31B: sub     esp, 30h
0x79E31E: sub     esi, 30h ; '0'
0x79E321: mov     edi, esp
0x79E323: lea     edx, [esi-14h]
0x79E326: mov     [esp+44h+arg_4], esp
0x79E32A: push    edx
0x79E32B: mov     ecx, edi
0x79E32D: sub     ebx, 1
0x79E330: call    sub_79AD70
0x79E335: fld     dword ptr [esi-4]
0x79E338: fstp    dword ptr [edi+10h]
0x79E33B: push    ebp; int
0x79E33C: fld     dword ptr [esi]
0x79E33E: push    ebx; int
0x79E33F: fstp    dword ptr [edi+14h]
0x79E342: mov     al, [esi+4]
0x79E345: mov     [edi+18h], al
0x79E348: fld     dword ptr [esi+8]
0x79E34B: mov     eax, [esp+4Ch+arg_0]
0x79E34F: fstp    dword ptr [edi+1Ch]
0x79E352: fld     dword ptr [esi+0Ch]
0x79E355: push    eax; int
0x79E356: fstp    dword ptr [edi+20h]
0x79E359: fld     dword ptr [esi+10h]
0x79E35C: fstp    dword ptr [edi+24h]
0x79E35F: mov     ecx, [esi+14h]
0x79E362: mov     [edi+28h], ecx
0x79E365: mov     edx, [esi+18h]
0x79E368: mov     [edi+2Ch], edx
0x79E36B: call    sub_79C130
0x79E370: add     esp, 40h
0x79E373: test    ebx, ebx
0x79E375: jg      short loc_79E316
0x79E377: pop     edi
0x79E378: pop     esi
0x79E379: pop     ebp
0x79E37A: pop     ebx
0x79E37B: retn
