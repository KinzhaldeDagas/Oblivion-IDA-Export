0x7C77C0: push    0FFFFFFFFh
0x7C77C2: push    offset SEH_7C77C0
0x7C77C7: mov     eax, large fs:0
0x7C77CD: push    eax
0x7C77CE: push    ecx
0x7C77CF: push    esi
0x7C77D0: push    edi
0x7C77D1: mov     eax, ds:0B30AACh
0x7C77D6: xor     eax, esp
0x7C77D8: push    eax
0x7C77D9: lea     eax, [esp+1Ch+var_C]
0x7C77DD: mov     large fs:0, eax
0x7C77E3: mov     esi, ecx
0x7C77E5: mov     eax, [esp+1Ch+arg_0]
0x7C77E9: test    eax, eax
0x7C77EB: jz      short loc_7C7864
0x7C77ED: mov     [esp+1Ch+arg_0], eax
0x7C77F1: add     eax, 4
0x7C77F4: push    eax; lpAddend
0x7C77F5: call    dword ptr ds:0A28078h
0x7C77FB: lea     eax, [esp+1Ch+arg_0]
0x7C77FF: push    eax
0x7C7800: lea     ecx, [esp+20h+var_10]
0x7C7804: push    ecx
0x7C7805: lea     ecx, [esi+0E4h]
0x7C780B: mov     [esp+24h+var_4], 0
0x7C7813: call    sub_7D5F80
0x7C7818: mov     eax, [esp+1Ch+var_10]
0x7C781C: test    eax, eax
0x7C781E: mov     edi, ds:0A2807Ch
0x7C7824: jz      short loc_7C7840
0x7C7826: mov     esi, eax
0x7C7828: add     eax, 4
0x7C782B: push    eax; lpAddend
0x7C782C: call    edi ; InterlockedDecrement
0x7C782E: test    eax, eax
0x7C7830: jnz     short loc_7C7840
0x7C7832: test    esi, esi
0x7C7834: jz      short loc_7C7840
0x7C7836: mov     edx, [esi]
0x7C7838: mov     eax, [edx]
0x7C783A: push    1
0x7C783C: mov     ecx, esi
0x7C783E: call    eax
0x7C7840: mov     esi, [esp+1Ch+arg_0]
0x7C7844: test    esi, esi
0x7C7846: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7C784E: jz      short loc_7C7864
0x7C7850: lea     ecx, [esi+4]
0x7C7853: push    ecx; lpAddend
0x7C7854: call    edi ; InterlockedDecrement
0x7C7856: test    eax, eax
0x7C7858: jnz     short loc_7C7864
0x7C785A: mov     edx, [esi]
0x7C785C: mov     eax, [edx]
0x7C785E: push    1
0x7C7860: mov     ecx, esi
0x7C7862: call    eax
0x7C7864: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7C7868: mov     large fs:0, ecx
0x7C786F: pop     ecx
0x7C7870: pop     edi
0x7C7871: pop     esi
0x7C7872: add     esp, 10h
0x7C7875: retn    4
