0x849440: push    0FFFFFFFFh
0x849442: push    offset SEH_880560
0x849447: mov     eax, large fs:0
0x84944D: push    eax
0x84944E: push    ebx
0x84944F: push    ebp
0x849450: push    esi
0x849451: push    edi
0x849452: mov     eax, ds:0B30AACh
0x849457: xor     eax, esp
0x849459: push    eax
0x84945A: lea     eax, [esp+20h+var_C]
0x84945E: mov     large fs:0, eax
0x849464: mov     edi, ecx
0x849466: mov     eax, [esp+20h+arg_8]
0x84946A: mov     eax, [eax+10h]
0x84946D: mov     esi, ds:0B455E8h
0x849473: push    eax
0x849474: call    sub_848C40
0x849479: mov     ecx, [esi+24h]
0x84947C: mov     ebx, [ecx]
0x84947E: mov     ecx, [esp+20h+arg_C]
0x849482: mov     edx, [ecx]
0x849484: mov     eax, [edx+88h]
0x84948A: push    0
0x84948C: mov     [esp+24h+arg_8], ebx
0x849490: call    eax
0x849492: mov     ebx, [ebx+4]
0x849495: mov     ebp, eax
0x849497: cmp     ebx, ebp
0x849499: jz      short loc_8494D2
0x84949B: test    ebx, ebx
0x84949D: jz      short loc_8494BB
0x84949F: lea     ecx, [ebx+4]
0x8494A2: push    ecx; lpAddend
0x8494A3: call    dword ptr ds:0A2807Ch
0x8494A9: test    eax, eax
0x8494AB: jnz     short loc_8494BB
0x8494AD: test    ebx, ebx
0x8494AF: jz      short loc_8494BB
0x8494B1: mov     edx, [ebx]
0x8494B3: mov     eax, [edx]
0x8494B5: push    1
0x8494B7: mov     ecx, ebx
0x8494B9: call    eax
0x8494BB: test    ebp, ebp
0x8494BD: mov     ebx, [esp+20h+arg_8]
0x8494C1: mov     [ebx+4], ebp
0x8494C4: jz      short loc_8494D6
0x8494C6: add     ebp, 4
0x8494C9: push    ebp; lpAddend
0x8494CA: call    dword ptr ds:0A28078h
0x8494D0: jmp     short loc_8494D6
0x8494D2: mov     ebx, [esp+20h+arg_8]
0x8494D6: test    ebx, ebx
0x8494D8: jz      short loc_8494F6
0x8494DA: cmp     byte ptr ds:0B42CDDh, 0
0x8494E1: jz      short loc_8494F6
0x8494E3: mov     ecx, [esp+20h+arg_C]
0x8494E7: mov     edx, [ecx]
0x8494E9: mov     eax, [edx+78h]
0x8494EC: call    eax
0x8494EE: push    eax
0x8494EF: mov     ecx, ebx
0x8494F1: call    sub_7715E0
0x8494F6: mov     ebx, 1
0x8494FB: add     [esi+60h], ebx
0x8494FE: mov     [esp+20h+arg_C], esi
0x849502: mov     edx, [edi+38h]
0x849505: lea     ecx, [esp+20h+arg_C]
0x849509: push    ecx
0x84950A: push    edx
0x84950B: lea     ecx, [edi+40h]
0x84950E: mov     [esp+28h+var_4], 0
0x849516: call    sub_76CE40
0x84951B: or      eax, 0FFFFFFFFh
0x84951E: add     [esi+60h], eax
0x849521: mov     [esp+20h+var_4], eax
0x849525: jnz     short loc_84952E
0x849527: mov     ecx, esi
0x849529: call    sub_7604D0
0x84952E: add     [edi+38h], ebx
0x849531: mov     ecx, dword ptr [esp+20h+var_C]
0x849535: mov     large fs:0, ecx
0x84953C: pop     ecx
0x84953D: pop     edi
0x84953E: pop     esi
0x84953F: pop     ebp
0x849540: pop     ebx
0x849541: add     esp, 0Ch
0x849544: retn    10h
