0x4D3570: sub     esp, 14h
0x4D3573: push    esi
0x4D3574: mov     esi, ecx
0x4D3576: mov     eax, [esi]
0x4D3578: mov     edx, [eax+24h]
0x4D357B: push    edi
0x4D357C: call    edx
0x4D357E: mov     edi, [esp+1Ch+arg_0]
0x4D3582: push    esi
0x4D3583: mov     ecx, edi
0x4D3585: call    TESFile_WriteFormRecord
0x4D358A: mov     eax, ds:0B05E20h
0x4D358F: mov     ecx, [esi+0Ch]
0x4D3592: mov     [esp+1Ch+var_14], eax
0x4D3596: xor     eax, eax
0x4D3598: lea     edx, [esp+1Ch+var_14]
0x4D359C: mov     [esp+1Ch+var_C], ecx
0x4D35A0: push    edx
0x4D35A1: mov     ecx, edi
0x4D35A3: mov     [esp+20h+var_8], 6
0x4D35AB: mov     [esp+20h+var_10], eax
0x4D35AF: mov     [esp+20h+var_4], eax
0x4D35B3: call    TESFile_OpenGroupRecord
0x4D35B8: push    edi
0x4D35B9: mov     ecx, esi
0x4D35BB: call    sub_4CD3B0
0x4D35C0: pop     edi
0x4D35C1: mov     al, 1
0x4D35C3: pop     esi
0x4D35C4: add     esp, 14h
0x4D35C7: retn    4
