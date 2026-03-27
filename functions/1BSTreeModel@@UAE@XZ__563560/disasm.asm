0x563560: push    0FFFFFFFFh
0x563562: push    offset ??1BSTreeModel@@UAE@XZ_SEH
0x563567: mov     eax, large fs:0
0x56356D: push    eax
0x56356E: push    ecx
0x56356F: push    ebp
0x563570: push    esi
0x563571: push    edi
0x563572: mov     eax, ds:0B30AACh
0x563577: xor     eax, esp
0x563579: push    eax
0x56357A: lea     eax, [esp+20h+var_C]
0x56357E: mov     large fs:0, eax
0x563584: mov     esi, ecx
0x563586: mov     [esp+20h+var_10], esi
0x56358A: mov     dword ptr [esi], offset ??_7BSTreeModel@@6B@; const BSTreeModel::`vftable'
0x563590: mov     [esp+20h+var_4], 7
0x563598: call    sub_561520
0x56359D: mov     edi, [esi+0Ch]
0x5635A0: test    edi, edi
0x5635A2: jz      short loc_5635BB
0x5635A4: mov     ecx, edi
0x5635A6: call    sub_78C9B0
0x5635AB: push    edi
0x5635AC: call    FormHeapFree
0x5635B1: add     esp, 4
0x5635B4: mov     dword ptr [esi+0Ch], 0
0x5635BB: mov     edi, [esi+40h]
0x5635BE: test    edi, edi
0x5635C0: mov     ebp, ds:0A2807Ch
0x5635C6: mov     byte ptr [esp+20h+var_4], 6
0x5635CB: jz      short loc_5635E5
0x5635CD: lea     eax, [edi+4]
0x5635D0: push    eax; lpAddend
0x5635D1: call    ebp ; InterlockedDecrement
0x5635D3: test    eax, eax
0x5635D5: jnz     short loc_5635E5
0x5635D7: test    edi, edi
0x5635D9: jz      short loc_5635E5
0x5635DB: mov     edx, [edi]
0x5635DD: mov     eax, [edx]
0x5635DF: push    1
0x5635E1: mov     ecx, edi
0x5635E3: call    eax
0x5635E5: mov     edi, [esi+3Ch]
0x5635E8: test    edi, edi
0x5635EA: mov     byte ptr [esp+20h+var_4], 5
0x5635EF: jz      short loc_563609
0x5635F1: lea     ecx, [edi+4]
0x5635F4: push    ecx; lpAddend
0x5635F5: call    ebp ; InterlockedDecrement
0x5635F7: test    eax, eax
0x5635F9: jnz     short loc_563609
0x5635FB: test    edi, edi
0x5635FD: jz      short loc_563609
0x5635FF: mov     edx, [edi]
0x563601: mov     eax, [edx]
0x563603: push    1
0x563605: mov     ecx, edi
0x563607: call    eax
0x563609: mov     edi, [esi+38h]
0x56360C: test    edi, edi
0x56360E: mov     byte ptr [esp+20h+var_4], 4
0x563613: jz      short loc_56362D
0x563615: lea     ecx, [edi+4]
0x563618: push    ecx; lpAddend
0x563619: call    ebp ; InterlockedDecrement
0x56361B: test    eax, eax
0x56361D: jnz     short loc_56362D
0x56361F: test    edi, edi
0x563621: jz      short loc_56362D
0x563623: mov     edx, [edi]
0x563625: mov     eax, [edx]
0x563627: push    1
0x563629: mov     ecx, edi
0x56362B: call    eax
0x56362D: mov     edi, [esi+34h]
0x563630: test    edi, edi
0x563632: mov     byte ptr [esp+20h+var_4], 3
0x563637: jz      short loc_563651
0x563639: lea     ecx, [edi+4]
0x56363C: push    ecx; lpAddend
0x56363D: call    ebp ; InterlockedDecrement
0x56363F: test    eax, eax
0x563641: jnz     short loc_563651
0x563643: test    edi, edi
0x563645: jz      short loc_563651
0x563647: mov     edx, [edi]
0x563649: mov     eax, [edx]
0x56364B: push    1
0x56364D: mov     ecx, edi
0x56364F: call    eax
0x563651: mov     edi, [esi+20h]
0x563654: test    edi, edi
0x563656: mov     byte ptr [esp+20h+var_4], 2
0x56365B: jz      short loc_563675
0x56365D: lea     ecx, [edi+4]
0x563660: push    ecx; lpAddend
0x563661: call    ebp ; InterlockedDecrement
0x563663: test    eax, eax
0x563665: jnz     short loc_563675
0x563667: test    edi, edi
0x563669: jz      short loc_563675
0x56366B: mov     edx, [edi]
0x56366D: mov     eax, [edx]
0x56366F: push    1
0x563671: mov     ecx, edi
0x563673: call    eax
0x563675: mov     edi, [esi+1Ch]
0x563678: test    edi, edi
0x56367A: mov     byte ptr [esp+20h+var_4], 1
0x56367F: jz      short loc_563699
0x563681: lea     ecx, [edi+4]
0x563684: push    ecx; lpAddend
0x563685: call    ebp ; InterlockedDecrement
0x563687: test    eax, eax
0x563689: jnz     short loc_563699
0x56368B: test    edi, edi
0x56368D: jz      short loc_563699
0x56368F: mov     edx, [edi]
0x563691: mov     eax, [edx]
0x563693: push    1
0x563695: mov     ecx, edi
0x563697: call    eax
0x563699: mov     edi, [esi+10h]
0x56369C: test    edi, edi
0x56369E: mov     byte ptr [esp+20h+var_4], 0
0x5636A3: jz      short loc_5636BD
0x5636A5: lea     ecx, [edi+4]
0x5636A8: push    ecx; lpAddend
0x5636A9: call    ebp ; InterlockedDecrement
0x5636AB: test    eax, eax
0x5636AD: jnz     short loc_5636BD
0x5636AF: test    edi, edi
0x5636B1: jz      short loc_5636BD
0x5636B3: mov     edx, [edi]
0x5636B5: mov     eax, [edx]
0x5636B7: push    1
0x5636B9: mov     ecx, edi
0x5636BB: call    eax
0x5636BD: push    offset NiRefObject_objcount; lpAddend
0x5636C2: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x5636C8: call    ebp ; InterlockedDecrement
0x5636CA: mov     ecx, dword ptr [esp+20h+var_C]
0x5636CE: mov     large fs:0, ecx
0x5636D5: pop     ecx
0x5636D6: pop     edi
0x5636D7: pop     esi
0x5636D8: pop     ebp
0x5636D9: add     esp, 10h
0x5636DC: retn
