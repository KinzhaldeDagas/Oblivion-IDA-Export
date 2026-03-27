0x69E5D0: push    0FFFFFFFFh
0x69E5D2: push    offset ??1MagicModelHitEffect@@UAE@XZ_SEH
0x69E5D7: mov     eax, large fs:0
0x69E5DD: push    eax
0x69E5DE: sub     esp, 8
0x69E5E1: push    ebx
0x69E5E2: push    ebp
0x69E5E3: push    esi
0x69E5E4: push    edi
0x69E5E5: mov     eax, ds:0B30AACh
0x69E5EA: xor     eax, esp
0x69E5EC: push    eax
0x69E5ED: lea     eax, [esp+28h+var_C]
0x69E5F1: mov     large fs:0, eax
0x69E5F7: mov     esi, ecx
0x69E5F9: mov     [esp+28h+var_10], esi
0x69E5FD: mov     dword ptr [esi], offset ??_7MagicModelHitEffect@@6B@; const MagicModelHitEffect::`vftable'
0x69E603: mov     eax, [esi+30h]
0x69E606: mov     ebp, ds:0A2807Ch
0x69E60C: xor     ebx, ebx
0x69E60E: cmp     eax, ebx
0x69E610: mov     [esp+28h+var_4], 2
0x69E618: jz      short loc_69E675
0x69E61A: mov     ecx, [eax+1Ch]
0x69E61D: cmp     ecx, ebx
0x69E61F: jz      short loc_69E653
0x69E621: mov     edx, [ecx]
0x69E623: mov     edx, [edx+88h]
0x69E629: push    eax
0x69E62A: lea     eax, [esp+2Ch+var_14]
0x69E62E: push    eax
0x69E62F: call    edx
0x69E631: mov     eax, dword ptr [esp+28h+var_14]
0x69E635: cmp     eax, ebx
0x69E637: jz      short loc_69E653
0x69E639: mov     edi, eax
0x69E63B: add     eax, 4
0x69E63E: push    eax; lpAddend
0x69E63F: call    ebp ; InterlockedDecrement
0x69E641: test    eax, eax
0x69E643: jnz     short loc_69E653
0x69E645: cmp     edi, ebx
0x69E647: jz      short loc_69E653
0x69E649: mov     eax, [edi]
0x69E64B: mov     edx, [eax]
0x69E64D: push    1
0x69E64F: mov     ecx, edi
0x69E651: call    edx
0x69E653: mov     edi, [esi+30h]
0x69E656: cmp     edi, ebx
0x69E658: jz      short loc_69E675
0x69E65A: lea     eax, [edi+4]
0x69E65D: push    eax; lpAddend
0x69E65E: call    ebp ; InterlockedDecrement
0x69E660: test    eax, eax
0x69E662: jnz     short loc_69E672
0x69E664: cmp     edi, ebx
0x69E666: jz      short loc_69E672
0x69E668: mov     edx, [edi]
0x69E66A: mov     eax, [edx]
0x69E66C: push    1
0x69E66E: mov     ecx, edi
0x69E670: call    eax
0x69E672: mov     [esi+30h], ebx
0x69E675: mov     edi, [esi+34h]
0x69E678: cmp     edi, ebx
0x69E67A: jz      short loc_69E697
0x69E67C: lea     ecx, [edi+4]
0x69E67F: push    ecx; lpAddend
0x69E680: call    ebp ; InterlockedDecrement
0x69E682: test    eax, eax
0x69E684: jnz     short loc_69E694
0x69E686: cmp     edi, ebx
0x69E688: jz      short loc_69E694
0x69E68A: mov     edx, [edi]
0x69E68C: mov     eax, [edx]
0x69E68E: push    1
0x69E690: mov     ecx, edi
0x69E692: call    eax
0x69E694: mov     [esi+34h], ebx
0x69E697: mov     eax, [esi+2Ch]
0x69E69A: cmp     eax, ebx
0x69E69C: jz      short loc_69E6C2
0x69E69E: cmp     [eax], bl
0x69E6A0: jz      short loc_69E6C2
0x69E6A2: mov     ecx, ds:0B33A1Ch
0x69E6A8: push    1
0x69E6AA: push    ebx
0x69E6AB: push    eax
0x69E6AC: call    QueuedModelLoader_RemoveModel
0x69E6B1: cmp     [esi+28h], bl
0x69E6B4: jz      short loc_69E6C2
0x69E6B6: mov     eax, [esi+2Ch]
0x69E6B9: push    eax
0x69E6BA: call    FormHeapFree
0x69E6BF: add     esp, 4
0x69E6C2: mov     [esi+2Ch], ebx
0x69E6C5: mov     edi, [esi+34h]
0x69E6C8: cmp     edi, ebx
0x69E6CA: mov     byte ptr [esp+28h+var_4], 1
0x69E6CF: jz      short loc_69E6E9
0x69E6D1: lea     ecx, [edi+4]
0x69E6D4: push    ecx; lpAddend
0x69E6D5: call    ebp ; InterlockedDecrement
0x69E6D7: test    eax, eax
0x69E6D9: jnz     short loc_69E6E9
0x69E6DB: cmp     edi, ebx
0x69E6DD: jz      short loc_69E6E9
0x69E6DF: mov     edx, [edi]
0x69E6E1: mov     eax, [edx]
0x69E6E3: push    1
0x69E6E5: mov     ecx, edi
0x69E6E7: call    eax
0x69E6E9: mov     edi, [esi+30h]
0x69E6EC: cmp     edi, ebx
0x69E6EE: mov     byte ptr [esp+28h+var_4], bl
0x69E6F2: jz      short loc_69E70C
0x69E6F4: lea     ecx, [edi+4]
0x69E6F7: push    ecx; lpAddend
0x69E6F8: call    ebp ; InterlockedDecrement
0x69E6FA: test    eax, eax
0x69E6FC: jnz     short loc_69E70C
0x69E6FE: cmp     edi, ebx
0x69E700: jz      short loc_69E70C
0x69E702: mov     edx, [edi]
0x69E704: mov     eax, [edx]
0x69E706: push    1
0x69E708: mov     ecx, edi
0x69E70A: call    eax
0x69E70C: mov     ecx, esi
0x69E70E: mov     [esp+28h+var_4], 0FFFFFFFFh
0x69E716: call    MagicHitEffect_destr
0x69E71B: mov     ecx, dword ptr [esp+28h+var_C]
0x69E71F: mov     large fs:0, ecx
0x69E726: pop     ecx
0x69E727: pop     edi
0x69E728: pop     esi
0x69E729: pop     ebp
0x69E72A: pop     ebx
0x69E72B: add     esp, 14h
0x69E72E: retn
