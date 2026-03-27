0x83C520: push    0FFFFFFFFh
0x83C522: push    offset SEH_882120
0x83C527: mov     eax, large fs:0
0x83C52D: push    eax
0x83C52E: push    ebx
0x83C52F: push    ebp
0x83C530: push    esi
0x83C531: push    edi
0x83C532: mov     eax, ds:0B30AACh
0x83C537: xor     eax, esp
0x83C539: push    eax
0x83C53A: lea     eax, [esp+20h+var_C]
0x83C53E: mov     large fs:0, eax
0x83C544: mov     esi, ecx
0x83C546: mov     ebx, [esp+20h+arg_8]
0x83C54A: mov     eax, [ebx+10h]
0x83C54D: mov     edi, ds:0B457CCh
0x83C553: push    eax
0x83C554: call    sub_848C40
0x83C559: mov     ebx, [ebx+0Ch]
0x83C55C: push    ebx
0x83C55D: mov     ecx, esi
0x83C55F: call    sub_848E50
0x83C564: mov     ecx, [esp+20h+arg_0]
0x83C568: mov     eax, [esi]
0x83C56A: mov     edx, [eax+0BCh]
0x83C570: push    0
0x83C572: push    ebx
0x83C573: push    ecx
0x83C574: mov     ecx, esi
0x83C576: call    edx
0x83C578: mov     eax, [edi+24h]
0x83C57B: mov     ebx, [esp+20h+arg_C]
0x83C57F: mov     ebp, [eax]
0x83C581: mov     edx, [ebx]
0x83C583: mov     eax, [edx+88h]
0x83C589: push    0
0x83C58B: mov     ecx, ebx
0x83C58D: mov     [esp+24h+arg_8], ebp
0x83C591: call    eax
0x83C593: mov     ebp, [ebp+4]
0x83C596: cmp     ebp, eax
0x83C598: mov     [esp+20h+arg_0], eax
0x83C59C: jz      short loc_83C5D8
0x83C59E: test    ebp, ebp
0x83C5A0: jz      short loc_83C5C3
0x83C5A2: lea     ecx, [ebp+4]
0x83C5A5: push    ecx; lpAddend
0x83C5A6: call    dword ptr ds:0A2807Ch
0x83C5AC: test    eax, eax
0x83C5AE: jnz     short loc_83C5BF
0x83C5B0: test    ebp, ebp
0x83C5B2: jz      short loc_83C5BF
0x83C5B4: mov     edx, [ebp+0]
0x83C5B7: mov     eax, [edx]
0x83C5B9: push    1
0x83C5BB: mov     ecx, ebp
0x83C5BD: call    eax
0x83C5BF: mov     eax, [esp+20h+arg_0]
0x83C5C3: test    eax, eax
0x83C5C5: mov     ecx, [esp+20h+arg_8]
0x83C5C9: mov     [ecx+4], eax
0x83C5CC: jz      short loc_83C5D8
0x83C5CE: add     eax, 4
0x83C5D1: push    eax; lpAddend
0x83C5D2: call    dword ptr ds:0A28078h
0x83C5D8: mov     edx, [esp+20h+arg_8]
0x83C5DC: push    ebx
0x83C5DD: push    edx
0x83C5DE: mov     ecx, esi
0x83C5E0: call    sub_848FA0
0x83C5E5: mov     eax, [edi+24h]
0x83C5E8: mov     ebp, [eax+4]
0x83C5EB: push    0
0x83C5ED: push    ebx
0x83C5EE: mov     ecx, esi
0x83C5F0: mov     [esp+28h+arg_8], ebp
0x83C5F4: call    sub_848FD0
0x83C5F9: mov     ebp, [ebp+4]
0x83C5FC: cmp     ebp, eax
0x83C5FE: mov     [esp+20h+arg_0], eax
0x83C602: jz      short loc_83C63E
0x83C604: test    ebp, ebp
0x83C606: jz      short loc_83C629
0x83C608: lea     ecx, [ebp+4]
0x83C60B: push    ecx; lpAddend
0x83C60C: call    dword ptr ds:0A2807Ch
0x83C612: test    eax, eax
0x83C614: jnz     short loc_83C625
0x83C616: test    ebp, ebp
0x83C618: jz      short loc_83C625
0x83C61A: mov     edx, [ebp+0]
0x83C61D: mov     eax, [edx]
0x83C61F: push    1
0x83C621: mov     ecx, ebp
0x83C623: call    eax
0x83C625: mov     eax, [esp+20h+arg_0]
0x83C629: test    eax, eax
0x83C62B: mov     ecx, [esp+20h+arg_8]
0x83C62F: mov     [ecx+4], eax
0x83C632: jz      short loc_83C63E
0x83C634: add     eax, 4
0x83C637: push    eax; lpAddend
0x83C638: call    dword ptr ds:0A28078h
0x83C63E: mov     edx, [esp+20h+arg_8]
0x83C642: push    ebx
0x83C643: push    edx
0x83C644: mov     ecx, esi
0x83C646: call    sub_848FA0
0x83C64B: mov     ecx, [edi+24h]
0x83C64E: mov     ebx, [ecx+18h]
0x83C651: mov     eax, ds:0B43108h
0x83C656: mov     ebp, [ebx+4]
0x83C659: add     ebx, 4
0x83C65C: cmp     ebp, eax
0x83C65E: mov     [esp+20h+arg_8], eax
0x83C662: jz      short loc_83C699
0x83C664: test    ebp, ebp
0x83C666: jz      short loc_83C689
0x83C668: lea     edx, [ebp+4]
0x83C66B: push    edx; lpAddend
0x83C66C: call    dword ptr ds:0A2807Ch
0x83C672: test    eax, eax
0x83C674: jnz     short loc_83C685
0x83C676: test    ebp, ebp
0x83C678: jz      short loc_83C685
0x83C67A: mov     eax, [ebp+0]
0x83C67D: mov     edx, [eax]
0x83C67F: push    1
0x83C681: mov     ecx, ebp
0x83C683: call    edx
0x83C685: mov     eax, [esp+20h+arg_8]
0x83C689: test    eax, eax
0x83C68B: mov     [ebx], eax
0x83C68D: jz      short loc_83C699
0x83C68F: add     eax, 4
0x83C692: push    eax; lpAddend
0x83C693: call    dword ptr ds:0A28078h
0x83C699: mov     eax, [edi+24h]
0x83C69C: mov     ebp, [eax+1Ch]
0x83C69F: mov     eax, ds:0B4310Ch
0x83C6A4: mov     ebx, [ebp+4]
0x83C6A7: cmp     ebx, eax
0x83C6A9: mov     ecx, eax
0x83C6AB: mov     [esp+20h+arg_8], ecx
0x83C6AF: jz      short loc_83C6E6
0x83C6B1: test    ebx, ebx
0x83C6B3: jz      short loc_83C6D5
0x83C6B5: lea     ecx, [ebx+4]
0x83C6B8: push    ecx; lpAddend
0x83C6B9: call    dword ptr ds:0A2807Ch
0x83C6BF: test    eax, eax
0x83C6C1: jnz     short loc_83C6D1
0x83C6C3: test    ebx, ebx
0x83C6C5: jz      short loc_83C6D1
0x83C6C7: mov     edx, [ebx]
0x83C6C9: mov     eax, [edx]
0x83C6CB: push    1
0x83C6CD: mov     ecx, ebx
0x83C6CF: call    eax
0x83C6D1: mov     ecx, [esp+20h+arg_8]
0x83C6D5: test    ecx, ecx
0x83C6D7: mov     [ebp+4], ecx
0x83C6DA: jz      short loc_83C6E6
0x83C6DC: add     ecx, 4
0x83C6DF: push    ecx; lpAddend
0x83C6E0: call    dword ptr ds:0A28078h
0x83C6E6: mov     ebx, 1
0x83C6EB: add     [edi+60h], ebx
0x83C6EE: mov     [esp+20h+arg_8], edi
0x83C6F2: mov     edx, [esi+38h]
0x83C6F5: lea     ecx, [esp+20h+arg_8]
0x83C6F9: push    ecx
0x83C6FA: push    edx
0x83C6FB: lea     ecx, [esi+40h]
0x83C6FE: mov     [esp+28h+var_4], 0
0x83C706: call    sub_76CE40
0x83C70B: or      eax, 0FFFFFFFFh
0x83C70E: add     [edi+60h], eax
0x83C711: mov     [esp+20h+var_4], eax
0x83C715: jnz     short loc_83C71E
0x83C717: mov     ecx, edi
0x83C719: call    sub_7604D0
0x83C71E: add     [esi+38h], ebx
0x83C721: mov     ecx, [esp+20h+var_C]
0x83C725: mov     large fs:0, ecx
0x83C72C: pop     ecx
0x83C72D: pop     edi
0x83C72E: pop     esi
0x83C72F: pop     ebp
0x83C730: pop     ebx
0x83C731: add     esp, 0Ch
0x83C734: retn    10h
