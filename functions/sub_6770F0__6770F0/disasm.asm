0x6770F0: push    0FFFFFFFFh
0x6770F2: push    offset SEH_6E16A0
0x6770F7: mov     eax, large fs:0
0x6770FD: push    eax
0x6770FE: sub     esp, 10h
0x677101: push    ebx
0x677102: push    ebp
0x677103: push    esi
0x677104: push    edi
0x677105: mov     eax, ds:0B30AACh
0x67710A: xor     eax, esp
0x67710C: push    eax
0x67710D: lea     eax, [esp+30h+var_C]
0x677111: mov     large fs:0, eax
0x677117: mov     esi, ecx
0x677119: mov     ecx, ds:0B33B00h
0x67711F: push    4; Size
0x677121: push    offset flt_B3BCF0; Dst
0x677126: call    SaveLoad_LoadData
0x67712B: fldz
0x67712D: push    ecx
0x67712E: fstp    [esp+34h+var_34]; float
0x677131: mov     ecx, esi
0x677133: call    sub_673B10
0x677138: add     esi, 28h ; '('
0x67713B: mov     [esp+30h+var_18], esi
0x67713F: mov     [esp+30h+var_14], 6
0x677147: xor     ebx, ebx
0x677149: lea     esp, [esp+0]
0x677150: mov     ecx, ds:0B33B00h
0x677156: push    2; Size
0x677158: lea     eax, [esp+34h+Dst]
0x67715C: push    eax; Dst
0x67715D: call    SaveLoad_LoadData
0x677162: cmp     [esp+30h+Dst], bx
0x677167: jz      loc_67720D
0x67716D: cmp     [esi], ebx
0x67716F: jnz     short loc_67718A
0x677171: push    8; Size
0x677173: call    FormHeapAlloc
0x677178: add     esp, 4
0x67717B: cmp     eax, ebx
0x67717D: jz      short loc_677186
0x67717F: mov     [eax], ebx
0x677181: mov     [eax+4], ebx
0x677184: jmp     short loc_677188
0x677186: xor     eax, eax
0x677188: mov     [esi], eax
0x67718A: xor     ebp, ebp
0x67718C: cmp     [esp+30h+Dst], bx
0x677191: jbe     short loc_67720D
0x677193: push    30h ; '0'; Size
0x677195: call    FormHeapAlloc
0x67719A: add     esp, 4
0x67719D: mov     [esp+30h+var_10], eax
0x6771A1: cmp     eax, ebx
0x6771A3: mov     [esp+30h+var_4], ebx
0x6771A7: jz      short loc_6771B4
0x6771A9: mov     ecx, eax
0x6771AB: call    sub_605E50
0x6771B0: mov     edi, eax
0x6771B2: jmp     short loc_6771B6
0x6771B4: xor     edi, edi
0x6771B6: mov     ecx, edi
0x6771B8: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6771C0: call    sub_606520
0x6771C5: cmp     edi, ebx
0x6771C7: jz      short loc_6771FD
0x6771C9: mov     esi, [esi]
0x6771CB: cmp     [esi+4], ebx
0x6771CE: jz      short loc_6771D8
0x6771D0: mov     esi, [esi+4]
0x6771D3: cmp     [esi+4], ebx
0x6771D6: jnz     short loc_6771D0
0x6771D8: cmp     [esi], ebx
0x6771DA: jz      short loc_6771FB
0x6771DC: push    8; Size
0x6771DE: call    FormHeapAlloc
0x6771E3: add     esp, 4
0x6771E6: cmp     eax, ebx
0x6771E8: jz      short loc_6771F4
0x6771EA: mov     [eax], edi
0x6771EC: mov     [eax+4], ebx
0x6771EF: mov     [esi+4], eax
0x6771F2: jmp     short loc_6771FD
0x6771F4: xor     eax, eax
0x6771F6: mov     [esi+4], eax
0x6771F9: jmp     short loc_6771FD
0x6771FB: mov     [esi], edi
0x6771FD: movzx   ecx, [esp+30h+Dst]
0x677202: mov     esi, [esp+30h+var_18]
0x677206: add     ebp, 1
0x677209: cmp     ebp, ecx
0x67720B: jb      short loc_677193
0x67720D: add     esi, 4
0x677210: sub     [esp+30h+var_14], 1
0x677215: mov     [esp+30h+var_18], esi
0x677219: jnz     loc_677150
0x67721F: mov     ecx, [esp+30h+var_C]
0x677223: mov     large fs:0, ecx
0x67722A: pop     ecx
0x67722B: pop     edi
0x67722C: pop     esi
0x67722D: pop     ebp
0x67722E: pop     ebx
0x67722F: add     esp, 1Ch
0x677232: retn
