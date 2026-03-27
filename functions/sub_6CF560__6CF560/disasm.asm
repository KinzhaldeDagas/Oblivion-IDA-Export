0x6CF560: push    0FFFFFFFFh
0x6CF562: push    offset SEH_8094D0
0x6CF567: mov     eax, large fs:0
0x6CF56D: push    eax
0x6CF56E: push    ebx
0x6CF56F: push    ebp
0x6CF570: push    esi
0x6CF571: push    edi
0x6CF572: mov     eax, ds:0B30AACh
0x6CF577: xor     eax, esp
0x6CF579: push    eax
0x6CF57A: lea     eax, [esp+20h+var_C]
0x6CF57E: mov     large fs:0, eax
0x6CF584: mov     edi, ecx
0x6CF586: mov     ebp, [esp+20h+arg_0]
0x6CF58A: push    ebp
0x6CF58B: call    sub_6CD720
0x6CF590: movzx   ebx, byte ptr [edi+0Dh]
0x6CF594: xor     ecx, ecx
0x6CF596: mov     eax, ebx
0x6CF598: mov     edx, 68h ; 'h'
0x6CF59D: mul     edx
0x6CF59F: seto    cl
0x6CF5A2: neg     ecx
0x6CF5A4: or      ecx, eax
0x6CF5A6: push    ecx; Size
0x6CF5A7: call    FormHeapAlloc
0x6CF5AC: mov     esi, eax
0x6CF5AE: add     esp, 4
0x6CF5B1: mov     [esp+20h+arg_0], esi
0x6CF5B5: test    esi, esi
0x6CF5B7: mov     [esp+20h+var_4], 0
0x6CF5BF: jz      short loc_6CF5D1
0x6CF5C1: push    offset sub_6C3730
0x6CF5C6: push    ebx
0x6CF5C7: push    68h ; 'h'
0x6CF5C9: push    esi
0x6CF5CA: call    sub_401080
0x6CF5CF: jmp     short loc_6CF5D3
0x6CF5D1: xor     esi, esi
0x6CF5D3: xor     bl, bl
0x6CF5D5: cmp     [edi+0Dh], bl
0x6CF5D8: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6CF5E0: mov     [edi+50h], esi
0x6CF5E3: jbe     short loc_6CF611
0x6CF5E5: movzx   esi, bl
0x6CF5E8: imul    esi, 68h ; 'h'
0x6CF5EB: add     esi, [edi+50h]
0x6CF5EE: push    ebp
0x6CF5EF: lea     ecx, [esi+4]
0x6CF5F2: call    sub_6CB990
0x6CF5F7: push    ebp
0x6CF5F8: lea     ecx, [esi+24h]
0x6CF5FB: call    sub_6CB990
0x6CF600: push    ebp
0x6CF601: lea     ecx, [esi+44h]
0x6CF604: call    sub_711B90
0x6CF609: add     bl, 1
0x6CF60C: cmp     bl, [edi+0Dh]
0x6CF60F: jb      short loc_6CF5E5
0x6CF611: push    ebp
0x6CF612: lea     ecx, [edi+30h]
0x6CF615: call    sub_6CB990
0x6CF61A: mov     ecx, [esp+20h+var_C]
0x6CF61E: mov     large fs:0, ecx
0x6CF625: pop     ecx
0x6CF626: pop     edi
0x6CF627: pop     esi
0x6CF628: pop     ebp
0x6CF629: pop     ebx
0x6CF62A: add     esp, 0Ch
0x6CF62D: retn    4
