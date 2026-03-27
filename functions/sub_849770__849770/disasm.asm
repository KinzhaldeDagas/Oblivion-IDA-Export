0x849770: push    0FFFFFFFFh
0x849772: push    offset SEH_879360
0x849777: mov     eax, large fs:0
0x84977D: push    eax
0x84977E: push    ecx
0x84977F: push    ebx
0x849780: push    ebp
0x849781: push    esi
0x849782: push    edi
0x849783: mov     eax, ds:0B30AACh
0x849788: xor     eax, esp
0x84978A: push    eax
0x84978B: lea     eax, [esp+24h+var_C]
0x84978F: mov     large fs:0, eax
0x849795: mov     [esp+24h+var_10], ecx
0x849799: mov     eax, [esp+24h+arg_8]
0x84979D: mov     eax, [eax+10h]
0x8497A0: mov     esi, ds:0B455F4h
0x8497A6: push    eax
0x8497A7: call    sub_848DA0
0x8497AC: mov     ecx, [esi+24h]
0x8497AF: mov     ebx, [esp+24h+arg_C]
0x8497B3: mov     edi, [ecx]
0x8497B5: mov     edx, [ebx]
0x8497B7: mov     eax, [edx+88h]
0x8497BD: push    0
0x8497BF: mov     ecx, ebx
0x8497C1: mov     [esp+28h+arg_8], edi
0x8497C5: call    eax
0x8497C7: mov     edi, [edi+4]
0x8497CA: mov     ebp, eax
0x8497CC: cmp     edi, ebp
0x8497CE: jz      short loc_849807
0x8497D0: test    edi, edi
0x8497D2: jz      short loc_8497F0
0x8497D4: lea     ecx, [edi+4]
0x8497D7: push    ecx; lpAddend
0x8497D8: call    dword ptr ds:0A2807Ch
0x8497DE: test    eax, eax
0x8497E0: jnz     short loc_8497F0
0x8497E2: test    edi, edi
0x8497E4: jz      short loc_8497F0
0x8497E6: mov     edx, [edi]
0x8497E8: mov     eax, [edx]
0x8497EA: push    1
0x8497EC: mov     ecx, edi
0x8497EE: call    eax
0x8497F0: test    ebp, ebp
0x8497F2: mov     edi, [esp+24h+arg_8]
0x8497F6: mov     [edi+4], ebp
0x8497F9: jz      short loc_84980B
0x8497FB: add     ebp, 4
0x8497FE: push    ebp; lpAddend
0x8497FF: call    dword ptr ds:0A28078h
0x849805: jmp     short loc_84980B
0x849807: mov     edi, [esp+24h+arg_8]
0x84980B: test    edi, edi
0x84980D: jz      short loc_849829
0x84980F: cmp     byte ptr ds:0B42CDDh, 0
0x849816: jz      short loc_849829
0x849818: mov     edx, [ebx]
0x84981A: mov     eax, [edx+78h]
0x84981D: mov     ecx, ebx
0x84981F: call    eax
0x849821: push    eax
0x849822: mov     ecx, edi
0x849824: call    sub_7715E0
0x849829: mov     ecx, [esi+24h]
0x84982C: mov     edi, [ecx+4]
0x84982F: mov     edx, [ebx]
0x849831: mov     eax, [edx+90h]
0x849837: push    0
0x849839: mov     ecx, ebx
0x84983B: mov     [esp+28h+arg_8], edi
0x84983F: call    eax
0x849841: mov     edi, [edi+4]
0x849844: mov     ebp, eax
0x849846: cmp     edi, ebp
0x849848: jz      short loc_849881
0x84984A: test    edi, edi
0x84984C: jz      short loc_84986A
0x84984E: lea     ecx, [edi+4]
0x849851: push    ecx; lpAddend
0x849852: call    dword ptr ds:0A2807Ch
0x849858: test    eax, eax
0x84985A: jnz     short loc_84986A
0x84985C: test    edi, edi
0x84985E: jz      short loc_84986A
0x849860: mov     edx, [edi]
0x849862: mov     eax, [edx]
0x849864: push    1
0x849866: mov     ecx, edi
0x849868: call    eax
0x84986A: test    ebp, ebp
0x84986C: mov     edi, [esp+24h+arg_8]
0x849870: mov     [edi+4], ebp
0x849873: jz      short loc_849885
0x849875: add     ebp, 4
0x849878: push    ebp; lpAddend
0x849879: call    dword ptr ds:0A28078h
0x84987F: jmp     short loc_849885
0x849881: mov     edi, [esp+24h+arg_8]
0x849885: test    edi, edi
0x849887: jz      short loc_8498A3
0x849889: cmp     byte ptr ds:0B42CDDh, 0
0x849890: jz      short loc_8498A3
0x849892: mov     edx, [ebx]
0x849894: mov     eax, [edx+78h]
0x849897: mov     ecx, ebx
0x849899: call    eax
0x84989B: push    eax
0x84989C: mov     ecx, edi
0x84989E: call    sub_7715E0
0x8498A3: mov     ebx, 1
0x8498A8: add     [esi+60h], ebx
0x8498AB: mov     [esp+24h+arg_8], esi
0x8498AF: mov     edi, [esp+24h+var_10]
0x8498B3: mov     edx, [edi+38h]
0x8498B6: lea     ecx, [esp+24h+arg_8]
0x8498BA: push    ecx
0x8498BB: push    edx
0x8498BC: lea     ecx, [edi+40h]
0x8498BF: mov     [esp+2Ch+var_4], 0
0x8498C7: call    sub_76CE40
0x8498CC: or      eax, 0FFFFFFFFh
0x8498CF: add     [esi+60h], eax
0x8498D2: mov     [esp+24h+var_4], eax
0x8498D6: jnz     short loc_8498DF
0x8498D8: mov     ecx, esi
0x8498DA: call    sub_7604D0
0x8498DF: add     [edi+38h], ebx
0x8498E2: mov     ecx, [esp+24h+var_C]
0x8498E6: mov     large fs:0, ecx
0x8498ED: pop     ecx
0x8498EE: pop     edi
0x8498EF: pop     esi
0x8498F0: pop     ebp
0x8498F1: pop     ebx
0x8498F2: add     esp, 10h
0x8498F5: retn    10h
