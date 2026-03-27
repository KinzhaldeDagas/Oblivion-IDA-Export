0x6A44A0: push    0FFFFFFFFh
0x6A44A2: push    offset SEH_8C8970
0x6A44A7: mov     eax, large fs:0
0x6A44AD: push    eax
0x6A44AE: push    ecx
0x6A44AF: push    esi
0x6A44B0: push    edi
0x6A44B1: mov     eax, ds:0B30AACh
0x6A44B6: xor     eax, esp
0x6A44B8: push    eax
0x6A44B9: lea     eax, [esp+1Ch+var_C]
0x6A44BD: mov     large fs:0, eax
0x6A44C3: mov     esi, ecx
0x6A44C5: push    40h ; '@'; Size
0x6A44C7: call    FormHeapAlloc
0x6A44CC: add     esp, 4
0x6A44CF: mov     [esp+1Ch+var_10], eax
0x6A44D3: xor     edi, edi
0x6A44D5: cmp     eax, edi
0x6A44D7: mov     [esp+1Ch+var_4], edi
0x6A44DB: jz      short loc_6A44F2
0x6A44DD: mov     ecx, [esi+0Ch]
0x6A44E0: mov     edx, [esi+8]
0x6A44E3: push    ecx
0x6A44E4: mov     ecx, [esi+24h]
0x6A44E7: push    edx
0x6A44E8: push    ecx
0x6A44E9: mov     ecx, eax; this
0x6A44EB: call    ??0ScriptEffect@@QAE@XZ; ScriptEffect::ScriptEffect(void)
0x6A44F0: mov     edi, eax
0x6A44F2: mov     edx, [esi]
0x6A44F4: mov     eax, [edx+2Ch]
0x6A44F7: push    edi
0x6A44F8: mov     ecx, esi
0x6A44FA: mov     [esp+2Ch+var_10], 0FFFFFFFFh
0x6A4502: call    eax
0x6A4504: mov     eax, edi
0x6A4506: mov     ecx, [esp+10h]
0x6A450A: mov     large fs:0, ecx
0x6A4511: pop     ecx
0x6A4512: pop     edi
0x6A4513: pop     esi
0x6A4514: add     esp, 10h
0x6A4517: retn
