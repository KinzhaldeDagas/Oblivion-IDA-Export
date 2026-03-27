0x64D530: sub     esp, 0Ch
0x64D533: push    ebx
0x64D534: push    ebp
0x64D535: push    esi
0x64D536: mov     esi, ecx
0x64D538: mov     eax, [esi]
0x64D53A: mov     edx, [eax+184h]
0x64D540: push    edi
0x64D541: call    edx
0x64D543: cmp     dword ptr [esi+2Ch], 0
0x64D547: mov     edi, [esp+1Ch+arg_0]
0x64D54B: mov     ebx, eax
0x64D54D: jnz     short loc_64D55C
0x64D54F: mov     eax, [esi]
0x64D551: mov     edx, [eax+558h]
0x64D557: push    edi
0x64D558: mov     ecx, esi
0x64D55A: call    edx
0x64D55C: mov     eax, [esi]
0x64D55E: mov     edx, [eax+55Ch]
0x64D564: push    edi
0x64D565: mov     ecx, esi
0x64D567: call    edx
0x64D569: mov     ecx, [ebx+28h]
0x64D56C: test    ecx, ecx
0x64D56E: jz      short loc_64D57F
0x64D570: call    sub_452A60
0x64D575: mov     [esp+1Ch+arg_0], eax
0x64D579: fild    [esp+1Ch+arg_0]
0x64D57D: jmp     short loc_64D598
0x64D57F: mov     ecx, ebx
0x64D581: call    sub_566DB0
0x64D586: test    eax, eax
0x64D588: mov     [esp+1Ch+arg_0], eax
0x64D58C: fild    [esp+1Ch+arg_0]
0x64D590: jge     short loc_64D598
0x64D592: fadd    dword ptr ds:0A2FC78h
0x64D598: mov     eax, [esi+2Ch]
0x64D59B: fstp    [esp+1Ch+arg_0]
0x64D59F: test    eax, eax
0x64D5A1: jz      loc_64D631
0x64D5A7: push    0
0x64D5A9: push    eax
0x64D5AA: mov     ecx, edi
0x64D5AC: call    TesObjectREF_GetDistance
0x64D5B1: fld     [esp+1Ch+arg_0]
0x64D5B5: fcompp
0x64D5B7: fnstsw  ax
0x64D5B9: test    ah, 5
0x64D5BC: jp      short loc_64D631
0x64D5BE: mov     eax, [edi]
0x64D5C0: mov     edx, [eax+318h]
0x64D5C6: push    0
0x64D5C8: push    0
0x64D5CA: push    1
0x64D5CC: push    1
0x64D5CE: push    edi
0x64D5CF: mov     ecx, edi
0x64D5D1: call    edx
0x64D5D3: mov     eax, [esi]
0x64D5D5: mov     edx, [eax+184h]
0x64D5DB: push    0; int
0x64D5DD: push    offset ??_R0?AVFleePackage@@@8; struct TypeDescriptor *
0x64D5E2: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x64D5E7: push    0; int
0x64D5E9: mov     ecx, esi
0x64D5EB: call    edx
0x64D5ED: push    eax; void *
0x64D5EE: call    OblivionDynamicCast
0x64D5F3: push    0; int
0x64D5F5: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x64D5FA: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x64D5FF: mov     edi, eax
0x64D601: mov     eax, [esi+2Ch]
0x64D604: push    0; int
0x64D606: push    eax; void *
0x64D607: call    OblivionDynamicCast
0x64D60C: add     esp, 28h
0x64D60F: test    edi, edi
0x64D611: jz      loc_64D705
0x64D617: test    eax, eax
0x64D619: jz      loc_64D705
0x64D61F: push    eax
0x64D620: mov     ecx, edi
0x64D622: call    sub_626C90
0x64D627: pop     edi
0x64D628: pop     esi
0x64D629: pop     ebp
0x64D62A: pop     ebx
0x64D62B: add     esp, 0Ch
0x64D62E: retn    4
0x64D631: cmp     dword ptr [esi+2Ch], 0
0x64D635: jnz     loc_64D6EF
0x64D63B: fld     dword ptr ds:0A30634h
0x64D641: push    ecx
0x64D642: fstp    [esp+20h+var_20]; float
0x64D645: push    0; char
0x64D647: push    edi; int
0x64D648: mov     ecx, ebx
0x64D64A: call    sub_566DC0
0x64D64F: test    al, al
0x64D651: jnz     loc_64D6EF
0x64D657: push    edi
0x64D658: mov     ecx, ebx
0x64D65A: call    sub_566A40
0x64D65F: push    edi
0x64D660: lea     ecx, [esp+20h+var_C]
0x64D664: push    ecx
0x64D665: mov     ecx, ebx
0x64D667: mov     ebp, eax
0x64D669: call    sub_566B30
0x64D66E: cmp     byte ptr [esi+0D0h], 0
0x64D675: jz      short loc_64D6B0
0x64D677: mov     ebx, [esi]
0x64D679: mov     ecx, edi; this
0x64D67B: call    TESObjectREFR_GetWorldSpace
0x64D680: mov     edx, [esp+1Ch+var_C]
0x64D684: mov     ecx, [esp+1Ch+var_8]
0x64D688: push    eax
0x64D689: push    ebp
0x64D68A: sub     esp, 0Ch
0x64D68D: mov     eax, esp
0x64D68F: mov     [eax], edx
0x64D691: mov     edx, [esp+30h+var_4]
0x64D695: mov     [eax+4], ecx
0x64D698: mov     [eax+8], edx
0x64D69B: mov     eax, [ebx+3DCh]
0x64D6A1: push    edi
0x64D6A2: mov     ecx, esi
0x64D6A4: call    eax
0x64D6A6: pop     edi
0x64D6A7: pop     esi
0x64D6A8: pop     ebp
0x64D6A9: pop     ebx
0x64D6AA: add     esp, 0Ch
0x64D6AD: retn    4
0x64D6B0: mov     edx, [esi]
0x64D6B2: mov     eax, [edx+238h]
0x64D6B8: push    201h
0x64D6BD: push    edi
0x64D6BE: mov     ecx, esi
0x64D6C0: call    eax
0x64D6C2: fld     [esp+1Ch+arg_0]
0x64D6C6: mov     ebx, [esi]
0x64D6C8: push    ecx
0x64D6C9: mov     ecx, edi; this
0x64D6CB: fstp    [esp+20h+var_20]
0x64D6CE: call    TESObjectREFR_GetWorldSpace
0x64D6D3: mov     edx, [ebx+414h]
0x64D6D9: push    eax
0x64D6DA: push    ebp
0x64D6DB: lea     ecx, [esp+28h+var_C]
0x64D6DF: push    ecx
0x64D6E0: push    edi
0x64D6E1: mov     ecx, esi
0x64D6E3: call    edx
0x64D6E5: pop     edi
0x64D6E6: pop     esi
0x64D6E7: pop     ebp
0x64D6E8: pop     ebx
0x64D6E9: add     esp, 0Ch
0x64D6EC: retn    4
0x64D6EF: cmp     byte ptr [esi+0D0h], 0
0x64D6F6: jnz     short loc_64D705
0x64D6F8: mov     eax, [esi]
0x64D6FA: mov     edx, [eax+194h]
0x64D700: push    edi
0x64D701: mov     ecx, esi
0x64D703: call    edx
0x64D705: pop     edi
0x64D706: pop     esi
0x64D707: pop     ebp
0x64D708: pop     ebx
0x64D709: add     esp, 0Ch
0x64D70C: retn    4
