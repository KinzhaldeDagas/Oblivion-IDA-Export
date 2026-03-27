0x8A47C0: push    0FFFFFFFFh
0x8A47C2: push    offset SEH_8A47C0
0x8A47C7: mov     eax, large fs:0
0x8A47CD: push    eax
0x8A47CE: sub     esp, 0Ch
0x8A47D1: push    ebx
0x8A47D2: push    esi
0x8A47D3: push    edi
0x8A47D4: mov     eax, ds:0B30AACh
0x8A47D9: xor     eax, esp
0x8A47DB: push    eax
0x8A47DC: lea     eax, [esp+28h+var_C]
0x8A47E0: mov     large fs:0, eax
0x8A47E6: mov     [esp+28h+var_18], 0
0x8A47EE: lea     edi, [ecx+10h]
0x8A47F1: test    edi, edi
0x8A47F3: jz      short loc_8A480F
0x8A47F5: lea     eax, [esp+28h+var_14]
0x8A47F9: push    eax
0x8A47FA: mov     ecx, edi
0x8A47FC: call    sub_677C70
0x8A4801: or      [esp+28h+var_18], 1
0x8A4806: cmp     dword ptr [eax], 0
0x8A4809: jz      short loc_8A480F
0x8A480B: mov     bl, 1
0x8A480D: jmp     short loc_8A4811
0x8A480F: xor     bl, bl
0x8A4811: test    byte ptr [esp+28h+var_18], 1
0x8A4816: jz      short loc_8A4841
0x8A4818: mov     esi, [esp+28h+var_14]
0x8A481C: and     [esp+28h+var_18], 0FFFFFFFEh
0x8A4821: test    esi, esi
0x8A4823: jz      short loc_8A4841
0x8A4825: lea     ecx, [esi+4]
0x8A4828: push    ecx; lpAddend
0x8A4829: call    dword ptr ds:0A2807Ch
0x8A482F: test    eax, eax
0x8A4831: jnz     short loc_8A4841
0x8A4833: test    esi, esi
0x8A4835: jz      short loc_8A4841
0x8A4837: mov     edx, [esi]
0x8A4839: mov     eax, [edx]
0x8A483B: push    1
0x8A483D: mov     ecx, esi
0x8A483F: call    eax
0x8A4841: test    bl, bl
0x8A4843: jz      short loc_8A489D
0x8A4845: lea     ecx, [esp+28h+var_10]
0x8A4849: push    ecx
0x8A484A: mov     ecx, edi
0x8A484C: call    sub_677C70
0x8A4851: mov     ecx, [eax]
0x8A4853: mov     edx, [ecx]
0x8A4855: mov     eax, [esp+28h+arg_0]
0x8A4859: mov     edx, [edx+5Ch]
0x8A485C: push    eax
0x8A485D: mov     [esp+2Ch+var_4], 0
0x8A4865: call    edx
0x8A4867: mov     eax, [esp+28h+var_10]
0x8A486B: test    eax, eax
0x8A486D: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8A4875: jz      short loc_8A4895
0x8A4877: mov     esi, eax
0x8A4879: add     eax, 4
0x8A487C: push    eax; lpAddend
0x8A487D: call    dword ptr ds:0A2807Ch
0x8A4883: test    eax, eax
0x8A4885: jnz     short loc_8A4895
0x8A4887: test    esi, esi
0x8A4889: jz      short loc_8A4895
0x8A488B: mov     eax, [esi]
0x8A488D: mov     edx, [eax]
0x8A488F: push    1
0x8A4891: mov     ecx, esi
0x8A4893: call    edx
0x8A4895: mov     edi, [edi+4]
0x8A4898: jmp     loc_8A47F1
0x8A489D: mov     ecx, [esp+28h+var_C]
0x8A48A1: mov     large fs:0, ecx
0x8A48A8: pop     ecx
0x8A48A9: pop     edi
0x8A48AA: pop     esi
0x8A48AB: pop     ebx
0x8A48AC: add     esp, 18h
0x8A48AF: retn    4
