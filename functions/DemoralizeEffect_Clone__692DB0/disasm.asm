0x692DB0: push    0FFFFFFFFh
0x692DB2: push    offset SEH_8C8970
0x692DB7: mov     eax, large fs:0
0x692DBD: push    eax
0x692DBE: push    ecx
0x692DBF: push    esi
0x692DC0: push    edi
0x692DC1: mov     eax, ds:0B30AACh
0x692DC6: xor     eax, esp
0x692DC8: push    eax
0x692DC9: lea     eax, [esp+1Ch+var_C]
0x692DCD: mov     large fs:0, eax
0x692DD3: mov     edi, ecx
0x692DD5: push    3Ch ; '<'; Size
0x692DD7: call    FormHeapAlloc
0x692DDC: mov     esi, eax
0x692DDE: add     esp, 4
0x692DE1: mov     [esp+1Ch+var_10], esi
0x692DE5: test    esi, esi
0x692DE7: mov     [esp+1Ch+var_4], 0
0x692DEF: jz      short loc_692E10
0x692DF1: mov     eax, [edi+0Ch]
0x692DF4: mov     ecx, [edi+8]
0x692DF7: mov     edx, [edi+24h]
0x692DFA: push    eax
0x692DFB: push    ecx
0x692DFC: push    edx
0x692DFD: mov     ecx, esi; this
0x692DFF: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x692E04: mov     dword ptr [esi], offset ??_7DemoralizeEffect@@6B@; const DemoralizeEffect::`vftable'
0x692E0A: mov     byte ptr [esi+38h], 0
0x692E0E: jmp     short loc_692E12
0x692E10: xor     esi, esi
0x692E12: mov     al, [edi+38h]
0x692E15: mov     [esi+38h], al
0x692E18: mov     edx, [edi]
0x692E1A: mov     eax, [edx+2Ch]
0x692E1D: push    esi
0x692E1E: mov     ecx, edi
0x692E20: mov     [esp+20h+var_4], 0FFFFFFFFh
0x692E28: call    eax
0x692E2A: mov     eax, esi
0x692E2C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x692E30: mov     large fs:0, ecx
0x692E37: pop     ecx
0x692E38: pop     edi
0x692E39: pop     esi
0x692E3A: add     esp, 10h
0x692E3D: retn
