0x6F28E0: push    ebx
0x6F28E1: mov     ebx, [esp+4+arg_4]
0x6F28E5: push    esi
0x6F28E6: mov     esi, [esp+8+arg_0]
0x6F28EA: cmp     esi, ebx
0x6F28EC: jz      short loc_6F2929
0x6F28EE: push    edi
0x6F28EF: mov     edi, [esp+0Ch+arg_8]
0x6F28F3: mov     eax, [esi]
0x6F28F5: mov     [edi], eax
0x6F28F7: mov     ecx, [esi+4]
0x6F28FA: mov     [edi+4], ecx
0x6F28FD: mov     edx, [esi+8]
0x6F2900: push    0FFFFFFFFh; count
0x6F2902: mov     [edi+8], edx
0x6F2905: mov     eax, [esi+0Ch]
0x6F2908: push    0; offset
0x6F290A: lea     ecx, [esi+10h]
0x6F290D: push    ecx; source
0x6F290E: lea     ecx, [edi+10h]; this
0x6F2911: mov     [edi+0Ch], eax
0x6F2914: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F2919: add     esi, 2Ch ; ','
0x6F291C: add     edi, 2Ch ; ','
0x6F291F: cmp     esi, ebx
0x6F2921: jnz     short loc_6F28F3
0x6F2923: mov     eax, edi
0x6F2925: pop     edi
0x6F2926: pop     esi
0x6F2927: pop     ebx
0x6F2928: retn
0x6F2929: mov     eax, [esp+8+arg_8]
0x6F292D: pop     esi
0x6F292E: pop     ebx
0x6F292F: retn
