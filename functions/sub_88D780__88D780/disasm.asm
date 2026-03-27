0x88D780: sub     esp, 0Ch
0x88D783: mov     eax, [esp+0Ch+arg_0]
0x88D787: push    esi
0x88D788: push    edi
0x88D789: mov     edi, ecx
0x88D78B: mov     esi, [edi+54h]
0x88D78E: mov     [esp+14h+var_8], eax
0x88D792: xor     eax, eax
0x88D794: sub     esi, 1
0x88D797: mov     [esp+14h+var_C], edi
0x88D79B: mov     [esp+14h+var_4], eax
0x88D79F: js      short loc_88D7C5
0x88D7A1: mov     ecx, [edi+50h]
0x88D7A4: cmp     dword ptr [ecx+esi*4], 0
0x88D7A8: lea     eax, [ecx+esi*4]
0x88D7AB: jz      short loc_88D7BC
0x88D7AD: mov     eax, [eax]
0x88D7AF: mov     edx, [eax]
0x88D7B1: mov     edx, [edx]
0x88D7B3: lea     ecx, [esp+14h+var_C]
0x88D7B7: push    ecx
0x88D7B8: mov     ecx, eax
0x88D7BA: call    edx
0x88D7BC: sub     esi, 1
0x88D7BF: jns     short loc_88D7A1
0x88D7C1: mov     eax, [esp+14h+var_4]
0x88D7C5: pop     edi
0x88D7C6: pop     esi
0x88D7C7: add     esp, 0Ch
0x88D7CA: retn    4
