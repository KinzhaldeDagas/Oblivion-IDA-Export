0x5232D0: push    esi
0x5232D1: mov     esi, ecx
0x5232D3: mov     ecx, [esp+4+arg_0]
0x5232D7: lea     edx, [ecx-0Ch]
0x5232DA: xor     eax, eax
0x5232DC: cmp     edx, 14h
0x5232DF: ja      short loc_5232FB
0x5232E1: push    ecx
0x5232E2: push    2
0x5232E4: call    ActorValue_GetGroupOffsetFromAV
0x5232E9: movsx   eax, al
0x5232EC: movzx   eax, byte ptr [eax+esi+0ECh]
0x5232F4: add     esp, 8
0x5232F7: pop     esi
0x5232F8: retn    4
0x5232FB: lea     edx, [ecx-25h]
0x5232FE: cmp     edx, 2
0x523301: jbe     short loc_52330B
0x523303: push    ecx
0x523304: mov     ecx, esi
0x523306: call    TESActorBase_GetAViBase
0x52330B: pop     esi
0x52330C: retn    4
