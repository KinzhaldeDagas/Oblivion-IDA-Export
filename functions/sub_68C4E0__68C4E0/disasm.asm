0x68C4E0: push    0FFFFFFFFh
0x68C4E2: push    offset SEH_7B3BE0
0x68C4E7: mov     eax, large fs:0
0x68C4ED: push    eax
0x68C4EE: push    ecx
0x68C4EF: push    ebx
0x68C4F0: push    ebp
0x68C4F1: push    esi
0x68C4F2: push    edi
0x68C4F3: mov     eax, ds:0B30AACh
0x68C4F8: xor     eax, esp
0x68C4FA: push    eax
0x68C4FB: lea     eax, [esp+24h+var_C]
0x68C4FF: mov     large fs:0, eax
0x68C505: mov     [esp+24h+var_10], ecx
0x68C509: mov     edi, [esp+24h+arg_0]
0x68C50D: test    edi, edi
0x68C50F: jz      loc_68C5F7
0x68C515: mov     esi, [esp+24h+arg_4]
0x68C519: mov     eax, [ecx+4]
0x68C51C: xor     ebp, ebp
0x68C51E: test    esi, esi
0x68C520: mov     [esp+24h+arg_0], eax
0x68C524: jz      short loc_68C537
0x68C526: lea     edx, [esp+24h+arg_0]
0x68C52A: push    edx
0x68C52B: push    esi
0x68C52C: call    sub_68BF60
0x68C531: test    al, al
0x68C533: jz      short loc_68C537
0x68C535: mov     ebp, esi
0x68C537: mov     bl, byte ptr [esp+24h+arg_8]
0x68C53B: jmp     short loc_68C540
0x68C53D: align 10h
0x68C540: push    14h; Size
0x68C542: call    FormHeapAlloc
0x68C547: add     esp, 4
0x68C54A: mov     [esp+24h+arg_8], eax
0x68C54E: xor     esi, esi
0x68C550: cmp     eax, esi
0x68C552: mov     [esp+24h+var_4], esi
0x68C556: jz      short loc_68C561
0x68C558: mov     ecx, eax
0x68C55A: call    sub_68CB30
0x68C55F: mov     esi, eax
0x68C561: mov     ecx, edi
0x68C563: mov     [esp+24h+var_4], 0FFFFFFFFh
0x68C56B: call    sub_4BEF40
0x68C570: push    eax
0x68C571: mov     ecx, esi
0x68C573: call    TeleportData__SetTeleportPosition
0x68C578: push    1
0x68C57A: mov     ecx, esi
0x68C57C: call    sub_68CA30
0x68C581: test    bl, bl
0x68C583: jnz     short loc_68C594
0x68C585: mov     ecx, edi
0x68C587: call    sub_4E8040
0x68C58C: mov     ecx, esi
0x68C58E: push    eax
0x68C58F: call    sub_68CA60
0x68C594: mov     ecx, edi
0x68C596: call    sub_67ECF0
0x68C59B: mov     ecx, esi
0x68C59D: push    eax
0x68C59E: call    sub_68CA90
0x68C5A3: mov     ecx, edi
0x68C5A5: call    sub_67ED20
0x68C5AA: mov     ecx, esi
0x68C5AC: push    eax
0x68C5AD: call    sub_68CAC0
0x68C5B2: push    1
0x68C5B4: mov     ecx, esi
0x68C5B6: call    sub_68CB10
0x68C5BB: push    ebp
0x68C5BC: mov     ecx, esi
0x68C5BE: call    sub_6A2FD0
0x68C5C3: test    ebp, ebp
0x68C5C5: jnz     short loc_68C5CE
0x68C5C7: mov     eax, [esp+24h+var_10]
0x68C5CB: mov     [eax+4], esi
0x68C5CE: mov     ecx, edi
0x68C5D0: mov     ebp, esi
0x68C5D2: call    TESEnchantableForm_GetCastingType
0x68C5D7: mov     edi, eax
0x68C5D9: test    edi, edi
0x68C5DB: jnz     loc_68C540
0x68C5E1: mov     ecx, [esp+24h+arg_0]
0x68C5E5: test    ecx, ecx
0x68C5E7: jz      short loc_68C5F1
0x68C5E9: push    esi
0x68C5EA: call    sub_6A2FD0
0x68C5EF: jmp     short loc_68C5F7
0x68C5F1: mov     ecx, [esp+24h+var_10]
0x68C5F5: mov     [ecx], esi
0x68C5F7: mov     ecx, [esp+24h+var_C]
0x68C5FB: mov     large fs:0, ecx
0x68C602: pop     ecx
0x68C603: pop     edi
0x68C604: pop     esi
0x68C605: pop     ebp
0x68C606: pop     ebx
0x68C607: add     esp, 10h
0x68C60A: retn    0Ch
