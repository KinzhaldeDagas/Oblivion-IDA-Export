0x9144C0: push    ebp
0x9144C1: mov     ebp, esp
0x9144C3: and     esp, 0FFFFFFF0h
0x9144C6: sub     esp, 84h
0x9144CC: push    ebx
0x9144CD: push    esi
0x9144CE: mov     esi, large fs:2Ch
0x9144D5: push    edi
0x9144D6: mov     edi, ds:0BA9DE4h
0x9144DC: mov     eax, [esi+edi*4]
0x9144DF: mov     edx, [eax+1A4h]
0x9144E5: cmp     edx, [eax+1A8h]
0x9144EB: mov     [esp+90h+var_74], ecx
0x9144EF: jnb     short loc_914519
0x9144F1: mov     ecx, eax
0x9144F3: mov     ebx, [ecx+1A4h]
0x9144F9: mov     dword ptr [ebx], offset aTtrcmopp; "TtrcMopp"
0x9144FF: rdtsc
0x914501: mov     [esp+90h+var_78], eax
0x914505: mov     eax, [esp+90h+var_78]
0x914509: mov     [ebx+4], eax
0x91450C: add     ebx, 0Ch
0x91450F: mov     [ecx+1A4h], ebx
0x914515: mov     ecx, [esp+90h+var_74]
0x914519: mov     edx, [ebp+arg_8]
0x91451C: xor     eax, eax
0x91451E: push    edx
0x91451F: mov     edx, [ecx+10h]
0x914522: mov     [esp+94h+var_30], eax
0x914526: mov     [esp+94h+var_2C], eax
0x91452A: mov     eax, [ebp+arg_4]
0x91452D: push    eax
0x91452E: mov     eax, [ecx+0Ch]
0x914531: push    edx
0x914532: push    eax
0x914533: lea     ecx, [esp+0A0h+var_79]
0x914537: push    ecx
0x914538: lea     ecx, [esp+0A4h+var_70]
0x91453C: call    sub_945880
0x914541: mov     eax, [esi+edi*4]
0x914544: mov     edx, [eax+1A4h]
0x91454A: cmp     edx, [eax+1A8h]
0x914550: jnb     short loc_914588
0x914552: mov     esi, eax
0x914554: mov     ecx, [esi+1A4h]
0x91455A: mov     dword ptr [ecx], offset aEt; "Et"
0x914560: rdtsc
0x914562: mov     [esp+90h+var_74], eax
0x914566: mov     eax, [esp+90h+var_74]
0x91456A: mov     [ecx+4], eax
0x91456D: mov     eax, [ebp+arg_0]
0x914570: add     ecx, 0Ch
0x914573: mov     [esi+1A4h], ecx
0x914579: mov     cl, [esp+90h+var_79]
0x91457D: mov     [eax], cl
0x91457F: pop     edi
0x914580: pop     esi
0x914581: pop     ebx
0x914582: mov     esp, ebp
0x914584: pop     ebp
0x914585: retn    0Ch
0x914588: mov     eax, [ebp+arg_0]
0x91458B: mov     dl, [esp+90h+var_79]
0x91458F: pop     edi
0x914590: pop     esi
0x914591: mov     [eax], dl
0x914593: pop     ebx
0x914594: mov     esp, ebp
0x914596: pop     ebp
0x914597: retn    0Ch
