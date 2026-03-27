0x536060: push    0FFFFFFFFh
0x536062: push    offset SEH_536060
0x536067: mov     eax, large fs:0
0x53606D: push    eax
0x53606E: sub     esp, 8
0x536071: push    esi
0x536072: mov     eax, ds:0B30AACh
0x536077: xor     eax, esp
0x536079: push    eax
0x53607A: lea     eax, [esp+1Ch+var_C]
0x53607E: mov     large fs:0, eax
0x536084: mov     esi, ecx
0x536086: mov     [esp+1Ch+var_14], esi
0x53608A: push    ecx
0x53608B: mov     eax, esp
0x53608D: mov     dword ptr [esi], offset ??_7bhkEntityListener@@6B@; const bhkEntityListener::`vftable'
0x536093: lea     ecx, [esi+0Ch]
0x536096: mov     [esp+20h+var_4], 0
0x53609E: mov     [esp+20h+var_10], esp
0x5360A2: mov     dword ptr [eax], 0
0x5360A8: call    sub_532DF0
0x5360AD: mov     eax, [esp+1Ch+arg_0]
0x5360B1: mov     [esi+4], eax
0x5360B4: mov     byte ptr [esi+8], 1
0x5360B8: mov     eax, esi
0x5360BA: mov     ecx, [esp+1Ch+var_C]
0x5360BE: mov     large fs:0, ecx
0x5360C5: pop     ecx
0x5360C6: pop     esi
0x5360C7: add     esp, 14h
0x5360CA: retn    4
