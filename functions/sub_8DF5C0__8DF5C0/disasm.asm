0x8DF5C0: push    ecx
0x8DF5C1: push    ebx
0x8DF5C2: mov     ebx, [esp+8+arg_4]
0x8DF5C6: push    ebp
0x8DF5C7: push    esi
0x8DF5C8: mov     esi, [esp+10h+arg_0]
0x8DF5CC: movsx   edx, byte ptr [esi+8]
0x8DF5D0: mov     eax, [esi+14h]
0x8DF5D3: imul    edx, 3Ch ; '<'
0x8DF5D6: mov     ecx, [esi+18h]
0x8DF5D9: prefetchnta byte ptr [esi+80h]
0x8DF5E0: mov     [esp+10h+var_4], eax
0x8DF5E4: mov     eax, [esi+10h]
0x8DF5E7: prefetchnta byte ptr [eax]
0x8DF5EA: mov     eax, [ebx]
0x8DF5EC: push    edi
0x8DF5ED: mov     edi, [esp+14h+arg_8]
0x8DF5F1: lea     eax, [edx+eax+1A14h]
0x8DF5F8: mov     [ebx+28h], eax
0x8DF5FB: push    edi
0x8DF5FC: mov     [esp+18h+arg_0], ecx
0x8DF600: mov     cl, [eax+10h]
0x8DF603: mov     [ebx+0Ch], cl
0x8DF606: push    ebx
0x8DF607: lea     ebp, [edi+30h]
0x8DF60A: push    esi
0x8DF60B: mov     [edi], ebp
0x8DF60D: mov     dword ptr [edi+3034h], 7F7FFFFFh
0x8DF617: mov     dword ptr [edi+3040h], 0
0x8DF621: call    sub_8E6D10
0x8DF626: mov     ecx, ds:0BA7D98h
0x8DF62C: mov     edx, [ecx+14h]
0x8DF62F: mov     eax, [ecx+28h]
0x8DF632: add     eax, edx
0x8DF634: mov     edx, [ecx+8]
0x8DF637: add     esp, 0Ch
0x8DF63A: cmp     edx, eax
0x8DF63C: jle     short loc_8DF646
0x8DF63E: sub     edx, eax
0x8DF640: mov     [esp+14h+arg_4], edx
0x8DF644: jnz     short loc_8DF653
0x8DF646: mov     dword ptr [ecx+4], 1
0x8DF64D: mov     ecx, ds:0BA7D98h
0x8DF653: cmp     dword ptr [ecx+4], 1
0x8DF657: jz      short loc_8DF6A5
0x8DF659: cmp     [edi], ebp
0x8DF65B: jz      short loc_8DF671
0x8DF65D: mov     eax, [esp+14h+arg_0]
0x8DF661: mov     ecx, [esi+10h]
0x8DF664: mov     edx, [ecx]
0x8DF666: push    edi
0x8DF667: push    ebx
0x8DF668: push    eax
0x8DF669: mov     eax, [esp+20h+var_4]
0x8DF66D: push    eax
0x8DF66E: call    dword ptr [edx+14h]
0x8DF671: fld     dword ptr [edi+3034h]
0x8DF677: fcomp   dword ptr ds:0A9A584h
0x8DF67D: fnstsw  ax
0x8DF67F: test    ah, 5
0x8DF682: jp      short loc_8DF6A5
0x8DF684: mov     ebp, [esp+14h+arg_C]
0x8DF688: lea     ebx, [ebp+140h]
0x8DF68E: mov     ecx, ebx; lpCriticalSection
0x8DF690: call    sub_8A7720
0x8DF695: push    esi
0x8DF696: push    edi
0x8DF697: mov     ecx, ebp
0x8DF699: call    sub_8D3600
0x8DF69E: push    ebx; lpCriticalSection
0x8DF69F: call    dword ptr ds:0A28074h
0x8DF6A5: pop     edi
0x8DF6A6: pop     esi
0x8DF6A7: pop     ebp
0x8DF6A8: pop     ebx
0x8DF6A9: pop     ecx
0x8DF6AA: retn
