0x6E7B90: push    0FFFFFFFFh
0x6E7B92: push    offset ??1NiPoint3Interpolator@@UAE@XZ_SEH
0x6E7B97: mov     eax, large fs:0
0x6E7B9D: push    eax
0x6E7B9E: push    ecx
0x6E7B9F: push    esi
0x6E7BA0: push    edi
0x6E7BA1: mov     eax, ds:0B30AACh
0x6E7BA6: xor     eax, esp
0x6E7BA8: push    eax
0x6E7BA9: lea     eax, [esp+1Ch+var_C]
0x6E7BAD: mov     large fs:0, eax
0x6E7BB3: mov     edi, ecx
0x6E7BB5: mov     [esp+1Ch+var_10], edi
0x6E7BB9: mov     esi, [edi+10h]
0x6E7BBC: test    esi, esi
0x6E7BBE: mov     [esp+1Ch+var_4], 0
0x6E7BC6: jz      short loc_6E7BE4
0x6E7BC8: lea     eax, [esi+4]
0x6E7BCB: push    eax; lpAddend
0x6E7BCC: call    dword ptr ds:0A2807Ch
0x6E7BD2: test    eax, eax
0x6E7BD4: jnz     short loc_6E7BE4
0x6E7BD6: test    esi, esi
0x6E7BD8: jz      short loc_6E7BE4
0x6E7BDA: mov     edx, [esi]
0x6E7BDC: mov     eax, [edx]
0x6E7BDE: push    1
0x6E7BE0: mov     ecx, esi
0x6E7BE2: call    eax
0x6E7BE4: mov     ecx, edi
0x6E7BE6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6E7BEE: call    sub_6EC250
0x6E7BF3: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6E7BF7: mov     large fs:0, ecx
0x6E7BFE: pop     ecx
0x6E7BFF: pop     edi
0x6E7C00: pop     esi
0x6E7C01: add     esp, 10h
0x6E7C04: retn
