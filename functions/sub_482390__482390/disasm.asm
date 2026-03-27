0x482390: mov     eax, [ecx+0Ch]
0x482393: imul    eax, [esp+arg_4]
0x482398: add     eax, [esp+arg_8]
0x48239C: mov     ecx, [ecx+10h]
0x48239F: push    esi
0x4823A0: lea     esi, [ecx+eax*8]
0x4823A3: mov     ecx, [esi]
0x4823A5: test    ecx, ecx
0x4823A7: jz      short loc_4823BE
0x4823A9: mov     edx, [esp+4+arg_0]
0x4823AD: push    edx
0x4823AE: call    sub_4D63A0
0x4823B3: mov     eax, [esi]
0x4823B5: mov     ecx, [esi+4]
0x4823B8: push    eax
0x4823B9: call    sub_49A000
0x4823BE: pop     esi
0x4823BF: retn    0Ch
