0x8996C0: sub     esp, 8
0x8996C3: push    esi
0x8996C4: mov     esi, ecx
0x8996C6: mov     eax, [esi+88h]
0x8996CC: test    eax, eax
0x8996CE: jz      short loc_8996FB
0x8996D0: mov     eax, [esp+0Ch+arg_4]
0x8996D4: lea     ecx, [esp+0Ch+var_8]
0x8996D8: push    ecx
0x8996D9: mov     ecx, [esi+80h]
0x8996DF: mov     byte ptr [esp+10h+var_8], 2
0x8996E4: mov     [esp+10h+var_4], eax
0x8996E8: call    sub_8D8830
0x8996ED: mov     eax, [esp+0Ch+arg_0]
0x8996F1: mov     byte ptr [eax], 0
0x8996F4: pop     esi
0x8996F5: add     esp, 8
0x8996F8: retn    8
0x8996FB: push    ebx
0x8996FC: push    ebp
0x8996FD: mov     ebp, ds:0BA9DE4h
0x899703: push    edi
0x899704: mov     edi, large fs:2Ch
0x89970B: mov     eax, [edi+ebp*4]
0x89970E: mov     dword ptr [esi+88h], 1
0x899718: mov     edx, [eax+1A4h]
0x89971E: cmp     edx, [eax+1A8h]
0x899724: jnb     short loc_899751
0x899726: mov     ebx, eax
0x899728: mov     ecx, [ebx+1A4h]
0x89972E: mov     dword ptr [ecx], offset aLtrementity; "LtRemEntity"
0x899734: mov     dword ptr [ecx+0Ch], offset aBroadphase; "Broadphase"
0x89973B: rdtsc
0x89973D: mov     [esp+18h+var_8], eax
0x899741: mov     eax, [esp+18h+var_8]
0x899745: mov     [ecx+4], eax
0x899748: add     ecx, 10h
0x89974B: mov     [ebx+1A4h], ecx
0x899751: mov     ebx, [esp+18h+arg_4]
0x899755: push    ebx
0x899756: push    esi
0x899757: call    sub_8CCA80
0x89975C: mov     eax, [esi+0B4h]
0x899762: add     esp, 8
0x899765: cmp     eax, 4
0x899768: jl      short loc_899777
0x89976A: mov     ecx, [esi+8]
0x89976D: push    ebx
0x89976E: push    ecx
0x89976F: call    sub_8CC4E0
0x899774: add     esp, 8
0x899777: mov     eax, [edi+ebp*4]
0x89977A: mov     edx, [eax+1A4h]
0x899780: cmp     edx, [eax+1A8h]
0x899786: jnb     short loc_8997AD
0x899788: mov     ecx, [eax+1A4h]
0x89978E: mov     dword ptr [ecx], offset aStcallbacks; "StCallbacks"
0x899794: rdtsc
0x899796: mov     [esp+18h+arg_4], eax
0x89979A: mov     eax, [esp+18h+arg_4]
0x89979E: mov     [ecx+4], eax
0x8997A1: mov     eax, [edi+ebp*4]
0x8997A4: add     ecx, 0Ch
0x8997A7: mov     [eax+1A4h], ecx
0x8997AD: push    ebx
0x8997AE: push    esi
0x8997AF: call    sub_8DC410
0x8997B4: push    ebx
0x8997B5: call    sub_8DC1C0
0x8997BA: mov     eax, [edi+ebp*4]
0x8997BD: mov     byte ptr [esi+91h], 0
0x8997C4: mov     ecx, [eax+1A4h]
0x8997CA: mov     edx, [eax+1A8h]
0x8997D0: add     esp, 0Ch
0x8997D3: cmp     ecx, edx
0x8997D5: jnb     short loc_8997FC
0x8997D7: mov     ecx, [eax+1A4h]
0x8997DD: mov     dword ptr [ecx], offset aStisland; "StIsland"
0x8997E3: rdtsc
0x8997E5: mov     [esp+18h+arg_4], eax
0x8997E9: mov     edx, [esp+18h+arg_4]
0x8997ED: mov     eax, [edi+ebp*4]
0x8997F0: mov     [ecx+4], edx
0x8997F3: add     ecx, 0Ch
0x8997F6: mov     [eax+1A4h], ecx
0x8997FC: push    ebx
0x8997FD: push    esi
0x8997FE: call    sub_8CBE90
0x899803: add     esp, 8
0x899806: cmp     word ptr [ebx+4], 0
0x89980B: jnz     short loc_899814
0x89980D: mov     eax, [ebx]
0x89980F: mov     ecx, ebx
0x899811: call    dword ptr [eax+10h]
0x899814: mov     ecx, ebx
0x899816: call    sub_8BC730
0x89981B: mov     eax, [esi+88h]
0x899821: dec     eax
0x899822: mov     byte ptr [esi+91h], 1
0x899829: mov     [esi+88h], eax
0x89982F: jnz     short loc_89984C
0x899831: mov     eax, [esi+84h]
0x899837: test    eax, eax
0x899839: jz      short loc_89984C
0x89983B: mov     al, [esi+90h]
0x899841: test    al, al
0x899843: jnz     short loc_89984C
0x899845: mov     ecx, esi
0x899847: call    sub_899210
0x89984C: mov     eax, [edi+ebp*4]
0x89984F: mov     ecx, [eax+1A4h]
0x899855: cmp     ecx, [eax+1A8h]
0x89985B: jnb     short loc_899881
0x89985D: mov     edi, eax
0x89985F: mov     ecx, [edi+1A4h]
0x899865: mov     dword ptr [ecx], offset aLt_0; "lt"
0x89986B: rdtsc
0x89986D: mov     [esp+18h+arg_4], eax
0x899871: mov     edx, [esp+18h+arg_4]
0x899875: mov     [ecx+4], edx
0x899878: add     ecx, 0Ch
0x89987B: mov     [edi+1A4h], ecx
0x899881: mov     eax, [esp+18h+arg_0]
0x899885: pop     edi
0x899886: pop     ebp
0x899887: pop     ebx
0x899888: mov     byte ptr [eax], 1
0x89988B: pop     esi
0x89988C: add     esp, 8
0x89988F: retn    8
