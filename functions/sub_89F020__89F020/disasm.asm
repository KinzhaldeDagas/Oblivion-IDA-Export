0x89F020: push    0FFFFFFFFh
0x89F022: push    offset SEH_8C8970
0x89F027: mov     eax, large fs:0
0x89F02D: push    eax
0x89F02E: push    ecx
0x89F02F: push    esi
0x89F030: push    edi
0x89F031: mov     eax, ds:0B30AACh
0x89F036: xor     eax, esp
0x89F038: push    eax
0x89F039: lea     eax, [esp+1Ch+var_C]
0x89F03D: mov     large fs:0, eax
0x89F043: mov     edi, ecx
0x89F045: push    14h; Size
0x89F047: call    FormHeapAlloc
0x89F04C: mov     esi, eax
0x89F04E: add     esp, 4
0x89F051: mov     [esp+1Ch+var_10], esi
0x89F055: test    esi, esi
0x89F057: mov     [esp+1Ch+var_4], 0
0x89F05F: jz      short loc_89F070
0x89F061: mov     ecx, esi
0x89F063: call    sub_897600
0x89F068: mov     dword ptr [esi], offset ??_7bhkPCollisionObject@@6B@; const bhkPCollisionObject::`vftable'
0x89F06E: jmp     short loc_89F072
0x89F070: xor     esi, esi
0x89F072: mov     eax, [esp+1Ch+arg_0]
0x89F076: push    eax
0x89F077: push    esi
0x89F078: mov     ecx, edi
0x89F07A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x89F082: call    sub_8976D0
0x89F087: mov     eax, esi
0x89F089: mov     ecx, [esp+1Ch+var_C]
0x89F08D: mov     large fs:0, ecx
0x89F094: pop     ecx
0x89F095: pop     edi
0x89F096: pop     esi
0x89F097: add     esp, 10h
0x89F09A: retn    4
