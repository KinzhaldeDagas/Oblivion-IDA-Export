0x4D4790: push    0FFFFFFFFh
0x4D4792: push    offset SEH_4D4790
0x4D4797: mov     eax, large fs:0
0x4D479D: push    eax
0x4D479E: sub     esp, 44h
0x4D47A1: push    ebx
0x4D47A2: push    ebp
0x4D47A3: push    esi
0x4D47A4: push    edi
0x4D47A5: mov     eax, ds:0B30AACh
0x4D47AA: xor     eax, esp
0x4D47AC: push    eax
0x4D47AD: lea     eax, [esp+64h+var_C]
0x4D47B1: mov     large fs:0, eax
0x4D47B7: mov     edi, ecx
0x4D47B9: mov     [esp+64h+var_4C], edi
0x4D47BD: mov     esi, [esp+64h+arg_0]
0x4D47C1: test    esi, esi
0x4D47C3: mov     [esp+64h+var_4D], 0
0x4D47C8: jz      short loc_4D4815
0x4D47CA: mov     ecx, esi; this
0x4D47CC: call    TESObjectREFR_GetParentCell
0x4D47D1: cmp     eax, edi
0x4D47D3: jnz     short loc_4D4815
0x4D47D5: mov     eax, [esi]
0x4D47D7: mov     ecx, esi
0x4D47D9: mov     edx, [eax+174h]
0x4D47DF: call    edx
0x4D47E1: mov     ebx, [eax]
0x4D47E3: mov     ebp, [eax+4]
0x4D47E6: mov     edi, [eax+8]
0x4D47E9: push    58h ; 'X'; a4
0x4D47EB: call    FormHeapAlloc
0x4D47F0: add     esp, 4
0x4D47F3: mov     [esp+64h+var_48], eax
0x4D47F7: test    eax, eax
0x4D47F9: mov     [esp+64h+var_4], 1
0x4D4801: jz      loc_4D48E0
0x4D4807: mov     ecx, eax
0x4D4809: call    TESObjectREFR_constr
0x4D480E: mov     esi, eax
0x4D4810: jmp     loc_4D48E2
0x4D4815: mov     ecx, ds:0B333C4h; this
0x4D481B: call    TESObjectREFR_GetParentCell
0x4D4820: cmp     eax, edi
0x4D4822: jnz     short loc_4D482E
0x4D4824: mov     ecx, ds:0B333C4h
0x4D482A: mov     eax, [ecx]
0x4D482C: jmp     short loc_4D47D9
0x4D482E: cmp     byte ptr [edi+26h], 3
0x4D4832: jnz     loc_4D48DC
0x4D4838: mov     esi, [edi+44h]
0x4D483B: test    esi, esi
0x4D483D: jz      loc_4D48DC
0x4D4843: mov     ecx, esi
0x4D4845: call    sub_4E4970
0x4D484A: test    ax, ax
0x4D484D: jz      loc_4D48DC
0x4D4853: lea     ecx, [esp+64h+var_38]
0x4D4857: call    sub_4E7DF0
0x4D485C: mov     ecx, ds:0B333C4h
0x4D4862: mov     eax, [ecx]
0x4D4864: mov     edx, [eax+174h]
0x4D486A: mov     [esp+64h+var_4], 0
0x4D4872: call    edx
0x4D4874: push    eax
0x4D4875: lea     ecx, [esp+68h+var_38]
0x4D4879: call    sub_4BEF50
0x4D487E: mov     ecx, ds:0B333C4h
0x4D4884: lea     eax, [esp+64h+arg_0]
0x4D4888: push    eax
0x4D4889: push    0
0x4D488B: push    0
0x4D488D: push    ecx
0x4D488E: lea     edx, [esp+74h+var_38]
0x4D4892: push    edx
0x4D4893: mov     ecx, esi
0x4D4895: call    sub_4E5730
0x4D489A: test    eax, eax
0x4D489C: jz      short loc_4D48B4
0x4D489E: mov     ecx, eax
0x4D48A0: call    sub_4BEF40
0x4D48A5: mov     ebx, [eax]
0x4D48A7: mov     ebp, [eax+4]
0x4D48AA: mov     edi, [eax+8]
0x4D48AD: mov     [esp+64h+var_4D], 1
0x4D48B2: jmp     short loc_4D48C0
0x4D48B4: mov     edi, [esp+64h+var_3C]
0x4D48B8: mov     ebp, [esp+64h+var_40]
0x4D48BC: mov     ebx, [esp+64h+var_44]
0x4D48C0: lea     ecx, [esp+64h+var_38]
0x4D48C4: mov     [esp+64h+var_4], 0FFFFFFFFh
0x4D48CC: call    sub_4E8200
0x4D48D1: cmp     [esp+64h+var_4D], 0
0x4D48D6: jnz     loc_4D47E9
0x4D48DC: xor     eax, eax
0x4D48DE: jmp     short loc_4D4950
0x4D48E0: xor     esi, esi
0x4D48E2: sub     esp, 0Ch
0x4D48E5: mov     eax, esp
0x4D48E7: mov     [eax], ebx
0x4D48E9: mov     [eax+4], ebp
0x4D48EC: mov     ecx, esi; this
0x4D48EE: mov     [esp+70h+var_4], 0FFFFFFFFh
0x4D48F6: mov     [eax+8], edi
0x4D48F9: call    TESObjectREFR_SetPosition
0x4D48FE: mov     eax, ds:0B33AA8h
0x4D4903: push    eax; a2
0x4D4904: mov     ecx, esi; this
0x4D4906: call    TESObjectREFR_SetBaseForm
0x4D490B: mov     ecx, ds:0B333C4h
0x4D4911: mov     edx, [ecx]
0x4D4913: mov     eax, [edx+170h]
0x4D4919: call    eax
0x4D491B: push    eax
0x4D491C: mov     ecx, esi
0x4D491E: call    sub_4DB890
0x4D4923: mov     edi, [esp+64h+var_4C]
0x4D4927: push    esi
0x4D4928: mov     ecx, edi
0x4D492A: call    sub_4CC980
0x4D492F: test    al, al
0x4D4931: jz      short loc_4D493D
0x4D4933: push    esi; Concurrency::details::SchedulerBase *
0x4D4934: mov     ecx, edi
0x4D4936: call    sub_4D35D0
0x4D493B: jmp     short loc_4D494E
0x4D493D: test    esi, esi
0x4D493F: jz      short loc_4D494C
0x4D4941: mov     edx, [esi]
0x4D4943: mov     eax, [edx+10h]
0x4D4946: push    1
0x4D4948: mov     ecx, esi
0x4D494A: call    eax
0x4D494C: xor     esi, esi
0x4D494E: mov     eax, esi
0x4D4950: mov     ecx, dword ptr [esp+64h+var_C]
0x4D4954: mov     large fs:0, ecx
0x4D495B: pop     ecx
0x4D495C: pop     edi
0x4D495D: pop     esi
0x4D495E: pop     ebp
0x4D495F: pop     ebx
0x4D4960: add     esp, 50h
0x4D4963: retn    4
