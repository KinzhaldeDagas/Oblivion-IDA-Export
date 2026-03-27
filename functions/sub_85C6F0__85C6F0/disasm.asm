0x85C6F0: push    0FFFFFFFFh
0x85C6F2: push    offset SEH_85DE70
0x85C6F7: mov     eax, large fs:0
0x85C6FD: push    eax
0x85C6FE: push    ecx
0x85C6FF: push    ebx
0x85C700: push    ebp
0x85C701: push    esi
0x85C702: push    edi
0x85C703: mov     eax, ds:0B30AACh
0x85C708: xor     eax, esp
0x85C70A: push    eax
0x85C70B: lea     eax, [esp+24h+var_C]
0x85C70F: mov     large fs:0, eax
0x85C715: mov     ebx, ecx
0x85C717: mov     esi, ds:0B477F8h
0x85C71D: mov     eax, [esi+24h]
0x85C720: mov     ecx, [esp+24h+arg_C]
0x85C724: mov     edi, [eax]
0x85C726: push    0
0x85C728: push    ecx
0x85C729: mov     ecx, ebx
0x85C72B: mov     [esp+2Ch+var_10], edi
0x85C72F: call    sub_848FD0
0x85C734: mov     edi, [edi+4]
0x85C737: mov     ebp, eax
0x85C739: cmp     edi, ebp
0x85C73B: jz      short loc_85C772
0x85C73D: test    edi, edi
0x85C73F: jz      short loc_85C75D
0x85C741: lea     edx, [edi+4]
0x85C744: push    edx; lpAddend
0x85C745: call    dword ptr ds:0A2807Ch
0x85C74B: test    eax, eax
0x85C74D: jnz     short loc_85C75D
0x85C74F: test    edi, edi
0x85C751: jz      short loc_85C75D
0x85C753: mov     eax, [edi]
0x85C755: mov     edx, [eax]
0x85C757: push    1
0x85C759: mov     ecx, edi
0x85C75B: call    edx
0x85C75D: test    ebp, ebp
0x85C75F: mov     eax, [esp+24h+var_10]
0x85C763: mov     [eax+4], ebp
0x85C766: jz      short loc_85C772
0x85C768: add     ebp, 4
0x85C76B: push    ebp; lpAddend
0x85C76C: call    dword ptr ds:0A28078h
0x85C772: cmp     byte ptr [esp+24h+arg_10], 0
0x85C777: jnz     short loc_85C7B4
0x85C779: mov     edi, 1
0x85C77E: add     [esi+60h], edi
0x85C781: mov     [esp+24h+arg_10], esi
0x85C785: mov     edx, [ebx+38h]
0x85C788: lea     ecx, [esp+24h+arg_10]
0x85C78C: push    ecx
0x85C78D: push    edx
0x85C78E: lea     ecx, [ebx+40h]
0x85C791: mov     [esp+2Ch+var_4], 0
0x85C799: call    sub_76CE40
0x85C79E: or      eax, 0FFFFFFFFh
0x85C7A1: add     [esi+60h], eax
0x85C7A4: mov     [esp+24h+var_4], eax
0x85C7A8: jnz     short loc_85C7B1
0x85C7AA: mov     ecx, esi
0x85C7AC: call    sub_7604D0
0x85C7B1: add     [ebx+38h], edi
0x85C7B4: mov     ecx, dword ptr [esp+24h+var_C]
0x85C7B8: mov     large fs:0, ecx
0x85C7BF: pop     ecx
0x85C7C0: pop     edi
0x85C7C1: pop     esi
0x85C7C2: pop     ebp
0x85C7C3: pop     ebx
0x85C7C4: add     esp, 10h
0x85C7C7: retn    14h
