0x45E6A0: push    0FFFFFFFFh
0x45E6A2: push    offset SEH_45E6A0
0x45E6A7: mov     eax, large fs:0
0x45E6AD: push    eax
0x45E6AE: mov     eax, 0AA468h
0x45E6B3: call    __alloca_probe
0x45E6B8: mov     eax, ds:0B30AACh
0x45E6BD: xor     eax, esp
0x45E6BF: mov     [esp+0AA474h+var_10], eax
0x45E6C6: push    ebx
0x45E6C7: push    ebp
0x45E6C8: push    esi
0x45E6C9: push    edi
0x45E6CA: mov     eax, ds:0B30AACh
0x45E6CF: xor     eax, esp
0x45E6D1: push    eax
0x45E6D2: lea     eax, [esp+0AA488h+var_C]
0x45E6D9: mov     large fs:0, eax
0x45E6DF: push    offset aXboxsaves_; "XBoxSaves\\*.*"
0x45E6E4: lea     eax, [esp+0AA48Ch+String1]
0x45E6EB: push    eax; lpString1
0x45E6EC: xor     bl, bl
0x45E6EE: call    dword ptr ds:0A28164h
0x45E6F4: lea     ecx, [esp+0AA488h+FindFileData]
0x45E6F8: push    ecx; lpFindFileData
0x45E6F9: lea     edx, [esp+0AA48Ch+String1]
0x45E700: push    edx; lpFileName
0x45E701: call    dword ptr ds:0A2812Ch
0x45E707: mov     esi, eax
0x45E709: or      ebp, 0FFFFFFFFh
0x45E70C: cmp     esi, ebp
0x45E70E: mov     [esp+0AA488h+var_AA464], esi
0x45E712: jz      loc_45E90A
0x45E718: xor     edi, edi
0x45E71A: cmp     [esp+0AA488h+FindFileData.nFileSizeHigh], edi
0x45E71E: jnz     short loc_45E72A
0x45E720: cmp     [esp+0AA488h+FindFileData.nFileSizeLow], edi
0x45E724: jz      loc_45E8EF
0x45E72A: lea     eax, [esp+0AA488h+FindFileData.cFileName]
0x45E72E: push    eax
0x45E72F: lea     ecx, [esp+0AA48Ch+FileName]
0x45E736: push    offset aXboxsavesS; "XBoxSaves\\%s"
0x45E73B: push    ecx
0x45E73C: mov     [esp+0AA494h+var_AA471], 1
0x45E741: call    __sprintf
0x45E746: push    154h; Size
0x45E74B: call    FormHeapAlloc
0x45E750: add     esp, 10h
0x45E753: mov     [esp+0AA488h+var_AA46C], eax
0x45E757: cmp     eax, edi
0x45E759: mov     [esp+0AA488h+var_4], edi
0x45E760: jz      short loc_45E77C
0x45E762: push    edi
0x45E763: push    20000h
0x45E768: push    edi
0x45E769: lea     edx, [esp+0AA494h+FileName]
0x45E770: push    edx
0x45E771: mov     ecx, eax
0x45E773: call    BSFile_constr
0x45E778: mov     esi, eax
0x45E77A: jmp     short loc_45E77E
0x45E77C: xor     esi, esi
0x45E77E: mov     eax, [esi]
0x45E780: mov     edx, [eax+18h]
0x45E783: push    edi
0x45E784: push    edi
0x45E785: mov     ecx, esi
0x45E787: mov     [esp+0AA490h+var_4], ebp
0x45E78E: call    edx
0x45E790: mov     ecx, ds:0B05564h
0x45E796: lea     eax, [esp+0AA488h+FindFileData.cFileName]
0x45E79A: push    eax
0x45E79B: push    ecx
0x45E79C: push    offset word_B3F280
0x45E7A1: lea     edx, [esp+0AA494h+var_AA114]
0x45E7A8: push    offset aSSS_ess; "%s%s%s.ess"
0x45E7AD: push    edx
0x45E7AE: call    __sprintf
0x45E7B3: push    154h; Size
0x45E7B8: call    FormHeapAlloc
0x45E7BD: add     esp, 18h
0x45E7C0: mov     [esp+0AA488h+var_AA46C], eax
0x45E7C4: cmp     eax, edi
0x45E7C6: mov     [esp+0AA488h+var_4], 1
0x45E7D1: jz      short loc_45E7F2
0x45E7D3: push    edi
0x45E7D4: push    20000h
0x45E7D9: push    1
0x45E7DB: lea     ecx, [esp+0AA494h+var_AA114]
0x45E7E2: push    ecx
0x45E7E3: mov     ecx, eax
0x45E7E5: call    BSFile_constr
0x45E7EA: mov     edi, eax
0x45E7EC: mov     [esp+0AA488h+var_AA470], edi
0x45E7F0: jmp     short loc_45E7F6
0x45E7F2: mov     [esp+0AA488h+var_AA470], edi
0x45E7F6: mov     eax, ds:0A853D0h
0x45E7FB: mov     edx, [esi]
0x45E7FD: mov     edx, [edx+0Ch]
0x45E800: mov     [esp+0AA488h+var_4], ebp
0x45E807: mov     ebp, [esp+0AA488h+FindFileData.nFileSizeLow]
0x45E80B: push    eax
0x45E80C: add     ebp, 0FFFF3000h
0x45E812: push    0D000h
0x45E817: mov     ecx, esi
0x45E819: mov     [esp+0AA490h+var_AA468], ebp
0x45E81D: call    edx
0x45E81F: test    ebp, ebp
0x45E821: mov     bl, 1
0x45E823: jle     loc_45E8BE
0x45E829: lea     esp, [esp+0]
0x45E830: test    bl, bl
0x45E832: mov     eax, 0AA000h
0x45E837: jz      short loc_45E83E
0x45E839: mov     eax, 0A9000h
0x45E83E: push    1
0x45E840: lea     ecx, [esp+0AA48Ch+var_AA46C]
0x45E844: push    ecx
0x45E845: push    eax
0x45E846: mov     eax, [esi+4]
0x45E849: lea     edx, [esp+0AA494h+var_AA010]
0x45E850: push    edx
0x45E851: push    esi
0x45E852: mov     [esp+0AA49Ch+var_AA46C], 1
0x45E85A: call    eax
0x45E85C: mov     ebp, eax
0x45E85E: add     esp, 14h
0x45E861: test    ebp, ebp
0x45E863: jz      short loc_45E886
0x45E865: mov     eax, [edi+8]
0x45E868: push    1
0x45E86A: lea     ecx, [esp+0AA48Ch+var_AA460]
0x45E86E: push    ecx
0x45E86F: push    ebp
0x45E870: lea     edx, [esp+0AA494h+var_AA010]
0x45E877: push    edx
0x45E878: push    edi
0x45E879: mov     [esp+0AA49Ch+var_AA460], 1
0x45E881: call    eax
0x45E883: add     esp, 14h
0x45E886: test    bl, bl
0x45E888: mov     edi, 2000h
0x45E88D: jz      short loc_45E894
0x45E88F: mov     edi, 4000h
0x45E894: mov     eax, ds:0A853D4h
0x45E899: mov     edx, [esi]
0x45E89B: mov     edx, [edx+0Ch]
0x45E89E: push    eax
0x45E89F: push    edi
0x45E8A0: mov     ecx, esi
0x45E8A2: call    edx
0x45E8A4: mov     eax, [esp+0AA488h+var_AA468]
0x45E8A8: add     edi, ebp
0x45E8AA: sub     eax, edi
0x45E8AC: mov     edi, [esp+0AA488h+var_AA470]
0x45E8B0: xor     bl, bl
0x45E8B2: test    eax, eax
0x45E8B4: mov     [esp+0AA488h+var_AA468], eax
0x45E8B8: jg      loc_45E830
0x45E8BE: test    edi, edi
0x45E8C0: jz      short loc_45E8CC
0x45E8C2: mov     eax, [edi]
0x45E8C4: mov     edx, [eax]
0x45E8C6: push    1
0x45E8C8: mov     ecx, edi
0x45E8CA: call    edx
0x45E8CC: mov     eax, [esi]
0x45E8CE: mov     edx, [eax]
0x45E8D0: push    1
0x45E8D2: mov     ecx, esi
0x45E8D4: call    edx
0x45E8D6: lea     eax, [esp+0AA488h+FileName]
0x45E8DD: push    eax; lpFileName
0x45E8DE: call    dword ptr ds:0A280ACh
0x45E8E4: mov     bl, [esp+0AA488h+var_AA471]
0x45E8E8: mov     esi, [esp+0AA488h+var_AA464]
0x45E8EC: or      ebp, 0FFFFFFFFh
0x45E8EF: lea     ecx, [esp+0AA488h+FindFileData]
0x45E8F3: push    ecx; lpFindFileData
0x45E8F4: push    esi; hFindFile
0x45E8F5: call    dword ptr ds:0A28124h
0x45E8FB: test    eax, eax
0x45E8FD: jnz     loc_45E718
0x45E903: push    esi; hFindFile
0x45E904: call    dword ptr ds:0A28120h
0x45E90A: mov     al, bl
0x45E90C: mov     ecx, [esp+0AA488h+var_C]
0x45E913: mov     large fs:0, ecx
0x45E91A: pop     ecx
0x45E91B: pop     edi
0x45E91C: pop     esi
0x45E91D: pop     ebp
0x45E91E: pop     ebx
0x45E91F: mov     ecx, [esp+0AA474h+var_10]
0x45E926: xor     ecx, esp
0x45E928: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45E92D: add     esp, 0AA474h
0x45E933: retn
