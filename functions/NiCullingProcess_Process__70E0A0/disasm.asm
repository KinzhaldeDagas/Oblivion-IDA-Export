0x70E0A0: push    0FFFFFFFFh
0x70E0A2: push    offset SEH_478070
0x70E0A7: mov     eax, large fs:0
0x70E0AD: push    eax
0x70E0AE: push    ecx
0x70E0AF: push    ebx
0x70E0B0: push    ebp
0x70E0B1: push    esi
0x70E0B2: push    edi
0x70E0B3: mov     eax, ds:0B30AACh
0x70E0B8: xor     eax, esp
0x70E0BA: push    eax
0x70E0BB: lea     eax, [esp+24h+var_C]
0x70E0BF: mov     large fs:0, eax
0x70E0C5: mov     esi, ecx
0x70E0C7: mov     ebx, [esp+24h+arg_0]
0x70E0CB: xor     edi, edi
0x70E0CD: cmp     ebx, edi
0x70E0CF: jz      loc_70E188
0x70E0D5: cmp     [esp+24h+arg_4], edi
0x70E0D9: jz      loc_70E188
0x70E0DF: lea     eax, [ebx+0ECh]
0x70E0E5: push    eax; a2
0x70E0E6: mov     [esi+0Ch], ebx
0x70E0E9: call    NiCullingProcess__SetFrustum
0x70E0EE: mov     ebp, [esp+24h+arg_8]
0x70E0F2: cmp     ebp, edi
0x70E0F4: mov     [esp+24h+var_10], edi
0x70E0F8: jz      short loc_70E104
0x70E0FA: mov     ecx, [esi+8]
0x70E0FD: mov     [esp+24h+var_10], ecx
0x70E101: mov     [esi+8], ebp
0x70E104: mov     [esp+24h+arg_0], edi
0x70E108: cmp     dword ptr [esi+8], 0
0x70E10C: mov     [esp+24h+var_4], 0
0x70E114: jnz     short loc_70E13B
0x70E116: mov     edx, ds:0B3F928h
0x70E11C: mov     eax, [edx+8]
0x70E11F: push    eax; a2
0x70E120: lea     ecx, [esp+28h+arg_0]; this
0x70E124: call    NiSmartPointer_Set??
0x70E129: mov     edi, [esp+24h+arg_0]
0x70E12D: test    edi, edi
0x70E12F: jz      short loc_70E13B
0x70E131: mov     eax, [edi]
0x70E133: mov     edx, [eax+4Ch]
0x70E136: push    ebx
0x70E137: mov     ecx, edi
0x70E139: call    edx
0x70E13B: mov     ecx, [esp+24h+arg_4]; this
0x70E13F: push    esi; a2
0x70E140: call    NiAVObject_Render
0x70E145: test    edi, edi
0x70E147: jz      short loc_70E152
0x70E149: mov     eax, [edi]
0x70E14B: mov     edx, [eax+50h]
0x70E14E: mov     ecx, edi
0x70E150: call    edx
0x70E152: test    ebp, ebp
0x70E154: jz      short loc_70E15D
0x70E156: mov     eax, [esp+24h+var_10]
0x70E15A: mov     [esi+8], eax
0x70E15D: test    edi, edi
0x70E15F: mov     dword ptr [esi+0Ch], 0
0x70E166: mov     [esp+24h+var_4], 0FFFFFFFFh
0x70E16E: jz      short loc_70E188
0x70E170: lea     ecx, [edi+4]
0x70E173: push    ecx; lpAddend
0x70E174: call    dword ptr ds:0A2807Ch
0x70E17A: test    eax, eax
0x70E17C: jnz     short loc_70E188
0x70E17E: mov     edx, [edi]
0x70E180: mov     eax, [edx]
0x70E182: push    1
0x70E184: mov     ecx, edi
0x70E186: call    eax
0x70E188: mov     ecx, dword ptr [esp+24h+var_C]
0x70E18C: mov     large fs:0, ecx
0x70E193: pop     ecx
0x70E194: pop     edi
0x70E195: pop     esi
0x70E196: pop     ebp
0x70E197: pop     ebx
0x70E198: add     esp, 10h
0x70E19B: retn    0Ch
