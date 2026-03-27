0x853720: push    0FFFFFFFFh
0x853722: push    offset SEH_853720
0x853727: mov     eax, large fs:0
0x85372D: push    eax
0x85372E: push    esi
0x85372F: push    edi
0x853730: mov     eax, ds:0B30AACh
0x853735: xor     eax, esp
0x853737: push    eax
0x853738: lea     eax, [esp+18h+var_C]
0x85373C: mov     large fs:0, eax
0x853742: mov     edi, ecx
0x853744: cmp     [esp+18h+arg_14], 0
0x853749: mov     esi, [esp+18h+arg_10]
0x85374D: jnz     loc_85389C
0x853753: cmp     [esp+18h+arg_18], 0
0x853758: jnz     loc_8537FD
0x85375E: cmp     [esp+18h+arg_20], 0
0x853763: jnz     short loc_8537B1
0x853765: cmp     byte ptr [esp+18h+arg_C], 1
0x85376A: jnz     loc_853946
0x853770: push    10h; Size
0x853772: call    FormHeapAlloc
0x853777: add     esp, 4
0x85377A: mov     [esp+18h+arg_C], eax
0x85377E: test    eax, eax
0x853780: mov     [esp+18h+var_4], 0
0x853788: jz      loc_853929
0x85378E: mov     ecx, [esp+18h+arg_4]
0x853792: movzx   edx, byte ptr [esi]
0x853795: push    ecx
0x853796: mov     ecx, [esp+1Ch+arg_0]
0x85379A: push    1
0x85379C: push    edx
0x85379D: push    0E2h ; 'â'
0x8537A2: push    ecx
0x8537A3: push    eax
0x8537A4: call    sub_7E2370
0x8537A9: add     esp, 18h
0x8537AC: jmp     loc_85392B
0x8537B1: cmp     byte ptr [esp+18h+arg_C], 1
0x8537B6: jnz     loc_853946
0x8537BC: push    10h; Size
0x8537BE: call    FormHeapAlloc
0x8537C3: add     esp, 4
0x8537C6: mov     [esp+18h+arg_C], eax
0x8537CA: test    eax, eax
0x8537CC: mov     [esp+18h+var_4], 1
0x8537D4: jz      loc_853929
0x8537DA: mov     ecx, [esp+18h+arg_4]
0x8537DE: movzx   edx, byte ptr [esi]
0x8537E1: push    ecx
0x8537E2: mov     ecx, [esp+1Ch+arg_0]
0x8537E6: push    1
0x8537E8: push    edx
0x8537E9: push    0E6h ; 'æ'
0x8537EE: push    ecx
0x8537EF: push    eax
0x8537F0: call    sub_7E2370
0x8537F5: add     esp, 18h
0x8537F8: jmp     loc_85392B
0x8537FD: cmp     [esp+18h+arg_20], 0
0x853802: jnz     short loc_853850
0x853804: cmp     byte ptr [esp+18h+arg_C], 1
0x853809: jnz     loc_853946
0x85380F: push    10h; Size
0x853811: call    FormHeapAlloc
0x853816: add     esp, 4
0x853819: mov     [esp+18h+arg_C], eax
0x85381D: test    eax, eax
0x85381F: mov     [esp+18h+var_4], 2
0x853827: jz      loc_853929
0x85382D: mov     ecx, [esp+18h+arg_4]
0x853831: movzx   edx, byte ptr [esi]
0x853834: push    ecx
0x853835: mov     ecx, [esp+1Ch+arg_0]
0x853839: push    1
0x85383B: push    edx
0x85383C: push    0E3h ; 'ã'
0x853841: push    ecx
0x853842: push    eax
0x853843: call    sub_7E2370
0x853848: add     esp, 18h
0x85384B: jmp     loc_85392B
0x853850: cmp     byte ptr [esp+18h+arg_C], 1
0x853855: jnz     loc_853946
0x85385B: push    10h; Size
0x85385D: call    FormHeapAlloc
0x853862: add     esp, 4
0x853865: mov     [esp+18h+arg_C], eax
0x853869: test    eax, eax
0x85386B: mov     [esp+18h+var_4], 3
0x853873: jz      loc_853929
0x853879: mov     ecx, [esp+18h+arg_4]
0x85387D: movzx   edx, byte ptr [esi]
0x853880: push    ecx
0x853881: mov     ecx, [esp+1Ch+arg_0]
0x853885: push    1
0x853887: push    edx
0x853888: push    0E7h ; 'ç'
0x85388D: push    ecx
0x85388E: push    eax
0x85388F: call    sub_7E2370
0x853894: add     esp, 18h
0x853897: jmp     loc_85392B
0x85389C: cmp     [esp+18h+arg_18], 0
0x8538A1: jnz     short loc_8538E8
0x8538A3: cmp     byte ptr [esp+18h+arg_C], 1
0x8538A8: jnz     loc_853946
0x8538AE: push    10h; Size
0x8538B0: call    FormHeapAlloc
0x8538B5: add     esp, 4
0x8538B8: mov     [esp+18h+arg_C], eax
0x8538BC: test    eax, eax
0x8538BE: mov     [esp+18h+var_4], 4
0x8538C6: jz      short loc_853929
0x8538C8: mov     ecx, [esp+18h+arg_4]
0x8538CC: movzx   edx, byte ptr [esi]
0x8538CF: push    ecx
0x8538D0: mov     ecx, [esp+1Ch+arg_0]
0x8538D4: push    1
0x8538D6: push    edx
0x8538D7: push    0E4h ; 'ä'
0x8538DC: push    ecx
0x8538DD: push    eax
0x8538DE: call    sub_7E2370
0x8538E3: add     esp, 18h
0x8538E6: jmp     short loc_85392B
0x8538E8: cmp     byte ptr [esp+18h+arg_C], 1
0x8538ED: jnz     short loc_853946
0x8538EF: push    10h; Size
0x8538F1: call    FormHeapAlloc
0x8538F6: add     esp, 4
0x8538F9: mov     [esp+18h+arg_C], eax
0x8538FD: test    eax, eax
0x8538FF: mov     [esp+18h+var_4], 5
0x853907: jz      short loc_853929
0x853909: mov     ecx, [esp+18h+arg_4]
0x85390D: movzx   edx, byte ptr [esi]
0x853910: push    ecx
0x853911: mov     ecx, [esp+1Ch+arg_0]
0x853915: push    1
0x853917: push    edx
0x853918: push    0E5h ; 'å'
0x85391D: push    ecx
0x85391E: push    eax
0x85391F: call    sub_7E2370
0x853924: add     esp, 18h
0x853927: jmp     short loc_85392B
0x853929: xor     eax, eax
0x85392B: lea     edx, [esp+18h+arg_C]
0x85392F: push    edx
0x853930: lea     ecx, [edi+28h]
0x853933: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x85393B: mov     [esp+1Ch+arg_C], eax
0x85393F: call    sub_5B1E20
0x853944: jmp     short loc_85394E
0x853946: mov     eax, [esp+18h+arg_8]
0x85394A: add     word ptr [eax], 1
0x85394E: mov     byte ptr [esi], 0
0x853951: mov     ecx, [esp+18h+var_C]
0x853955: mov     large fs:0, ecx
0x85395C: pop     ecx
0x85395D: pop     edi
0x85395E: pop     esi
0x85395F: add     esp, 0Ch
0x853962: retn    24h ; '$'
