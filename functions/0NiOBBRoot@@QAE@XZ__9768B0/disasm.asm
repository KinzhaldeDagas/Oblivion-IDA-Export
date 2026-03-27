0x9768B0: push    esi
0x9768B1: push    edi
0x9768B2: mov     edi, [esp+8+arg_0]
0x9768B6: cmp     di, 1
0x9768BA: mov     esi, ecx
0x9768BC: mov     dword ptr [esi], offset ??_7NiOBBRoot@@6B@; const NiOBBRoot::`vftable'
0x9768C2: jbe     short loc_9768F4
0x9768C4: push    8Ch ; 'Œ'; Size
0x9768C9: call    FormHeapAlloc
0x9768CE: add     esp, 4
0x9768D1: test    eax, eax
0x9768D3: jz      short loc_976920
0x9768D5: mov     ecx, [esp+8+arg_10]
0x9768D9: mov     edx, [esp+8+arg_C]
0x9768DD: push    ecx
0x9768DE: mov     ecx, [esp+0Ch+arg_8]
0x9768E2: push    edx
0x9768E3: mov     edx, [esp+10h+arg_4]
0x9768E7: push    ecx
0x9768E8: push    edx
0x9768E9: push    edi
0x9768EA: push    esi
0x9768EB: mov     ecx, eax
0x9768ED: call    sub_97ABE0
0x9768F2: jmp     short loc_976922
0x9768F4: push    98h ; '˜'; Size
0x9768F9: call    FormHeapAlloc
0x9768FE: add     esp, 4
0x976901: test    eax, eax
0x976903: jz      short loc_976920
0x976905: mov     ecx, [esp+8+arg_C]
0x976909: mov     edx, [esp+8+arg_8]
0x97690D: push    0
0x97690F: push    ecx
0x976910: mov     ecx, [esp+10h+arg_4]
0x976914: push    edx
0x976915: push    ecx
0x976916: push    esi
0x976917: mov     ecx, eax
0x976919: call    sub_977530
0x97691E: jmp     short loc_976922
0x976920: xor     eax, eax
0x976922: fldz
0x976924: mov     [esi+8], eax
0x976927: fstp    dword ptr [esi+4]
0x97692A: mov     edx, ds:0B3F9A8h
0x976930: mov     [esi+10h], edx
0x976933: mov     eax, ds:0B3F9ACh
0x976938: mov     [esi+14h], eax
0x97693B: mov     ecx, ds:0B3F9B0h
0x976941: mov     [esi+18h], ecx
0x976944: lea     ecx, [esi+1Ch]
0x976947: call    sub_718A50
0x97694C: pop     edi
0x97694D: mov     byte ptr [esi+0Ch], 0
0x976951: mov     dword ptr [esi+50h], 0
0x976958: mov     eax, esi
0x97695A: pop     esi
0x97695B: retn    14h
