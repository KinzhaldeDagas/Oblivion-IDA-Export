0x954AA0: mov     eax, [esp+arg_0]
0x954AA4: mov     edx, [eax]
0x954AA6: mov     eax, [esp+arg_8]
0x954AAA: test    edx, edx
0x954AAC: mov     edx, [eax+44h]
0x954AAF: jz      short loc_954AD0
0x954AB1: test    edx, edx
0x954AB3: jnz     short locret_954AE3
0x954AB5: mov     edx, [esp+arg_4]
0x954AB9: push    esi
0x954ABA: mov     esi, [edx+44h]
0x954ABD: test    esi, esi
0x954ABF: pop     esi
0x954AC0: jz      short locret_954AE3
0x954AC2: mov     eax, [eax+40h]
0x954AC5: push    eax
0x954AC6: push    0
0x954AC8: call    sub_9548D0
0x954ACD: retn    0Ch
0x954AD0: test    edx, edx
0x954AD2: jnz     short locret_954AE3
0x954AD4: mov     eax, [eax+40h]
0x954AD7: test    eax, eax
0x954AD9: jz      short locret_954AE3
0x954ADB: push    eax
0x954ADC: push    0
0x954ADE: call    sub_9548D0
0x954AE3: retn    0Ch
