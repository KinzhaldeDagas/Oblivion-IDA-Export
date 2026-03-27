0x6A7EA0: push    0FFFFFFFFh
0x6A7EA2: push    offset SEH_8C8970
0x6A7EA7: mov     eax, large fs:0
0x6A7EAD: push    eax
0x6A7EAE: push    ecx
0x6A7EAF: push    esi
0x6A7EB0: push    edi
0x6A7EB1: mov     eax, ds:0B30AACh
0x6A7EB6: xor     eax, esp
0x6A7EB8: push    eax
0x6A7EB9: lea     eax, [esp+1Ch+var_C]
0x6A7EBD: mov     large fs:0, eax
0x6A7EC3: mov     edi, ecx
0x6A7EC5: push    3Ch ; '<'; Size
0x6A7EC7: call    FormHeapAlloc
0x6A7ECC: mov     esi, eax
0x6A7ECE: add     esp, 4
0x6A7ED1: mov     [esp+1Ch+var_10], esi
0x6A7ED5: test    esi, esi
0x6A7ED7: mov     [esp+1Ch+var_4], 0
0x6A7EDF: jz      short loc_6A7F00
0x6A7EE1: mov     eax, [edi+0Ch]
0x6A7EE4: mov     ecx, [edi+8]
0x6A7EE7: mov     edx, [edi+24h]
0x6A7EEA: push    eax
0x6A7EEB: push    ecx
0x6A7EEC: push    edx
0x6A7EED: mov     ecx, esi; this
0x6A7EEF: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6A7EF4: mov     dword ptr [esi], offset ??_7TurnUndeadEffect@@6B@; const TurnUndeadEffect::`vftable'
0x6A7EFA: mov     byte ptr [esi+38h], 0
0x6A7EFE: jmp     short loc_6A7F02
0x6A7F00: xor     esi, esi
0x6A7F02: mov     al, [edi+38h]
0x6A7F05: mov     [esi+38h], al
0x6A7F08: mov     edx, [edi]
0x6A7F0A: mov     eax, [edx+2Ch]
0x6A7F0D: push    esi
0x6A7F0E: mov     ecx, edi
0x6A7F10: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A7F18: call    eax
0x6A7F1A: mov     eax, esi
0x6A7F1C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A7F20: mov     large fs:0, ecx
0x6A7F27: pop     ecx
0x6A7F28: pop     edi
0x6A7F29: pop     esi
0x6A7F2A: add     esp, 10h
0x6A7F2D: retn
