0x51C580: push    0FFFFFFFFh
0x51C582: push    offset ??0TESClass@@QAE@XZ_SEH
0x51C587: mov     eax, large fs:0
0x51C58D: push    eax
0x51C58E: push    ecx
0x51C58F: push    ebx
0x51C590: push    esi
0x51C591: push    edi
0x51C592: mov     eax, ds:0B30AACh
0x51C597: xor     eax, esp
0x51C599: push    eax
0x51C59A: lea     eax, [esp+20h+var_C]
0x51C59E: mov     large fs:0, eax
0x51C5A4: mov     esi, ecx
0x51C5A6: mov     [esp+20h+var_10], esi
0x51C5AA: call    TESForm_constr
0x51C5AF: xor     eax, eax
0x51C5B1: mov     dword ptr [esi+18h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x51C5B8: mov     [esp+20h+var_4], eax
0x51C5BC: mov     [esi+1Ch], eax
0x51C5BF: mov     [esi+20h], ax
0x51C5C3: mov     [esi+22h], ax
0x51C5C7: lea     edi, [esi+24h]
0x51C5CA: mov     ecx, edi
0x51C5CC: mov     byte ptr [esp+20h+var_4], 1
0x51C5D1: call    TESDescription_constr
0x51C5D6: lea     ebx, [esi+2Ch]
0x51C5D9: mov     ecx, ebx
0x51C5DB: call    TESTexture_constr
0x51C5E0: mov     ecx, esi
0x51C5E2: mov     byte ptr [esp+20h+var_4], 2
0x51C5E7: mov     dword ptr [esi], offset ??_7TESClass@@6BTESClass@@@; const TESClass::`vftable'{for `TESClass'}
0x51C5ED: mov     dword ptr [esi+18h], offset ??_7TESClass@@6BTESFullName@@@; const TESClass::`vftable'{for `TESFullName'}
0x51C5F4: mov     dword ptr [edi], offset ??_7TESClass@@6BTESDescription@@@; const TESClass::`vftable'{for `TESDescription'}
0x51C5FA: mov     dword ptr [ebx], offset ??_7TESClass@@6BTESTexture@@@; const TESClass::`vftable'{for `TESTexture'}
0x51C600: mov     byte ptr [esi+4], 5
0x51C604: call    sub_51C1B0
0x51C609: mov     eax, esi
0x51C60B: mov     ecx, [esp+20h+var_C]
0x51C60F: mov     large fs:0, ecx
0x51C616: pop     ecx
0x51C617: pop     edi
0x51C618: pop     esi
0x51C619: pop     ebx
0x51C61A: add     esp, 10h
0x51C61D: retn
