0x4BC120: push    0FFFFFFFFh
0x4BC122: push    offset SEH_6E3250
0x4BC127: mov     eax, large fs:0
0x4BC12D: push    eax
0x4BC12E: push    esi
0x4BC12F: push    edi
0x4BC130: mov     eax, ds:0B30AACh
0x4BC135: xor     eax, esp
0x4BC137: push    eax
0x4BC138: lea     eax, [esp+18h+var_C]
0x4BC13C: mov     large fs:0, eax
0x4BC142: mov     esi, ecx
0x4BC144: mov     ecx, [esp+18h+arg_0]
0x4BC148: xor     edi, edi
0x4BC14A: cmp     ecx, edi
0x4BC14C: jz      short loc_4BC1A7
0x4BC14E: mov     eax, [ecx]
0x4BC150: mov     edx, [eax+170h]
0x4BC156: call    edx
0x4BC158: cmp     eax, esi
0x4BC15A: jnz     short loc_4BC1A7
0x4BC15C: push    0DCh ; 'Ü'; Size
0x4BC161: call    FormHeapAlloc
0x4BC166: add     esp, 4
0x4BC169: mov     [esp+18h+arg_0], eax
0x4BC16D: cmp     eax, edi
0x4BC16F: mov     [esp+18h+var_4], edi
0x4BC173: jz      short loc_4BC191
0x4BC175: push    edi
0x4BC176: mov     ecx, eax; this
0x4BC178: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4BC17D: mov     ecx, [esp+18h+var_C]
0x4BC181: mov     large fs:0, ecx
0x4BC188: pop     ecx
0x4BC189: pop     edi
0x4BC18A: pop     esi
0x4BC18B: add     esp, 0Ch
0x4BC18E: retn    4
0x4BC191: xor     eax, eax
0x4BC193: mov     ecx, [esp+18h+var_C]
0x4BC197: mov     large fs:0, ecx
0x4BC19E: pop     ecx
0x4BC19F: pop     edi
0x4BC1A0: pop     esi
0x4BC1A1: add     esp, 0Ch
0x4BC1A4: retn    4
0x4BC1A7: mov     eax, edi
0x4BC1A9: mov     ecx, [esp+18h+var_C]
0x4BC1AD: mov     large fs:0, ecx
0x4BC1B4: pop     ecx
0x4BC1B5: pop     edi
0x4BC1B6: pop     esi
0x4BC1B7: add     esp, 0Ch
0x4BC1BA: retn    4
