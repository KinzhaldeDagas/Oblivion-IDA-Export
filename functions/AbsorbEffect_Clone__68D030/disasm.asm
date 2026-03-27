0x68D030: push    0FFFFFFFFh
0x68D032: push    offset SEH_8C8970
0x68D037: mov     eax, large fs:0
0x68D03D: push    eax
0x68D03E: push    ecx
0x68D03F: push    esi
0x68D040: push    edi
0x68D041: mov     eax, ds:0B30AACh
0x68D046: xor     eax, esp
0x68D048: push    eax
0x68D049: lea     eax, [esp+1Ch+var_C]
0x68D04D: mov     large fs:0, eax
0x68D053: mov     esi, ecx
0x68D055: push    4Ch ; 'L'; Size
0x68D057: call    FormHeapAlloc
0x68D05C: add     esp, 4
0x68D05F: mov     [esp+1Ch+var_10], eax
0x68D063: xor     edi, edi
0x68D065: cmp     eax, edi
0x68D067: mov     [esp+1Ch+var_4], edi
0x68D06B: jz      short loc_68D082
0x68D06D: mov     ecx, [esi+0Ch]
0x68D070: mov     edx, [esi+8]
0x68D073: push    ecx
0x68D074: mov     ecx, [esi+24h]
0x68D077: push    edx
0x68D078: push    ecx
0x68D079: mov     ecx, eax; this
0x68D07B: call    ??0AbsorbEffect@@QAE@XZ; AbsorbEffect::AbsorbEffect(void)
0x68D080: mov     edi, eax
0x68D082: mov     edx, [esi]
0x68D084: mov     eax, [edx+2Ch]
0x68D087: push    edi
0x68D088: mov     ecx, esi
0x68D08A: mov     [esp+2Ch+var_10], 0FFFFFFFFh
0x68D092: call    eax
0x68D094: mov     eax, edi
0x68D096: mov     ecx, [esp+10h]
0x68D09A: mov     large fs:0, ecx
0x68D0A1: pop     ecx
0x68D0A2: pop     edi
0x68D0A3: pop     esi
0x68D0A4: add     esp, 10h
0x68D0A7: retn
