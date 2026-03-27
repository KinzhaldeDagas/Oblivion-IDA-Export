0x8506B0: push    0FFFFFFFFh
0x8506B2: push    offset SEH_882120
0x8506B7: mov     eax, large fs:0
0x8506BD: push    eax
0x8506BE: push    ebx
0x8506BF: push    ebp
0x8506C0: push    esi
0x8506C1: push    edi
0x8506C2: mov     eax, ds:0B30AACh
0x8506C7: xor     eax, esp
0x8506C9: push    eax
0x8506CA: lea     eax, [esp+20h+var_C]
0x8506CE: mov     large fs:0, eax
0x8506D4: mov     edi, ecx
0x8506D6: mov     eax, [esp+20h+arg_8]
0x8506DA: mov     eax, [eax+0Ch]
0x8506DD: mov     esi, ds:0B45BE4h
0x8506E3: push    eax
0x8506E4: call    sub_848E50
0x8506E9: mov     ecx, [esi+24h]
0x8506EC: mov     ebx, [ecx]
0x8506EE: mov     ecx, [esp+20h+arg_C]
0x8506F2: mov     edx, [ecx]
0x8506F4: mov     eax, [edx+88h]
0x8506FA: push    0
0x8506FC: mov     [esp+24h+arg_8], ebx
0x850700: call    eax
0x850702: mov     ebx, [ebx+4]
0x850705: mov     ebp, eax
0x850707: cmp     ebx, ebp
0x850709: jz      short loc_850740
0x85070B: test    ebx, ebx
0x85070D: jz      short loc_85072B
0x85070F: lea     ecx, [ebx+4]
0x850712: push    ecx; lpAddend
0x850713: call    dword ptr ds:0A2807Ch
0x850719: test    eax, eax
0x85071B: jnz     short loc_85072B
0x85071D: test    ebx, ebx
0x85071F: jz      short loc_85072B
0x850721: mov     edx, [ebx]
0x850723: mov     eax, [edx]
0x850725: push    1
0x850727: mov     ecx, ebx
0x850729: call    eax
0x85072B: test    ebp, ebp
0x85072D: mov     ecx, [esp+20h+arg_8]
0x850731: mov     [ecx+4], ebp
0x850734: jz      short loc_850740
0x850736: add     ebp, 4
0x850739: push    ebp; lpAddend
0x85073A: call    dword ptr ds:0A28078h
0x850740: mov     ebx, 1
0x850745: add     [esi+60h], ebx
0x850748: mov     [esp+20h+arg_8], esi
0x85074C: mov     eax, [edi+38h]
0x85074F: lea     edx, [esp+20h+arg_8]
0x850753: push    edx
0x850754: push    eax
0x850755: lea     ecx, [edi+40h]
0x850758: mov     [esp+28h+var_4], 0
0x850760: call    sub_76CE40
0x850765: or      eax, 0FFFFFFFFh
0x850768: add     [esi+60h], eax
0x85076B: mov     [esp+20h+var_4], eax
0x85076F: jnz     short loc_850778
0x850771: mov     ecx, esi
0x850773: call    sub_7604D0
0x850778: add     [edi+38h], ebx
0x85077B: mov     ecx, [esp+20h+var_C]
0x85077F: mov     large fs:0, ecx
0x850786: pop     ecx
0x850787: pop     edi
0x850788: pop     esi
0x850789: pop     ebp
0x85078A: pop     ebx
0x85078B: add     esp, 0Ch
0x85078E: retn    10h
