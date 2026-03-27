0x812D60: push    0FFFFFFFFh
0x812D62: push    offset SEH_812D60
0x812D67: mov     eax, large fs:0
0x812D6D: push    eax
0x812D6E: sub     esp, 8
0x812D71: push    ebx
0x812D72: push    ebp
0x812D73: push    esi
0x812D74: push    edi
0x812D75: mov     eax, ds:0B30AACh
0x812D7A: xor     eax, esp
0x812D7C: push    eax
0x812D7D: lea     eax, [esp+28h+var_C]
0x812D81: mov     large fs:0, eax
0x812D87: mov     esi, ecx
0x812D89: mov     [esp+28h+var_10], esi
0x812D8D: mov     eax, [esi]
0x812D8F: mov     ecx, [eax+1Ch]
0x812D92: mov     ebp, ds:0A2807Ch
0x812D98: xor     ebx, ebx
0x812D9A: cmp     ecx, ebx
0x812D9C: mov     [esp+28h+var_4], 2
0x812DA4: jz      short loc_812DD8
0x812DA6: mov     edx, [ecx]
0x812DA8: mov     edx, [edx+88h]
0x812DAE: push    eax
0x812DAF: lea     eax, [esp+2Ch+var_14]
0x812DB3: push    eax
0x812DB4: call    edx
0x812DB6: mov     eax, dword ptr [esp+28h+var_14]
0x812DBA: cmp     eax, ebx
0x812DBC: jz      short loc_812DD8
0x812DBE: mov     edi, eax
0x812DC0: add     eax, 4
0x812DC3: push    eax; lpAddend
0x812DC4: call    ebp ; InterlockedDecrement
0x812DC6: test    eax, eax
0x812DC8: jnz     short loc_812DD8
0x812DCA: cmp     edi, ebx
0x812DCC: jz      short loc_812DD8
0x812DCE: mov     eax, [edi]
0x812DD0: mov     edx, [eax]
0x812DD2: push    1
0x812DD4: mov     ecx, edi
0x812DD6: call    edx
0x812DD8: mov     edi, [esi]
0x812DDA: cmp     edi, ebx
0x812DDC: jz      short loc_812DF8
0x812DDE: lea     eax, [edi+4]
0x812DE1: push    eax; lpAddend
0x812DE2: call    ebp ; InterlockedDecrement
0x812DE4: test    eax, eax
0x812DE6: jnz     short loc_812DF6
0x812DE8: cmp     edi, ebx
0x812DEA: jz      short loc_812DF6
0x812DEC: mov     edx, [edi]
0x812DEE: mov     eax, [edx]
0x812DF0: push    1
0x812DF2: mov     ecx, edi
0x812DF4: call    eax
0x812DF6: mov     [esi], ebx
0x812DF8: mov     edi, [esi+8]
0x812DFB: cmp     edi, ebx
0x812DFD: jz      short loc_812E1A
0x812DFF: lea     ecx, [edi+4]
0x812E02: push    ecx; lpAddend
0x812E03: call    ebp ; InterlockedDecrement
0x812E05: test    eax, eax
0x812E07: jnz     short loc_812E17
0x812E09: cmp     edi, ebx
0x812E0B: jz      short loc_812E17
0x812E0D: mov     edx, [edi]
0x812E0F: mov     eax, [edx]
0x812E11: push    1
0x812E13: mov     ecx, edi
0x812E15: call    eax
0x812E17: mov     [esi+8], ebx
0x812E1A: mov     edi, [esi+4]
0x812E1D: cmp     edi, ebx
0x812E1F: jz      short loc_812E3C
0x812E21: lea     ecx, [edi+4]
0x812E24: push    ecx; lpAddend
0x812E25: call    ebp ; InterlockedDecrement
0x812E27: test    eax, eax
0x812E29: jnz     short loc_812E39
0x812E2B: cmp     edi, ebx
0x812E2D: jz      short loc_812E39
0x812E2F: mov     edx, [edi]
0x812E31: mov     eax, [edx]
0x812E33: push    1
0x812E35: mov     ecx, edi
0x812E37: call    eax
0x812E39: mov     [esi+4], ebx
0x812E3C: mov     ecx, esi
0x812E3E: call    sub_812980
0x812E43: mov     eax, [esi+10h]
0x812E46: cmp     eax, ebx
0x812E48: jz      short loc_812E56
0x812E4A: push    eax
0x812E4B: call    FormHeapFree
0x812E50: add     esp, 4
0x812E53: mov     [esi+10h], ebx
0x812E56: mov     eax, [esi+14h]
0x812E59: push    eax
0x812E5A: call    FormHeapFree
0x812E5F: mov     [esi+14h], ebx
0x812E62: mov     edi, [esi+8]
0x812E65: add     esp, 4
0x812E68: cmp     edi, ebx
0x812E6A: mov     byte ptr [esp+28h+var_4], 1
0x812E6F: jz      short loc_812E89
0x812E71: lea     ecx, [edi+4]
0x812E74: push    ecx; lpAddend
0x812E75: call    ebp ; InterlockedDecrement
0x812E77: test    eax, eax
0x812E79: jnz     short loc_812E89
0x812E7B: cmp     edi, ebx
0x812E7D: jz      short loc_812E89
0x812E7F: mov     edx, [edi]
0x812E81: mov     eax, [edx]
0x812E83: push    1
0x812E85: mov     ecx, edi
0x812E87: call    eax
0x812E89: mov     edi, [esi+4]
0x812E8C: cmp     edi, ebx
0x812E8E: mov     byte ptr [esp+28h+var_4], bl
0x812E92: jz      short loc_812EAC
0x812E94: lea     ecx, [edi+4]
0x812E97: push    ecx; lpAddend
0x812E98: call    ebp ; InterlockedDecrement
0x812E9A: test    eax, eax
0x812E9C: jnz     short loc_812EAC
0x812E9E: cmp     edi, ebx
0x812EA0: jz      short loc_812EAC
0x812EA2: mov     edx, [edi]
0x812EA4: mov     eax, [edx]
0x812EA6: push    1
0x812EA8: mov     ecx, edi
0x812EAA: call    eax
0x812EAC: mov     esi, [esi]
0x812EAE: cmp     esi, ebx
0x812EB0: mov     [esp+28h+var_4], 0FFFFFFFFh
0x812EB8: jz      short loc_812ED2
0x812EBA: lea     ecx, [esi+4]
0x812EBD: push    ecx; lpAddend
0x812EBE: call    ebp ; InterlockedDecrement
0x812EC0: test    eax, eax
0x812EC2: jnz     short loc_812ED2
0x812EC4: cmp     esi, ebx
0x812EC6: jz      short loc_812ED2
0x812EC8: mov     edx, [esi]
0x812ECA: mov     eax, [edx]
0x812ECC: push    1
0x812ECE: mov     ecx, esi
0x812ED0: call    eax
0x812ED2: mov     ecx, dword ptr [esp+28h+var_C]
0x812ED6: mov     large fs:0, ecx
0x812EDD: pop     ecx
0x812EDE: pop     edi
0x812EDF: pop     esi
0x812EE0: pop     ebp
0x812EE1: pop     ebx
0x812EE2: add     esp, 14h
0x812EE5: retn
