0x8AB9B0: push    0FFFFFFFFh
0x8AB9B2: push    offset SEH_8C8970
0x8AB9B7: mov     eax, large fs:0
0x8AB9BD: push    eax
0x8AB9BE: push    ecx
0x8AB9BF: push    esi
0x8AB9C0: push    edi
0x8AB9C1: mov     eax, ds:0B30AACh
0x8AB9C6: xor     eax, esp
0x8AB9C8: push    eax
0x8AB9C9: lea     eax, [esp+1Ch+var_C]
0x8AB9CD: mov     large fs:0, eax
0x8AB9D3: mov     edi, ecx
0x8AB9D5: push    64h ; 'd'; Size
0x8AB9D7: call    FormHeapAlloc
0x8AB9DC: add     esp, 4
0x8AB9DF: mov     [esp+1Ch+var_10], eax
0x8AB9E3: xor     esi, esi
0x8AB9E5: cmp     eax, esi
0x8AB9E7: mov     [esp+1Ch+var_4], esi
0x8AB9EB: jz      short loc_8AB9F6
0x8AB9ED: mov     ecx, eax
0x8AB9EF: call    sub_8AA810
0x8AB9F4: mov     esi, eax
0x8AB9F6: mov     eax, [esp+1Ch+arg_0]
0x8AB9FA: push    eax
0x8AB9FB: push    esi
0x8AB9FC: mov     ecx, edi
0x8AB9FE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8ABA06: call    sub_8AB710
0x8ABA0B: mov     eax, esi
0x8ABA0D: mov     ecx, [esp+1Ch+var_C]
0x8ABA11: mov     large fs:0, ecx
0x8ABA18: pop     ecx
0x8ABA19: pop     edi
0x8ABA1A: pop     esi
0x8ABA1B: add     esp, 10h
0x8ABA1E: retn    4
