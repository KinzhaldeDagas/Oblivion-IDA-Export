0x5215C0: push    0FFFFFFFFh
0x5215C2: push    offset SEH_787830
0x5215C7: mov     eax, large fs:0
0x5215CD: push    eax
0x5215CE: push    ebp
0x5215CF: push    esi
0x5215D0: push    edi
0x5215D1: mov     eax, ds:0B30AACh
0x5215D6: xor     eax, esp
0x5215D8: push    eax
0x5215D9: lea     eax, [esp+1Ch+var_C]
0x5215DD: mov     large fs:0, eax
0x5215E3: mov     ebp, ecx
0x5215E5: mov     edi, [esp+1Ch+a2]
0x5215E9: xor     eax, eax
0x5215EB: test    edi, edi
0x5215ED: jz      loc_521680
0x5215F3: cmp     [edi], al
0x5215F5: jz      loc_521680
0x5215FB: mov     [esp+1Ch+a2], eax
0x5215FF: lea     eax, [esp+1Ch+a2]
0x521603: push    eax
0x521604: push    edi
0x521605: xor     esi, esi
0x521607: call    NiTMap_GetAt
0x52160C: test    al, al
0x52160E: jz      short loc_52161A
0x521610: mov     eax, [esp+1Ch+a2]
0x521614: test    eax, eax
0x521616: jz      short loc_52161A
0x521618: mov     esi, eax
0x52161A: test    esi, esi
0x52161C: jnz     short loc_52167E
0x52161E: push    24h ; '$'; Size
0x521620: call    FormHeapAlloc
0x521625: add     esp, 4
0x521628: mov     [esp+1Ch+a2], eax
0x52162C: test    eax, eax
0x52162E: mov     [esp+1Ch+var_4], esi
0x521632: jz      short loc_52163F
0x521634: mov     ecx, eax
0x521636: call    sub_521340
0x52163B: mov     esi, eax
0x52163D: jmp     short loc_521641
0x52163F: xor     esi, esi
0x521641: push    0; a3
0x521643: push    edi; a2
0x521644: lea     ecx, [esi+18h]; this
0x521647: mov     [esp+24h+var_4], 0FFFFFFFFh
0x52164F: call    BSStringT_Set
0x521654: push    1
0x521656: mov     ecx, esi
0x521658: call    sub_452910
0x52165D: push    1; int
0x52165F: mov     dword ptr [esi+14h], 1
0x521666: mov     ecx, ds:0B33A1Ch
0x52166C: push    edi; char *
0x52166D: call    sub_435830
0x521672: push    esi
0x521673: push    edi
0x521674: mov     ecx, ebp
0x521676: mov     [esi+20h], eax
0x521679: call    sub_412D30
0x52167E: mov     eax, esi
0x521680: mov     ecx, [esp+1Ch+var_C]
0x521684: mov     large fs:0, ecx
0x52168B: pop     ecx
0x52168C: pop     edi
0x52168D: pop     esi
0x52168E: pop     ebp
0x52168F: add     esp, 0Ch
0x521692: retn    4
